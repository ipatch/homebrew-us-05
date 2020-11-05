cask "freecad-pre" do
  version "0.19_pre,22894"
  sha256 "a31643b9816e11ec30d36536ad7ac12cef26d92ed87a9823adeb256cd8a09173"

  # github.com/FreeCAD/FreeCAD was verified as official when first introduced to the cask
  url "https://github.com/FreeCAD/FreeCAD/releases/download/#{version.before_comma}/FreeCAD_#{version.major_minor.delete_suffix("_pre")}-#{version.after_comma}-macOS-x86_64-conda.dmg"
  appcast "https://github.com/freecad/freecad/releases.atom"
  name "FreeCAD"
  desc "3D parametric modeler"
  homepage "https://freecadweb.org/"

  depends_on macos: ">= :sierra"

  # Renamed to avoid conflict with other FreeCAD.app
  app "FreeCAD.app", target: "FreeCAD_pre.app"
end
