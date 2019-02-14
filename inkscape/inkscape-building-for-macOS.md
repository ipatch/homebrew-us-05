<div align="center">

# Building Inkscape for macOS ⌘

</div>

> The hitchhikers guide to building Inkscape on macOS for macOS

**Inkscape** is an open source vector editing app that pairs well with SVG graphics.

Inkscape is primarily [written](https://gitlab.com/inkscape/inkscape) in C++ ie. ~ 93% of the source code that comprises Inkscape is C++. 

The Inkscape source does not supply any special macOS related files for building Inkscape on macOS, ie. Xcode project files etc, etc, so building Inkscape on macOS is tad bit more of an involved process than a typical GNU+Linux distro build.  That said, there are several options of installing Inkscape that do not require building the app from the above mentioned source.

## Installing Inkscape from prebuilt binaries

1. There is a **DMG** that contains a **Inkscape.app** that can be easily dragged n dropped into the **/Applications** folder on macOS. The DMG can downloaded from [here](https://inkscape.org/release/inkscape-0.92.2/mac-os-x/107/dmg/dl/)
2. Inkscape can be installed via a macOS package manager
  - [macports](https://www.macports.org/)
  - [Homebrew](https://brew.sh/)
3. There are instructions on the Inkscape website for installing Inkscape via one of the above listed package managers.
> Homebrew cask installs Inkscape by downloading and copying the above mentioned DMG into the Applications folder.

## Building Inkscape from source

The Inkscape website has various links for building / installing Inkscape from source for various systems, ie. macOS, Windows, and GNU+Linux.  That said, the instructions for installing Inkscape from source on macOS are scattered throughout the inkscape.com domain and an [accompying wiki](wiki.inkscape.org)

The Inkscape developers have migrated from GNU Autotools to [CMake](https://cmake.org/) which can be used to aid in building process macOS.

I believe there are some legacy instructions floating around that detail steps for building Inkscape using Autotools, however there is no official support for building Inkscape with Autotools.

### Building Inkscape from gitlab source using homebrew infrastructure

> This procedure uses the infrastructure provided by [homebrew](brew.sh) to construct a inkscape binary.

The following dependencies are required in order to build Inkscape, all of which can be installed via Homebrew

- cmake
- cairo
- boehmgc
- intltool
- libxslt
- lcms2
- boost
- poppler
- gsl
- adwaita-icon-theme
- gdl3
- gtkmm3
- libsoup

A way to determine if one of the above packages has been installed is to run

```shell
brew info [NAME_OF_PACKAGE]
```

```shell
# set a env var where the build tools will look for required compile time libraries
LIBPREFIX="/usr/local"
# append $LIBPREFIX to the front of the $PATH
PATH="$LIBPREFIX/bin:/usr/bin:/bin:/usr/sbin:/sbin"
# specify install directory for inkscape
PREFIX="/opt/beta/inkscape"
# construct a build directory for creating intermediate build files
mkdir build; cd build;
# configure CMake to build inkscape
cmake \
-DCMAKE_PREFIX_PATH="$LIBPREFIX" \
-DCMAKE_INSTALL_PREFIX="$PREFIX" \
-DWITH_OPENMP=OFF \
..
# Compile / Build, then install inkscape into the prefix
make
make install
```

The above steps will produce a binary that can launch a beta build from a CLI.

## Working with CMake on macOS

To code sign a macOS app build around CMake tooling first create a certificate using Xcode.  From my personal experience the easiest way to setup a Developer account that works with Xcode and Apple's code signing is create an account at [developer.apple.com](http://developer.apple.com)  After an account has been created then create a _dummy_ macOS application, and Xcode will generate a certificate on the local machine running Xcode asosciated with the account that was created at developer.apple.com.  Building the _dummy_ app may be required to complete the certificate generation process on macOS.

To print a list of Developer IDs from a CLI

```shell
security find-identity -v -p codesigning
```

## Useful Links

### Inkscape > Source

- [**GitLab** > Inkscape](https://gitlab.com/inkscape/inkscape)

### Inkscape > Source > Legacy

- [**launchpad.net** > Inkscape](https://launchpad.net/inkscape)

### Inkscape

- [**inkscape.com** > Getting Started with Inkscape Development](https://inkscape.org/develop/getting-started/#building-inkscape-mac)
- [**inkscape.com** > Homebrew](https://inkscape.org/release/inkscape-0.92.2/mac-os-x/homebrew/dl/)

#### wiki.inkscape.org

- [**wiki.inkscape.org** > Compiling MacOS X](http://wiki.inkscape.org/wiki/index.php/CompilingMacOsX)
- [**wiki.inkscape.org** > Compiling Inkscape](http://wiki.inkscape.org/wiki/index.php/Compiling_Inkscape)
- [**wiki.inkscape.org** > Creating Inkscape distributions](http://wiki.inkscape.org/wiki/index.php/Creating_Inkscape_distributions)
- [**wiki.inkscape.org** > Tracking Dependencies](http://wiki.inkscape.org/wiki/index.php/Tracking_Dependencies)

### GitLab > Inkscape > macOS

- [**gitlab.com** > osx-build.sh](https://gitlab.com/inkscape/inkscape/blob/inkscape.dev_osx-packaging-update/packaging/macosx/osx-build.sh)
- [**gitlab.com** > osx-app.sh](https://gitlab.com/inkscape/inkscape/blob/inkscape.dev_osx-packaging-update/packaging/macosx/osx-app.sh)
- [**gitlab.com** > Inkscape source > macos packaging](https://gitlab.com/inkscape/inkscape/tree/inkscape.dev_osx-packaging-update/packaging/macosx)

### GitHub

- [**github.com** > GTK Mac Bundler](https://github.com/GNOME/gtk-mac-bundler)
- [**github.com** > valerioa/Inkscape-MacOS-Curated-Build](https://github.com/valerioa/Inkscape-MacOS-Curated-Build) _autotools_
- [**github.com** > Homebrew/hombrew-cask > inkscape.rb](https://github.com/Homebrew/homebrew-cask/blob/master/Casks/inkscape.rb)
- [**github.com** > caskformula/homebrew-caskformula > inkscape.rb](https://github.com/caskformula/homebrew-caskformula/blob/master/Formula/inkscape.rb)

### The GTK+ Project

- [**gtk.org** > Download for Mac OS X](https://www.gtk.org/download/macos.php)


### Working with `jhbuild`

> I went down a **jhbuild** rabbit 🐇 hole thinking it would be an ideal way for managing the build infrastructure on macOS ...I 🙅‍♂️ was wrong 

<details>
<summary>Notes from working with jhbuild</summary>

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

## Working with CMake

### References > CMake

**Wireshark** build process for generating macOS **.app** bundles appears to not use the native CMake build tools for generating an **.app** bundle rather relying on custom shell scripts for contsructing the **.app** bundle

## TODOs

- [ ] build a visual dependency graph of Inkscape preferably using [GraphViz](https://graphviz.org/) _see arch wiki_



