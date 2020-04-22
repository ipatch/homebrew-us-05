
## Building FreeCAD for macOS by macOS

My OCD, ADD, whateverD got the best of meD 🙄.  **TL;DR** I was using FreeCAD _fc_ the other day and was distracted / annoyed by the title bar containing the window decorators / decorations on macOS. (yes, yes I know can use a different _wm_ that does display window decorators, but I'm not that advantageous at the moment)  I always look at these bars and think what a waste of space, and have noticed certain apps, Alacritty let me disable it altogether, and other apps, VS Code & Vilvaldi integrate title bar with other UI components quite seemlessly a la how Xcode does it.

Compiling FreeCAD from source has been on the back of my mind a little while now, and since I've been messing around with it more often than not lately (3d printing).  I mean how difficult could it be to compile _fc_ from source on macOS 🐇🕳 .  

1. see what instructions are available in the github README TODO:add link
2. find link to external _fc_ wiki
3. work through instructions TODO:add link
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

to quickly revert a git branch to it's original state, ie. if running cmake pollutes a the src directory of a project with a shit load of build artifacts that you no longer want.

```shell
git stash save --keep-index --include-untracked; git stash drop;
```

the above two commands should revert the _CWB_ to it's original state

16. figure out, refresh my brain _hello old friend™️_ to do a out of source build, ie. put polluants in a _build_ directory that can be quickly wiped out to start the entire cmake process from scratch. _no hate for the above git cmd though_

```shell
mkdir -p build; cd build;
cmake \
-B(PWD)
-H..
```

> i don't use BASH, i use fish

17. start sorting through the cmake output from the above command, and begin installing / updating _paths_ cmake flags to find libraries that the cmake build scripts would not otherwise find.

### side quests _in no particular order_

- realize the brew build system / pipeline has been kindof deperecated in favor of using a conda esque build system, thus how the weekly snapshots of freecad are produced for macOS.
- realize that some of the dependencies from the above mentioned homebrew tap ie. py2side can be installed via pip as opposed to using brew
- realize that specifying a path for python _library_ and _include_ directories are required.
- realize _fc_ depends on _netgen_ to perform all of its _structural analysis_ and what not, ie. the _FEM_ in _fc_ if i understand correctly.
- clone the netgen source _no not the sourceforge project_ but the github project
- begin to build _netgen_ so i can get past 89% of the _fc_ build process. 🤞

## TODOs

- [ ] build freecad using brew infrastructure
- [ ] see if _ninja_ can speed up the build process
- [ ] see if i can build and link against qt 5.15
- [ ] try and build the _development_ version of _freecad_
- [ ] see if it's even possible to adjust the titlebar, and possible conjure up a client side window decorator scheme for _fc_ ADDLINK
- [ ] remember what it was i was trying to model in freecad before i got distracted.

