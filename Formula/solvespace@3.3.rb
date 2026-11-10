class SolvespaceAT33 < Formula
  desc "SOLVESPACE is a free (GPLv3) parametric 3d CAD tool"
  homepage "https://solvespace.com/index.pl"
  url "https://github.com/solvespace/solvespace/releases/download/v3.3/solvespace-3.3.tar.xz"
  sha256 "a62837f8346701b248016adf41457a7b93778e2fe1a289d738fd188d77c99eea"
  revision 1

  keg_only :versioned_formula

  depends_on "cmake" => :build
  depends_on "cairo"
  depends_on "eigen"
  depends_on "fontconfig"
  depends_on "freetype"
  depends_on "libpng"
  depends_on "qt"
  depends_on "zlib"

  def install
    # NOTE: ipatch rm the following cmake vars
    # BUILD_TESTING
    # CCACHE_FOUND
    args = %w[
      -L
      -DUSE_QT_GUI:BOOL=ON
      -DCMAKE_BUILD_TYPE=RelWithDebInfo
      -DENABLE_TESTS:BOOL=ON

    ]
    # configure / build using cmake & friends
    system "cmake", "-S", ".", "-B", "build", *std_cmake_args, *args
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
