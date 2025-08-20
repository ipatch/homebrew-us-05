class HelloWorldC < Formula
  desc "Simple 'Hello, World!' program written in C"
  homepage "https://github.com/arjuncvinod/Hello-World-in-Different-Languages"
  url "https://raw.githubusercontent.com/arjuncvinod/Hello-World-in-Different-Languages/main/C.c"
  version "1.1"
  sha256 "742b3b98f6ad8d80396d6be1be32ddf66e06466120954c713f1b6ed373786a10"

  bottle do
    root_url "https://ghcr.io/v2/ipatch/us-05"
    rebuild 1
    sha256 cellar: :any_skip_relocation, ventura:      "6d0387ae8c276ff3ee85b6cbc8e599012de36e7971b5b2de0a332097870b0c77"
    sha256 cellar: :any_skip_relocation, x86_64_linux: "59664fa1f97f7f357a71561a344501bdcd953bcc5bddb54da451d6a54b88c6fe"
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
