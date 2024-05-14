class HelloWorldC < Formula
  desc "Simple 'Hello, World!' program written in C"
  homepage "https://github.com/arjuncvinod/Hello-World-in-Different-Languages"
  url "https://raw.githubusercontent.com/arjuncvinod/Hello-World-in-Different-Languages/main/C.c"
  version "1.0"
  sha256 "742b3b98f6ad8d80396d6be1be32ddf66e06466120954c713f1b6ed373786a10"

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
