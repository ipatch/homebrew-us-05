## Contents 📖

<a id="contents"></a>

- [Installing a formula](#installing-a-formula)
- [Working with OpenSSH _from this tap_](#working-with-openssh)
  - [working with openssh / todos](#working-with-openssh-todos)
- [Working with osxfuse](#working-with-osxfuse)
- [Working with fuse-ext2](#working-with-fuse-ext2)
- [Working with QEMU](#working-with-qemu)
- [Gotchas](#gotchas)
- [Maintenance](#maintenance)
- [Miscellanous](#misc)
- [Development](#development)
  - [development / casks](#development-casks)
    - [development / cask / freecad](#development-cask-freecad)
  - [development / freecad](#development-freecad)
  - [development / freecad / tshoot](#development-freecad-troubleshooting)
  - [References](#references)
- [TODOs](#todos)


## ipatch/homebrew-us-05

<a id="ipatch-homebrew-us-05"></a>

> An off beat repo for storing custom ↑ ales and lagers ↓ to make your life a little b1t easier.

## Installing a formula

<a id="installing-a-formula"></a>

To install formula from this repo

```shell
brew tap ipatch/homebrew-us-05
brew install ipatch/homebrew-us-05/[name-of-formula] [--with-options]
```

<strong>Example</strong>

```shell
brew install ipatch/us-05/openssh --verbose --build-from-source --with-ldns
```

To upgrade a formula that has been installed via this tap

```shell
brew reinstall ipatch/us-05/[name-of-formula] --verbose --build-from-source
```

## Working with OpenSSH _from this repo_

<a id="working-with-openssh"></a>

When installing OpenSSH from this repo _LibreSSL_ install from **tarball** and not git source ~~**head**~~

When upgrading or install OpenSSH from this repo, a few files will need to have their permissions changed.

```shell
cd /usr/local/etc/ssh
sudo chown root:wheel *_key
sudo chmod 600 *_key
```

### TODOs / openssh

<a id="working-with-openssh-todos"></a>

- [ ] change permissions, owner, and group of above mentioned files when installing formula.

> If LibreSSL has been updated from mainline Homebrew, ie. upgrading from v2.7.x to v2.8.x then this version of OpenSSH will need to be reinstalled from this tap.

## Working with osxfuse

<a id="working-with-osxfuse">

The last version of osxfuse that has a completely open source license and is not a prebuilt binary without accompanying source i believe is version 3.8.3, per [this github issue][fl1]


I recently reinstalled **osxfuse** so i could have write support for NTFS file systems without having to spin up a virtual machine for write purposes. I created a cask based formula file within this repo to store the last open source version of **osxfuse** as mentioned above.

For getting write support to NTFS file systems after installing `ntfs-3g` using brew, [**reference**][fl2]

```shell
sudo mv /sbin/mount_ntfs /sbin/mount_ntfs.apl
sudo ln -s /usr/local/sbin/mount_ntfs /sbin/mount_ntfs
```

[fl1]: <https://github.com/osxfuse/osxfuse/issues/616>
[fl2]: <https://medium.com/macoclock/enabling-ntfs-write-in-macos-10-15-catalina-the-open-source-way-a5fd0d1cb32e>


## Working with fuse-ext2

<a id="working-with-fuse-ext2"></a>

- **fuse-ext2** is a program that allows working with ext-{2,3,4} file systems on macOS, and provides both **read** and **write** support.

To install **fuse-ext2** from this repo using homebrew

```shell
brew tap ipatch/homebrew-us-05
brew install ipatch/homebrew-us-05/fuse-ext2 --verbose
```

> As of September 17, 2018, **e2fsprogs** needs to be unlinked after installing **fuse-ext2**

To manually unlink **e2fsprogs**

```shell
brew unlink e2fsprogs
```

To manually link **fuse-ext2**

```shell
brew link fuse-ext2
```

## Working with Qemu

<a id="working-with-qemu"></a>

To install Qemu from this homebrew 🍺 repo

```shell
brew install ipatch/homebrew-us-05/qemu \
--verbose \
--with-docs \
--with-libusb \
--with-hvf \
--with-hax \
--HEAD
```

## Gotchas

<a id="gotchas"></a>

If a formula is installed from this repo ie. **qemu** with options, passed to the `install` command, ie. `--with-hax` homebrew has issues running the **reinstall** command even with the `--build-from-source` flag. To work around this, run `brew remove [name-of-formula]` to uninstall the package, and then reinstall the package with the flags provided form the previous install.

## Maintenance

<a id="maintenance"></a>

To pull down updates from this tap from time to time or when an upstream change has been made

```shell
brew update
```

## Miscellanous

<a id="misc"></a>

Installing [universal ctags](http://ctags.io) requires its own work around, [learn more](https://github.com/universal-ctags/homebrew-universal-ctags/issues/23#issuecomment-583781848)


## Development

<a id="development"></a>

When working with formula locally for debugging purposes specify a path to a local formula so it can be tested locally.

```shell
brew [re]install /path/to/some/local_formula.rb
```

> 💡 set the following env var **$HOMEBREW_NO_AUTO_UPDATE** to **1** preventing mac homebrew from auto updating everytime a `brew install` cmd is run, thus greatly speeding up the process of local formula development.
>
> ❗️`brew reinstall` is problematic a majority of the time, so when experimenting with local formula when developing use `brew install [/path/to/formula.rb]`
>
> 🚨 recently i've had difficulty installing a formula that has a similar name with that of a formula from a installed tap, ie. installing `freecad.rb` locally was resulting in conflicts of sorts, so created a unique name, ie. `freecad-dev.rb` and am able to install  & test formula file locally without doing the, _git add, commit, push brew update, brew install routine_.  the above mentioned _brew [re]install_ cmd is all that is required
>
> 🚨 if there are any sytnax errors within the formula file the brew cmd will fail with a shitty error message, ie. not letting the user (developer) know the formula file contains a error mesage (more than likely a _syntax error_) but rather complains it cannot find the specified formula.

### Development / cask

<a id="development-casks"></a>

- development of cask(s) formula files will live within, `/usr/local/Homebrew/Library/Taps/homebrew/homebrew-cask`, path may vary depending upon how homebrew is installed and the current OS that homebrew is running on.
- development of cask(s) formula files that represent app bundles that are considered development, beta, or unstable releases live within `/usr/local/Homebrew/Library/Taps/homebrew/homebrew-cask-versions`

Before submitting a PR for a cask _upstream_ run through the below check

```shell
brew cask audit --download {{cask_file}}
brew cask style --fix {{cask_file}}
brew cask (re)install {{cask_file}}
brew cask uninstall {{cask_file}}
```

- [github.com ## Getting set up to contribute][cl1]
- [homebrew-cask / docs / adding_a_cask.md][cl2]

[cl1]: <https://github.com/Homebrew/homebrew-cask/blob/master/CONTRIBUTING.md#getting-set-up-to-contribute>
[cl2]: <https://github.com/Homebrew/homebrew-cask/blob/master/doc/development/adding_a_cask.md>

#### Development / cask / freecad

<a id="development-cask-freecad"></a>

- renamed the freecad cask within this repo _(homebrew tap)_ to not conflict with either the hombrew-cask-versions, `freecad-pre`, to have a cask specific to this tap, `freecad-ipre`, prepended an `i` to the cask name in reference to my github username.

- github / @kapcake created a cask.formula for freecad pre release, but appears to not have been updated in ~ a year. [learn more](https://github.com/Homebrew/homebrew-cask/blob/e141c13bfdb4818c1833afb6522b61b1f1897a25/Casks/freecad.rb)

### development / freecad

<a id="development-freecad"></a>

to see notes about adding QML & qt quick to to freecad ui/ux, [learn more][freecadux1]

[freecadux1]: <https://github.com/ipatch/homebrew-us-05/tree/dev/freecad#freecad-building-better-ui-ux>

**TL;DR** 

> the **freecad-dev** formula file successfully installs on my local 10.14 mojave box

I was able to build freecad from commit f35d30bc on the master branch using brew and a hacked together formula, and posted it about on the freecad [forum][mythread], and ran into some issues with incrementing the _build revisison number_ which i later found out is related to shallow clones. ~~at some point, something changed on my system, ie. macos 10.13.6 (17G14042), i did perform the 10.13 upgrades a few days ago from writing this, so not sure if the upgrade is the culpret for my failing brew builds.~~

I've also been sucessful in building freecad on mojave using the git source without using a formula file while still using mac homebrew dependencies.

[mythread]: <https://forum.freecadweb.org/viewtopic.php?f=4&t=51981>

### development / freecad / troubleshooting

<a id="development-freecad-troubleshooting"></a>

#### issues related to finding boost header files

```
shared_ptr.hpp
```

try the following homebrew commands

```
brew unlink boost && brew link boost
brew unlink boost-python3 && brew link boost-python3
```

---

✅ **Solved** Both the homebrew-freecad tap and the homebrew-core version of pyside can not be installed at the same time or else the **Draft** and or **Arch** workbench will not load as described below. The work around is make sure the version of pyside provided by homebrew-core is not installed.

recently i've run into the below [**issue**][myfcgist.issue.pyside] when launching freecad where i **can not** use / switch to a workbench such as the _draft workbench_.  The output seems to be related to **pyside**, and note there are multiple brew packages related to **pyside**, there's an official **pyside** pkg, and then the official freecad brew tap has two other pyside pkgs that freecad depends on.  It appears the _shiboken2_ directly relates to the **pyside** pkg as well, FWIW.

[myfcgist.issue.pyside]: <https://gist.github.com/ipatch/6116824ab1f2a99b526cb07e43317b91#gistcomment-3571401>

##### solution, pyside issue with importing deps

long story short, i've been running into issues launching freecad from an arbitrary directory, ie. running `FreeCAD` from within my `$HOME` dir and the above issuses will be printed out to the terminal. i believe this issue is related to the way FreeCAD is setting up it's `PATH`. so in the interm launch `FreeCAD` within `/usr/local/opt/freecad/bin`

#### cmake related

<a id="cmake-related"></a>

to show a list of configuration settings

```shell
cd ./build; cmake -L ..
```

apparently explicitly setting `CC` and `CXX` env vars in `.cmake` files can lead to [complications][so1], the preferred way to set a specific `CC` & `CXX` compiler is to use env vars `export CC=/path/to/c-compiler` before running `cd ./build; cmake ..`

[so1]: <https://stackoverflow.com/a/17275650/708807>

### / development / freecad / **non** formula build & install

**TL;DR**

```shell
cd /some/fs/path/
mkdir freecad-git
git clone https://github.com/freecad/freecad freecad-src
mkdir freecad-build
cd freecad-build
```

> 💡 mileage will improve when building freecad out of source in a **peer** build directory

> **optional** set `CC`, `CXX` and `CCACHE_DIR` env vars to build using ccache compilers

```shell
export CC="/usr/local/opt/ccache/libexec/cc"
export CXX="/usr/local/opt/ccache/libexec/c++"
export CCACHE_DIR="$HOME/.ccache/freecad"
```

> required, or link errors will happen related to `-licudata -licui18n -licuuc` [learn more][ul10]

export LIBRARY_PATH="/usr/local/opt/icu4c/lib"

- ✅ **complete** cmake args have been tested

```shell
cmake \
-DCMAKE_C_FLAGS_RELEASE=-DNDEBUG\
-DCMAKE_CXX_FLAGS_RELEASE=-DNDEBUG\
-DCMAKE_INSTALL_LIBDIR=lib\
-DCMAKE_FIND_FRAMEWORK=LAST \
-DCMAKE_VERBOSE_MAKEFILE=ON \
-Wno-dev \
-DCMAKE_OSX_SYSROOT=/Library/Developer/CommandLineTools/SDKs/MacOSX10.14.sdk \
-DCMAKE_CXX_STANDARD=14 \
-DBUILD_ENABLE_CXX_STD:STRING=C++14 \
-Wno-deprecated-declarations \
-DBUILD_QT5=ON \
-DUSE_PYTHON3=1\
-DPYTHON_EXECUTABLE="/usr/local/bin/python3" \
-DPYTHON_INCLUDE_DIR="/usr/local/opt/python3.9/Frameworks/Python.framework/Headers" \
-DBUILD_FEM_NETGEN=1 \
-DBUILD_FEM=1 \
-DBUILD_TECHDRAW=0 \
-DFREECAD_USE_EXTERNAL_KDL=ON \
-DCMAKE_PREFIX_PATH="/usr/local/opt/qt@5/lib/cmake;\
/usr/local/opt/nglib/Contents/Resources;\
/usr/local/opt/vtk@8.2/lib/cmake;\
/usr/local/opt/icu4c/lib;\
/usr/local;"\
-DCMAKE_BUILD_TYPE=Release \
-DFREECAD_CREATE_MAC_APP=OFF \
-DCMAKE_INSTALL_PREFIX=/opt/beta/freecad ../freecad-src
```

```shell
make; make install
```

[ul10]: <https://github.com/Homebrew/homebrew-core/issues/67427#issuecomment-754187345>

## / devolpment / References

<!-- FWR (for whatever reason) this heading is rendering as an h4 element on the github -->

<a id="references"></a>

- [**stackoverflow** / git checkout a specific commit for a formula][ref1]
- [**docs.brew.sh** / formual cookbook][ref2]
- [**GitHub** / Homebrew Formula Cookbook][ref3]
- [**github** / homebrew-tiny-scripts **tap**][ref4]
  > within the above repo there is a shell script, `cask-repair` that should do the bulk of the work updating a cask that is often updated frequently, as opposed to manually editing the cask file
- [**github** / repo for actual tiny scripts **NOT** the tap repo][ref5]
- [**medium**, creating relocatable linux exe by setting RPATH][ref6]
- [**macports.org**, clang does not respect `-syslibroot` when linking][ref7]

[ref1]: <https://stackoverflow.com/a/4158763/708807>
[ref2]: <https://docs.brew.sh/Formula-Cookbook>
[ref3]: <https://github.com/Homebrew/brew/blob/master/docs/Formula-Cookbook.md>
[ref4]: <https://github.com/vitorgalvao/homebrew-tiny-scripts>
[ref5]: <https://github.com/vitorgalvao/tiny-scripts>
[ref6]: <https://nehckl0.medium.com/creating-relocatable-linux-executables-by-setting-rpath-with-origin-45de573a2e98>
[ref7]: <https://trac.macports.org/ticket/57612>

## TODOs

<a id="todos"></a>

- [ ] **update homepage URLs for certain freecad dependencies**, _pivy bb URL,_
- [ ] [review git repo for developing homebrew bottle][todo1]
- [ ] experiment with [brew.vim](https://github.com/xu-cheng/brew.vim) sytnax & filetype files

[todo1]: <https://github.com/ladislas/homebrew-greetings>
