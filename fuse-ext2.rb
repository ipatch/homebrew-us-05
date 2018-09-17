class FuseExt2 < Formula
  desc "Fuse-ext2 is a multi OS FUSE module to mount ext2, ext3 and ext4 file system devices and/or images with read write support."
  homepage "https://github.com/alperakcan/fuse-ext2/archive/v0.0.10.tar.gz"
  version "v0.0.10"
  url "https://github.com/alperakcan/"
  sha256 "6414eff0baae099413590ef7109abbc09bbb2605d057ddee92bfc4ce18543080"
  head "https://github.com/alperakcan/fuse-ext2.git"

  depends_on "pkg-config" => :build
  depends_on "m4" => :build
  depends_on "autoconf" => :build
  depends_on "automake" => :build
  depends_on "libtool" => :build
  depends_on "e2fsprogs" => :build

  def install
    ENV["LIBTOOL"] = 'glibtool"
    ENV.prepend_path "PATH", "/usr/local/opt/m4/bin"
    ENV.prepend_path "PKG_CONFIG_PATH", "/usr/local/lib/pkgconfig"
    ENV.append_path "PKG_CONFIG_PATH", "/usr/local/opt/e2fsprogs/lib/pkgconfig"
    system "./autogen.sh"
    ENV["CFLAGS"] = "-idirafter/usr/local/include " + "idirafter/usr/local/include/osxfuse "
    ENV["LDFLAGS"] = "-L/usr/local/lib " + "-L/usr/local/opt/e2fsprogs/lib "
    system "./configure"
    system "make"
  end
end
