class FreecadDev < Formula
  desc "Parametric 3D modeler"
  homepage "http://www.freecadweb.org"
  # TODO: possible to set depth of clone ???
  url "https://github.com/freecad/FreeCAD.git", 
    tag: "0.19_pre",
    revisision: "9eb080488d970d313c538473e7272117ea0a7cd1",
    shallow: false
  license "GPL-2.0-only"
  revision 1
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
  depends_on "orocos-kdl"
  depends_on "freecad/freecad/coin"
  depends_on "freecad/freecad/nglib"
  depends_on "freecad/freecad/med-file"
  depends_on "freecad/freecad/opencamlib"
  depends_on "freecad/freecad/shiboken2" # TODO: does the travis.yml use this
  depends_on "freecad/freecad/pyside2"
  depends_on "freecad/freecad/pyside2-tools"
  depends_on "FreeCAD/freecad/pivy"
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
    # if build.with?("cloud")
    #  args << "-DBUILD_CLOUD=1"
    # end
    # if build.with?("unsecured-cloud")
    #  args << "-DALLOW_SELF_SIGNED_CERTIFICATE=1"
    # end
    # args << '-DCMAKE_PREFIX_PATH="' + Formula["qt"].opt_prefix + "/lib/cmake;" + Formula["nglib"].opt_prefix + "/Contents/Resources;" + Formula["vtk@8.2"].opt_prefix + "/lib/cmake;"
    # args << %W[
    #   -DBUILD_FEM_NETGEN:BOOL=ON
    #   -DCMAKE_BUILD_TYPE=#{build.with?("debug") ? "Debug" : "Release"}
    # ]

    args_travis = std_cmake_args
    args_travis = %W[
    -Wno-dev
    -Wno-deprecated-declarations
    -DCMAKE_CXX_FLAGS='-std=c++17'
    -DBUILD_QT5=ON
    -DPYTHON_EXECUTABLE=/usr/local/bin/python3
    -DPYTHON_LIBRARY=/usr/local/opt/python@3.9/Frameworks/Python.framework/Versions/Current/Python
    -DPYTHON_INCLUDE_DIR=/usr/local/opt/python@3.9/Frameworks/Python.framework/Versions/Current/include/python3.9
    -DBUILD_FEM=1
    -DBUILD_FEM_NETGEN=ON
    -DBUILD_TECHDRAW=0
    -DCMAKE_PREFIX_PATH=/usr/local/opt/qt/lib/cmake;/usr/local/opt/nglib/Contents/Resources;/usr/local/opt/hdf5@1.10;/usr/local/opt/vtk@8.2
    -DFREECAD_USE_EXTERNAL_KDL=ON
    -DCMAKE_BUILD_TYPE=Release 
    -DFREECAD_CREATE_MAC_APP=OFF 
    ]

    mkdir "Build" do
      if build.with?("ninja")
        system "cmake", "-G", "Ninja", *args_travis, ".."
        system "cmake" "--build"
      else
        system "cmake", "-G", "Unix Makefiles", *args_travis, ".."
        system "make", "-j#{ENV.make_jobs}", "install"
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
