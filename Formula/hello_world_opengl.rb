class HelloWorldOpengl < Formula
  desc "Simple OpenGL 'Hello, World!' program written in C"
  homepage "https://gist.github.com/ipatch/8517a5914d56c45b0ebc4dd4df5160c4"
  url "https://gist.github.com/ipatch/8517a5914d56c45b0ebc4dd4df5160c4/archive/0d6d0415b79378d5058d31391a209882af1fd867.tar.gz"
  version "1.0"
  sha256 "c8d18243fcff36af525d9d5082880a7ffff8750eae1a2a77f1d61f021ddf5fdf"
  head "https://gist.github.com/ipatch/8517a5914d56c45b0ebc4dd4df5160c4.git", branch: "main"

  bottle do
    root_url "https://github.com/ipatch/homebrew-us-05/releases/download/hello_world_opengl-1.0"
    rebuild 1
    sha256 cellar: :any,                 ventura:      "0f1af4b96a0018ea9a9af128c91b389e014f65eb591beb817a472364f647f9f5"
    sha256 cellar: :any_skip_relocation, x86_64_linux: "2e20408368b2da1111885e56468c1f4b8851071385099ea6d14b5c2cb50a5e74"
  end

  depends_on "cmake" => :build
  depends_on "ninja" => :build
  depends_on "pkg-config" => :build
  depends_on "glew"
  depends_on "glfw"
  depends_on "mesa" if OS.linux?
  depends_on "mesa-glu"
  depends_on "xorg-server" if OS.linux?

  # NOTE: ipatch, run below cmd to get latest commit hash to update stable URL
  # curl -s "https://api.github.com/gists/8517a5914d56c45b0ebc4dd4df5160c4" | jq -r '.history[0].version'

  def install
    hbp = HOMEBREW_PREFIX
    puts "---------------------------------------------------"
    puts "#{HOMEBREW_PREFIX}                                 "
    puts "---------------------------------------------------"
    #-----
    # https://github.com/Kitware/CMake/blob/master/Modules/FindOpenGL.cmake
    #-----
    # Could NOT find OpenGL (missing: OPENGL_opengl_LIBRARY OPENGL_glx_LIBRARY)
    # CMake Error at /usr/share/cmake/Modules/FindPackageHandleStandardArgs.cmake:230 (message):
    # Could NOT find OpenGL (missing: OPENGL_opengl_LIBRARY OPENGL_glx_LIBRARY)
    # Could NOT find OpenGL (missing: OPENGL_glx_LIBRARY)
    #----
    # l $bp/opt/xorg-server/lib/xorg/modules/extensions/libglx.so
    #---

    # NOTE: ipatch, tshooting oct 27, 2024
    # TODO: fill in below dirs
    # OPENGL_GLU_INCLUDE_DIR:PATH=OPENGL_GLU_INCLUDE_DIR-NOTFOUND

    # CMAKE_OSX_ARCHITECTURES:STRING=
    # CMAKE_OSX_DEPLOYMENT_TARGET:STRING=

    cmake_prefix_paths = []

    if OS.linux?
      cmake_prefix_paths << Formula["mesa"].prefix
      opengl_lib = Formula["mesa"].opt_prefix/"lib/libGL.so"
      opengl_glx_lib = Formula["xorg-server"].opt_prefix/"lib/xorg/modules/extensions/libglx.so"

      args_linux_only = %W[
        -DOPENGL_opengl_LIBRARY=#{opengl_lib}
        -DOPENGL_glx_LIBRARY=#{opengl_glx_lib}
      ]
    else # macos
      macos_sdk =
        "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk"

      macos_frmwks = "#{macos_sdk}/Library/Frameworks"
    end

    # TODO: remove refs to /library/developer/commandlinetools/
    ENV.delete("CMAKE_LIBRARY_PATH")
    ENV.delete("CMAKE_INCLUDE_PATH")

    args_macos_only = %W[
      -DOPENGL_INCLUDE_DIR=#{macos_frmwks}/OpenGL.framework
      -DOPENGL_gl_LIBRARY=#{macos_frmwks}/OpenGL.framework
      -DCMAKE_OSX_SYSROOT=#{macos_sdk}
      -DCMAKE_IGNORE_PATH=/Library/Developer/CommandLineTools/SDKs
    ]

    cmake_prefix_paths << Formula["mesa-glu"].prefix
    cmake_prefix_path_string = cmake_prefix_paths.join(";")

    args = %W[
      -DHOMEBREW_PREFIX=#{HOMEBREW_PREFIX}
      -DCMAKE_FIND_USE_SYSTEM_ENVIRONMENT_PATH=FALSE
      -DCMAKE_FIND_USE_CMAKE_SYSTEM_PATH=FALSE
      -DCMAKE_IGNORE_PATH=#{hbp}/lib;

      -DCMAKE_MAKE_PROGRAM=ninja

      -DCMAKE_VERBOSE_MAKEFILE=1

      -DCMAKE_BUILD_TYPE=RelWithDebInfo
      -DCMAKE_PREFIX_PATH=#{cmake_prefix_path_string}
      -DCMAKE_INSTALL_PREFIX=#{prefix}
      -GNinja
      -L
    ]
    # --trace

    if OS.linux?
      system "cmake", *args, *args_linux_only, "-S", ".", "-B", "_build"
    else
      system "cmake", *args, *args_macos_only, "-S", ".", "-B", "_build"
    end

    system "cmake", "--build", "_build"
    system "cmake", "--install", "_build"
  end

  test do
    system "true"
    # assert_equal "Hello, World!", shell_output("#{bin}/hello_world_c")
  end
end
