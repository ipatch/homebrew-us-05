class HelloWorldC < Formula
  desc "Simple 'Hello, World!' program written in C"
  homepage "https://github.com/arjuncvinod/Hello-World-in-Different-Languages"
  url "https://raw.githubusercontent.com/arjuncvinod/Hello-World-in-Different-Languages/main/C.c"
  version "1.1"
  sha256 "742b3b98f6ad8d80396d6be1be32ddf66e06466120954c713f1b6ed373786a10"

  bottle do
    root_url "https://ghcr.io/v2/ipatch/us-05"
    sha256 cellar: :any_skip_relocation, arm64_sonoma: "0a8eef58589dc1208c45418505287cc1b096a2093dfaffb55befd3f1f50db065"
    sha256 cellar: :any_skip_relocation, ventura:      "39982dadc350e8fdaf9f1872b91198d0eeee3f9754f98c6bdff228406f810f18"
    sha256 cellar: :any_skip_relocation, monterey:     "7ac81989d94223629400f8e729dbd3fb164b63f61a420e3071a05361ed7c08d4"
    sha256 cellar: :any_skip_relocation, x86_64_linux: "500ee2ed9e370f07818bd63f67d53f0aa74b1fcd54d6d0dc79352767b5ae6eb4"
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
