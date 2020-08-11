# A rough collection of related to FreeCAD

## Possible Improvements

The right click RMB menu while within the **viewport** could be more robust, ie. put the workbench specific menus within the RMB context menu for quickly accessing workbench specific features.

## Compare Contrasting FreeCAD with fusion 360

Fusion 360 **f3d** can import a file, ie. a **iges** that is constructed of a bunch of different surfaces to create a _part_ however each surface / face is it's own unique body, thus **f3d** provides a feature to stich all surfaces together to create a solid body.

- [ ] **Q** does freecad provide a _stich_ like feature?
- **reference** [**f3d** editing non native geometry](https://help.autodesk.com/view/fusion360/ENU/courses/AP-EDITING-NON-NATIVE-IMPORTED-GEOMETRY)

## Building FreeCAD for macOS by macOS

> My OCD, ADD, whateverD got the best of meD 🙄.

**Update** April 24, 2020

It looks FreeCAD build / links, includes a very old version of SMesh which is part of the SALOME suite of applications, and in order to build a new (recent) version of SMesh the Skernel is required to built **first** before anything else can be built.  The Skernel has quite a list of dependencies in order to be built. [salome gitweb](https://git.salome-platform.org/gitweb/)

In no particular order

- omniorb _brew_
- ominorbpy _pip_ build from source [_sourceforge_](https://sourceforge.net/projects/omniorb/files/omniORBpy/omniORBpy-4.2.4/)
- numpy _pip_
- scipy _pip_
- cppunit _brew_

The below command I've been using to attempt to build the SALOME kernel

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

I was using FreeCAD _fc_ the other day and was distracted / annoyed by the title bar containing the window decorators / decorations on macOS. (yes, yes I know I can use a different _wm_ that does not display window decorators, but I'm not that advantageous at the moment)  I always look at these bars and think what a waste of space (ideally the window decorators and menu bar (the bar containing the workbench drop down menu could coexist within the same bar)). I have noticed certain apps, _Alacritty_ lets me disable it _the title bar containing window decorators_ altogether, and other apps, _VS Code_ & _Vilvaldi_ integrate title bar with other UI components quite seemlessly a la how Xcode does it. I have since learned these custom "bars" are commonly referred to as _client side decorators_ from my understanding.

Compiling FreeCAD from source has been on the back of my mind a little while now, and since I've been messing around with it more often than not lately (3d printing).  I mean how difficult could it be to compile _fc_ from source on macOS 🐇🕳 .  

1. see what instructions are available in the github README TODO:add link
2. find link to external _fc_ wiki
3. work through macOS build instructions on _fc_ wiki TODO:add link
4. discover a homebrew tap for installing _fc_ using brew ADDLINK
5. realize the tap hasn't been updated in a while, browse the formula files to see how their building _fc_
6. install all the deps from the tap
7. all deps install except med-file (what the hell is that?)
8. discover med-file / medfile (i'm not sure how their naming this thing) is part the salome project
9. is it pronouced salome? like the lunch meat?
10. realize med-file builds against some library _HD5F_ or something of that name
11. realize i have hd5f 1.12.x installed via brew and med-file calls functions that were written when HD5F was at 1.10.x
12. update all calling functions to use the latest 1.12.x API _super hacky way of patching med-file_ to try and just get it to compile. _spoiler_ ...i did.
13. try and recompile freecad now that med-file library is in my path
14. get to about 89% of compile process of freecad, and end up with an error.
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

### side quests _in no particular order_

- realize the brew build system / pipeline has been kindof deperecated in favor of using a conda esque build system, thus how the weekly snapshots of freecad are produced for macOS.
- realize that some of the dependencies from the above mentioned homebrew tap ie. py2side can be installed via pip as opposed to using brew
- realize that specifying a path for python _library_ and _include_ directories are required.
- realize _fc_ depends on _netgen_ to perform all of its _structural analysis_ and what not, ie. the _FEM_ in _fc_ if i understand correctly.
- clone the netgen source _no not the sourceforge project_ but the github project, from what i understand.
- begin to build _netgen_ so i can hopefully get past 89% of the _fc_ build process. 🤞
- installed _matplotlib_ using pip

    ```shell
    pip install matplotlib
    ```

## TODOs

- [ ] generate a _gitdiff_ for the medfile project, I was able to get med-file to compile after changes several source files to use the updated API provided by HD5F
- [ ] build freecad using brew infrastructure
- [ ] see if _ninja_ can speed up the build process
- [ ] see if i can build and link against qt 5.15
- [ ] try and build the _development_ version of _freecad_
- [ ] see if it's even possible to adjust the titlebar, and possibly conjure up a client side window decorator scheme for _fc_ ADDLINK
- [ ] _remember what it was i was trying to model in freecad before i got distracted._

### TODOs / possible improvments

- [ ] when the <kbd>w</kbd> key binding is pressed bring up a list of workbenches, ie. how the context menu works.


## Useful Links

- [building ngsolve / netgen from source](https://ngsolve.org/docu/latest/install/installmacnative.html)
- [stackoverflow > cmake out of source build answer](https://stackoverflow.com/a/24435795/708807)
- [github > freecad > conda _build.sh_ script](https://github.com/FreeCAD/FreeCAD/blob/0.19_pre/package/conda/build.sh)
