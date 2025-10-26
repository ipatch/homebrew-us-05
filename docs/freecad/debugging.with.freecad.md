

> my poor excuse attempting to document my struggles when learning how setup a development environment to debug freecad

the first i did was a google search (duh), and that leads to the below freecad forum post.

https://forum.freecad.org/viewtopic.php?style=8&t=35383

that above link does contain a good deal of information about debugging specifically to python in regards to freecad but circa 2025 it's a bit dated, as microsoft has since deprecated the ptvsd pthon debugger in favor of debugpy.

the reason for me jumping down this rabbit hole was to troubleshoot an issue in freecad with specific workbench the heavily relies python, and opposed to littering multiple python files through out the source with print statements i'd thought it would be a good idea to experiment with using a debugger (to save myself some time and hassle, **not knowing** the _real_ hassle was about to begin 🤦‍♂️

so when launching freecad there is a feature built into freecad that allows attaching a remote debugger / or rather connecting a remote debugger. i had mixed results with this.

my current scenario involves, building freecad from a git clone, creating a new branch, and using cmake from a cli to build and install freecad. i'm using homebrew to build and install the deps required for freecad. and i'm doing all of this via ssh and a nested tmux session.

to test actual gui related features of freecad i setup a local rdp server (which i think is just a fancy wrapper around vnc)

that said from local arch linux install i can launch an rdp client and connect to the m1 mac mini running asahi and test gui features of freecad.

i have a decent neovim setup on this box that i've using via ssh to edit the source code test rebuilds and fix bugs believe it or not. i've never actually done anything worth while using debugger to solve a bug with freecad thus the inspiration for this document.


so for my current setup i had the free oss version of vscode without the proprietary features that microsoft bakes in and was unable to use the **open remote ssh** vs code extension with the completely free OSS version of vs code so i installed vscodium on my arch linux box, and am able to successfully attach to my local m1 and browse dirs on the box and view and edit files. the next logical step i presume is to see if i can attach a debugger to a process such a freecad to begin to troubleshoot the isuse i'm currently experiencing with a workbench that happens to be a UI/UX gui dependent bug, so testing and debugging via a cli is not really possible, or is way above my pay grade.

i did run into a couple hurdles while working my way through process ie. attempting to a reliable dev setup going to debug py related code of freecad.

1. the original debugger that shipped with vs code or was the original extension is now deprecated. [learn more][1]
  a. need to install the new version ie. debugpy.


[1] <https://github.com/microsoft/ptvsd>
