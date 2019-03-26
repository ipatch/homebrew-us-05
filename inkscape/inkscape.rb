class Inkscape < Formula
  desc "A GUI SVG editor built with GTK+"
  homepage "https://inkscape.org/"
  url "https://gitlab.com/inkscape/inkscape/-/archive/master/inkscape-master.tar.bz2"
  sha256 "cd55cc6e789501e21260a2c323a162be15f2c6904c394cea191455cc42b7a8fc"
  head "https://gitlab.com/inkscape/inkscape.git"

  depends_on "cmake" => :build
  depends_on "pkg-config" => :build
  depends_on "ninja" => :build
  depends_on "cairo" => :build
  depends_on "boehmgc" => :build
  depends_on "intltool" => :build
  depends_on "libxslt" => :build
  depends_on "lcms2" => :build
  depends_on "boost" => :build
  depends_on "poppler" => :build
  depends_on "gsl" => :build
  depends_on "adwaita-icon-theme" => :build
  depends_on "gdl" => :build
  depends_on "gtkmm3" => :build
  depends_on "libsoup" => :build
  depends_on "libwpg" => :build
  depends_on "python3" => :build

  def install
    ENV.prepend_path "LIBPREFIX", "/usr/local"
    ENV.prepend_path "PKG_CONFIG_PATH", Formula["atk"].opt_lib/"pkgconfig"
    ENV.prepend_path "PKG_CONFIG_PATH", Formula["libffi"].opt_lib/"pkgconfig"

    system "mkdir", "build"
    Dir.chdir("build")
    system "cmake", "-DWITH_OPENMP=OFF", "-G", "Ninja", ".."
    system "../po/generate_POTFILES.sh"
    system "ninja", "inkscape_pot"
    system "ninja"
    system "ninja", "install"
  end

  def caveats; <<~EOS
   As of March 26, 2019 this formula only builds from HEAD using ninja. 
  EOS
  end

  test do
    puts "hello"
    # prove that the formual successfully installed, and works as intended
  end
end
