#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/rz252/tjp79/ece5775-final/combined/voicerec.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
