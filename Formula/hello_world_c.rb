class HelloWorldC < Formula
  desc "Simple 'Hello, World!' program written in C"
  homepage "https://github.com/arjuncvinod/Hello-World-in-Different-Languages"
  url "https://raw.githubusercontent.com/arjuncvinod/Hello-World-in-Different-Languages/main/C.c"
  version "1.1"
  sha256 "742b3b98f6ad8d80396d6be1be32ddf66e06466120954c713f1b6ed373786a10"

  bottle do
    root_url "https://github.com/ipatch/homebrew-us-05/releases/download/hello_world_c-1.1"
    sha256 cellar: :any_skip_relocation, ventura:      "cd8921d81403a6c9a6488915a7ba459a5f79468a99a8b8986d87ae29f0e2d5b0"
    sha256 cellar: :any_skip_relocation, x86_64_linux: "49e21f2389326000feb7d8d515804d351fa80fbac6531498d376abeab8a450f5"
  end

  def install
    # compile simple hello world c program
    system ENV.cc, "-o", "hello_world_c", "-std=c99", "-Wall", "C.c"
    # install the compiled code
    bin.install "hello_world_c"
  end

  test do
    assert_equal "Hello, World!", shell_output("#{bin}/hello_world_c")
  end
end
