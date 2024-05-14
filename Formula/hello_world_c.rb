class HelloWorldC < Formula
  desc "Simple 'Hello, World!' program written in C"
  homepage "https://github.com/ipatch/homebrew-us-05"
  url "file://#{__FILE__}", using: :nounzip

  keg_only :versioned_formula

  def install
    # compile simple hello world c program
    # the `hello.c` is not necessary due to the builtin data block but left here for posterity
    system ENV.cc, "-o", "hello_world_c", "-xc", "-", "-std=c99", "-Wall", "hello.c"
    # install the compiled code
    bin.install "hello"
  end

  test do
    assert_equal "Hello, World!\n", shell_output("#{bin}/hello_world_c")
  end

  # embedded hello world c program
  DATA <<~EOS
    #include <stdio.h>

    int main() {
      printf("Hello, World!\n");
      return 0;
    }
  EOS
end
