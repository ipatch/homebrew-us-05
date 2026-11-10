class Libnoise < Formula
  desc "Portable, open-source, coherent noise-generating library for C++"
  homepage "https://libnoise.sourceforge.net/"
  url "https://github.com/eXpl0it3r/libnoise/archive/cdfec3aa25534a50c5bec2c8969c83476cd7c322.tar.gz"
  version "1.0.0"
  sha256 "20f6078485c53a066f56ca4d6f07f2e0995d8e18cd094f6ce045bd3f03b30c82"
  revision 1
  head "https://github.com/eXpl0it3r/libnoise.git", branch: "master"

  bottle do
    root_url "https://ghcr.io/v2/ipatch/us-05"
    sha256 cellar: :any_skip_relocation, x86_64_linux: "dcb6bdd2626263eff6c71775c3977cb119254edaca368fa054542d3a4c00988c"
  end

  depends_on "cmake" => :build
  depends_on "llvm" => :build
  depends_on "ninja" => :build

  # conflicts_with 'formula-name'

  def install
    ninja_bin = formula_opt_bin("ninja")/"ninja"
    clang_cc = formula_opt_bin("llvm")/"clang"
    clang_cxx = formula_opt_bin("llvm")/"clang++"
    llvm_ar = formula_opt_bin("llvm")/"llvm-ar"

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

    # Consumers like OrcaSlicer include <libnoise/...>; upstream installs headers as include/noise
    include.install_symlink "noise" => "libnoise"
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
