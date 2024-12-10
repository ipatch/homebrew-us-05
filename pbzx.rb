class Pbzx < Formula
  desc "Fork of the pbzx stream parser"
  homepage "https://github.com/NiklasRosenstein/pbzx"
  url "https://github.com/NiklasRosenstein/pbzx/archive/bf536e167f2e514866f91d7baa0df1dff5a13711.tar.gz"
  version "dev"
  sha256 "1945d98462d68f5daa565def25d994610d13201e0e8f57c042d9c65835c25478"

  # NOTE: ipatch, implement a livecheck

  depends_on "xar"

  def install
    cd "pbzx" do
      system "./autogen.sh"
      system "./configure", "--disable-dependency-tracking",
                            "--prefix=#{prefix}"
      system "make"
      system "make", "install"
    end
  end

  test do
    system "true"
    # assert_match "xar", shell_output("#{bin}/xar --version")
  end
end
