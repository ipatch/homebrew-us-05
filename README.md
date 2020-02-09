<a id="contents"></a>

## Contents 📖

- [Installing a formula](#installing-a-formula)
- [Working with fuse-ext2](#working-with-fuse-ext2)
- [Working with QEMU](#working-with-qemu)
- [Maintenance](#maintenance)
- [Miscellanous](#misc)
- [Development](#development)
  - [References](#references)

<a id="ipatch-homebrew-us-05"></a>

## ipatch/homebrew-us-05

> An off beat repo for storing custom ales and lagers to make your life a little beat easier.

<a id="installing-a-formula"></a>

### Installing a formula

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

<a id="working-with-openssh"></a>

### Working with OpenSSH _from this repo_

When upgrading or install OpenSSH from this repo, a few files will need to have their permissions changed.

```shell
cd /usr/local/etc/ssh
sudo chown root:wheel *_key
sudo chmod 600 *_key
```

#### TODOs

- [ ] change permissions, owner, and group of above mentioned files when installing formula.

> If LibreSSL has been updated from mainline Homebrew, ie. upgrading from v2.7.x to v2.8.x then this version of OpenSSH will need to be reinstalled from this tap.

<a id="working-with-fuse-ext2"></a>

### Working with fuse-ext2

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

<a id="working-with-qemu"></a>

### Working with Qemu

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

<a id="gotchas"></a>

### Gotchas

If a formula is installed from this repo ie. **qemu** with options, passed to the `install` command, ie. `--with-hax` homebrew has issues running the **reinstall** command even with the `--build-from-source` flag. To work around this, run `brew remove [name-of-formula]` to uninstall the package, and then reinstall the package with the flags provided form the previous install.

<a id="maintenance"></a>

### Maintenance

To pull down updates from this tap from time to time or when an upstream change has been made

```shell
brew update
```

<a id="misc"></a>

### Miscellanous

Installing [universal ctags](ctags.io) requires its own work around, [learn more](https://github.com/universal-ctags/homebrew-universal-ctags/issues/23#issuecomment-583781848)

<a id="development"></a>

### Development

When working with formula locally for debugging purposes specify a path to a local formula so it can be tested locally.

```shell
brew [re]install /path/to/some/local_formula.rb
```

> `brew reinstall` is problematic a majority of the time, so when experimenting with local formula when developing use **brew install** /path/to/formula.rb

<a id="references"></a>

#### References

- [**GitHub** > Homebrew Formula Cookbook](https://github.com/Homebrew/brew/blob/master/docs/Formula-Cookbook.md)
