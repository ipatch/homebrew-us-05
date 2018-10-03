
<a href="ipatch-homebrew-us-05"></a>

## ipatch/homebrew-us-05

> A off beat repo for storing custom ales and lagers to make your life a little beat easier.

<a href="installing-a-formula"></a>

### Installing a formula

To install formula from this repo

```shell
brew tap ipatch/homebrew-us-05
brew install ipatch/homebrew-us-05/[name-of-formula] [--with-options]
```

**Example**

```shell
brew install ipatch/homebrew-us-05/openssh --with-libressl --verbose
```

<a href="working-with-fuse-ext2"></a>

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

<a href="working-with-qemu"></a>

### Working with Qemu

To install qemu from the homebrew 🍺 repo

```shell
brew install ipatch/homebrew-us-05/qemu --verbose --with-docs --with-libusb --with-hvf --with-hax --HEAD
```

