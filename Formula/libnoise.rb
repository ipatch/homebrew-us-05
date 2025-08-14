class Libnoise < Formula
  desc "Portable, open-source, coherent noise-generating library for C++"
  homepage "https://libnoise.sourceforge.net/"
  url "https://github.com/eXpl0it3r/libnoise/archive/refs/heads/master.tar.gz"
  version "1.0.0"
  sha256 "99d69a30a097549d1ba68e62fa913b28d79a26ce873b1c8ce551bd47fe46241e"
  head "https://github.com/eXpl0it3r/libnoise.git", branch: "master"

  bottle do
    root_url "https://ghcr.io/v2/ipatch/us-05"
    rebuild 1
    sha256 cellar: :any_skip_relocation, ventura:      "46f6b42795cbcec66b485c0ef3e57e8b0379a85cf49bfebdfd9cb0d0c7aa30d2"
    sha256 cellar: :any_skip_relocation, x86_64_linux: "14f66c1b362dbf28dbefef589a6d7fde47111ce50146537eb17577075fda9b48"
  end

  depends_on "cmake" => :build
  depends_on "llvm" => :build
  depends_on "ninja" => :build

  # conflicts_with 'formula-name'

  def install
    ninja_bin = Formula["ninja"].opt_bin/"ninja"
    clang_cc = Formula["llvm"].opt_bin/"clang"
    clang_cxx = Formula["llvm"].opt_bin/"clang++"
    llvm_ar = Formula["llvm"].opt_bin/"llvm-ar"

    args = %W[
      -DCMAKE_POLICY_VERSION_MINIMUM=3.5
      -GNinja
      -DCMAKE_MAKE_PROGRAM=#{ninja_bin}

      -DCMAKE_FIND_USE_SYSTEM_ENVIRONMENT_PATH=FALSE
      -DCMAKE_FIND_USE_CMAKE_SYSTEM_PATH=FALSE

      -DCMAKE_VERBOSE_MAKEFILE=1
      -DCMAKE_INSTALL_PREFIX=#{prefix}
      -DCMAKE_C_COMPILER=#{clang_cc}
      -DCMAKE_CXX_COMPILER=#{clang_cxx}
      -DBUILD_TYPE=RelWithDebInfo
      -DCMAKE_AR=#{llvm_ar}
      -L
    ]

    system "cmake", "-S", ".", "-B", "build", *args
    system "cmake", "--build", "build"
    system "cmake", "--install", "build"
  end

  def caveats
    <<~EOS
      This formula requires blahblah, but can't have blahblah installed.
    EOS
  end

  test do
    # prove that the formual successfully installed, and works as intended
    system "true"
  end
end
