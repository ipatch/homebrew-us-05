class Xar < Formula
  desc "Fork of mackyle/ based on tpoechtrager/ eXtensible ARchiver"
  homepage "https://github.com/tpoechtrager/xar"
  url "https://github.com/tpoechtrager/xar/archive/5fa4675419cfec60ac19a9c7f7c2d0e7c831a497.tar.gz"
  version "dev"
  sha256 "0ef6618d4b841c16d16ff6c9b0f1cd908f5f785ba08bef50178b293a7d170ff4"
  revision 1

  bottle do
    root_url "https://ghcr.io/v2/ipatch/us-05"
    sha256 cellar: :any_skip_relocation, x86_64_linux: "e149d77cf5ae6792d042bc673a6ab73dc93aa406ab622b8b93e5a67ba06d9148"
  end

  # NOTE: ipatch, implement a livecheck

  depends_on "autoconf" => :build
  depends_on "acl"
  depends_on "bzip2"
  depends_on "icu4c"
  depends_on "libxml2"
  depends_on "openssl"
  depends_on "xz"
  depends_on "zlib"

  def install
    cd "xar" do
      system "./autogen.sh"
      system "./configure", "--disable-dependency-tracking",
                            "--prefix=#{prefix}"
      system "make"
      system "make", "install"
    end
  end

  test do
    assert_match "xar", shell_output("#{bin}/xar --version")
  end
end
