class FreecadDev < Formula
  desc "Parametric 3D modeler"
  homepage "http://www.freecadweb.org"
  license "GPL-2.0-only"
  head "https://github.com/freecad/FreeCAD.git", branch: "master", shallow: false

  stable do
    # a tested commit that builds on macos high sierra 10.13 & mojave 10.14
    url "https://github.com/freecad/freecad.git",
      revision: "f35d30bc58cc2000754d4f30cf29d063416cfb9e"
    version "0.19pre-dev"
  end

  bottle do
    root_url "https://dl.bintray.com/vejmarie/freecad"
    sha256 "97a95f3f19632160766730b394f70def97e0df7b33d8806979a0f6abca96105f" => :catalina
  end

  option "with-debug", "Enable debug build"
  option "with-macos-app", "Build MacOS App bundle"
  option "with-packaging-utils", "install packaging dependencies"
  option "with-cloud", "Build with CLOUD module"
  option "with-unsecured-cloud", "Build with self signed certificate support CLOUD module"
  option "with-ninja", "Build using ninja"
  option "with-ccache", "Build using ccache compilers"

  depends_on "ccache" => :build
  depends_on "cmake" => :build
  depends_on "swig" => :build
  depends_on "boost"
  depends_on "boost-python3"
  depends_on "freecad/freecad/coin"
  depends_on "freecad/freecad/matplotlib"
  depends_on "freecad/freecad/med-file"
  depends_on "freecad/freecad/nglib"
  depends_on "freecad/freecad/opencamlib"
  depends_on "freecad/freecad/pivy"
  depends_on "freecad/freecad/pyside2"
  depends_on "freecad/freecad/pyside2-tools"
  depends_on "freecad/freecad/shiboken2"
  depends_on "freetype"
  depends_on macos: :high_sierra # no access to sierra test box
  depends_on "open-mpi"
  depends_on "openblas"
  depends_on "opencascade"
  depends_on "orocos-kdl"
  depends_on "pkg-config"
  depends_on "python@3.9"
  depends_on "qt"
  depends_on "vtk@8.2"
  depends_on "webp"
  depends_on "xerces-c"

  resource "six" do
    url "https://files.pythonhosted.org/packages/6b/34/415834bfdafca3c5f451532e8a8d9ba89a21c9743a0c59fbd0205c7f9426/six-1.15.0.tar.gz"
    sha256 "30639c035cdb23534cd4aa2dd52c3bf48f06e5f4a941509c8bafd8ce11080259"
  end

  if build.with?("packaging-utils")
    depends_on "node"
    depends_on "jq"
  end

  def install
    resource("six").stage { system "python", *Language::Python.setup_install_args(libexec/"vendor") }

    if build.with?("ccache")
      ENV["CC"] = Formula["ccache"].libexec/"cc"
      ENV["CXX"] = Formula["ccache"].libexec/"c++"
      ENV["CCACHE_DIR"] = "/usr/local/var/cache/.ccache/homebrew/freecad"
    else
      # NOTE: brew clang compilers req, Xcode nowork on macOS 10.13 or 10.14
      if MacOS.version <= :mojave
        ENV["CC"] = Formula["llvm"].opt_bin/"clang"
        ENV["CXX"] = Formula["llvm"].opt_bin/"clang++"
      end
    end

    # NOTE: freecad will not build using Xcode 10.2 on high sierra
    # TODO: test C++14 with std xcode and brew clang & clang++
    # -DBUILD_ENABLE_CXX_STD='C++11'
    # -DBUILD_ENABLE_CXX_STD='C++11'

    args = std_cmake_args + %W[
      -Wno-dev
      -std=c++14
      -DCMAKE_CXX_STANDARD=14
      -DBUILD_ENABLE_CXX_STD:STRING=C++14
      -Wno-deprecated-declarations
      -DBUILD_QT5=ON
      -DUSE_PYTHON3=1
      -DPYTHON_EXECUTABLE=#{Formula["python@3.9"].opt_bin}/python3
      -DBUILD_FEM_NETGEN=1
      -DBUILD_FEM_NETGEN:BOOL=ON
      -DBUILD_FEM=1
      -DBUILD_TECHDRAW=0
      -DFREECAD_USE_EXTERNAL_KDL=ON
      -DCMAKE_INSTALL_PREFIX=#{prefix}
      -DCMAKE_BUILD_TYPE=#{build.with?("debug") ? "Debug" : "Release"}

    ]
      # -DPYTHON_EXECUTABLE=/usr/local/bin/python3

    # TODO: spread argument across multiple lines
        args << '-DCMAKE_PREFIX_PATH="' + Formula["qt"].opt_prefix + "/lib/cmake;" + Formula["nglib"].opt_prefix + "/Contents/Resources;" + Formula["vtk@8.2"].opt_prefix + "/lib/cmake;"

        # args << '-DCMAKE_PREFIX_PATH="' + Formula["qt"].opt_prefix + "/lib/cmake;" + Formula["nglib"].opt_prefix + "/Contents/Resources;" + Formula["vtk@8.2"].opt_prefix + "/lib/cmake;"
      
      # -DCMAKE_PREFIX_PATH= #{Formula["qt"].opt_prefix/lib/cmake};
        #{Formula["nglib"].opt_prefix/Contents/Resources};
        #{Formula["vtk@8.2"].opt_prefix/lib/cmake};
      #-DCMAKE_PREFIX_PATH=#{Formula["qt"].opt_prefix}+/lib/cmake; +
      #  #{Formula["nglib"].opt_prefix}+"Contents/Resources; +
      #  #{Formula["vtk@8.2"].opt_prefix}+/lib/cmake;

    # args << "-DCMAKE_PREFIX_PATH = ('#{Formula["qt"].opt_prefix}/lib/cmake;', " \
    #   "'#{Formula["nglib"].opt_prefix}/Contents/Resources;', " \
    #   "'#{Formula["vtk@8.2"].opt_prefix}/lib/cmake;')"

    # # "JPEG_ROOT = ('#{Formula["jpeg"].opt_prefix}/lib', " \
    # #                          "'#{Formula["jpeg"].opt_prefix}/include')"
    # args << "-DCMAKE_PREFIX_PATH=#{Formula["qt"].opt_prefix}+/lib/cmake;#{Formula["nglib"].opt_prefix}+"/Contents/Resources;" + Formula["vtk@8.2"].opt_prefix + "/lib/cmake;""
    # -DCMAKE_PREFIX_PATH=#{Formula["qt"].opt_lib}
    # -DCMAKE_PREFIX_PATH=#{Formula["llvm"].opt_lib}


    args << "-DFREECAD_CREATE_MAC_APP=1" if build.with? "macos-app"
    args << "-DALLOW_SELF_SIGNED_CERTIFICATE=1" if build.with? "unsecured-cloud"
    args << "-DBUILD_CLOUD=1" if build.with? "cloud"
    args << "-DCMAKE_INSTALL_PREFIX=#{prefix}/debug" if build.with? "debug"


    # TODO: the `packagin-tuils` arg is broken, correct node pkg name `appdmg`
    # REF: https://github.com/LinusU/node-appdmg
    # system "node", "install", "-g", "app_dmg" if build.with? "packaging-utils"
    if build.with?("packaging-utils")
      system "npm", "install", "-g", "appdmg"
    end

    mkdir "Build" do
      if build.with?("ninja")
        system "cmake", "-G", "Ninja", *args, ".."

        # TODO: test below make cmd, with `--build` and `.`
        system "make", "-j#{ENV.make_jobs}", "--build", "."
        system "make", "--install", "."
      else
        # NOTE: standard `make install` will fail on 10.14, err, `/usr/local/MacOS/PySide
        # system "make",
        # system "make", "install"
        system "cmake", *args, ".."
        system "make", "-j#{ENV.make_jobs}", "install"
        # system "make", "install"
      end
      bin.install_symlink "../MacOS/FreeCAD" => "FreeCAD"
      bin.install_symlink "../MacOS/FreeCADCmd" => "FreeCADCmd"
      (lib/"python3.9/site-packages/homebrew-freecad-bundle.pth").write "#{prefix}/MacOS/\n"
    end
  end

  def caveats
    <<-EOS
    After installing FreeCAD you may want to do the following:

    1. Amend your PYTHONPATH environmental variable to point to
       the FreeCAD directory
         export PYTHONPATH=#{bin}:$PYTHONPATH
    EOS
  end
  def post_install
    # if (!File.exist?('/usr/local/lib/python3.9/site-packages/six.py'))
    #   system "pip3", "install", "six"
    # end
    # bin.install_symlink "../MacOS/FreeCAD" => "FreeCAD"
    # bin.install_symlink "../MacOS/FreeCADCmd" => "FreeCADCmd"
    # if (!File.exist?("#{prefix}/lib/python3.9/site-packages/homebrew-freecad-bundle.pth"))
    #   (lib/"python3.9/site-packages/homebrew-freecad-bundle.pth").write "#{prefix}/MacOS/\n"
    # end
  end
end
