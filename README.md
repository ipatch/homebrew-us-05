## Contents 📖

<a id="contents"></a>

- [Installing a formula](#installing-a-formula)
- [Working with OpenSSH _from this tap_](#working-with-openssh)
  - [working with openssh / todos](#working-with-openssh-todos)
- [Working with fuse-ext2](#working-with-fuse-ext2)
- [Working with QEMU](#working-with-qemu)
- [Gotchas](#gotchas)
- [Maintenance](#maintenance)
- [Miscellanous](#misc)
- [Development](#development)
  - [development / casks](#development-casks)
    - [development / cask / freecad](#development-cask-freecad)
  - [development / freecad](#development-freecad)
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
brew install ipatch/us-05/openssh --verbose --HEAD --with-ldns
```

To upgrade a formula that has been installed via this tap

```shell
brew reinstall ipatch/us-05/[name-of-formula] --verbose --build-from-source
```


## Working with OpenSSH _from this repo_

<a id="working-with-openssh"></a>

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

> ❗️`brew reinstall` is problematic a majority of the time, so when experimenting with local formula when developing use **brew install** /path/to/formula.rb

### Development / cask

<a id="development-casks"></a>

- development of cask(s) formula files will live within, `/usr/local/Homebrew/Library/Taps/homebrew/homebrew-cask`, path may vary depending upon how homebrew is installed and the current OS that homebrew is running on.
- development of cask(s) formula files that represent app bundles that are considered development, beta, or unstable releases live within `/usr/local/Homebrew/Library/Taps/homebrew/homebrew-cask-versions`

Before submitting a PR for a cask run through the below check

```shell
brew cask audit --download {{cask_file}}
brew cask style --fix {{cask_file}}
brew cask (re)install {{cask_file}}
brew cask uninstall {{cask_file}}
```

- [github.com ## Getting set up to contribute](https://github.com/Homebrew/homebrew-cask/blob/master/CONTRIBUTING.md#getting-set-up-to-contribute)
- [homebrew-cask / docs / adding_a_cask.md](https://github.com/Homebrew/homebrew-cask/blob/master/doc/development/adding_a_cask.md)


#### Development / cask / freecad

<a id="development-cask-freecad"></a>

- renamed the freecad cask within this repo / homebrew tap to not conflict with either the hombrew-cask-versions, `freecad-pre`, to have a cask specific to this tap, `freecad-ipre`, prepended an `i` to the cask name in reference to my github username.

- github / @kapcake created a cask.formula for freecad pre release, but appears to not have been updated in ~ a year. [learn more](https://github.com/Homebrew/homebrew-cask/blob/e141c13bfdb4818c1833afb6522b61b1f1897a25/Casks/freecad.rb)

### development / freecad

<a id="development-freecad"></a>

**TL;DR** 

i was able to build freecad from commit f35d30bc on the master branch using brew and a hacked together formula, and posted it about on the freecad [forum](), and ran into some issues with incrementing the build revisison which i later found out is related to shallow clones. at some point, something changed on my system, ie. macos 10.13.6 (17G14042), i did perform the 10.13 upgrades a few days ago from writing this, so not sure if they could be the culpret on why current brew builds are failing.

and i have been unsucessful in building freecad on high sierra using the git source and not using a formula file to build, but still using dependencies on mac homebrew.

#### cmake related

<a id="cmake-related"></a>

to show a list of configuration settings

```shell
cd ./build; cmake -L ..
```

apparently explicitly setting `CC` and `CXX` env vars with `.cmake` files can lead to [complications](), the preferred way to set a specific `CC` & `CXX` compiler is to use env vars `export CC=/path/to/c-compiler` before running `cd ./build; cmake ..`


<!-- insert inline markdown links below -->

## /devolpment/References

<!-- fwr this heading is rendering as an h4 element on the github -->

<a id="references"></a>

- [**stackoverflow** / git checkout a specific commit for a formula](https://stackoverflow.com/a/4158763/708807)
- [**docs.brew.sh** / formual cookbook](https://docs.brew.sh/Formula-Cookbook)
- [**GitHub** / Homebrew Formula Cookbook](https://github.com/Homebrew/brew/blob/master/docs/Formula-Cookbook.md)
- [**github** / homebrew-tiny-scripts **tap**](https://github.com/vitorgalvao/homebrew-tiny-scripts)
  > within the above repo there is a shell script, `cask-repair` that should do the bulk of the work updating a cask that is often updated frequently, as opposed to manually editing the cask file
- [**github** / repo for actual tiny scripts **NOT** the tap repo](https://github.com/vitorgalvao/tiny-scripts)

## TODOs

<a id="todos"></a>

- [ ] experiment with [brew.vim](https://github.com/xu-cheng/brew.vim) sytnax & filetype files
