class CrosstoolNg < Formula
  desc "Tool for building toolchains"
  homepage "https://crosstool-ng.github.io"
  url "http://crosstool-ng.org/download/crosstool-ng/crosstool-ng-1.23.0.tar.xz"
  sha256 "68a43ea98ccf9cb345cb6eec494a497b224fee24c882e8c14c6713afbbe79196"
  revision 1

  bottle do
    cellar :any
    sha256 "54205dfad10ed81d0cb31692e852b5742a938a6a54b7e116e5820d3a0d6dded2" => :high_sierra
    sha256 "185f1d5981772306bac468ca496555140c761137e771955c1d63800dae894559" => :sierra
    sha256 "d3aebb66365f24fde4fd67a4ec13eb72c0f21e94904853e39003b7b05c53bad5" => :el_capitan
  end

  head do
    url "https://github.com/crosstool-ng/crosstool-ng.git", :shallow => false

    depends_on "help2man" => :build
    depends_on "autoconf" => :build
    depends_on "automake" => :build
    depends_on "binutils" => :build
    depends_on "coreutils" => :build
    depends_on "flex" => :build
    depends_on "gawk" => :build
    depends_on "gnu-sed" => :build
    depends_on "grep" => :build
    depends_on "libtool" => :build
    depends_on "m4" => :build
    depends_on "xz" => :build
    depends_on "gettext" => :build
    depends_on "bash" => :build
    depends_on "gcc" => :build
    depends_on "ncurses" => :build
  end

  depends_on "help2man" => :build
  depends_on "autoconf"
  depends_on "automake"
  depends_on "binutils"
  depends_on "coreutils"
  depends_on "flex"
  depends_on "gawk"
  depends_on "gnu-sed"
  depends_on "grep"
  depends_on "libtool"
  depends_on "m4"
  depends_on "xz"
  depends_on "gettext"

  def install
    if build.head?
      ENV.libcxx if ENV.compiler == :clang
      ENV["SED"] = "#{Formula["gnu-sed"].opt_bin}/sed"
      ENV["M4"] = "#{Formula["m4"].opt_bin}/m4"
      ENV["MAKE"] = "/usr/local/bin/make" # prevent hardcoding make path from superenv
      # ENV["LDFLAGS"] = "#{Formula["gettext"]}/opt/gettext/lib"
      # ENV["CPPFLAGS"] = "#{Formula["gettext"]}/opt/gettext/inclue"
      ENV.delete "LD"

      # system "brew link gettext"
      (buildpath/"brew_include").install_symlink MacOS.sdk_path/"usr/include/ncurses.h"
      ENV["ncurses_CFLAGS"] = "-I#{buildpath}/brew_include"
      ENV["ncurses_LIBS"] = "-L/usr/lib -lncurses"

      system "./bootstrap"

      system "./configure", "--prefix=#{prefix}", "--disable-nls"

      # Must be done in two steps
      system "make"
      system "make", "install"
    else
      ENV["SED"] = "#{Formula["gnu-sed"].opt_bin}/sed"
      ENV["M4"] = "#{Formula["m4"].opt_bin}/m4"
      ENV["MAKE"] = "/usr/bin/make" # prevent hardcoding make path from superenv

      system "./configure", "--prefix=#{prefix}"

      # Must be done in two steps
      system "make"
      system "make", "install"
    end
  end

  test do
    assert_match "This is crosstool-NG", shell_output("make -rf #{bin}/ct-ng version")
  end
end
