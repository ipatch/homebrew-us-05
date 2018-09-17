class FuseExt2 < Formula
  desc "Fuse-ext2 is a multi OS FUSE module to mount ext2, ext3 and ext4 file system devices and/or images with read write support."
  homepage "https://github.com/alperakcan/fuse-ext2"
  url "https://github.com/alperakcan/fuse-ext2"
  version "0.0.10"
  sha256 "1823b8eff04b23255ae25e1a0141fbbd13d201e2bbe7a0a5b894360752bade9d"
  head "https://github.com/alperakcan/fuse-ext2.git"

  # head do
  #   url "git@github.com:alperakcan/fuse-ext2.git", :shallow => false

  #   depends_on "pkg-config" => :build
  #   depends_on "m4" => :build
  #   depends_on "autoconf" => :build
  #   depends_on "automake" => :build
  #   depends_on "libtool" => :build
  #   depends_on "e2fsprogs" => :build
  # end

  depends_on "pkg-config" => :build
  depends_on "m4" => :build
  depends_on "autoconf" => :build
  depends_on "automake" => :build
  depends_on "libtool" => :build
  depends_on "e2fsprogs" => :build

  def install
    ENV.prepend_path "PKG_CONFIG_PATH", "/usr/local/lib/pkgconfig"
    system "./autogen.sh"
    system "./configure"
    system "make"
  end
end
