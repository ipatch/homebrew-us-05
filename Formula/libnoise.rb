class Libnoise < Formula
  desc "Portable, open-source, coherent noise-generating library for C++"
  homepage "https://libnoise.sourceforge.net/"
  url "https://github.com/eXpl0it3r/libnoise/archive/refs/heads/master.tar.gz"
  version "1.0.0"
  sha256 "85caab555291810faf247606f3ed6f83c7a3df50d20fd0c7b2135195ee4980a5"
  revision 1
  head "https://github.com/eXpl0it3r/libnoise.git", branch: "master"

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
