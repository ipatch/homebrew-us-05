<a id="doc-start"></a>

# A ⚒ 💎 rough collection of FreeCAD related Notes

## Contents

<a name="contents"></a>

- [General 3D terms](#general)
- [freecad / Issues / Questions](#issues)
- [Compare Contrast FreeCAD with fusion 360](#compare-contrast-freecad-with-fusion360)
- [Building FreeCAD for macOS by macOS](#freecad-building-on-macos)
  - [**Progressively updating UI/UX of freecad 💪**](#freecad-building-better-ui-ux)
  - [.. / building freecad for macos by macos, nov 2020](#building-freecad-macos-nov-2020)
  - [side quests _no particular order_]()
- [working with freecad](#working-with-freecad)
  - [working with freecad / gui / stylesheets](#working-with-freecad-stylesheets)
- [TODOs](#todos)
- [Useful Links](#useful-links)

## General 3D terms / Notes

<a id="general"></a>

- **CSG** constructive solid geometry _modeling_


## freecad / Issues / Questions

<a id="issues"></a>

- [ ] **BUG** _possibly_, open a document, the view hotkeys appear to work in the **part design** workbench but when switching to the **part** workbench they appear to **not** work
- [ ] **gripe** pasting a sketch from one _body_ to a different _body_ does **not** place the sketch within the selected _body_
- [ ] **Question** does freecad have a quick way to convert / display mm to inches
- [x] **techdraw** workbench, ❗️ _no default template found_
  - ✅ **Answer** more than likely the path to svg graphics that comprise the templates has been altered or the **FreeCAD.app** is not within the default `/Applications/` directory create a symlink to resolve.

## Compare Contrast FreeCAD with fusion 360

<a id="compare-contrast-freecad-with-fusion360"></a>

Fusion 360 aka **f3d**, can import a file, ie. a **iges** that is constructed of different surfaces to create a _part_ however each surface / face is it's own unique body, thus **f3d** provides a feature to stich all surfaces together to create a solid body.

- [ ] **Q** does freecad provide a _stich_ like feature?
- **reference** [**f3d** editing non native geometry &#8599;](https://help.autodesk.com/view/fusion360/ENU/courses/AP-EDITING-NON-NATIVE-IMPORTED-GEOMETRY)
- [ ] **Q** does freecad support a **heal** feature _a la_ fusion similiar to how a _rib_ can be removed from a model without construction history
    [**reference** &#8599;](https://help.autodesk.com/view/fusion360/ENU/courses/AP-MAKING-CHANGES-TO-HISTORY-FREE-MODELS-USING-DIRECT-EDITING)

## Building FreeCAD for macOS by macOS

<a id="freecad-building-on-macos"></a>

### Progressively updating UI/UX of freecad 💪

> migrating from QT widgets to QML QT quick

<a id="freecad-building-better-ui-ux"></a>

_nov 24, 2020_

VLC is an app that uses QT for it's gui, and once used QT widgets, but has migrated some of the ui elements to qml using QT Quick. [there was][2vlc] a GSoC (google summer of code) 2019 about updating the UI for desktop instances of VLC

- [vlc src mirror **github** gui dir][1vlc]

[1vlc]: <https://github.com/videolan/vlc/tree/master/modules/gui>
[2vlc]: <https://wiki.videolan.org/SoC_2019/#VLC_Qt_interface_redesign>


---

FreeCAD presently relies on QT to manage the GUI, and uses QT widgets, which is an imperative way to declare UI elements within the freecad gui.  QT has released QML in recent years as a declaritive alternative way to design UIs, similar to how HTML/CSS/JS interact to build web apps. QML is far from perfect, but IMHO it should be used for future UI design / improvements as QT is introducing less and less features for the QT widget based system.

My thoughts on upgrading the UI/UX is to simply incorporate QML into the freecad ui, but **do not** try and replace everything at once, ie. keep / use both the widget based system while slowly experimenting with QML, and migrating the easier to understand widgets to QML if at all possible. From my understanding updating a QML file, `.qml` will not require an entire rebuild whereas updating a `.ui` based widget file will trigger an entire rebuild of the app.  Presently it takes ~ 40 minutes on a late 2013 MBP to build the latest FreeCAD. 

A demo of what a QML based freecad UI can be found on [youtube](https://www.youtube.com/watch?v=wrOP7sLqwiM), the QML experimental ui was designed around QT 4.x and not QT 5.x There is also rather lengthy discussion on the freecad forums about adopting / integrating a QML based UI [here](https://forum.freecadweb.org/viewtopic.php?f=34&t=23053)

There is a rather old (qt 4.8) doc about integrating a QML based ui within an existing widget based ui. [here][1]

Some other useful links can be found below

- [github/kdab/declartivewidgets][2]
- [cleanqt.io/blog/crash course in qt, part 6 ↗][3]
- [wikipedia/**qt version history**][4]
- [youtube, QtDD14 from qtwidgets legacy to QtQuick Kevin Ottens][lnk1qt]

[1]: <https://doc.qt.io/archives/qt-4.8/qml-integration.html> "↗ qt.io / Integrating QML Code with Existing Qt UI Code"
[2]: <https://github.com/KDAB/DeclarativeWidgets>
[3]: <https://www.cleanqt.io/blog/crash-course-in-qt-for-c%2B%2B-developers,-part-6> "choosing widgets or qtquick+qml"
[4]: <https://en.wikipedia.org/wiki/Qt_version_history>
[lnk1qt]: <https://www.youtube.com/watch?v=mjTcRp1bgDs&feature=emb_title>

#### Questions / TODOs

- [x] **Q** what version of qt introduced QML?
  - **Answer** according to the wikipedia article QML Qt Quick were introduced in version 4.7


### ../Building FreeCAD for macos by macos, circa november 2020

<a id="building-freecad-macos-nov-2020"></a>

presently I'm using similar if not same steps to build freecad as the travis formula, as that is the one that generates the app asset on the freecad releases page. the current build steps i modeled my formula file after are [here &#8599;](https://travis-ci.org/github/FreeCAD/FreeCAD/jobs/741952720) 

<!-- - [ ] TODO: come up with more constructive way to incorporate svg gfx with markdown syntax, ie. md and html dont play well together -->

#### ../../todos

<a id="building-freecad-todos"></a>

- [ ] construct a bottle for the freecad formula contained within this repo [learn more](https://github.com/ladislas/homebrew-greetings)<img src="https://raw.githubusercontent.com/wiki/ipatch/dotfiles/lib/nearr.svg">

#### ../../useful links

<a id="useful-links-freecad"></a>

- [github / freecad / homebrew-freecad](https://github.com/FreeCAD/homebrew-freecad)
- [github / homebrew-cad, the commit the current formula is to build against](https://github.com/FreeCAD/FreeCAD/commit/34a083b15) _november 6, 2020_

### ../building freecad on macos circa april 2020

<a id="buidling-freecad-macos-april-2020"></a>

> My OCD, ADD, whateverD got the best of matey ⛵️☠️.

**Update** April 24, 2020

It looks FreeCAD builds & links, against a very old version of SMesh which is part of the SALOME suite of applications, and in order to build a new_er_ or recent version of SMesh the _Skernel_ is required to be built **first** before anything else builds.  The Skernel has quite a list of dependencies in order to be built. [salome gitweb](https://git.salome-platform.org/gitweb/)

In no particular order

- omniorb _brew_
- ominorbpy _pip_ build from source [_sourceforge_](https://sourceforge.net/projects/omniorb/files/omniORBpy/omniORBpy-4.2.4/)
- numpy _pip_
- scipy _pip_
- cppunit _brew_

The below command_s_ I've been using to attempt to build the SALOME kernel

```shell
cmake \ 
-DCMAKE_BUILD_TYPE=RELEASE \
-DCONFIGURATION_ROOT_DIR="/opt/code/git/salome/configuration" \
-DCMAKE_INSTALL_PREFIX="/opt/beta/salome" \
-DSALOME_BUILD_DOC=OFF \
-DSALOME_CMAKE_DEBUG=ON \
-B(PWD) \
-S..
```

The above command is attempting to build the SALOME kernel from the git source, and requires the SALOME _configuration_ git repo be cloned as well.

Basically, as of April 24, 2020 I'm still running into configuration issues presently due to _swig_.

**TL;R** 

I was using FreeCAD _fc_ the other day and was distracted / annoyed by the title bar containing the window decorators / decorations on macOS. (yes, yes I know I can use a different _wm_ that does not display window decorators, but I'm not that advantageous at the moment)  I always look at these bars and think what a waste of space (ideally the window decorators and menu bar (the bar containing the workbench drop down menu could coexist within the same bar)). I have noticed certain apps, _Alacritty_ lets me disable it _the title bar containing window decorators_ altogether, and other apps, _VS Code_ & _Vilvaldi_ integrate title bar with other UI components quite seemlessly a la how Xcode does it. I have since learned these custom "bars" are commonly referred to as _client side decorators_. 

Compiling FreeCAD from source has been on the back of my mind a little while now, and since I've been messing around with it more often than not lately (3d printing).  _I mean how difficult could it be to compile _fc_ from source on macOS_ 🐇🕳 .

1. see what instructions are available in the github README TODO:add link
2. find link to external _fc_ wiki
3. work through macOS build instructions on _fc_ wiki TODO:add link
4. discover a homebrew tap for installing _fc_ using brew ADDLINK
5. realize the tap hasn't been updated in a while, browse the formula files to see how their building _fc_
6. install all the deps from the tap
7. all deps install except med-file (what the hell is that?)
8. discover med-file / medfile (i'm not sure how their naming this thing) is part of the salome project
9. is it pronouced salome? like the lunch meat?
10. realize med-file builds against some library _HD5F_ or something of that name
11. realize i have hd5f 1.12.x installed via brew and med-file calls functions that were written when HD5F was at 1.10.x
12. update all calling functions to use the latest 1.12.x API _super hacky way of patching med-file_ to _make run_. _spoiler_ ...i did.
13. try and recompile freecad now that med-file library is in my path
14. get to about 89% of freecad compile process, and end up with an error.
15. get annoyed with freecad cmake system placing cmake build artifacts in _fc_ src directory, GG

to quickly revert a git branch to it's original state, ie. if running cmake pollutes the src directory of a project with a shit load of build artifacts that you no longer want.

```shell
git stash save --keep-index --include-untracked; git stash drop;
```

the above two commands should revert the _CWB_ to it's original state

16. figure out, refresh my brain, _hello old friend™️_, how to do an _out of source build_, ie. put polluants in a _build_ directory for quickly wiping out, and begining the build process from scratch. _no hate for the above git cmd though_

```shell
mkdir -p build; cd build;
cmake \
-B(pwd)
-H..
```

> i use fish shell

17. start sorting through the cmake output from the above command, and begin installing / updating _paths_ cmake flags to find libraries that the cmake build scripts would not otherwise find.

### side quests _no particular order_

- realize the brew build system / pipeline has been ~~kindof~~ **deperecated** in favor of using a conda esque build system, thus how the weekly snapshots of freecad are produced for macOS.
- realize that some of the dependencies from the above mentioned homebrew tap ie. py2side can be installed via pip as opposed to using brew
- realize that specifying a path for python _library_ and _include_ directories are required.
- realize _fc_ depends on _netgen_ to perform all of its _structural analysis_ and what not, ie. the _FEM_ in _fc_ if i understand correctly.
- clone the netgen source _no not the sourceforge project_ but the github project, from what i understand.
- begin to build _netgen_ so i can hopefully get past 89% of the _fc_ build process. 🤞
- installed _matplotlib_ using pip

    ```shell
    pip install matplotlib
    ```


## working with freecad

<a id="working-with-freecad"></a>

- creating a parametric draft dimension is **still** ongoing issue [learn more](https://forum.freecadweb.org/viewtopic.php?f=8&t=31507) [and even more](https://forum.freecadweb.org/viewtopic.php?t=17044)

- the **gui** of freecad can be styled using a stylesheet, on my particular system (macOS) the stylesheet directory for storing custom freecad stylesheets is located below, and a youtube explaining the process can be found [here](https://www.youtube.com/watch?v=ZdG2y1-aOas) 

```shell
$HOME/Library/Preferences/FreeCAD/Gui/Stylesheets
```

there is a known issue with displaying the grid within the **part design** workbench, to work around this issue switch to the **draft workbench** and use the key binding <kbd>g</kbd> then <kbd>r</kbd> to toggle the display of the grid, and once visible switch back to the part design workbench and the grid should be visible. [freecad forum exp](https://forum.freecadweb.org/viewtopic.php?t=5889#p176145)

### working with freecad / defeaturing

- [**opencascade.org**, 3d model defeaturing][ref8]

[ref8]: <https://dev.opencascade.org/index.php?q=node/1211>

### working with freecad / post install setup

when using freecad from a console it helps to load startup file to make working with the console a tad bit more functional IMHO.

```py
from pystartup import *
```

> the above startup symlink / file must have a `.py` extension in order for freecad to load the file.

if the file import any modules that aren't accessible to freecad ie. _fancycompleter_ a quick solution is to install the python package into freecad's _site-packages_ directory

```shell
cd /opt/beta/freecad/lib/python3.9/site-packages/
pip install fancycompleter -t $PWD
```

> the `-t` flag allows pip to specify a path to install the package

### working with freecad / gui / stylesheets

<a id="working-with-freecad-stylesheets"></a>

it appears the name of the stylesheet presented in the preferences pane conforms to the actual name of the file on disk minus the `.qss` extension


## TODOs

<a id="todos"></a>

- [ ] **Q** does FreeCAD support storing different profiles for different users, ie. settings based on a profile?
- [ ] when opening a file with freecad using the dialog box always have the **All Files** selected as opposed to having a specific filetype selected in the dialog box dropdown
- [ ] it'd be helpful interesting if certain **parts** / **bodies** contained a _transform history_ if that is even possible
- [ ] the the _tools_ > _customize..._ floating window retain its size and position an subsequent relaunches
- [ ] have freecad change the granularity of the scroll when different _meta_ keys are held down in the viewport
- [ ] be able to reaarange groups within the model stack.
- [ ] generate a _gitdiff_ for the medfile project, I was able to get med-file to compile after changes several source files to use the updated API provided by HD5F
- [ ] build freecad using brew infrastructure
- [x] see if _ninja_ can speed up the build process
  - ✅ **quicker build times are negligible, ie. ~ 5 minutes or less**
- [ ] see if i can build and link against **qt 5.15** _provides support for client side window decorators_
- [ ] try and build the _development_ version of _freecad_
- [ ] see if it's even possible to adjust the titlebar, and possibly conjure up a client side window decorator scheme for _fc_ ADDLINK
- [ ] _remember what it was i was trying to model in freecad before i got distracted._

### TODOs / possible improvments / gripes

<a id="todos-improvments"></a>

- [ ] **note** the mesh remodel icons do not appear to have an alpha channel present within the icon files.
- [ ] **note** with the mesh remodel workbench active only the preferences for that workbench become active
- [ ] option to control the filetypes in the recently opened files, ie. only show display **fcstd** files in the recent files list, no ~~stl~~ files listed
- [ ] possible to collapse / expand groups of toolbar icons within a toolbar for a workbench?
- [ ] **Q** why is there a _move_ & _rotate_ gimble within the _transform_ context, but not a scale, from watching [this video](https://www.youtube.com/watch?v=ZxR_LnM0S1s) the author, Mark uses the _placement_ property within the _combo view_.
- [ ] possible to have _vim_ style key bindings for moving up down the _model hiearchy_ ie. <kbd>j</kbd> down & and <kbd>k</kbd> up.
- [ ] would much prefer to see a transform gizmo similar to, if not exactly the same as the one used within prusa slicer.
- [ ] should be able to create a _new_ group from a selection of bodies, instead of RMB on the document name then click _create group_ and have the focus in the _combo box_ change to the name of the group, for easier initial naming of the group.
- [ ] when switching from the draft workbench back to the part design workbench the **combo view** always defaults to the **tasks** tab, and i'd much prefer to default to the **model** tab 
- [ ] when using a keybinding such as <kbd>v</kbd> followed by <kbd>1</kbd> or <kbd>3</kbd> display a modal menu around mouse letting the user know what types of views can be selected, ie. solid shaded, wireframe, etc etc, while the <kbd>v</kbd> key is being held down.  If the key is let go then allow for traditional switching of the views.
- [ ] when the <kbd>w</kbd> key binding is pressed bring up a list of workbenches, ie. how the _context menu addon_ works.
- [ ] The right click RMB menu while within the **viewport** could be more robust, ie. put the workbench specific menus within the RMB context menu for quickly accessing workbench specific features.


## freecad / Useful Links

<a id="useful links"></a>

- [**pdf**, adding qtquick base windows to an existing qwidgets app][lnkul6]
- [forum.qt.io, qquickwidget and qwidget integration][lnkul5]
- [kdab.com declartive widgets support to qt QML][lnkul4]
- [using helgrind to debug multithreaded qt apps][lnkul3]
- [github.com/coin3d, coin INSTALL][lnkul1]
- [github.com/coin3d, building from CLI][lnkul2]
- [building ngsolve / netgen from source](https://ngsolve.org/docu/latest/install/installmacnative.html)
- [stackoverflow > cmake out of source build answer](https://stackoverflow.com/a/24435795/708807)
- [github > freecad > conda _build.sh_ script](https://github.com/FreeCAD/FreeCAD/blob/0.19_pre/package/conda/build.sh)

[lnkul1]: <https://github.com/coin3d/coin/blob/master/INSTALL>
[lnkul2]: <https://github.com/coin3d/coin/wiki/Building-from-the-command-line>
[lnkul3]: <https://www.kdab.com/~dfaure/helgrind.html>
[lnkul4]: <https://www.kdab.com/declarative-widgets/>
[lnkul5]: <https://forum.qt.io/topic/95290/qquickwidget-and-qwidget-integration>
[lnkul6]: <https://www.qtdeveloperdays.com/sites/default/files/Adding%20QtQuick%20base%20windows%20to%20an%20existing%20QWidgets%20Application-dark.pdf>
