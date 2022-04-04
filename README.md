# vvtest1
Disposable test of versioning

Testbed / sandbox for possible solutions to
https://github.com/verilator/verilator/issues/3352
based on ideas from @quark17.
The point is to leverage github features controlled by the .gitattributes file
to get tagged snapshots identified as such.

This repo will contain snippets of Verilator files, and should
thus be considered GPLv3-licensed.

As I've copied files in from the verilator project, I've changed
some (but not all) instances of the "verilator" string to "vvtest1".
If any files leak from here to the outside world, I don't want people
to think that this is actually supposed to have any verilator functionality.
Not confusing at all.

Basic usage:
```
autoconf
./configure
make
src/vvtest1
```
But then also try other combinations and variations like out-of-tree,
and using github snapshots of a tagged version.
The only feature of the vvtest1 program is to print its version.

Larry Doolittle, April 2022
