<div align="center">

## Building Inkscape for macOS ⌘

</div>

> The hitchhikers guide to building Inkscape for macOS by macOS


## Contents

<a id="contents"></a>

- [Installing Inkscape from prebuilt binaries](#install-inkscape-from-bins)
- [Building Inkscape from source](#build-inkscape-from-srouce)
  - [Building Inkscape from gitlab source using homebrew tooling](build-inkscape-from-gitlab-with-brew)
    - [**Updates** Inkscape Build Instructions](#updates-build-instructions)
      - [🤺 🚀 Building Inkscape using Ninja on macOS](#build-inkscape-using-ninja-on-macos)
- [Working with CMake on macOS](#working-with-cmake-on-macos)
- [Useful Links](#useful-links)
- [Working with `jhbuild`](#working-with-jhbuild)
  - [Building jhbuild](#building-jhbuild)
- [TODOs](#todos)
- [References](#references)

##

**Inkscape** is an open source vector editing app that pairs well with SVG graphics.

Inkscape is primarily [written](https://gitlab.com/inkscape/inkscape) in C++ ie. ~ 93% of the source code that comprises Inkscape is C++.

The Inkscape source does not supply any special macOS related files for building Inkscape on macOS, ie. Xcode project files etc, etc, so building Inkscape on macOS is tad bit more of an involved process than a typical GNU+Linux distro build.  That said, there are several options of installing Inkscape that do not require building the app from the above mentioned source.

<a id="install-inkscape-from-bins"></a>

## Installing Inkscape from prebuilt binaries

1. There is a **DMG** that contains a **Inkscape.app** that can be easily dragged n dropped into the **/Applications** folder on macOS. The DMG can downloaded from [here](https://inkscape.org/release/inkscape-0.92.2/mac-os-x/107/dmg/dl/)
2. Inkscape can be installed via a macOS package manager
  a. [macports](https://www.macports.org/)
  b. [Homebrew](https://brew.sh/)
3. There are instructions on the Inkscape website for installing Inkscape via one of the above listed package managers.
> Homebrew cask installs Inkscape by downloading and copying the above mentioned DMG into the Applications folder.

<a id="build-inkscape-from-srouce"></a>

## Building Inkscape from source [🔝](#contents)

The Inkscape website has various links for building / installing Inkscape from source for various systems, ie. macOS, Windows, and GNU+Linux.  That said, the instructions for installing Inkscape from source on macOS are scattered throughout the inkscape.com domain and an [accompying wiki](http://wiki.inkscape.org)

The Inkscape developers have migrated from GNU Autotools to [CMake](https://cmake.org/) which can be used to aid in building process macOS.

I believe there are some legacy instructions floating around that detail steps for building Inkscape using Autotools, however there is no official support for building Inkscape with Autotools.

<a id="build-inkscape-from-gitlab-with-brew"></a>

### Building Inkscape from gitlab source using homebrew infrastructure [🔝](#contents)

> This procedure uses the infrastructure provided by [homebrew](brew.sh) to construct a inkscape binary.

The following dependencies are required in order to build Inkscape, all of which can be installed via Homebrew

<details>
<summary><strong>dependencies</strong></summary>

- adwaita-icon-theme
- boehmgc
- boost
- cairo
- cmake
- double-conversion _Recent req as of April 11th 2019_
- gdl3
- [gtkmm3](https://www.gtkmm.org/en/)
- gsl
- gtk-mac-integration
- icu4c _Recent req as of April 25, 2019_
- intltool
- lcms2
- libsoup
- libwpg _Recent req as of March 15th 2019_
- libxslt
- poppler
- potrace _converts raster images into vector_

</details>

A way to determine if one of the above packages has been installed is to run

```shell
brew info [NAME_OF_PACKAGE]
```

To install all dependencies required for Inkscape using brew,

<details>
<summary><code>brew install [PACKAGES]</code></summary>

```shell
brew install \
adwaita-icon-theme \
boehmgc \
boost \
cairo \
cmake \
gsl \
gdl \
gtkmm3 \
gtk-mac-integration \
icu4c \
intltool \
lcms2 \
libxslt \
poppler \
potrace \
libsoup
```

</details>

#### Updates | January 2020

<a name="updates-build-instructions"></a>

<details>
<summary>💡 <strong>speeding up build process</strong></summary>

**ccache** is an alternate compiler that can be used to speed up subsequent rebuilds without having to rebuild the entire source of the project. Quickest way to get started with **ccache** is set the `CC` and `CXX` environment variables

```shell
export CC="/usr/local/opt/ccache/libexec/cc"
export CXX="/usr/local/opt/ccache/libexec/c++"
```

> **optional** set the `CCACHE_DIR` to a specific path to isolate cache files specific to inkscape

```shell
export CCACHE_DIR="$HOME/.ccache/inkscape"
```

</details>

```shell
export PKG_CONFIG_PATH=\
"/usr/local/opt/libffi/lib/pkgconfig;\
/usr/local/opt/atk/lib/pkgconfig;\
/usr/local/opt/icu4c/lib/pkgconfig;\
/usr/local/opt/cairomm/lib/pkgconfig;\
/usr/local/opt/poppler/lib/pkgconfig;\
/usr/local/opt/cairomm@1.14/lib/pkgconfig;\
/usr/local/opt/pangomm/lib/pkgconfig;\
/usr/local/opt/pangomm@2.42/lib/pkgconfig;\
/usr/local/opt/atkmm/lib/pkgconfig;\
/usr/local/opt/atkmm@2.28/lib/pkgconfig;"
```

```shell
git clone --depth=1 --recurse-submodules https://gitlab.com/inkscape/inkscape.git;  # clone inkscape source and submodules
git co -b build-branch; # create a new branch for building
export LIBPREFIX="/usr/local"; # set a env var where the build tools will look for required compile time libraries
export LIBRARY_PATH="/usr/local/opt/gsl/lib"; # linking will fail without being set
export PATH="$LIBPREFIX/bin:/usr/bin:/bin:/usr/sbin:/sbin"; # append $LIBPREFIX to the front of the $PATH
export PREFIX="/opt/beta/inkscape/autotools"; # specify install directory for inkscape
mkdir -p build/autotools; cd build/autotools; # construct a build directory for creating intermediate build file
cmake \
-DCMAKE_PREFIX_PATH="$LIBPREFIX" \
-DCMAKE_INSTALL_PREFIX="$PREFIX" \
-DWITH_OPENMP=OFF \
../..; # configure CMake to build inkscape

../../po/generate_POTFILES.sh; # update potfiles

make; # Compile / Build with CMake+Xcode, then install inkscape into the prefix
make install;
```

[lnk1]: <https://gitlab.com/inkscape/inkscape/commit/50f63d05be34c63fad22b5c7ced9dae2b2611cca>

<a id="build-inkscape-using-ninja-on-macos"></a>

##### 🚨 _OUTDATED_ 🤺 🚀 Building Inkscape using Ninja on macOS

> see above autotools installation for updated build instructions

<a id="gotchas"></a>

###### Gotchas

- If any of the above Homebrew formula have been updated after inkscape has been compiled, then more than likely inkscape will require recompilation for the fact that it was built against a different version of a dependency.
- If CMake whines about not finding Boost configuration files, than **gettext** may not be symlinked, thus making CMake unable to find required Boost libraries for building inkscape.

```shell
brew unlink gettext && brew link --force gettext
```

To build using ninja instead of the native clang tooling provided by Xcode

```shell
mkdir -p build/ninja && cd build/ninja

export LIBPREFIX="/usr/local" # set a env var where the build tools will look for required compile time libraries
export PATH="$LIBPREFIX/bin:/usr/bin:/bin:/usr/sbin:/sbin" # append $LIBPREFIX to the front of the $PATH
export PREFIX="/opt/beta/inkscape/cli/ninja" # specify install directory for inkscape
export PKG_CONFIG_PATH="/usr/local/opt/libffi/lib/pkgconfig:/usr/local/opt/atk/lib/pkgconfig:/usr/local/opt/icu4c/lib/pkgconfig:/usr/local/opt/libsigc++@2/lib/pkgconfig"

echo "❗️ before running the below command be sure to remove all files within the `$INKSCAPE_SRC/build/ninja`, having files within that directory can cause complications with future builds"

cmake \
-DCMAKE_PREFIX_PATH="$LIBPREFIX" \
-DCMAKE_INSTALL_PREFIX="$PREFIX" \
-DWITH_OPENMP=OFF \
-G Ninja \
../.. # configure CMake to build with ninja

../../po/generate_POTFILES.sh # generate po file required for building
ninja inkscape_pot # required for building with ninja

ninja # compile / build Inkscape source using ninja
ninja install # install CMake into $PREFIX
```

The above steps will take ~ 30 minutes [📸](#gnu-make-build-time) using CMake+clang on my 2013 late MBP 💻 whereas CMake+ninja will take ~ 8 minutes to produce a binary that can launch a build from the master branch via a CLI.

<a id="inkscape-setting-up-extensions"></a>

#### Inkscape > Setting Up Extensions

A majority if not all builtin Inkscape extensions are python scripts that correspond with an accompying XML file that defines the context of the python script / extension.

All that said, since the python scripts work in harmony with a corresponding XML file, it would behoove one to install an XML library that allows python to work with XML.  And doesn't hurt installing **numpy** as well. To get all that going and possibly get extensions running inside of Inkscape. [See](https://gitlab.com/inkscape/extensions/issues/71) gitlab issue for a recent discussion of getting python dependencies met.

1. determine which python interpreter the `.py` script will reference.
> for my particular use case I'm using python 3.7.x
  a. exit out of python **REPL**
  b. verify the python in the **PATH** matches the version in the **REPL**
2. install **lxml** & **numpy** using **pip** for the python interpreter
3. rerun plugin to determine if dependencies have been met. (inkscape may require a restart after installing dependencies).

```shell
echo "step #1"
/usr/bin/env python
echo "step #1.a | run below command within the python REPL"
exit()
echo "step #1.b"
which python
echo "step #2"
python -m pip install lxml numpy
echo "step 3 is performed within inkscape
```

##### Inkscape > Setting Up Extensions > Useful Links

[**wiki.inkscape.org** Extensions](http://wiki.inkscape.org/wiki/index.php/Extension_Interpreters)

<a id="limitations-of-the-build"></a>

#### Limitations of the build

##### Updates > March 26, 2019

It appears with recent GTK+ packages, that open, document, and application dialogs open as should, ie. within their independent window of the main application window and **not** within a tab of the main application window. 👍

~~ Windowing on a homebrew build is jacked, ie. some of the windows that should spawn a dialog window, ie. **File** > **Open** are launched in a [📸](#macos-windowing-issues) tab instead of a independent application window.  However the **About** dialog / window appears to spawn [📸](inkscape-1-gui-about-on-macos) as it should~~

<a id="working-with-gtk-on-macos"></a>

## Working with GTK on macOS

<a id="working-with-cmake-on-macos"></a>

## Working with CMake on macOS

> **CMake** is a build system generator, not a build system.

### Unsorted

Some useful **cmake** commands and flags

To list all flags available to **cmake**

```shell
cmake -LAH
```

```shell
-DCMAKE_BUILD_TYPE=Release
```

Some useful **cpack** commands

```shell
cpack --debug --verbose
cpack -G productbuild -V
```

On macOS a dynamic library has a `.dylib` ext, and a static library has a `.a` or `.ib`.

```shell
CMAKE_LIBRARY_OUTPUT_DIRECTORY # shared library path for .dll and .so
LIBRARY_OUTPUT_PATH            # shared library path for .dll and .so
CMAKE_ARCHIVE_OUTPUT_DIRECTORY # static library path for .a and .lib
ARCHIVE_OUTPUT_PATH # static library path for .a and .lib
```

Link library file after adding an executable when writing a **CMakeLists.tx** file.

```conf
add_library(cmake_shared_lib SHARED lib/shared/cmake_lib.cpp)
add_executable(cmake_hello main.cpp)
target_link_libraries(cmake_hello cmake_shared_lib)
```

### CMake > codesigning on macOS

To code sign a macOS app build around CMake tooling first create a certificate using Xcode.  From my personal experience the easiest way to setup a Developer account that works with Xcode and Apple's code signing is create an account at [developer.apple.com](http://developer.apple.com)  After an account has been created then create a _dummy_ macOS application, and Xcode will generate a certificate on the local machine running Xcode asosciated with the account that was created at developer.apple.com.  Building the _dummy_ app may be required to complete the certificate generation process on macOS.

To print a list of Developer IDs from a CLI

```shell
security find-identity -v -p codesigning
```

To codesign a binary on macOS

```shell
codesign -s "certificate name" /path/to/MrFancy42.app/Contents/MacOS/*
```

### CMake > References

**Wireshark** build process for generating macOS **.app** bundles appears to not use the native CMake build tools for generating an **.app** bundle but rather relying on custom shell scripts for constructing the **.app** bundle

### CMake > References > CLI

To specify a **build** and **source** path for CMake from a CLI.

```shell
cmake -B/path/to/src/build -H/path/to/src
```

<a id="understanding-app-bundles"></a>

## Understating app bundles for macOS

To put together a DMG

```shell
hdiutil create -format UDBZ -srcfolder [EXAMPLE.app] \
-volname [EXAMPLE-osx-x64] [EXAMPLE-1.0.x-osx-x64.dmg]
```

[see](https://dev.deluge-torrent.org/wiki/Development/Packaging/OSX)

### An example of an app bundle

```shell
./MrFancy42.app
./MrFancy42.app/Contents/ # everything is in the `Contents` dir
./MrFancy42.app/Contents/Info.plist
./MrFancy42.app/Contents/PkgInfo
./MrFancy42.app/Contents/MacOS/
./MrFancy42.app/Contents/MacOS/MrFancy42 # EXE
./MrFancy42.app/Contents/MacOS/lib
./MrFancy42.app/Contents/MacOS/lib/*.dylib
./MrFancy42.app/Contents/icon.icns # app icon
./MrFancy42.app/Contents/document.icns # file icon
```

### Known keys

An **Info.plist** for an app bundle on macOS can contain the below key for specify the binary to launch.

<strong>CFBundleExecutable</strong>

```xml
<key>CFBundleExecutable</key>
<string>app-bunlde</string>
```

<a id="useful-links">

## Useful Links [🔝](#contents)

### Inkscape > Source

- [**GitLab** > Inkscape](https://gitlab.com/inkscape/inkscape)

### Inkscape > Source > Legacy

- [**launchpad.net** > Inkscape](https://launchpad.net/inkscape)

### Inkscape

- [**inkscape.com** > Getting Started with Inkscape Development](https://inkscape.org/develop/getting-started/#building-inkscape-mac)
- [**inkscape.com** > Homebrew](https://inkscape.org/release/inkscape-0.92.2/mac-os-x/homebrew/dl/)

#### wiki.inkscape.org

- [**wiki.inkscape.org** > Compiling macOS](http://wiki.inkscape.org/wiki/index.php/CompilingMacOsX)
- [**wiki.inkscape.org** > Compiling Inkscape](http://wiki.inkscape.org/wiki/index.php/Compiling_Inkscape)
- [**wiki.inkscape.org** > Creating Inkscape distributions](http://wiki.inkscape.org/wiki/index.php/Creating_Inkscape_distributions)
- [**wiki.inkscape.org** > Tracking Dependencies](http://wiki.inkscape.org/wiki/index.php/Tracking_Dependencies)

### GitLab > Inkscape > macOS

- [**gitlab.com** > osx-build.sh](https://gitlab.com/inkscape/inkscape/blob/inkscape.dev_osx-packaging-update/packaging/macosx/osx-build.sh)
- [**gitlab.com** > osx-app.sh](https://gitlab.com/inkscape/inkscape/blob/inkscape.dev_osx-packaging-update/packaging/macosx/osx-app.sh)
- [**gitlab.com** > Inkscape source > macos packaging](https://gitlab.com/inkscape/inkscape/tree/inkscape.dev_osx-packaging-update/packaging/macosx)
- [**gitlab.com** > issue > macOS build](https://gitlab.com/inkscape/vectors/general/issues/49)

### GitHub

- [**github.com** > GTK Mac Bundler](https://github.com/GNOME/gtk-mac-bundler)
- [**github.com** > valerioa/Inkscape-MacOS-Curated-Build](https://github.com/valerioa/Inkscape-MacOS-Curated-Build) _autotools_
- [**github.com** > Homebrew/hombrew-cask > inkscape.rb](https://github.com/Homebrew/homebrew-cask/blob/master/Casks/inkscape.rb)
- [**github.com** > caskformula/homebrew-caskformula > inkscape.rb](https://github.com/caskformula/homebrew-caskformula/blob/master/Formula/inkscape.rb)

### The GTK+ Project

- [**gtk.org** > Download for Mac OS X](https://www.gtk.org/download/macos.php)
- [**wiki.gnome.org** > GTK > OSX Integration](https://wiki.gnome.org/Projects/GTK/OSX/Integration)

<a id="working-with-jhbuild"></a>

## Working with `jhbuild` [🔝](#contents)

> I went down a **jhbuild** rabbit 🐇 hole thinking it would be an ideal way for managing the build infrastructure on macOS ...I 🙅‍♂️ was wrong 

<details>
<summary>Notes from working with jhbuild</summary>

<a id="building-jhbuild"></a>

#### Building `jhbuild`

```shell
cd jhbuild
./autogen.sh --simple-install
make
make install
```

Important **jhbuild** files

**.jhbuildrc**
**.jhbuildrc-custom**

the **id** XML attribute in the [app].modules file should match the name of the modules file itself, ie.

if the wrong file is downloading running `jhbuild build [APP]` ie. an HTML file or something **gzip** can not extract, then the offending file will have to be manually removed.

**inkscape.modules** file should have a `<cmake id="inkscape">` within the **inkscape.modules** file.

#### Useful jhbuild commands

To run an app through **jhbuild**

```shell
jhbuild run gtk4-demo
```

To resume a _jhbuild_ session

```shell
jhbuild build gtk+ --start-at=MODULE_TO_RESUME
```

When a build fails using **jhbuild** ...and it will (trust me)

```shell
jhbuild clean inkscape
```

#### Working with jhbuilder > gtk-osx

Make certain to edit ~/.jhbuildrc-custom before running

```shell
jhbuild bootstrap
```

#### Useful Links

##### GNOME > wiki

- 👍 _Arguably best resource for working with jhbuild_ [**wiki.gnome.org** > Building GTK-OSX](https://wiki.gnome.org/Projects/GTK/OSX/Building)
- [**wiki.gnome.org** > Gtk+ and Python](https://wiki.gnome.org/Projects/GTK/OSX/Python)
- [**wiki.gnome.org** > jhbuild on Mac OS X _legacy setup_](https://wiki.gnome.org/Projects/Jhbuild/Mac_OS)
- [**wiki.gnome.org** > Bundling](https://wiki.gnome.org/Projects/GTK/OSX/Bundling)
- [**wiki.gnome.org** > Gtk-mac-integration/GtkOSXApplication](https://wiki.gnome.org/Projects/GTK/OSX/Integration)

##### GitLab > GNOME

- [**gitlab.gnome.org** > gtk-osx > GNOME jhbuilder modified for macOS source](https://gitlab.gnome.org/GNOME/gtk-osx/)
- [**gitlab.gnome.org** > gtk-mac-bundler](https://gitlab.gnome.org/GNOME/gtk-mac-bundler)
- [**gitlab.gnome.org** > jhbuild > source](https://gitlab.gnome.org/GNOME/jhbuild)

##### GNOME > developer

- [**developer.gnome.org** > jhbuild > Getting Started](https://developer.gnome.org/jhbuild/3.12/getting-started.html.en)
- [**developer.gnome.org** > jhbuild > Configuration File Reference](https://developer.gnome.org/jhbuild/unstable/config-reference.html.en)

##### sourceforge

- [**sourceforge.net** > GTK+ Mac OS X > Mailing Lists](https://sourceforge.net/p/gtk-osx/mailman/)

##### archlinux

- [**wiki.archlinux.org** > JHBuild](https://wiki.archlinux.org/index.php/JHBuild)

</details>

<a id="todos"></a>

## TODOs [🔝](#contents)

**Update** | with recent packaging updates for GTK related packages, dialogs and windows appear to be opening a typical user would expect, and not with a _tab_ 👍

- [ ] construct an **Inkscape.app** bundle using CMake and friends.
  
### TODOS > Useful Links > app bundling on macOS

- [gitlab.gnome.org](https://gitlab.gnome.org/GNOME/gedit/blob/master/osx/bundle/bundle)

- [ ] spend some time researching about file open dialog boxes

### TODOS > Useful Links > file open dialogs

- [**gitlab.gnome.org** > gtk-mac-integration](https://gitlab.gnome.org/GNOME/gtk-mac-integration/)
- [**github.io** > gtk-mac-integration > gtkosxapplication > documentation](https://jralls.github.io/gtk-mac-integration/index.html)
- [**stackoverflow** > gtk > native file dialog on macOS](https://stackoverflow.com/questions/33341914/gtk-file-chooser-non-native-look-on-osx)
- [**gitlab.com** > gedit > macOS related src > gedit-dirs.c](https://gitlab.gnome.org/GNOME/gedit/blob/master/gedit/gedit-dirs.c)

- [ ] spend some time messing around with [GTKOSXApplication](https://wiki.gnome.org/Projects/GTK/OSX/Integration) menubar integration
  - [ ] CMake > figure out how to add a build flag for CMake
  - [ ] CMake > figure out how to add a build time dependency if a flag is passed to CMake
- [x] ~~build a visual dependency graph of Inkscape~~ [**see** 📸](#inkscape-dependency-graph-example)
- [ ] construct a feasible solution to run `make install` without ~~`sudo make install`~~ current issue [📸](#cmake-permission-issues)
- [x] Experiment and benchmark different build systems, ie. ~~Xcode+CMake~~ [📸](#inkscape-release-build-time-feb28-native-tooling), and ~~CMake+ninja~~ [📸](#inkscape-release-build-time-mar1-ninja-tooling)

<a id="references"></a>

## References

<a id="gnu-make-build-time"></a>

![gnu-make-build-time][reflnk1]

[reflnk1]: <https://i.imgur.com/v4zAENc.png> "Inkscape build time on MBP 2013">

<a id="my-custom-build-messages"></a>

![my-custom-build-messages](https://i.imgur.com/z5qVFVU.png "🙋‍♂️ my custom build messages")

<a id="app-bundling-messages"></a>

![app-bundling-messages](https://i.imgur.com/MsfWxtR.png "CMake app bundling messages")

<a id="cmake-permission-issues"></a>

![cmake-permission-issues-macos](https://i.imgur.com/6SNMmG8.png "CMake permission issues on macOS")

<a id="inkscape-1-gui-on-macos"></a>

![inkscape-1.0.x-gui-on-macOS](https://i.imgur.com/zX1yx5q.png)

<a id="inkscape-1-gui-about-on-macos"></a>

![inkscape 1 alpha about window on macOS](https://i.imgur.com/sRwjPEz.png "inkscape 1 alpha about window on macOS")

<a id="launching-inkscape-from-cli"></a>

![launching inkscape from a CLI on macOS](https://i.imgur.com/nvuCBPn.png)

<a id="macos-windowing-issues"></a>

![macos windowing issues](https://i.imgur.com/oAU0pND.png)

<a id="inkscape-dependency-graph-example"></a>

![inkscape dependency graph](https://i.imgur.com/tUfaYqu.png)

<a id="inkscape-release-build-time-feb28-native-tooling"></a>

![inkscape release build time Feb 28 2019 native tooling](https://i.imgur.com/nfD307P.png)

<a id="inkscape-release-build-time-mar1-ninja-tooling"></a>

![inkscape release build time March 1, 2019 ninja tooling](https://i.imgur.com/MpBvUmR.png)

## / troubleshooting/tshoot / build/runtime errors

<a name="tshoot-build-run-errors"></a>

- **error**

```
ld: library not found for gc
```

- **answer**, remove all the cmake build cache files within the `build` dir

---

- **error**

```
Unable to revert mtime: /Library/Fonts  
```

- **answer**, open and close inkscape after successful build/install, error should go away after a relaunch of app


##
