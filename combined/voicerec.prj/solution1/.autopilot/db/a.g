#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/student/iyv2/ece5775/ece5775-final/combined/voicerec.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}