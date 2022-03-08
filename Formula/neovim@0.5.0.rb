class NeovimAT050 < Formula
  desc "Ambitious Vim-fork focused on extensibility and agility"
  homepage "https://neovim.io/"
  url "https://github.com/neovim/neovim/archive/v0.5.0.tar.gz"
  sha256 "2294caa9d2011996499fbd70e4006e4ef55db75b99b6719154c09262e23764ef"
  license "Apache-2.0"
  head "https://github.com/neovim/neovim.git", branch: "master"

  keg_only :versioned_formula

  # NOTE: ipatch,
  # https://github.com/neovim/neovim/issues/16217#issuecomment-959793388
  #
  # ERROR: error: passing 'VTermStringFragment' to parameter of incompatible
  #
  # FIX: run `brew unlink libvterm` then attemp to reinstall neovim if above error arrises

  depends_on "cmake" => :build
  depends_on "libtool" => :build
  depends_on "lua" => :build
  depends_on "luarocks" => :build
  depends_on "pkg-config" => :build
  depends_on "gettext"
  depends_on "ipatch/us-05/tree-sitter"
  depends_on "libtermkey"
  depends_on "libuv"
  # depends_on "libvterm"
  depends_on "luajit-openresty"
  depends_on "luv"
  depends_on "msgpack"
  depends_on "unibilium"

  uses_from_macos "gperf" => :build
  uses_from_macos "unzip" => :build

  on_linux do
    depends_on "libnsl"
  end

  # Keep resources updated according to:
  # https://github.com/neovim/neovim/blob/v#{version}/third-party/CMakeLists.txt

  # NOTE: ipatch, libvterm issues
  # REF: https://github.com/gromgit/homebrew-core-mojave/commit/64cf75e6916573e609d7637a9fc46c1286d22942
  #
  # TODO: Use `libvterm` formula when the following is resolved:
  # https://github.com/neovim/neovim/pull/16219
  resource "libvterm" do
    url "http://www.leonerd.org.uk/code/libvterm/libvterm-0.1.4.tar.gz"
    sha256 "bc70349e95559c667672fc8c55b9527d9db9ada0fb80a3beda533418d782d3dd"
  end

  resource "mpack" do
    url "https://github.com/libmpack/libmpack-lua/releases/download/1.0.8/libmpack-lua-1.0.8.tar.gz"
    sha256 "ed6b1b4bbdb56f26241397c1e168a6b1672f284989303b150f7ea8d39d1bc9e9"
  end

  resource "lpeg" do
    url "https://luarocks.org/manifests/gvvaughan/lpeg-1.0.2-1.src.rock"
    sha256 "e0d0d687897f06588558168eeb1902ac41a11edd1b58f1aa61b99d0ea0abbfbc"
  end

  def install
    resources.each do |r|
      r.stage(buildpath/"deps-build/build/src/#{r.name}")
    end

    ENV.prepend_path "LUA_PATH", "#{buildpath}/deps-build/share/lua/5.1/?.lua"
    ENV.prepend_path "LUA_CPATH", "#{buildpath}/deps-build/lib/lua/5.1/?.so"
    lua_path = "--lua-dir=#{Formula["luajit-openresty"].opt_prefix}"

    cd "deps-build" do
      %w[
        mpack/mpack-1.0.8-0.rockspec
        lpeg/lpeg-1.0.2-1.src.rock
      ].each do |rock|
        dir, rock = rock.split("/")
        cd "build/src/#{dir}" do
          output = Utils.safe_popen_read("luarocks", "unpack", lua_path, rock, "--tree=#{buildpath}/deps-build")
          unpack_dir = output.split("\n")[-2]
          cd unpack_dir do
            system "luarocks", "make", lua_path, "--tree=#{buildpath}/deps-build"
          end
        end
      end

      # Build libvterm. Remove when we use the formula.
      cd "libvterm" do
        system "make", "install", "PREFIX=#{buildpath}/deps-build", "LDFLAGS=-static #{ENV.ldflags}"
        ENV.prepend_path "PKG_CONFIG_PATH", buildpath/"deps-build/lib/pkgconfig"
      end

    end

    system "cmake", "-S", ".", "-B", "build",
      "-DLIBLUV_LIBRARY=#{Formula["luv"].opt_lib/shared_library("libluv")}",
      *std_cmake_args
      # Patch out references to Homebrew shims
      inreplace "build/config/auto/versiondef.h", Superenv.shims_path/ENV.cc, ENV.cc
      system "cmake", "--build", "build"
      system "cmake", "--install", "build"
  end

  test do
    (testpath/"test.txt").write("Hello World from Vim!!")
    system bin/"nvim", "--headless", "-i", "NONE", "-u", "NONE",
                       "+s/Vim/Neovim/g", "+wq", "test.txt"
    assert_equal "Hello World from Neovim!!", (testpath/"test.txt").read.chomp
  end
end
