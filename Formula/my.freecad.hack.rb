class Freecad < Formula
  desc "Parametric 3D modeler"
  homepage "http://www.freecadweb.org"
  # TODO: possible to set depth of clone ???
  url "https://github.com/freecad/FreeCAD.git", 
    tag: "0.19_pre",
    revisision: "9eb080488d970d313c538473e7272117ea0a7cd1",
    shallow: false
  license "GPL-2.0-only"
  head "https://github.com/freecad/FreeCAD.git", branch: "master", shallow: false

  bottle do
    root_url "https://dl.bintray.com/vejmarie/freecad"
    sha256 "97a95f3f19632160766730b394f70def97e0df7b33d8806979a0f6abca96105f" => :catalina
  end

  option "with-debug", "Enable debug build"
  option "with-packaging-utils", "install packaging dependencies"
  option "with-cloud", "Build with CLOUD module"
  option "with-unsecured-cloud", "Build with self signed certificate support CLOUD module"
  option "with-ninja", "Build using ninja"

  depends_on macos: :high_sierra # do not have a sierra box to test formula with
  depends_on "cmake" => :build
  depends_on "ccache" => :build
  depends_on "swig" => :build
  depends_on "freetype"
  depends_on "python@3.9"
  depends_on "boost"
  depends_on "open-mpi"
  depends_on "openblas"
  depends_on "pkg-config"
  depends_on "boost-python3"
  depends_on "vtk@8.2"
  depends_on "xerces-c"
  depends_on "qt"
  depends_on "webp"
  depends_on "opencascade"
  depends_on "opencamlib"
  depends_on "orocos-kdl"
  depends_on "freecad/freecad/coin"
  depends_on "freecad/freecad/nglib"
  depends_on "freecad/freecad/med-file"
  depends_on "freecad/freecad/opencamlib"
  depends_on "freecad/freecad/shiboken2"
  depends_on "freecad/freecad/pyside2"
  depends_on "freecad/freecad/pyside2-tools"
  depends_on "freecad/freecad/pivy"
  depends_on "freecad/freecad/matplotlib"

  if build.with?("packaging-utils")
    depends_on "node"
    depends_on "jq"
  end
 
  def install
    if build.with?("packaging-utils")
      system "node", "install", "-g", "app_dmg"
    end
    if (!File.exist?('/usr/local/lib/python3.9/site-packages/six.py'))
      system "pip3", "install", "six"
    end

    # Set up required cmake args
    # args = std_cmake_args
    # args << "-DBUILD_QT5=ON"
    # args << "-DUSE_PYTHON3=1"
    # args << "-DPYTHON_EXECUTABLE=/usr/local/bin/python3"
    # # args << "-DCMAKE_CXX_FLAGS='-std=c++14'"
    # args << "-Wno-deprecated-declarations"
    # args << "-DBUILD_FEM_NETGEN=1"
    # args << "-DBUILD_FEM=1"
    # # args << "-DFREECAD_USE_EXTERNAL_KDL=1"
    # if build.with?("cloud")
    #  args << "-DBUILD_CLOUD=1"
    # end
    # if build.with?("unsecured-cloud")
    #  args << "-DALLOW_SELF_SIGNED_CERTIFICATE=1"
    # end
    # args << '-DCMAKE_PREFIX_PATH="' + Formula["qt"].opt_prefix + "/lib/cmake;" + Formula["nglib"].opt_prefix + "/Contents/Resources;" + Formula["vtk@8.2"].opt_prefix + "/lib/cmake;"
    # args << %W[
    #   -DBUILD_FEM_NETGEN:BOOL=ON
    #   -DFREECAD_USE_EXTERNAL_KDL=ON
    #   -DCMAKE_BUILD_TYPE=#{build.with?("debug") ? "Debug" : "Release"}
    # ]

    # args_travis = std_cmake_args

    args_travis = %W[
    -Wno-dev
    -DCMAKE_CXX_FLAGS=-Wno-deprecated-declarations
    -DBUILD_ENABLE_CXX_STD=C++11
    -DBUILD_QT5=ON
    -DPYTHON_EXECUTABLE=/usr/local/bin/python3
    -DPYTHON_LIBRARY=/usr/local/opt/python@3.9/Frameworks/Python.framework/Versions/3.9/lib/libpython3.9.dylib
    -DPYTHON_INCLUDE_DIRS=/usr/local/opt/python@3.9/Frameworks/Python.framework/Versions/3.9/lib/libpython3.9.dylib
    -DBUILD_FEM_NETGEN=1
    -DBUILD_FEM=1
    -DBUILD_TECHDRAW=0
    -DCMAKE_PREFIX_PATH=/usr/local/opt/qt/lib/cmake;/usr/local/opt/nglib/Contents/Resources
    -DBUILD_FEM_NETGEN:BOOL=OFF
    -DFREECAD_USE_EXTERNAL_KDL=ON
    -DFREECAD_CREATE_MAC_APP=OFF
    -DCMAKE_VERBOSE_MAKEFILE=OFF
    -DCMAKE_BUILD_TYPE=Release
    ]

    mkdir "Build" do
      if build.with?("ninja")
        system "cmake", "-G", "Ninja", *args_travis, ".."
        system "make", "-j#{ENV.make_jobs}", "--build", "."
        system "make", "--install", "."
      else
        system "cmake", *args_travis, ".."
        system "make", "-j#{ENV.make_jobs}", "--build", "."
        system "make", "--install", "."
      end
      bin.install_symlink "../MacOS/FreeCAD" => "FreeCAD"
      bin.install_symlink "../MacOS/FreeCADCmd" => "FreeCADCmd"
      (lib/"python3.9/site-packages/homebrew-freecad-bundle.pth").write "#{prefix}/MacOS/\n"
    end
  end

  def caveats; <<-EOS
    After installing FreeCAD you may want to do the following:

    1. Amend your PYTHONPATH environmental variable to point to
       the FreeCAD directory
         export PYTHONPATH=#{bin}:$PYTHONPATH
    EOS
  end
  def post_install
    if (!File.exist?('/usr/local/lib/python3.9/site-packages/six.py'))
      system "pip3", "install", "six"
    end
    bin.install_symlink "../MacOS/FreeCAD" => "FreeCAD"
    bin.install_symlink "../MacOS/FreeCADCmd" => "FreeCADCmd"
    if (!File.exist?('/usr/local/Cellar/freecad/0.19pre/lib/python3.9/site-packages/homebrew-freecad-bundle.pth'))
     (lib/"python3.9/site-packages/homebrew-freecad-bundle.pth").write "#{prefix}/MacOS/\n"
    end
  end
end
