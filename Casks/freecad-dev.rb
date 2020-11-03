cask "freecad-dev" do
  version "0.19-22894"
  sha256 "bf2195381b58272dac246c7dbbe89fdec7d378f853ed79bc41b3aae4f757fa04"

  url "https://github.com/FreeCAD/FreeCAD/releases/download/0.19_pre/FreeCAD_#{version}-macOS-x86_64-conda.dmg"
  # appcast "https://www.sweetscape.com/download/010editor/"
  appcast "https://github.com/freecad/freecad/releases"
  name "FreeCAD 0.19_pre"
  homepage "https://freecadweb.org"

  depends_on macos: ">= :sierra"

  # TODO: why is `app "FreeCAD_#{version}.app` causing install issues
  #
  # it appears the below `app` argument is causing issues
  # app "FreeCAD_#{version}.app"

  app "FreeCAD.app"

end
