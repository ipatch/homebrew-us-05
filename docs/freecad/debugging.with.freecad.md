> my poor excuse attempting to document my struggles when learning how setup a development environment to debug freecad

## TL;DR

<!-- insert some copypasta for t1000's -->

The first thing i did was a google search (duh), and that leads to the below freecad forum post.

https://forum.freecad.org/viewtopic.php?style=8&t=35383

That above link does contain a good deal of information about debugging specifically to python in regards to freecad but circa 2025 it's a bit dated, as microsoft has since deprecated the ptvsd pthon debugger in favor of debugpy.

The reason for me jumping down this rabbit hole was to troubleshoot an issue in freecad with specific workbench the heavily relies python, and opposed to littering multiple python files through out the source with print statements i'd thought it would be a good idea to experiment with using a debugger (to save myself some time and hassle, **not knowing** the _real_ hassle was about to begin 🤦‍♂️

So when launching freecad there is a feature built into freecad that allows attaching a remote debugger / or rather connecting a remote debugger. i had mixed results with this.

My current scenario involves, building freecad from a git clone, creating a new branch, and using cmake from a cli to build and install freecad. i'm using homebrew to build and install the deps required for freecad. and i'm doing all of this via ssh and a nested tmux session.

To test actual gui related features of freecad i setup a local rdp server (which i think is just a fancy wrapper around vnc)

That said from local arch linux install i can launch an rdp client and connect to the m1 mac mini running asahi and test gui features of freecad.

I have a decent neovim setup on this box that i've using via ssh to edit the source code test rebuilds and fix bugs believe it or not. i've never actually done anything worth while using debugger to solve a bug with freecad thus the inspiration for this document.


So for my current setup i had the free oss version of vscode without the proprietary features that microsoft bakes in and was unable to use the **open remote ssh** vs code extension with the completely free OSS version of vs code so i installed vscodium on my arch linux box, and am able to successfully attach to my local m1 and browse dirs on the box and view and edit files. the next logical step i presume is to see if i can attach a debugger to a process such a freecad to begin to troubleshoot the isuse i'm currently experiencing with a workbench that happens to be a UI/UX gui dependent bug, so testing and debugging via a cli is not really possible, or is way above my pay grade.

I did run into a couple hurdles while working my way through process ie. attempting to a reliable dev setup going to debug py related code of freecad.

1. the original debugger that shipped with vs code or was the original extension is now deprecated. [learn more][1]
  a. need to install the new version ie. debugpy. [learn more][2]

my first attempt at using debugpy was to launch a gui version of freecad, and within the freecad python console run,

```
import debugpy
debugpy.listen(("0.0.0.0", 5678))
```

that will execute but a pop up / floating window will appear within the main freecad gui window stating an error message. and apparently i'm not the first one who has tried this. [learn more][3]

my next attempt with debugpy was to start it from a terminal outside of freecad and use it to attach to a running freecad proccess, using something like the below command,

```shell
python3.13 -Xfrozen_modules=off -m debugpy --listen 0.0.0.0:5678 --pid $(pgrep freecad)
```

going this route lends itself to its own set of traps, one being if you do not have gdb installed well you're not going to get to far. so make sure you can install gdb using homebrew on asahi linux (insert can of worms here).

so you got gdb installed now you rerun the above command, and you see the following warnings / error messages.

```
warning: File "/opt/code/git/github/forks/freecad-git/installs/issue.tshooting.qt6.py312/lib64/libFreeCADGui.so" auto-loading has been declined by your `auto-load safe-path' set to "$debugdir:$datadir/auto-load".
To enable execution of this file add
	add-auto-load-safe-path /opt/code/git/github/forks/freecad-git/installs/issue.tshooting.qt6.py312/lib64/libFreeCADGui.so
line to your configuration file "/home/capin/.config/gdb/gdbinit".
To completely disable this security protection add
	set auto-load safe-path /
line to your configuration file "/home/capin/.config/gdb/gdbinit".
For more information about this security protection see the
"Auto-loading safe path" section in the GDB manual.  E.g., run from the shell:
	info "(gdb)Auto-loading safe path"
```

and if you're using debugpy on arm64 linux (like i know you are) then you'll get the below warning/error message,

```
Using /home/capin/.local/lib/python3.13/site-packages/debugpy/_vendored/pydevd/pydevd_attach_to_process/attach_linux_amd64.so in arch: aarch64.
```

and that's not good because we need the arm64 version of that shared library as the amd64 won't work with are asahi linux unforunately.

so after modifying the required files in the vendored version of pydevd [learn more][4]

we should have a library file that should work with our arm64 linux box ie. an m1 running asahi linux.

but then we get the below error / warning,

```
[New LWP 3336149]
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib64/libthread_db.so.1".
0x0000ffff4c3adc40 in wait4 () from /lib64/libc.so.6
Python Exception <class 'ModuleNotFoundError'>: No module named 'libstdcxx'
The target architecture is set to "auto" (currently "aarch64").
$1 = (void *) 0xaaabc9ad4e20
[Detaching after vfork from child process 3796625]
```

so to avoid the above warning i updated my gdbinit file with the following,

```shell
# allow auto-load of helpers NOTE: ipatch, be carefull can be seen as a security risk
set auto-load safe-path /

# add libstdc++ helper dir to gdb's python sys.path
python
import sys
sys.path.insert(0, "/home/capin/homebrew/opt/gcc/share/gcc-15/python")
```


## troubleshooting

something i noticed when launching debugpy via the freecad console was that i didn't see an open port for the debugpy interface ie.

```
ss -lntp | grep 5678
```

to print a a pretty path of all the paths freecad will look for python modules run the below commands,

```
print("\n".join(sys.path))
```

### troubleshooting / using debugpy to attach to a process

below is some output i got from **STDOUT** when using debugpy

```
╭─capin ssh m1mac in /home/capin
╰─λ python3.13 -Xfrozen_modules=off -m debugpy --listen 127.0.0.1:5678 --pid $(pgrep freecad)
Using /home/capin/.local/lib/python3.13/site-packages/debugpy/_vendored/pydevd/pydevd_attach_to_process/attach_linux_aarch64.so in arch: aarch64.
PYDEVD_GDB_SCAN_SHARED_LIBRARIES not set (scanning all libraries for needed symbols).
Running: gdb --nw --pid 3806272 --batch --eval-command='set scheduler-locking off' --eval-command='set architecture auto' --eval-command='call (void*)dlopen("/home/capin/.local/lib/python3.13/site-packages/debugpy/_vendored/pydevd/pydevd_attach_to_process/attach_linux_aarch64.so", 2)' --eval-command='sharedlibrary attach_linux_aarch64' --eval-command='call (int)DoAttach(0, "import codecs;import json;import sys;decode = lambda s: codecs.utf_8_decode(bytearray(s))[0] if s is not None else None;script_dir = decode([47, 104, 111, 109, 101, 47, 99, 97, 112, 105, 110, 47, 46, 108, 111, 99, 97, 108, 47, 108, 105, 98, 47, 112, 121, 116, 104, 111, 110, 51, 46, 49, 51, 47, 115, 105, 116, 101, 45, 112, 97, 99, 107, 97, 103, 101, 115, 47, 100, 101, 98, 117, 103, 112, 121, 47, 115, 101, 114, 118, 101, 114]);setup = json.loads(decode([123, 34, 109, 111, 100, 101, 34, 58, 32, 34, 108, 105, 115, 116, 101, 110, 34, 44, 32, 34, 97, 100, 100, 114, 101, 115, 115, 34, 58, 32, 91, 34, 49, 50, 55, 46, 48, 46, 48, 46, 49, 34, 44, 32, 53, 54, 55, 56, 93, 44, 32, 34, 119, 97, 105, 116, 95, 102, 111, 114, 95, 99, 108, 105, 101, 110, 116, 34, 58, 32, 102, 97, 108, 115, 101, 44, 32, 34, 108, 111, 103, 95, 116, 111, 34, 58, 32, 110, 117, 108, 108, 44, 32, 34, 97, 100, 97, 112, 116, 101, 114, 95, 97, 99, 99, 101, 115, 115, 95, 116, 111, 107, 101, 110, 34, 58, 32, 110, 117, 108, 108, 125]));sys.path.insert(0, script_dir);import attach_pid_injected;del sys.path[0];attach_pid_injected.attach(setup);", 0)'
[New LWP 3806291]
[New LWP 3806290]
[New LWP 3806289]
[New LWP 3806288]
[New LWP 3806287]
[New LWP 3806286]
[New LWP 3806285]
[New LWP 3806284]
[New LWP 3806283]
[New LWP 3806282]
[New LWP 3806281]
[New LWP 3806280]
[New LWP 3806279]
[New LWP 3806278]
[New LWP 3806277]
[New LWP 3806276]
[New LWP 3806275]
[New LWP 3806274]
[New LWP 3806273]
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib64/libthread_db.so.1".
0x0000ffff5b767604 in ppoll () from /lib64/libc.so.6
The target architecture is set to "auto" (currently "aarch64").
$1 = (void *) 0xaaab7a4f06f0
[Detaching after vfork from child process 3807147]
[New Thread 0xfffead016ec0 (LWP 3807153)]
[New Thread 0xfffeac806ec0 (LWP 3807154)]
[New Thread 0xfffeabff6ec0 (LWP 3807156)]
[New Thread 0xfffeab7e6ec0 (LWP 3807157)]
$2 = 0
[Inferior 1 (process 3806272) detached]
╭─capin ssh m1mac in /home/capin
╰─λ lsof -i :5678
COMMAND     PID  USER   FD   TYPE   DEVICE SIZE/OFF NODE NAME
python3 3807149 capin    3u  IPv4 32018442      0t0  TCP localhost:rrac (LISTEN)
╭─capin ssh m1mac in /home/capin
╰─λ lsof -i :5678
COMMAND     PID  USER   FD   TYPE   DEVICE SIZE/OFF NODE NAME
node    2638472 capin   31u  IPv4 32014685      0t0  TCP localhost:60444->localhost:rrac (ESTABLISHED)
node    2639036 capin   45u  IPv4 32020527      0t0  TCP localhost:58752->localhost:rrac (ESTABLISHED)
python3 3807149 capin    3u  IPv4 32018442      0t0  TCP localhost:rrac (LISTEN)
python3 3807149 capin    4u  IPv4 32012056      0t0  TCP localhost:rrac->localhost:60444 (ESTABLISHED)
python3 3807149 capin    8u  IPv4 32012245      0t0  TCP localhost:rrac->localhost:58752 (ESTABLISHED)
```


## useful links (in no particular order ...yet)

- github repo that contains "stubs" may be useful auto completion in certain scenarios
https://github.com/Vanuan/freecad-python-stubs

- below is a link to the github commit where wwmayer checked in the code for the remote debugger logic for freecad
https://github.com/FreeCAD/FreeCAD/commit/5947a5bad

- a comprehensive freecad forum post about using pyzo ide with freecad to debug python functionality of freecad<br />
https://forum.freecad.org/viewtopic.php?t=78047

- a decent tutorial on using debugpy to debugpy pyside related functionality inside of studio max
https://help.autodesk.com/view/MAXDEV/2024/ENU/?guid=MAXDEV_Python_tutorials_creating_the_dialog_html

freecad forum post, Advice requested on developing python workbench in VS Code

https://forum.freecad.org/viewtopic.php?f=10&t=62231&p=536278&hilit=python+debug+vscode#p536278

freecad forum post debugging macros with vs 2017

https://forum.freecad.org/viewtopic.php?f=22&t=28901

---

another freecad forum post about debugging python

https://forum.freecad.org/viewtopic.php?f=10&t=28256

---

freecad forum post, python debugger, python editor

https://forum.freecad.org/viewtopic.php?f=10&t=21898

---

the below freecad forum link is a dicussion about debugging interanl issues related to opencascade

https://forum.freecad.org/viewtopic.php?f=10&t=47017

---

a freecad forum post asking what ide do people use, and specifically **wmayer** reply

https://forum.freecad.org/viewtopic.php?f=10&t=3380&p=26446

---

the below freecad forum topic explains how wmayer proposes debugging freecad circa 2010, though it is outdated for sure the python console commands seem useful none the less. ie.

```python
import FreeCADGui
FreeCADGui.showMainWindow()
```



https://forum.freecad.org/viewtopic.php?t=231#p1428

---

https://forum.freecad.org/viewtopic.php?t=70042#p609945

the above forum thread reply discusses various vscode setups to configure the `launch.json` config file for vs code to be able to attach a debugger (supposedly) to a running freecad instance for debugging.

---

https://forum.freecad.org/viewtopic.php?t=70042#p609711

the above forum reply is a multi step process to get vs code setup to debug a python app such as freecad.

---

below is a snippet i'm just copypastaing here for now.

```python
import debugpy
debugpy.configure(python="python")
debugpy.listen(5678)
debugpy.trace_this_thread(True)
debugpy.debug_this_thread()
```

---

below is the command run in the vscodium terminal on my arch linux box when i attempt to debug freecad

```
capin@m1mac:/opt/code/fcgit/installs/issue.tshooting.qt6.py312$  cd /opt/code/fcgit/installs/issue.tshooting.qt6.py312 ; /usr/bin/env /bin/python3 /home/capin/.vscodium-server/extensions/ms-python.debugpy-2025.14.1-linux-arm64/bundled/libs/debugpy/adapter/../../debugpy/launcher 39097 -- /opt/code/fcgit/installs/issue.tshooting.qt6.py312/Mod/CAM/Path/Base/Gui/Util.py
```

**TODO** notice how that command is using the asahi system provided python and not the homebrew provided python

---


the below is some output i got when launching freecad from a terminal via my rdp session and attempting to work with debugpy

```
 Debugger warning: It seems that frozen modules are being used, which may
0.00s - make the debugger miss breakpoints. Please pass -Xfrozen_modules=off
0.00s - to python to disable frozen modules.
0.00s - Note: Debugging will proceed. Set PYDEVD_DISABLE_FILE_VALIDATION=1 to disable this validation.
QThreadStorage: entry 2 destroyed before end of thread 0xaaaac8173720
QThreadStorage: entry 1 destroyed before end of thread 0xaaaac8173720
⚠️ debugpy failed: timed out waiting for adapter to connect
QThreadStorage: entry 2 destroyed before end of thread 0xaaab283c7720
QThreadStorage: entry 1 destroyed before end of thread 0xaaab283c7720
⚠️ debugpy failed: timed out waiting for adapter to connect
QThreadStorage
```

## unsorted (possibly) useful links

<a id="unsorted-useful-links"></a>

- https://wiki.python.org/moin/DebuggingWithGdb
- https://forum.freecad.org/viewtopic.php?t=43681 (german)


[1]: <https://github.com/microsoft/ptvsd>
[2]: <https://github.com/microsoft/debugpy>
[3]: <https://forum.freecad.org/viewtopic.php?p=853381#p853381>
[4]: <https://github.com/microsoft/debugpy/issues/286#issuecomment-3447930290>
