class Qemu < Formula
  desc "x86, x86_64, ARM, & PowerPC Emulator"
  homepage "http://www.qemu.org"
  url "https://download.qemu.org/qemu-3.1.0.tar.xz"
  sha256 "8d7af64fe8bd5ea5c3bdf17131a8b858491bcce1ee3839425a6d91fb821b5713"
  revision 1
  head "https://git.qemu.org/git/qemu.git"

  deprecated_option "with-sdl" => "with-sdl2"
  deprecated_option "with-gtk+" => "with-gtk+3"

  depends_on "pkg-config" => :build
  depends_on "libtool" => :build
  depends_on "libffi" => :build
  depends_on "gettext" => :build
  depends_on "autoconf" => :build
  depends_on "automake" => :build
  depends_on "jpeg"
  depends_on "gnutls"
  depends_on "glib" => :build
  depends_on "ncurses"
  depends_on "pixman" => :build
  depends_on "libpng" => :recommended
  depends_on "vde" => :optional
  depends_on "sdl2" => :optional
  depends_on "gtk+3" => :optional
  depends_on "libssh2" => :optional
  depends_on "libusb" => :optional

  option "with-docs", "Install documentation for QEMU locally"
  option "with-hvf", "Install Hypervisor.framework hardware acceleration support"
  option "with-hax", "Instal Intel HAXM hardware acceleration support"
 
  fails_with :gcc do
    cause "qemu requires a compiler with support for the __thread specifier"
  end

  resource "test-image" do
        url "https://dl.bintray.com/homebrew/mirror/FD12FLOPPY.zip"
    sha256 "81237c7b42dc0ffc8b32a2f5734e3480a3f9a470c50c14a9c4576a2561a35807"
  end

  def install
    ENV["LIBTOOL"] = "glibtool"

    if build.head?
      system "git submodule init"
      system "git submodule update --recursive"

      args = %W[
      --prefix=#{prefix}
      --cc=#{ENV.cc}
      --host-cc=#{ENV.cc}
      --disable-bsd-user
      --disable-guest-agent
      --extra-cflags=-DNCURSES_WIDECHAR=1
      ]

      args << (build.with?("docs") ? "--enable-docs" : "--disable-docs")
      args << (build.with?("libusb") ? "--enable-libusb" : "--disable-libusb")
      args << (build.with?("hvf") ? "--enable-hvf" : "--diable-hvf")
      args << (build.with?("hax") ? "--enable-hax" : "--disable-hax")

      # Get number of logical CPU's on the system
      ncpus = `sysctl -n hw.ncpu`
      ncpus_int = ncpus.to_i
      # puts ncpus_int

      system "./configure", *args
      # system "make 'V=1 -j#{ncpus_int}'"
      system "make" "V=1"
      system "make install"
    else
      odie "This QEMU formula should only be built from HEAD, using --HEAD"
    end
  end

   test do
    expected = build.stable? ? version.to_s : "QEMU Project"
    assert_match expected, shell_output("#{bin}/qemu-system-i386 --version")
    resource("test-image").stage testpath
    assert_match "file format: raw", shell_output("#{bin}/qemu-img info FLOPPY.img")
  end
end
