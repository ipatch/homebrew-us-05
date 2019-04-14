class Qemu < Formula
  desc "x86, x86_64, ARM, & PowerPC Emulator"
  homepage "http://www.qemu.org"
  url "https://download.qemu.org/qemu-3.1.0.tar.xz"
  sha256 "6a0508df079a0a33c2487ca936a56c12122f105b8a96a44374704bef6c69abfc"   
  revision 1
  head "https://git.qemu.org/git/qemu.git"

  depends_on "libtool" => :build
  depends_on "pkg-config" => :build
  depends_on "glib"
  # depends_on "glib" => :build
  depends_on "gnutls"
  depends_on "jpeg"
  depends_on "libpng"
  depends_on "libssh2"
  depends_on "libusb"
  depends_on "ncurses"
  depends_on "pixman"
  depends_on "vde"
  depends_on "libffi" => :build
  depends_on "gettext" => :build
  depends_on "autoconf" => :build
  depends_on "automake" => :build

  option "with-docs", "Install documentation for QEMU locally"
  option "with-hvf", "Install Hypervisor.framework hardware acceleration support"
  option "with-hax", "Instal Intel HAXM hardware acceleration support"
 
  resource "test-image" do
    url "https://dl.bintray.com/homebrew/mirror/FD12FLOPPY.zip"
    sha256 "81237c7b42dc0ffc8b32a2f5734e3480a3f9a470c50c14a9c4576a2561a35807"
  end

  def install
    ENV["LIBTOOL"] = "glibtool"

    args = %W[
      --prefix=#{prefix}
      --cc=#{ENV.cc}
      --host-cc=#{ENV.cc}
      --disable-bsd-user
      --disable-guest-agent
      --enable-curses
      --enable-libssh2
      --enable-vde
      --extra-cflags=-DNCURSES_WIDECHAR=1
      --enable-cocoa
      --disable-sdl
      --disable-gtk
      --enable-docs
      --enable-libusb
      --enable-hax
      --enable-hvf
    ]

    # Get number of logical CPU's on the system
    ncpus = `sysctl -n hw.ncpu`
    ncpus_int = ncpus.to_i
    # puts ncpus_int

    # Samba installations from external taps.
    args << "--smbd=#{HOMEBREW_PREFIX}/sbin/samba-dot-org-smbd"

    system "./configure", *args
    # system "make 'V=1 -j#{ncpus_int}'"
    system "make" "V=1"
    system "make install"
    # odie "This QEMU formula should only be built from HEAD, using --HEAD"
  end

   test do
    expected = build.stable? ? version.to_s : "QEMU Project"
    assert_match expected, shell_output("#{bin}/qemu-system-i386 --version")
    resource("test-image").stage testpath
    assert_match "file format: raw", shell_output("#{bin}/qemu-img info FLOPPY.img")
  end
end
