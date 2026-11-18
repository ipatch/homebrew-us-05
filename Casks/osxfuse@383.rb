cask "osxfuse@383" do
  version "3.8.3"
  sha256 "87e507c44c19689beefa3d47dd00ba953254d9e616cb633c1b4343407fe99700"

  url "https://github.com/osxfuse/osxfuse/releases/download/osxfuse-#{version}/osxfuse-#{version}.dmg"
  name "OSXFUSE"
  homepage "https://osxfuse.github.io/"

  auto_updates true
  conflicts_with cask: "osxfuse-dev"
  depends_on :macos

  pkg "Extras/FUSE for macOS #{version}.pkg",
      choices: [
        {
          "choiceIdentifier" => "com.github.osxfuse.pkg.MacFUSE",
          "choiceAttribute"  => "selected",
          "attributeSetting" => 1,
        },
      ]

  postflight_steps do
    set_ownership ["/usr/local/include", "/usr/local/lib"]
  end

  uninstall kext:    "com.github.osxfuse.filesystems.osxfusefs",
            pkgutil: [
              "com.github.osxfuse.pkg.Core",
              "com.github.osxfuse.pkg.MacFUSE",
              "com.github.osxfuse.pkg.PrefPane",
            ]

  caveats <<-EOS
      after installing this cask a system reboot is required
  EOS
end
