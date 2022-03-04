# Patches for Qt must be at the very least submitted to Qt's Gerrit codereview
# rather than their bug-report Jira. The latter is rarely reviewed by Qt.
class QtAT5 < Formula
  desc "Cross-platform application and UI framework"
  homepage "https://www.qt.io/"
  url "https://download.qt.io/official_releases/qt/5.15/5.15.2/single/qt-everywhere-src-5.15.2.tar.xz"
  mirror "https://mirrors.dotsrc.org/qtproject/archive/qt/5.15/5.15.2/single/qt-everywhere-src-5.15.2.tar.xz"
  mirror "https://mirrors.ocf.berkeley.edu/qt/archive/qt/5.15/5.15.2/single/qt-everywhere-src-5.15.2.tar.xz"
  sha256 "3a530d1b243b5dec00bc54937455471aaa3e56849d2593edb8ded07228202240"
  license all_of: ["GFDL-1.3-only", "GPL-2.0-only", "GPL-3.0-only", "LGPL-2.1-only", "LGPL-3.0-only"]
  revision 2

  bottle do
    sha256 cellar: :any,                 arm64_monterey: "f5be0f91e5f418c25a3ff17efb51416dd5b1ea1aa3da252f185d968f074201fb"
    sha256 cellar: :any,                 arm64_big_sur:  "b5c28c8e55fb3174d0fa1a989f6faf1a4be87abff90569435b6eaa1509395256"
    sha256 cellar: :any,                 monterey:       "e14df14d66096c6b17955a68ad8ed2de0eb0d9a5283036663558b8d003bd2ce4"
    sha256 cellar: :any,                 big_sur:        "2d521e4bfdcbfcc6ac1ad6fc71805440941b0a391f5d3588ea6cec874616f8df"
    sha256 cellar: :any,                 catalina:       "0af97a602f5b4582a53516877bbcab62d8c0d13e314f992c4347fd6ec5f00b29"
    sha256 cellar: :any_skip_relocation, x86_64_linux:   "e7eb619d6a65c7237c87fbc33a68d69aaf75646c75c9aa4a45bf9ce1f672fc09"
  end

  keg_only :versioned_formula

  depends_on "node"       => :build
  depends_on "pkg-config" => :build
  depends_on xcode: :build
  depends_on macos: :sierra

  uses_from_macos "gperf" => :build
  uses_from_macos "bison"
  uses_from_macos "flex"
  uses_from_macos "sqlite"

  on_linux do
    depends_on "at-spi2-core"
    depends_on "fontconfig"
    depends_on "gcc"
    depends_on "glib"
    depends_on "icu4c"
    depends_on "libproxy"
    depends_on "libxkbcommon"
    depends_on "libice"
    depends_on "libsm"
    depends_on "libxcomposite"
    depends_on "libdrm"
    depends_on "mesa"
    depends_on "pulseaudio"
    depends_on "python@3.9"
    depends_on "sdl2"
    depends_on "systemd"
    depends_on "xcb-util"
    depends_on "xcb-util-image"
    depends_on "xcb-util-keysyms"
    depends_on "xcb-util-renderutil"
    depends_on "xcb-util-wm"
    depends_on "zstd"
    depends_on "wayland"
  end

  fails_with gcc: "5"

  resource "qtwebengine" do
    url "https://code.qt.io/qt/qtwebengine.git",
        tag:      "v5.15.8-lts",
        revision: "96e932d73057c3e705b849249fb02e1837b7576d"
  end

  # Backport of https://code.qt.io/cgit/qt/qtbase.git/commit/src/plugins/platforms/cocoa?id=dece6f5840463ae2ddf927d65eb1b3680e34a547
  # to fix the build with Xcode 13.
  # The original commit is for Qt 6 and cannot be applied cleanly to Qt 5.
  patch :DATA

  # Fix build for GCC 11
  patch do
    url "https://invent.kde.org/qt/qt/qtbase/commit/8252ef5fc6d043004ddf7085e1c1fe1bf2ca39f7.patch"
    sha256 "8ab742b991ed5c43e8da4b1ce1982fd38fe611aaac3d57ee37728b59932b518a"
    directory "qtbase"
  end

  # Fix build for GCC 11
  patch do
    url "https://invent.kde.org/qt/qt/qtbase/commit/cb2da673f53815a5cfe15f50df49b98032429f9e.patch"
    sha256 "33304570431c0dd3becc22f3f0911ccfc781a1ce6c7926c3acb08278cd2e60c3"
    directory "qtbase"
  end

  # Fix build for GCC 11
  patch do
    url "https://invent.kde.org/qt/qt/qtdeclarative/commit/4f08a2da5b0da675cf6a75683a43a106f5a1e7b8.patch"
    sha256 "193c2e159eccc0592b7092b1e9ff31ad9556b38462d70633e507822f75d4d24a"
    directory "qtdeclarative"
  end

  # Patch for qmake on ARM
  # https://codereview.qt-project.org/c/qt/qtbase/+/327649
  if Hardware::CPU.arm?
    patch do
      url "https://raw.githubusercontent.com/Homebrew/formula-patches/9dc732/qt/qt-split-arch.patch"
      sha256 "36915fde68093af9a147d76f88a4e205b789eec38c0c6f422c21ae1e576d45c0"
      directory "qtbase"
    end
  end

  def install
    rm_r "qtwebengine"

    resource("qtwebengine").stage(buildpath/"qtwebengine") if OS.mac?

    args = %W[
      -verbose
      -prefix #{prefix}
      -release
      -opensource -confirm-license
      -qt-libpng
      -qt-libjpeg
      -qt-freetype
      -qt-pcre
      -nomake examples
      -nomake tests
      -pkg-config
      -dbus-runtime
    ]

    if OS.mac?
      args << "-no-rpath"
      args << "-system-zlib"
      if Hardware::CPU.arm?
        # QtWebEngine is not supported on arm64. Use qt6 if you need it.
        args << "-skip" << "qtwebengine" << "-no-assimp"
      else
        args << "-proprietary-codecs"
      end
    else
      args << "-R#{lib}"
      # https://bugreports.qt.io/browse/QTBUG-71564
      args << "-no-avx2"
      args << "-no-avx512"
      args << "-qt-zlib"
      # https://bugreports.qt.io/browse/QTBUG-60163
      # https://codereview.qt-project.org/c/qt/qtwebengine/+/191880
      args += %w[-skip qtwebengine]
      args << "-no-sql-mysql"

      # Change default mkspec for qmake on Linux to use brewed GCC
      inreplace "qtbase/mkspecs/common/g++-base.conf", "$${CROSS_COMPILE}gcc", ENV.cc
      inreplace "qtbase/mkspecs/common/g++-base.conf", "$${CROSS_COMPILE}g++", ENV.cxx
    end

    system "./configure", *args

    # Remove reference to shims directory
    inreplace "qtbase/mkspecs/qmodule.pri",
              /^PKG_CONFIG_EXECUTABLE = .*$/,
              "PKG_CONFIG_EXECUTABLE = #{Formula["pkg-config"].opt_bin/"pkg-config"}"
    system "make"
    ENV.deparallelize
    system "make", "install"

    # Some config scripts will only find Qt in a "Frameworks" folder
    frameworks.install_symlink Dir["#{lib}/*.framework"]

    # The pkg-config files installed suggest that headers can be found in the
    # `include` directory. Make this so by creating symlinks from `include` to
    # the Frameworks' Headers folders.
    Pathname.glob("#{lib}/*.framework/Headers") do |path|
      include.install_symlink path => path.parent.basename(".framework")
    end

    # Move `*.app` bundles into `libexec` to expose them to `brew linkapps` and
    # because we don't like having them in `bin`.
    # (Note: This move breaks invocation of Assistant via the Help menu
    # of both Designer and Linguist as that relies on Assistant being in `bin`.)
    libexec.mkpath
    Pathname.glob("#{bin}/*.app") { |app| mv app, libexec }

    if OS.mac? && !Hardware::CPU.arm?
      # Fix find_package call using QtWebEngine version to find other Qt5 modules.
      inreplace Dir[lib/"cmake/Qt5WebEngine*/*Config.cmake"],
                " #{resource("qtwebengine").version} ", " #{version} "
    end
  end

  def caveats
    s = <<~EOS
      We agreed to the Qt open source license for you.
      If this is unacceptable you should uninstall.
    EOS

    if Hardware::CPU.arm?
      s += <<~EOS

        This version of Qt on Apple Silicon does not include QtWebEngine.
      EOS
    end

    s
  end

  test do
    (testpath/"hello.pro").write <<~EOS
      QT       += core
      QT       -= gui
      TARGET = hello
      CONFIG   += console
      CONFIG   -= app_bundle
      TEMPLATE = app
      SOURCES += main.cpp
    EOS

    (testpath/"main.cpp").write <<~EOS
      #include <QCoreApplication>
      #include <QDebug>

      int main(int argc, char *argv[])
      {
        QCoreApplication a(argc, argv);
        qDebug() << "Hello World!";
        return 0;
      }
    EOS

    # Work around "error: no member named 'signbit' in the global namespace"
    ENV.delete "CPATH"

    system bin/"qmake", testpath/"hello.pro"
    system "make"
    assert_predicate testpath/"hello", :exist?
    assert_predicate testpath/"main.o", :exist?
    system "./hello"
  end
end

__END__
--- a/qtbase/src/plugins/platforms/cocoa/qiosurfacegraphicsbuffer.h
+++ b/qtbase/src/plugins/platforms/cocoa/qiosurfacegraphicsbuffer.h
@@ -43,4 +43,6 @@
 #include <qpa/qplatformgraphicsbuffer.h>
 #include <private/qcore_mac_p.h>
+ 
+#include <CoreGraphics/CGColorSpace.h>

 QT_BEGIN_NAMESPACE
