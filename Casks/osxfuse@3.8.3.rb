cask "osxfuse@3.8.3" do
  if OS.mac?
    version "3.8.3"
    sha256 "87e507c44c19689beefa3d47dd00ba953254d9e616cb633c1b4343407fe99700"

    # github.com/osxfuse was verified as official when first introduced to the cask
    url "https://github.com/osxfuse/osxfuse/releases/download/osxfuse-#{version}/osxfuse-#{version}.dmg",
        verified: "github.com/osxfuse/osxfuse"
    name "OSXFUSE"
    homepage "https://osxfuse.github.io/"

    auto_updates true
    conflicts_with cask: "osxfuse-dev"
    depends_on macos: ">= :mojave"

    pkg "Extras/FUSE for macOS #{version}.pkg",
        choices: [
          "choiceIdentifier" => "com.github.osxfuse.pkg.MacFUSE",
          "choiceAttribute"  => "selected",
          "attributeSetting" => 1,
        ]

    postflight do
      set_ownership ["/usr/local/include", "/usr/local/lib"]
    end

    uninstall kext:    "com.github.osxfuse.filesystems.osxfusefs",
              pkgutil: [
                "com.github.osxfuse.pkg.Core",
                "com.github.osxfuse.pkg.MacFUSE",
                "com.github.osxfuse.pkg.PrefPane",
              ]

    caveats do
      <<-EOS
      after installing this cask a system reboot is required
      EOS
    end
  else
    puts "this cask is only compatible with macos"
  end
end
