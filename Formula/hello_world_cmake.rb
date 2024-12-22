class HelloWorldCmake < Formula
  desc "Simple 'Hello, World CMake!' program written in C++"
  homepage "https://github.com/ipatch/hello-world-cmake"
  url "https://github.com/ipatch/hello-world-cmake/archive/refs/heads/main.tar.gz"
  version "1.0"
  sha256 "6dfc493aae1e34b7f9b121eb511a1dfad3e9282a79438f508d3952f1b8820f93"

  bottle do
    root_url "https://github.com/ipatch/homebrew-us-05/releases/download/hello_world_cmake-1.0"
    rebuild 1
    sha256 cellar: :any,                 ventura:      "d6371a3cab58656824e6b04a9042f72439e930a3278fbcd80e16bdd0f710910f"
    sha256 cellar: :any_skip_relocation, x86_64_linux: "101729109183e4ba7ebf97cea2c3db58da57f8f41be450c2f7aa1afc0f9d29e4"
  end

  depends_on "cmake" => :build
  depends_on "llvm" => :build
  depends_on "ninja" => :build
  depends_on "freecad/freecad/medfile"
  depends_on "xerces-c"

  def install
    puts "---------------------------------------"
    puts (HOMEBREW_PREFIX)
    puts "---------------------------------------"

    hbp = HOMEBREW_PREFIX.to_s

    # NOTE: ipatch, attempt to nuke default cmake_prefix_path to prevent qt6 from sneaking in
    ENV.delete("CMAKE_PREFIX_PATH") # Clear existing paths
    puts "----------------------------------------------------"
    puts "CMAKE_PREFIX_PATH=#{ENV["CMAKE_PREFIX_PATH"]}"
    puts "CMAKE_PREFIX_PATH Datatype: #{ENV["CMAKE_PREFIX_PATH"].class}"
    puts "----------------------------------------------------"
    puts "homebrew prefix: #{hbp}"
    puts "prefix: #{prefix}"
    puts "rpath: #{rpath}"
    puts "----------------------------------------------------"

    # cmake_prefix_paths = []
    # cmake_prefix_paths << Formula["xerces-c"].prefix
    cmake_prefix_paths = [Formula["xerces-c"].prefix].join(";")

    linux_linker_flags = "-L#{HOMEBREW_PREFIX}/opt/gcc/lib/gcc/current " \
                         "-Wl,-rpath,#{HOMEBREW_PREFIX}/opt/gcc/lib/gcc/current"

    args = %W[
      -D HOMEBREW_PREFIX=#{HOMEBREW_PREFIX}
      -D CMAKE_FIND_USE_SYSTEM_ENVIRONMENT_PATH=FALSE
      -D CMAKE_FIND_USE_CMAKE_SYSTEM_PATH=FALSE
      -G Ninja
      -D CMAKE_MAKE_PROGRAM=#{HOMEBREW_PREFIX}/opt/ninja/bin/ninja
      -D CMAKE_C_COMPILER=#{HOMEBREW_PREFIX}/opt/llvm/bin/clang
      -D CMAKE_CXX_COMPILER=#{HOMEBREW_PREFIX}/opt/llvm/bin/clang++

      -DCMAKE_INSTALL_PREFIX=#{prefix}

      -D CMAKE_PREFIX_PATH=#{cmake_prefix_paths}

      -DCMAKE_IGNORE_PATH="#{HOMEBREW_PREFIX}/lib;#{HOMEBREW_PREFIX}/include;"
      -DCMAKE_EXE_LINKER_FLAGS=#{linux_linker_flags}
    ]
    # -D CMAKE_LIBRARY_PATH="#{HOMEBREW_PREFIX}/opt/gcc/lib/gcc/current"
    # -D CMAKE_FIND_DEBUG_MODE=ON

    # NOTE: ipatch, do not make build dir a sub dir of the src dir
    puts "current working directory: #{Dir.pwd}"
    src_dir = Dir.pwd.to_s
    parent_dir = File.expand_path("..", src_dir)
    build_dir = "#{parent_dir}/build"
    # Create the build directory if it doesn't exist
    mkdir_p(build_dir)
    # Change the working directory to the build directory
    # false positive: `warning: conflicting chdir during another chdir block`
    Dir.chdir(build_dir)
    puts "----------------------------------------------------"
    puts Dir.pwd
    puts "----------------------------------------------------"

    system "cmake", *args, src_dir.to_s
    system "cmake", "--build", build_dir.to_s
    system "cmake", "--install", build_dir.to_s
  end

  test do
    system "true"
    # assert_equal "Hello, World!", shell_output("#{bin}/hello_world_c")
  end
end
