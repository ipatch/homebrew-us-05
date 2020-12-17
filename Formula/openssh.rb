class Openssh < Formula
  desc "OpenBSD freely-licensed SSH connectivity tools"
  homepage "https://www.openssh.com/"
  url "https://ftp.openbsd.org/pub/OpenBSD/OpenSSH/portable/openssh-8.4p1.tar.gz"
  mirror "https://mirror.vdms.io/pub/OpenBSD/OpenSSH/portable/openssh-8.4p1.tar.gz"
  version "8.4p1"
  sha256 "5a01d22e407eb1c05ba8a8f7c654d388a13e9f226e4ed33bd38748dafa1d2b24"
  license "SSH-OpenSSH"
  head "https://github.com/openssh/openssh-portable.git"#  , branch: #"master", shallow: false
  revision 1

  livecheck do
    url "https://ftp.openbsd.org/pub/OpenBSD/OpenSSH/portable/"
    regex(/href=.*?openssh[._-]v?(\d+(?:\.\d+)+(?:p\d+)?)\.t/i)
  end

  bottle do
    sha256 "81b1bc06acd742b34d7052d80a6b2abb121776a1329a2e030a381344f3d92098" => :big_sur
    sha256 "a0f055aee213648631e6e74839f99a813752272c580d77dd6b0e915e73f81a75" => :catalina
    sha256 "d155b770a00d936c956ed27536cc4e8ab3ef331279f63d84c70b28133cb263fa" => :mojave
    sha256 "88b6002bde6b63e6b7b64c626c71b0d34f86b5e79c0398802d940c4b5bbd5f08" => :high_sierra
  end

  # Please don't resubmit the keychain patch option. It will never be accepted.
  # https://archive.is/hSB6d#10%25

  depends_on "pkg-config" => :build
  depends_on "ldns"
  depends_on "libfido2"
  # depends_on "openssl@1.1"
  depends_on "libressl"

  resource "com.openssh.sshd.sb" do
    url "https://opensource.apple.com/source/OpenSSH/OpenSSH-209.50.1/com.openssh.sshd.sb"
    sha256 "a273f86360ea5da3910cfa4c118be931d10904267605cdd4b2055ced3a829774"
  end

  def install
        # ENV.append "CPPFLAGS", "-D__APPLE_SANDBOX_NAMED_EXTERNAL__"

    # Ensure sandbox profile prefix is correct.
    # We introduce this issue with patching, it's not an upstream bug.
    # inreplace "sandbox-darwin.c", "@PREFIX@/share/openssh", etc/"ssh"

    args = %W[
      --prefix=#{prefix}
      --sysconfdir=#{etc}/ssh
      --with-ssl-dir=#{Formula["libressl"].opt_prefix}
      --with-security-key-builtin
      --with-pam
      --with-kerberos5
      --with-libedit
    ]
      # --with-ldns
      # --with-ssl-dir=#{Formula["openssl@1.1"].opt_prefix}

    # system "/usr/local/bin/autoreconf"
    system "./configure", *args
    system "make"
    ENV.deparallelize
    system "make", "install"

    # This was removed by upstream with very little announcement and has
    # potential to break scripts, so recreate it for now.
    # Debian have done the same thing.
    bin.install_symlink bin/"ssh" => "slogin"

    buildpath.install resource("com.openssh.sshd.sb")
    (etc/"ssh").install "com.openssh.sshd.sb" => "org.openssh.sshd.sb"
  end

  test do
    assert_match "OpenSSH_", shell_output("#{bin}/ssh -V 2>&1")

    port = free_port
    fork { exec sbin/"sshd", "-D", "-p", port.to_s }
    sleep 2
    assert_match "sshd", shell_output("lsof -i :#{port}")
  end
end
