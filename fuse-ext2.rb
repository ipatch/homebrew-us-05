class FuseExt2 < Formula
  desc "Fuse-ext2 is a multi OS FUSE module to mount ext2, ext3 and ext4 file system devices and/or images with read write support."
  homepage "https://github.com/alperakcan/fuse-ext2"
  url "https://github.com/alperakcan/fuse-ext2"
  version "0.0.10"

  bottle do

  end

  head do
    url "git@github.com:alperakcan/fuse-ext2.git", :shallow => false

    depends_on "m4"
    depends_on "autoconf"
    depends_on "automake"
    depends_on "libtool"
    depends_on "e2fsprogs"
  end

  depends_on "m4"
  depends_on "autoconf"
  depends_on "automake"
  depends_on "libtool"
  depends_on "e2fsprogs"

  def install
    if build.head?

    else

      system "cd fuse-ext2"
      system "./autogen.sh"

      # system "make", "install"
    end
  end
end
