class Xar < Formula
  desc "fork of mackyle/xar based on tpoechtrager/xar eXtensible ARchiver"
  homepage "https://github.com/tpoechtrager/xar"
  url "https://github.com/tpoechtrager/xar.git", using: :git, revision: "5fa4675419cfec60ac19a9c7f7c2d0e7c831a497"
  sha256 ""
  version "dev"

  depends_on "autoconf" => :build
  depends_on "libxml2" => :build

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
