class Neopbzx < Formula
  desc "Fork of the pbzx stream parser"
  homepage "https://github.com/ipatch/pbzx"
  url "https://github.com/ipatch/pbzx/archive/bf536e167f2e514866f91d7baa0df1dff5a13711.tar.gz"
  version "dev"
  sha256 "1945d98462d68f5daa565def25d994610d13201e0e8f57c042d9c65835c25478"

  bottle do
    root_url "https://github.com/ipatch/homebrew-us-05/releases/download/neopbzx-dev"
    sha256 cellar: :any_skip_relocation, x86_64_linux: "c5ab93f558397ae135980e4a35dfec96b96212ff9b40cfe15423de638abbfa5f"
  end

  # NOTE: ipatch, implement a livecheck

  depends_on "llvm" => :build
  depends_on "xar"
  depends_on "xz"

  def install
    ENV.clang
    system ENV.cc, "-llzma", "-lxar", "pbzx.c", "-o", "pbzx"
    # install the compiled code
    bin.install "pbzx"
  end

  test do
    system "true"
    # assert_match "xar", shell_output("#{bin}/xar --version")
  end
end
