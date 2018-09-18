class FuseExt2 < Formula
  desc "Fuse-ext2 is a multi OS FUSE module to mount ext2, ext3 and ext4 file system devices and/or images with read write support."
  homepage "https://github.com/alperakcan/"
  url "https://github.com/alperakcan/fuse-ext2/archive/v0.0.10.tar.gz"
  sha256 "ad2260df4ccfb8ba9f761c66ea7c3b24bf690eab46e6d562d2d2e5a5f2f76dff"
  head "https://github.com/alperakcan/fuse-ext2.git"

  depends_on "pkg-config" => :build
  depends_on "m4" => :build
  depends_on "autoconf" => :build
  depends_on "automake" => :build
  depends_on "libtool" => :build
  depends_on "e2fsprogs" => :build

  conflicts_with "ext2fuse"

  def install
    ENV.append "LIBS", "-losxfuse"
    ENV.append "CFLAGS", "-idirafter/usr/local/include/osxfuse/fuse"
    ENV.append "CFLAGS", "--std=gnu89" if ENV.compiler == :clang

    # Include e2fsprogs headers *after* system headers with -idirafter
    # as uuid/uuid.h system header is shadowed by e2fsprogs headers
    ENV.remove "HOMEBREW_INCLUDE_PATHS", Formula["e2fsprogs"].include
    ENV.append "CFLAGS", "-idirafter" + Formula["e2fsprogs"].include

    system "./autogen.sh"
    system "./configure", "--prefix=#{prefix}" 
    system "make"
  end

  def caveats; <<~EOS
    This formula requires osxfuse to be installed.

    Fuse for macOS can be installed with the below command:

    brew cask install osxfuse
  EOS
  end
end
