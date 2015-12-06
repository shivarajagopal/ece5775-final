# 1 "/home/student/iyv2/ece5775/ece5775-final/combined/voicerec.prj/solution1/.autopilot/db/neuralNetworkSynth.pragma.1.cpp"
# 1 "/home/student/iyv2/ece5775/ece5775-final/combined/voicerec.prj/solution1/.autopilot/db/neuralNetworkSynth.pragma.1.cpp" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 155 "<built-in>" 3
# 1 "<command line>" 1




# 1 "/research/brg/install/bare-pkgs/x86_64-centos6/pkgs/xilinx-vivado-2015.2/Vivado_HLS/2015.2/common/technology/autopilot/etc/autopilot_ssdm_op.h" 1
/* autopilot_ssdm_op.h*/
/*
#-  (c) Copyright 2011-2015 Xilinx, Inc. All rights reserved.
#-
#-  This file contains confidential and proprietary information
#-  of Xilinx, Inc. and is protected under U.S. and
#-  international copyright and other intellectual property
#-  laws.
#-
#-  DISCLAIMER
#-  This disclaimer is not a license and does not grant any
#-  rights to the materials distributed herewith. Except as
#-  otherwise provided in a valid license issued to you by
#-  Xilinx, and to the maximum extent permitted by applicable
#-  law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
#-  WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
#-  AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
#-  BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
#-  INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
#-  (2) Xilinx shall not be liable (whether in contract or tort,
#-  including negligence, or under any other theory of
#-  liability) for any loss or damage of any kind or nature
#-  related to, arising under or in connection with these
#-  materials, including for any direct, or any indirect,
#-  special, incidental, or consequential loss or damage
#-  (including loss of data, profits, goodwill, or any type of
#-  loss or damage suffered as a result of any action brought
#-  by a third party) even if such damage or loss was
#-  reasonably foreseeable or Xilinx had been advised of the
#-  possibility of the same.
#-
#-  CRITICAL APPLICATIONS
#-  Xilinx products are not designed or intended to be fail-
#-  safe, or for use in any application requiring fail-safe
#-  performance, such as life-support or safety devices or
#-  systems, Class III medical devices, nuclear facilities,
#-  applications related to the deployment of airbags, or any
#-  other applications that could lead to death, personal
#-  injury, or severe property or environmental damage
#-  (individually and collectively, "Critical
#-  Applications"). Customer assumes the sole risk and
#-  liability of any use of Xilinx products in Critical
#-  Applications, subject only to applicable laws and
#-  regulations governing limitations on product liability.
#-
#-  THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
#-  PART OF THIS FILE AT ALL TIMES. 
#- ************************************************************************

 *
 * $Id$
 */
# 145 "/research/brg/install/bare-pkgs/x86_64-centos6/pkgs/xilinx-vivado-2015.2/Vivado_HLS/2015.2/common/technology/autopilot/etc/autopilot_ssdm_op.h"
/*#define AP_SPEC_ATTR __attribute__ ((pure))*/




extern "C" {

    /****** SSDM Intrinsics: OPERATIONS ***/
    // Interface operations

    //typedef unsigned int __attribute__ ((bitwidth(1))) _uint1_;
    typedef bool _uint1_;

    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));

    // Stream Intrinsics
    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));

    // Misc
    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));

    void _ssdm_op_Return(...) __attribute__ ((nothrow));

    /* SSDM Intrinsics: SPECIFICATIONS */
    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));
    /*void* _ssdm_op_SpecProcess(...) SSDM_SPEC_ATTR;
    void* _ssdm_op_SpecEdge(...) SSDM_SPEC_ATTR; */

    /* Presynthesis directive functions */
    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));

    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));

}
# 404 "/research/brg/install/bare-pkgs/x86_64-centos6/pkgs/xilinx-vivado-2015.2/Vivado_HLS/2015.2/common/technology/autopilot/etc/autopilot_ssdm_op.h"
/*#define _ssdm_op_WaitUntil(X) while (!(X)) _ssdm_op_Wait(1);
#define _ssdm_op_Delayed(X) X */
# 6 "<command line>" 2
# 1 "<built-in>" 2
# 1 "/home/student/iyv2/ece5775/ece5775-final/combined/voicerec.prj/solution1/.autopilot/db/neuralNetworkSynth.pragma.1.cpp" 2
# 1 "neuralNetworkSynth.cpp"
# 1 "neuralNetworkSynth.cpp" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 155 "<built-in>" 3
# 1 "<command line>" 1




# 1 "/research/brg/install/bare-pkgs/x86_64-centos6/pkgs/xilinx-vivado-2015.2/Vivado_HLS/2015.2/common/technology/autopilot/etc/autopilot_ssdm_op.h" 1
/* autopilot_ssdm_op.h*/
/*
#-  (c) Copyright 2011-2015 Xilinx, Inc. All rights reserved.
#-
#-  This file contains confidential and proprietary information
#-  of Xilinx, Inc. and is protected under U.S. and
#-  international copyright and other intellectual property
#-  laws.
#-
#-  DISCLAIMER
#-  This disclaimer is not a license and does not grant any
#-  rights to the materials distributed herewith. Except as
#-  otherwise provided in a valid license issued to you by
#-  Xilinx, and to the maximum extent permitted by applicable
#-  law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
#-  WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
#-  AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
#-  BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
#-  INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
#-  (2) Xilinx shall not be liable (whether in contract or tort,
#-  including negligence, or under any other theory of
#-  liability) for any loss or damage of any kind or nature
#-  related to, arising under or in connection with these
#-  materials, including for any direct, or any indirect,
#-  special, incidental, or consequential loss or damage
#-  (including loss of data, profits, goodwill, or any type of
#-  loss or damage suffered as a result of any action brought
#-  by a third party) even if such damage or loss was
#-  reasonably foreseeable or Xilinx had been advised of the
#-  possibility of the same.
#-
#-  CRITICAL APPLICATIONS
#-  Xilinx products are not designed or intended to be fail-
#-  safe, or for use in any application requiring fail-safe
#-  performance, such as life-support or safety devices or
#-  systems, Class III medical devices, nuclear facilities,
#-  applications related to the deployment of airbags, or any
#-  other applications that could lead to death, personal
#-  injury, or severe property or environmental damage
#-  (individually and collectively, "Critical
#-  Applications"). Customer assumes the sole risk and
#-  liability of any use of Xilinx products in Critical
#-  Applications, subject only to applicable laws and
#-  regulations governing limitations on product liability.
#-
#-  THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
#-  PART OF THIS FILE AT ALL TIMES. 
#- ************************************************************************

 *
 * $Id$
 */
# 145 "/research/brg/install/bare-pkgs/x86_64-centos6/pkgs/xilinx-vivado-2015.2/Vivado_HLS/2015.2/common/technology/autopilot/etc/autopilot_ssdm_op.h"
/*#define AP_SPEC_ATTR __attribute__ ((pure))*/




extern "C" {

    /****** SSDM Intrinsics: OPERATIONS ***/
    // Interface operations

    //typedef unsigned int __attribute__ ((bitwidth(1))) _uint1_;
    typedef bool _uint1_;

    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));

    // Stream Intrinsics
    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));

    // Misc
    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));

    void _ssdm_op_Return(...) __attribute__ ((nothrow));

    /* SSDM Intrinsics: SPECIFICATIONS */
    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));
    /*void* _ssdm_op_SpecProcess(...) SSDM_SPEC_ATTR;
    void* _ssdm_op_SpecEdge(...) SSDM_SPEC_ATTR; */

    /* Presynthesis directive functions */
    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));

    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));

}
# 404 "/research/brg/install/bare-pkgs/x86_64-centos6/pkgs/xilinx-vivado-2015.2/Vivado_HLS/2015.2/common/technology/autopilot/etc/autopilot_ssdm_op.h"
/*#define _ssdm_op_WaitUntil(X) while (!(X)) _ssdm_op_Wait(1);
#define _ssdm_op_Delayed(X) X */
# 6 "<command line>" 2
# 1 "<built-in>" 2
# 1 "neuralNetworkSynth.cpp" 2
extern "C" {

# 1 "/usr/include/math.h" 1 3 4
/* Declarations for math functions.
   Copyright (C) 1991-1993, 1995-1999, 2001, 2002, 2004, 2006
   Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

/*
 *	ISO C99 Standard: 7.12 Mathematics	<math.h>
 */






# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991,1992,1993,1995,1996,1997,1998,1999,2000,2001,2002,2003,2004,2005,2006
	Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */




/* These are defined by the user (or the compiler)
   to specify the desired environment:

   __STRICT_ANSI__	ISO Standard C.
   _ISOC99_SOURCE	Extensions to ISO C89 from ISO C99.
   _POSIX_SOURCE	IEEE Std 1003.1.
   _POSIX_C_SOURCE	If ==1, like _POSIX_SOURCE; if >=2 add IEEE Std 1003.2;
			if >=199309L, add IEEE Std 1003.1b-1993;
			if >=199506L, add IEEE Std 1003.1c-1995;
			if >=200112L, all of IEEE 1003.1-2004
   _XOPEN_SOURCE	Includes POSIX and XPG things.  Set to 500 if
			Single Unix conformance is wanted, to 600 for the
			upcoming sixth revision.
   _XOPEN_SOURCE_EXTENDED XPG things and X/Open Unix extensions.
   _LARGEFILE_SOURCE	Some more functions for correct standard I/O.
   _LARGEFILE64_SOURCE	Additional functionality from LFS for large files.
   _FILE_OFFSET_BITS=N	Select default filesystem interface.
   _BSD_SOURCE		ISO C, POSIX, and 4.3BSD things.
   _SVID_SOURCE		ISO C, POSIX, and SVID things.
   _ATFILE_SOURCE	Additional *at interfaces.
   _GNU_SOURCE		All of the above, plus GNU extensions.
   _REENTRANT		Select additionally reentrant object.
   _THREAD_SAFE		Same as _REENTRANT, often used by other systems.
   _FORTIFY_SOURCE	If set to numeric value > 0 additional security
			measures are defined, according to level.

   The `-ansi' switch to the GNU C compiler defines __STRICT_ANSI__.
   If none of these are defined, the default is to have _SVID_SOURCE,
   _BSD_SOURCE, and _POSIX_SOURCE set to one and _POSIX_C_SOURCE set to
   200112L.  If more than one of these are defined, they accumulate.
   For example __STRICT_ANSI__, _POSIX_SOURCE and _POSIX_C_SOURCE
   together give you ISO C, 1003.1, and 1003.2, but nothing else.

   These are defined by this file and are used by the
   header files to decide what to declare or define:

   __USE_ISOC99		Define ISO C99 things.
   __USE_POSIX		Define IEEE Std 1003.1 things.
   __USE_POSIX2		Define IEEE Std 1003.2 things.
   __USE_POSIX199309	Define IEEE Std 1003.1, and .1b things.
   __USE_POSIX199506	Define IEEE Std 1003.1, .1b, .1c and .1i things.
   __USE_XOPEN		Define XPG things.
   __USE_XOPEN_EXTENDED	Define X/Open Unix things.
   __USE_UNIX98		Define Single Unix V2 things.
   __USE_XOPEN2K        Define XPG6 things.
   __USE_LARGEFILE	Define correct standard I/O things.
   __USE_LARGEFILE64	Define LFS things with separate names.
   __USE_FILE_OFFSET64	Define 64bit interface as default.
   __USE_BSD		Define 4.3BSD things.
   __USE_SVID		Define SVID things.
   __USE_MISC		Define things common to BSD and System V Unix.
   __USE_ATFILE		Define *at interfaces and AT_* constants for them.
   __USE_GNU		Define GNU extensions.
   __USE_REENTRANT	Define reentrant/thread-safe *_r functions.
   __USE_FORTIFY_LEVEL	Additional security measures used, according to level.
   __FAVOR_BSD		Favor 4.3BSD things in cases of conflict.

   The macros `__GNU_LIBRARY__', `__GLIBC__', and `__GLIBC_MINOR__' are
   defined by this file unconditionally.  `__GNU_LIBRARY__' is provided
   only for compatibility.  All new code should use the other symbols
   to test for features.

   All macros listed above as possibly being defined by this file are
   explicitly undefined if they are not explicitly defined.
   Feature-test macros that are not defined by the user or compiler
   but are implied by the other feature-test macros defined (or by the
   lack of any definitions) are defined by the file.  */


/* Undefine everything, so we get a clean slate.  */
# 115 "/usr/include/features.h" 3 4
/* Suppress kernel-name space pollution unless user expressedly asks
   for it.  */




/* Always use ISO C things.  */


/* Convenience macros to test the versions of glibc and gcc.
   Use them like this:
   #if __GNUC_PREREQ (2,8)
   ... code requiring gcc 2.8 or later ...
   #endif
   Note - they won't work for gcc1 or glibc1, since the _MINOR macros
   were not defined then.  */
# 139 "/usr/include/features.h" 3 4
/* If _BSD_SOURCE was defined by the user, favor BSD over POSIX.  */







/* If _GNU_SOURCE was defined by the user, turn on all the other features.  */
# 169 "/usr/include/features.h" 3 4
/* If nothing (other than _GNU_SOURCE) is defined,
   define _BSD_SOURCE and _SVID_SOURCE.  */
# 179 "/usr/include/features.h" 3 4
/* This is to enable the ISO C99 extension.  Also recognize the old macro
   which was used prior to the standard acceptance.  This macro will
   eventually go away and the features enabled by default once the ISO C99
   standard is widely adopted.  */





/* If none of the ANSI/POSIX macros are defined, use POSIX.1 and POSIX.2
   (and IEEE Std 1003.1b-1993 unless _XOPEN_SOURCE is defined).  */
# 294 "/usr/include/features.h" 3 4
/* We do support the IEC 559 math functionality, real and complex.  */



/* wchar_t uses ISO 10646-1 (2nd ed., published 2000-09-15) / Unicode 3.1.  */


/* This macro indicates that the installed library is the GNU C Library.
   For historic reasons the value now is 6 and this will stay from now
   on.  The use of this variable is deprecated.  Use __GLIBC__ and
   __GLIBC_MINOR__ now (see below) when you want to test for a specific
   GNU C library version and use the values in <gnu/lib-names.h> to get
   the sonames of the shared libraries.  */



/* Major and minor version number of the GNU C library package.  Use
   these macros to test for features in specific releases.  */






/* Decide whether a compiler supports the long long datatypes.  */







/* This is here only because every header file already includes this one.  */




# 1 "/usr/include/sys/cdefs.h" 1 3 4
/* Copyright (C) 1992-2001, 2002, 2004, 2005, 2006
   Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */




/* We are almost always included from features.h. */




/* The GNU libc does not support any K&R compilers or the traditional mode
   of ISO C compilers anymore.  Check for some of the combinations not
   anymore supported.  */




/* Some user header file might have defined this before.  */





/* GCC can always grok prototypes.  For C++ programs we add throw()
   to help it optimize the function calls.  But this works only with
   gcc 2.8.x and egcs.  For gcc 3.2 and up we even mark C functions
   as non-throwing using a function attribute since programs can use
   the -fexceptions options for C code as well.  */
# 72 "/usr/include/sys/cdefs.h" 3 4
/* These two macros are not used in glibc anymore.  They are kept here
   only because some other projects expect the macros to be defined.  */



/* For these things, GCC behaves the ANSI way normally,
   and the non-ANSI way under -traditional.  */




/* This is not a typedef so `const __ptr_t' does the right thing.  */




/* C++ needs to know that types and declarations are C, not C++.  */
# 98 "/usr/include/sys/cdefs.h" 3 4
/* The standard library needs the functions from the ISO C90 standard
   in the std namespace.  At the same time we want to be safe for
   future changes and we include the ISO C99 code in the non-standard
   namespace __c99.  The C++ wrapper header take case of adding the
   definitions to the global namespace.  */
# 111 "/usr/include/sys/cdefs.h" 3 4
/* For compatibility we do not add the declarations into any
   namespace.  They will end up in the global namespace which is what
   old code expects.  */
# 123 "/usr/include/sys/cdefs.h" 3 4
/* Support for bounded pointers.  */







/* Fortify support.  */





/* Support for flexible arrays.  */

/* GCC 2.97 supports C99 flexible array members.  */
# 155 "/usr/include/sys/cdefs.h" 3 4
/* __asm__ ("xyz") is used throughout the headers to rename functions
   at the assembly language level.  This is wrapped by the __REDIRECT
   macro, in order to support compilers that can do this some other
   way.  When compilers don't support asm-names at all, we have to do
   preprocessor tricks instead (which don't have exactly the right
   semantics, but it's the best we can do).

   Example:
   int __REDIRECT(setpgrp, (__pid_t pid, __pid_t pgrp), setpgid); */
# 178 "/usr/include/sys/cdefs.h" 3 4
/*
#elif __SOME_OTHER_COMPILER__

# define __REDIRECT(name, proto, alias) name proto; \
	_Pragma("let " #name " = " #alias)
*/


/* GCC has various useful declarations that can be made with the
   `__attribute__' syntax.  All of the ways we use this do fine if
   they are omitted for compilers that don't understand it. */




/* At some point during the gcc 2.96 development the `malloc' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */






/* At some point during the gcc 2.96 development the `pure' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */






/* At some point during the gcc 3.1 development the `used' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
# 222 "/usr/include/sys/cdefs.h" 3 4
/* gcc allows marking deprecated functions.  */






/* At some point during the gcc 2.8 development the `format_arg' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.
   If several `format_arg' attributes are given for the same function, in
   gcc-3.0 and older, all but the last one are ignored.  In newer gccs,
   all designated arguments are considered.  */






/* At some point during the gcc 2.97 development the `strfmon' format
   attribute for functions was introduced.  We don't want to use it
   unconditionally (although this would be possible) since it
   generates warnings.  */







/* The nonull function attribute allows to mark pointer parameters which
   must not be NULL.  */






/* If fortification mode, we warn about unused results of certain
   function calls which can lead to problems.  */
# 275 "/usr/include/sys/cdefs.h" 3 4
/* Forces a function to be always inlined.  */






/* It is possible to compile containing GCC extensions even if GCC is
   run in pedantic mode if the uses are carefully marked using the
   `__extension__' keyword.  But this is not generally available before
   version 2.8.  */




/* __restrict is known in EGCS 1.2 and above. */




/* ISO C99 also allows to declare arrays as non-overlapping.  The syntax is
     array_name[restrict]
   GCC 3.1 supports this.  */
# 313 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 314 "/usr/include/sys/cdefs.h" 2 3 4
# 330 "/usr/include/features.h" 2 3 4


/* If we don't have __REDIRECT, prototypes will be missing if
   __USE_FILE_OFFSET64 but not __USE_LARGEFILE[64]. */







/* Decide whether we can define 'extern inline' functions in headers.  */






/* This is here only because every header file already includes this one.
   Get the definitions of all the appropriate `__stub_FUNCTION' symbols.
   <gnu/stubs.h> contains `#define __stub_FUNCTION' when FUNCTION is a stub
   that will always return failure (and set errno to ENOSYS).  */


# 1 "/usr/include/gnu/stubs.h" 1 3 4
/* This file selects the right generated file of `__stub_FUNCTION' macros
   based on the architecture being compiled for.  */



# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 5 "/usr/include/gnu/stubs.h" 2 3 4




# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
/* This file is automatically generated.
   It defines a symbol `__stub_FUNCTION' for each function
   in the C library which is a stub, meaning it will fail
   every time called, usually setting errno to ENOSYS.  */
# 10 "/usr/include/gnu/stubs.h" 2 3 4
# 353 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/math.h" 2 3 4

extern "C" {

/* Get machine-dependent HUGE_VAL value (returned on overflow).
   On all IEEE754 machines, this is +Infinity.  */


# 1 "/usr/include/bits/huge_val.h" 1 3 4
/* `HUGE_VAL' constant for IEEE 754 machines (where it is infinity).
   Used by <stdlib.h> and <math.h> functions for overflow.
   Copyright (C) 1992, 1995, 1996, 1997, 1999, 2000, 2004
   Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */





/* IEEE positive infinity (-HUGE_VAL is negative infinity).  */
# 35 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/bits/huge_valf.h" 1 3 4
/* `HUGE_VALF' constant for IEEE 754 machines (where it is infinity).
   Used by <stdlib.h> and <math.h> functions for overflow.
   Copyright (C) 1992, 1995, 1996, 1997, 1999, 2000, 2004
   Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */





/* IEEE positive infinity (-HUGE_VAL is negative infinity).  */
# 37 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/bits/huge_vall.h" 1 3 4
/* Default `HUGE_VALL' constant.
   Used by <stdlib.h> and <math.h> functions for overflow.
   Copyright (C) 1992, 1996, 1997, 2004 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */
# 38 "/usr/include/math.h" 2 3 4

/* Get machine-dependent INFINITY value.  */


# 1 "/usr/include/bits/inf.h" 1 3 4
/* `INFINITY' constant for IEEE 754 machines.
   Copyright (C) 2004 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */





/* IEEE positive infinity.  */
# 41 "/usr/include/math.h" 2 3 4

/* Get machine-dependent NAN value (returned for some domain errors).  */


# 1 "/usr/include/bits/nan.h" 1 3 4
/* `NAN' constant for IEEE 754 machines.
   Copyright (C) 1992,1996,1997,1999,2004,2006 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */






/* IEEE Not A Number.  */
# 44 "/usr/include/math.h" 2 3 4


/* Get general and ISO C99 specific information.  */


# 1 "/usr/include/bits/mathdef.h" 1 3 4
/* Copyright (C) 2001, 2004 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */
# 26 "/usr/include/bits/mathdef.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 27 "/usr/include/bits/mathdef.h" 2 3 4


/* The x86-64 architecture computes values with the precission of the
   used type.  Similarly for -m32 -mfpmath=sse.  */
typedef float float_t; /* `float' expressions are evaluated as `float'.  */
typedef double double_t; /* `double' expressions are evaluated
				   as `double'.  */
# 44 "/usr/include/bits/mathdef.h" 3 4
/* The values returned by `ilogb' for 0 and NaN respectively.  */
# 48 "/usr/include/math.h" 2 3 4

/* The file <bits/mathcalls.h> contains the prototypes for all the
   actual math functions.  These macros are used for those prototypes,
   so we can easily declare each function as both `name' and `__name',
   and can declare the float versions `namef' and `__namef'.  */
# 71 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2002, 2003, 2006 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.

   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:

   __MATHCALL (NAME,[_r], (ARGS...));

   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.

   Functions returning other types like `int' are declared using the macro:

   __MATHDECL (TYPE, NAME,[_r], (ARGS...));

   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.

   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */






/* Trigonometric functions.  */


/* Arc cosine of X.  */
extern double acos (double __x) throw (); extern double __acos (double __x) throw ();
/* Arc sine of X.  */
extern double asin (double __x) throw (); extern double __asin (double __x) throw ();
/* Arc tangent of X.  */
extern double atan (double __x) throw (); extern double __atan (double __x) throw ();
/* Arc tangent of Y/X.  */
extern double atan2 (double __y, double __x) throw (); extern double __atan2 (double __y, double __x) throw ();

/* Cosine of X.  */
extern double cos (double __x) throw (); extern double __cos (double __x) throw ();
/* Sine of X.  */
extern double sin (double __x) throw (); extern double __sin (double __x) throw ();
/* Tangent of X.  */
extern double tan (double __x) throw (); extern double __tan (double __x) throw ();

/* Hyperbolic functions.  */

/* Hyperbolic cosine of X.  */
extern double cosh (double __x) throw (); extern double __cosh (double __x) throw ();
/* Hyperbolic sine of X.  */
extern double sinh (double __x) throw (); extern double __sinh (double __x) throw ();
/* Hyperbolic tangent of X.  */
extern double tanh (double __x) throw (); extern double __tanh (double __x) throw ();



/* Cosine and sine of X.  */
extern void sincos (double __x, double *__sinx, double *__cosx) throw (); extern void __sincos (double __x, double *__sinx, double *__cosx) throw ();





/* Hyperbolic arc cosine of X.  */
extern double acosh (double __x) throw (); extern double __acosh (double __x) throw ();
/* Hyperbolic arc sine of X.  */
extern double asinh (double __x) throw (); extern double __asinh (double __x) throw ();
/* Hyperbolic arc tangent of X.  */
extern double atanh (double __x) throw (); extern double __atanh (double __x) throw ();



/* Exponential and logarithmic functions.  */


/* Exponential function of X.  */
extern double exp (double __x) throw (); extern double __exp (double __x) throw ();

/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern double frexp (double __x, int *__exponent) throw (); extern double __frexp (double __x, int *__exponent) throw ();

/* X times (two to the EXP power).  */
extern double ldexp (double __x, int __exponent) throw (); extern double __ldexp (double __x, int __exponent) throw ();

/* Natural logarithm of X.  */
extern double log (double __x) throw (); extern double __log (double __x) throw ();

/* Base-ten logarithm of X.  */
extern double log10 (double __x) throw (); extern double __log10 (double __x) throw ();

/* Break VALUE into integral and fractional parts.  */
extern double modf (double __x, double *__iptr) throw (); extern double __modf (double __x, double *__iptr) throw ();



/* A function missing in all standards: compute exponent to base ten.  */
extern double exp10 (double __x) throw (); extern double __exp10 (double __x) throw ();
/* Another name occasionally used.  */
extern double pow10 (double __x) throw (); extern double __pow10 (double __x) throw ();




/* Return exp(X) - 1.  */
extern double expm1 (double __x) throw (); extern double __expm1 (double __x) throw ();

/* Return log(1 + X).  */
extern double log1p (double __x) throw (); extern double __log1p (double __x) throw ();

/* Return the base 2 signed integral exponent of X.  */
extern double logb (double __x) throw (); extern double __logb (double __x) throw ();





/* Compute base-2 exponential of X.  */
extern double exp2 (double __x) throw (); extern double __exp2 (double __x) throw ();

/* Compute base-2 logarithm of X.  */
extern double log2 (double __x) throw (); extern double __log2 (double __x) throw ();




/* Power functions.  */


/* Return X to the Y power.  */
extern double pow (double __x, double __y) throw (); extern double __pow (double __x, double __y) throw ();

/* Return the square root of X.  */
extern double sqrt (double __x) throw (); extern double __sqrt (double __x) throw ();




/* Return `sqrt(X*X + Y*Y)'.  */
extern double hypot (double __x, double __y) throw (); extern double __hypot (double __x, double __y) throw ();





/* Return the cube root of X.  */
extern double cbrt (double __x) throw (); extern double __cbrt (double __x) throw ();




/* Nearest integer, absolute value, and remainder functions.  */


/* Smallest integral value not less than X.  */
extern double ceil (double __x) throw () __attribute__ ((__const__)); extern double __ceil (double __x) throw () __attribute__ ((__const__));

/* Absolute value of X.  */
extern double fabs (double __x) throw () __attribute__ ((__const__)); extern double __fabs (double __x) throw () __attribute__ ((__const__));

/* Largest integer not greater than X.  */
extern double floor (double __x) throw () __attribute__ ((__const__)); extern double __floor (double __x) throw () __attribute__ ((__const__));

/* Floating-point modulo remainder of X/Y.  */
extern double fmod (double __x, double __y) throw (); extern double __fmod (double __x, double __y) throw ();


/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int __isinf (double __value) throw () __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  */
extern int __finite (double __value) throw () __attribute__ ((__const__));



/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int isinf (double __value) throw () __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  */
extern int finite (double __value) throw () __attribute__ ((__const__));

/* Return the remainder of X/Y.  */
extern double drem (double __x, double __y) throw (); extern double __drem (double __x, double __y) throw ();


/* Return the fractional part of X after dividing out `ilogb (X)'.  */
extern double significand (double __x) throw (); extern double __significand (double __x) throw ();




/* Return X with its signed changed to Y's.  */
extern double copysign (double __x, double __y) throw () __attribute__ ((__const__)); extern double __copysign (double __x, double __y) throw () __attribute__ ((__const__));





/* Return representation of NaN for double type.  */
extern double nan (__const char *__tagb) throw () __attribute__ ((__const__)); extern double __nan (__const char *__tagb) throw () __attribute__ ((__const__));




/* Return nonzero if VALUE is not a number.  */
extern int __isnan (double __value) throw () __attribute__ ((__const__));


/* Return nonzero if VALUE is not a number.  */
extern int isnan (double __value) throw () __attribute__ ((__const__));

/* Bessel functions.  */
extern double j0 (double) throw (); extern double __j0 (double) throw ();
extern double j1 (double) throw (); extern double __j1 (double) throw ();
extern double jn (int, double) throw (); extern double __jn (int, double) throw ();
extern double y0 (double) throw (); extern double __y0 (double) throw ();
extern double y1 (double) throw (); extern double __y1 (double) throw ();
extern double yn (int, double) throw (); extern double __yn (int, double) throw ();





/* Error and gamma functions.  */
extern double erf (double) throw (); extern double __erf (double) throw ();
extern double erfc (double) throw (); extern double __erfc (double) throw ();
extern double lgamma (double) throw (); extern double __lgamma (double) throw ();





/* True gamma function.  */
extern double tgamma (double) throw (); extern double __tgamma (double) throw ();




/* Obsolete alias for `lgamma'.  */
extern double gamma (double) throw (); extern double __gamma (double) throw ();



/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
extern double lgamma_r (double, int *__signgamp) throw (); extern double __lgamma_r (double, int *__signgamp) throw ();





/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
extern double rint (double __x) throw (); extern double __rint (double __x) throw ();

/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern double nextafter (double __x, double __y) throw () __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) throw () __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) throw () __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) throw () __attribute__ ((__const__));


/* Return the remainder of integer divison X / Y with infinite precision.  */
extern double remainder (double __x, double __y) throw (); extern double __remainder (double __x, double __y) throw ();


/* Return X times (2 to the Nth power).  */
extern double scalbn (double __x, int __n) throw (); extern double __scalbn (double __x, int __n) throw ();


/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogb (double __x) throw (); extern int __ilogb (double __x) throw ();



/* Return X times (2 to the Nth power).  */
extern double scalbln (double __x, long int __n) throw (); extern double __scalbln (double __x, long int __n) throw ();

/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
extern double nearbyint (double __x) throw (); extern double __nearbyint (double __x) throw ();

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern double round (double __x) throw () __attribute__ ((__const__)); extern double __round (double __x) throw () __attribute__ ((__const__));

/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
extern double trunc (double __x) throw () __attribute__ ((__const__)); extern double __trunc (double __x) throw () __attribute__ ((__const__));

/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
extern double remquo (double __x, double __y, int *__quo) throw (); extern double __remquo (double __x, double __y, int *__quo) throw ();


/* Conversion functions.  */

/* Round X to nearest integral value according to current rounding
   direction.  */
extern long int lrint (double __x) throw (); extern long int __lrint (double __x) throw ();
extern long long int llrint (double __x) throw (); extern long long int __llrint (double __x) throw ();

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long int lround (double __x) throw (); extern long int __lround (double __x) throw ();
extern long long int llround (double __x) throw (); extern long long int __llround (double __x) throw ();


/* Return positive difference between X and Y.  */
extern double fdim (double __x, double __y) throw (); extern double __fdim (double __x, double __y) throw ();

/* Return maximum numeric value from X and Y.  */
extern double fmax (double __x, double __y) throw (); extern double __fmax (double __x, double __y) throw ();

/* Return minimum numeric value from X and Y.  */
extern double fmin (double __x, double __y) throw (); extern double __fmin (double __x, double __y) throw ();


/* Classify given number.  */
extern int __fpclassify (double __value) throw ()
     __attribute__ ((__const__));

/* Test for negative number.  */
extern int __signbit (double __value) throw ()
     __attribute__ ((__const__));


/* Multiply-add function computed as a ternary operation.  */
extern double fma (double __x, double __y, double __z) throw (); extern double __fma (double __x, double __y, double __z) throw ();







/* Return X times (2 to the Nth power).  */
extern double scalb (double __x, double __n) throw (); extern double __scalb (double __x, double __n) throw ();
# 72 "/usr/include/math.h" 2 3 4








/* Include the file of declarations again, this time using `float'
   instead of `double' and appending f to each function name.  */
# 94 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2002, 2003, 2006 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.

   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:

   __MATHCALL (NAME,[_r], (ARGS...));

   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.

   Functions returning other types like `int' are declared using the macro:

   __MATHDECL (TYPE, NAME,[_r], (ARGS...));

   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.

   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */






/* Trigonometric functions.  */


/* Arc cosine of X.  */
extern float acosf (float __x) throw (); extern float __acosf (float __x) throw ();
/* Arc sine of X.  */
extern float asinf (float __x) throw (); extern float __asinf (float __x) throw ();
/* Arc tangent of X.  */
extern float atanf (float __x) throw (); extern float __atanf (float __x) throw ();
/* Arc tangent of Y/X.  */
extern float atan2f (float __y, float __x) throw (); extern float __atan2f (float __y, float __x) throw ();

/* Cosine of X.  */
extern float cosf (float __x) throw (); extern float __cosf (float __x) throw ();
/* Sine of X.  */
extern float sinf (float __x) throw (); extern float __sinf (float __x) throw ();
/* Tangent of X.  */
extern float tanf (float __x) throw (); extern float __tanf (float __x) throw ();

/* Hyperbolic functions.  */

/* Hyperbolic cosine of X.  */
extern float coshf (float __x) throw (); extern float __coshf (float __x) throw ();
/* Hyperbolic sine of X.  */
extern float sinhf (float __x) throw (); extern float __sinhf (float __x) throw ();
/* Hyperbolic tangent of X.  */
extern float tanhf (float __x) throw (); extern float __tanhf (float __x) throw ();



/* Cosine and sine of X.  */
extern void sincosf (float __x, float *__sinx, float *__cosx) throw (); extern void __sincosf (float __x, float *__sinx, float *__cosx) throw ();





/* Hyperbolic arc cosine of X.  */
extern float acoshf (float __x) throw (); extern float __acoshf (float __x) throw ();
/* Hyperbolic arc sine of X.  */
extern float asinhf (float __x) throw (); extern float __asinhf (float __x) throw ();
/* Hyperbolic arc tangent of X.  */
extern float atanhf (float __x) throw (); extern float __atanhf (float __x) throw ();



/* Exponential and logarithmic functions.  */


/* Exponential function of X.  */
extern float expf (float __x) throw (); extern float __expf (float __x) throw ();

/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern float frexpf (float __x, int *__exponent) throw (); extern float __frexpf (float __x, int *__exponent) throw ();

/* X times (two to the EXP power).  */
extern float ldexpf (float __x, int __exponent) throw (); extern float __ldexpf (float __x, int __exponent) throw ();

/* Natural logarithm of X.  */
extern float logf (float __x) throw (); extern float __logf (float __x) throw ();

/* Base-ten logarithm of X.  */
extern float log10f (float __x) throw (); extern float __log10f (float __x) throw ();

/* Break VALUE into integral and fractional parts.  */
extern float modff (float __x, float *__iptr) throw (); extern float __modff (float __x, float *__iptr) throw ();



/* A function missing in all standards: compute exponent to base ten.  */
extern float exp10f (float __x) throw (); extern float __exp10f (float __x) throw ();
/* Another name occasionally used.  */
extern float pow10f (float __x) throw (); extern float __pow10f (float __x) throw ();




/* Return exp(X) - 1.  */
extern float expm1f (float __x) throw (); extern float __expm1f (float __x) throw ();

/* Return log(1 + X).  */
extern float log1pf (float __x) throw (); extern float __log1pf (float __x) throw ();

/* Return the base 2 signed integral exponent of X.  */
extern float logbf (float __x) throw (); extern float __logbf (float __x) throw ();





/* Compute base-2 exponential of X.  */
extern float exp2f (float __x) throw (); extern float __exp2f (float __x) throw ();

/* Compute base-2 logarithm of X.  */
extern float log2f (float __x) throw (); extern float __log2f (float __x) throw ();




/* Power functions.  */


/* Return X to the Y power.  */
extern float powf (float __x, float __y) throw (); extern float __powf (float __x, float __y) throw ();

/* Return the square root of X.  */
extern float sqrtf (float __x) throw (); extern float __sqrtf (float __x) throw ();




/* Return `sqrt(X*X + Y*Y)'.  */
extern float hypotf (float __x, float __y) throw (); extern float __hypotf (float __x, float __y) throw ();





/* Return the cube root of X.  */
extern float cbrtf (float __x) throw (); extern float __cbrtf (float __x) throw ();




/* Nearest integer, absolute value, and remainder functions.  */


/* Smallest integral value not less than X.  */
extern float ceilf (float __x) throw () __attribute__ ((__const__)); extern float __ceilf (float __x) throw () __attribute__ ((__const__));

/* Absolute value of X.  */
extern float fabsf (float __x) throw () __attribute__ ((__const__)); extern float __fabsf (float __x) throw () __attribute__ ((__const__));

/* Largest integer not greater than X.  */
extern float floorf (float __x) throw () __attribute__ ((__const__)); extern float __floorf (float __x) throw () __attribute__ ((__const__));

/* Floating-point modulo remainder of X/Y.  */
extern float fmodf (float __x, float __y) throw (); extern float __fmodf (float __x, float __y) throw ();


/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int __isinff (float __value) throw () __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  */
extern int __finitef (float __value) throw () __attribute__ ((__const__));



/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int isinff (float __value) throw () __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  */
extern int finitef (float __value) throw () __attribute__ ((__const__));

/* Return the remainder of X/Y.  */
extern float dremf (float __x, float __y) throw (); extern float __dremf (float __x, float __y) throw ();


/* Return the fractional part of X after dividing out `ilogb (X)'.  */
extern float significandf (float __x) throw (); extern float __significandf (float __x) throw ();




/* Return X with its signed changed to Y's.  */
extern float copysignf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) throw () __attribute__ ((__const__));





/* Return representation of NaN for double type.  */
extern float nanf (__const char *__tagb) throw () __attribute__ ((__const__)); extern float __nanf (__const char *__tagb) throw () __attribute__ ((__const__));




/* Return nonzero if VALUE is not a number.  */
extern int __isnanf (float __value) throw () __attribute__ ((__const__));


/* Return nonzero if VALUE is not a number.  */
extern int isnanf (float __value) throw () __attribute__ ((__const__));

/* Bessel functions.  */
extern float j0f (float) throw (); extern float __j0f (float) throw ();
extern float j1f (float) throw (); extern float __j1f (float) throw ();
extern float jnf (int, float) throw (); extern float __jnf (int, float) throw ();
extern float y0f (float) throw (); extern float __y0f (float) throw ();
extern float y1f (float) throw (); extern float __y1f (float) throw ();
extern float ynf (int, float) throw (); extern float __ynf (int, float) throw ();





/* Error and gamma functions.  */
extern float erff (float) throw (); extern float __erff (float) throw ();
extern float erfcf (float) throw (); extern float __erfcf (float) throw ();
extern float lgammaf (float) throw (); extern float __lgammaf (float) throw ();





/* True gamma function.  */
extern float tgammaf (float) throw (); extern float __tgammaf (float) throw ();




/* Obsolete alias for `lgamma'.  */
extern float gammaf (float) throw (); extern float __gammaf (float) throw ();



/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
extern float lgammaf_r (float, int *__signgamp) throw (); extern float __lgammaf_r (float, int *__signgamp) throw ();





/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
extern float rintf (float __x) throw (); extern float __rintf (float __x) throw ();

/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern float nextafterf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) throw () __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__));


/* Return the remainder of integer divison X / Y with infinite precision.  */
extern float remainderf (float __x, float __y) throw (); extern float __remainderf (float __x, float __y) throw ();


/* Return X times (2 to the Nth power).  */
extern float scalbnf (float __x, int __n) throw (); extern float __scalbnf (float __x, int __n) throw ();


/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogbf (float __x) throw (); extern int __ilogbf (float __x) throw ();



/* Return X times (2 to the Nth power).  */
extern float scalblnf (float __x, long int __n) throw (); extern float __scalblnf (float __x, long int __n) throw ();

/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
extern float nearbyintf (float __x) throw (); extern float __nearbyintf (float __x) throw ();

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern float roundf (float __x) throw () __attribute__ ((__const__)); extern float __roundf (float __x) throw () __attribute__ ((__const__));

/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
extern float truncf (float __x) throw () __attribute__ ((__const__)); extern float __truncf (float __x) throw () __attribute__ ((__const__));

/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
extern float remquof (float __x, float __y, int *__quo) throw (); extern float __remquof (float __x, float __y, int *__quo) throw ();


/* Conversion functions.  */

/* Round X to nearest integral value according to current rounding
   direction.  */
extern long int lrintf (float __x) throw (); extern long int __lrintf (float __x) throw ();
extern long long int llrintf (float __x) throw (); extern long long int __llrintf (float __x) throw ();

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long int lroundf (float __x) throw (); extern long int __lroundf (float __x) throw ();
extern long long int llroundf (float __x) throw (); extern long long int __llroundf (float __x) throw ();


/* Return positive difference between X and Y.  */
extern float fdimf (float __x, float __y) throw (); extern float __fdimf (float __x, float __y) throw ();

/* Return maximum numeric value from X and Y.  */
extern float fmaxf (float __x, float __y) throw (); extern float __fmaxf (float __x, float __y) throw ();

/* Return minimum numeric value from X and Y.  */
extern float fminf (float __x, float __y) throw (); extern float __fminf (float __x, float __y) throw ();


/* Classify given number.  */
extern int __fpclassifyf (float __value) throw ()
     __attribute__ ((__const__));

/* Test for negative number.  */
extern int __signbitf (float __value) throw ()
     __attribute__ ((__const__));


/* Multiply-add function computed as a ternary operation.  */
extern float fmaf (float __x, float __y, float __z) throw (); extern float __fmaf (float __x, float __y, float __z) throw ();







/* Return X times (2 to the Nth power).  */
extern float scalbf (float __x, float __n) throw (); extern float __scalbf (float __x, float __n) throw ();
# 95 "/usr/include/math.h" 2 3 4
# 141 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2002, 2003, 2006 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.

   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:

   __MATHCALL (NAME,[_r], (ARGS...));

   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.

   Functions returning other types like `int' are declared using the macro:

   __MATHDECL (TYPE, NAME,[_r], (ARGS...));

   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.

   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */






/* Trigonometric functions.  */


/* Arc cosine of X.  */
extern long double acosl (long double __x) throw (); extern long double __acosl (long double __x) throw ();
/* Arc sine of X.  */
extern long double asinl (long double __x) throw (); extern long double __asinl (long double __x) throw ();
/* Arc tangent of X.  */
extern long double atanl (long double __x) throw (); extern long double __atanl (long double __x) throw ();
/* Arc tangent of Y/X.  */
extern long double atan2l (long double __y, long double __x) throw (); extern long double __atan2l (long double __y, long double __x) throw ();

/* Cosine of X.  */
extern long double cosl (long double __x) throw (); extern long double __cosl (long double __x) throw ();
/* Sine of X.  */
extern long double sinl (long double __x) throw (); extern long double __sinl (long double __x) throw ();
/* Tangent of X.  */
extern long double tanl (long double __x) throw (); extern long double __tanl (long double __x) throw ();

/* Hyperbolic functions.  */

/* Hyperbolic cosine of X.  */
extern long double coshl (long double __x) throw (); extern long double __coshl (long double __x) throw ();
/* Hyperbolic sine of X.  */
extern long double sinhl (long double __x) throw (); extern long double __sinhl (long double __x) throw ();
/* Hyperbolic tangent of X.  */
extern long double tanhl (long double __x) throw (); extern long double __tanhl (long double __x) throw ();



/* Cosine and sine of X.  */
extern void sincosl (long double __x, long double *__sinx, long double *__cosx) throw (); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) throw ();





/* Hyperbolic arc cosine of X.  */
extern long double acoshl (long double __x) throw (); extern long double __acoshl (long double __x) throw ();
/* Hyperbolic arc sine of X.  */
extern long double asinhl (long double __x) throw (); extern long double __asinhl (long double __x) throw ();
/* Hyperbolic arc tangent of X.  */
extern long double atanhl (long double __x) throw (); extern long double __atanhl (long double __x) throw ();



/* Exponential and logarithmic functions.  */


/* Exponential function of X.  */
extern long double expl (long double __x) throw (); extern long double __expl (long double __x) throw ();

/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern long double frexpl (long double __x, int *__exponent) throw (); extern long double __frexpl (long double __x, int *__exponent) throw ();

/* X times (two to the EXP power).  */
extern long double ldexpl (long double __x, int __exponent) throw (); extern long double __ldexpl (long double __x, int __exponent) throw ();

/* Natural logarithm of X.  */
extern long double logl (long double __x) throw (); extern long double __logl (long double __x) throw ();

/* Base-ten logarithm of X.  */
extern long double log10l (long double __x) throw (); extern long double __log10l (long double __x) throw ();

/* Break VALUE into integral and fractional parts.  */
extern long double modfl (long double __x, long double *__iptr) throw (); extern long double __modfl (long double __x, long double *__iptr) throw ();



/* A function missing in all standards: compute exponent to base ten.  */
extern long double exp10l (long double __x) throw (); extern long double __exp10l (long double __x) throw ();
/* Another name occasionally used.  */
extern long double pow10l (long double __x) throw (); extern long double __pow10l (long double __x) throw ();




/* Return exp(X) - 1.  */
extern long double expm1l (long double __x) throw (); extern long double __expm1l (long double __x) throw ();

/* Return log(1 + X).  */
extern long double log1pl (long double __x) throw (); extern long double __log1pl (long double __x) throw ();

/* Return the base 2 signed integral exponent of X.  */
extern long double logbl (long double __x) throw (); extern long double __logbl (long double __x) throw ();





/* Compute base-2 exponential of X.  */
extern long double exp2l (long double __x) throw (); extern long double __exp2l (long double __x) throw ();

/* Compute base-2 logarithm of X.  */
extern long double log2l (long double __x) throw (); extern long double __log2l (long double __x) throw ();




/* Power functions.  */


/* Return X to the Y power.  */
extern long double powl (long double __x, long double __y) throw (); extern long double __powl (long double __x, long double __y) throw ();

/* Return the square root of X.  */
extern long double sqrtl (long double __x) throw (); extern long double __sqrtl (long double __x) throw ();




/* Return `sqrt(X*X + Y*Y)'.  */
extern long double hypotl (long double __x, long double __y) throw (); extern long double __hypotl (long double __x, long double __y) throw ();





/* Return the cube root of X.  */
extern long double cbrtl (long double __x) throw (); extern long double __cbrtl (long double __x) throw ();




/* Nearest integer, absolute value, and remainder functions.  */


/* Smallest integral value not less than X.  */
extern long double ceill (long double __x) throw () __attribute__ ((__const__)); extern long double __ceill (long double __x) throw () __attribute__ ((__const__));

/* Absolute value of X.  */
extern long double fabsl (long double __x) throw () __attribute__ ((__const__)); extern long double __fabsl (long double __x) throw () __attribute__ ((__const__));

/* Largest integer not greater than X.  */
extern long double floorl (long double __x) throw () __attribute__ ((__const__)); extern long double __floorl (long double __x) throw () __attribute__ ((__const__));

/* Floating-point modulo remainder of X/Y.  */
extern long double fmodl (long double __x, long double __y) throw (); extern long double __fmodl (long double __x, long double __y) throw ();


/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int __isinfl (long double __value) throw () __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  */
extern int __finitel (long double __value) throw () __attribute__ ((__const__));



/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int isinfl (long double __value) throw () __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  */
extern int finitel (long double __value) throw () __attribute__ ((__const__));

/* Return the remainder of X/Y.  */
extern long double dreml (long double __x, long double __y) throw (); extern long double __dreml (long double __x, long double __y) throw ();


/* Return the fractional part of X after dividing out `ilogb (X)'.  */
extern long double significandl (long double __x) throw (); extern long double __significandl (long double __x) throw ();




/* Return X with its signed changed to Y's.  */
extern long double copysignl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) throw () __attribute__ ((__const__));





/* Return representation of NaN for double type.  */
extern long double nanl (__const char *__tagb) throw () __attribute__ ((__const__)); extern long double __nanl (__const char *__tagb) throw () __attribute__ ((__const__));




/* Return nonzero if VALUE is not a number.  */
extern int __isnanl (long double __value) throw () __attribute__ ((__const__));


/* Return nonzero if VALUE is not a number.  */
extern int isnanl (long double __value) throw () __attribute__ ((__const__));

/* Bessel functions.  */
extern long double j0l (long double) throw (); extern long double __j0l (long double) throw ();
extern long double j1l (long double) throw (); extern long double __j1l (long double) throw ();
extern long double jnl (int, long double) throw (); extern long double __jnl (int, long double) throw ();
extern long double y0l (long double) throw (); extern long double __y0l (long double) throw ();
extern long double y1l (long double) throw (); extern long double __y1l (long double) throw ();
extern long double ynl (int, long double) throw (); extern long double __ynl (int, long double) throw ();





/* Error and gamma functions.  */
extern long double erfl (long double) throw (); extern long double __erfl (long double) throw ();
extern long double erfcl (long double) throw (); extern long double __erfcl (long double) throw ();
extern long double lgammal (long double) throw (); extern long double __lgammal (long double) throw ();





/* True gamma function.  */
extern long double tgammal (long double) throw (); extern long double __tgammal (long double) throw ();




/* Obsolete alias for `lgamma'.  */
extern long double gammal (long double) throw (); extern long double __gammal (long double) throw ();



/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
extern long double lgammal_r (long double, int *__signgamp) throw (); extern long double __lgammal_r (long double, int *__signgamp) throw ();





/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
extern long double rintl (long double __x) throw (); extern long double __rintl (long double __x) throw ();

/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern long double nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__));


/* Return the remainder of integer divison X / Y with infinite precision.  */
extern long double remainderl (long double __x, long double __y) throw (); extern long double __remainderl (long double __x, long double __y) throw ();


/* Return X times (2 to the Nth power).  */
extern long double scalbnl (long double __x, int __n) throw (); extern long double __scalbnl (long double __x, int __n) throw ();


/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogbl (long double __x) throw (); extern int __ilogbl (long double __x) throw ();



/* Return X times (2 to the Nth power).  */
extern long double scalblnl (long double __x, long int __n) throw (); extern long double __scalblnl (long double __x, long int __n) throw ();

/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
extern long double nearbyintl (long double __x) throw (); extern long double __nearbyintl (long double __x) throw ();

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long double roundl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundl (long double __x) throw () __attribute__ ((__const__));

/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
extern long double truncl (long double __x) throw () __attribute__ ((__const__)); extern long double __truncl (long double __x) throw () __attribute__ ((__const__));

/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
extern long double remquol (long double __x, long double __y, int *__quo) throw (); extern long double __remquol (long double __x, long double __y, int *__quo) throw ();


/* Conversion functions.  */

/* Round X to nearest integral value according to current rounding
   direction.  */
extern long int lrintl (long double __x) throw (); extern long int __lrintl (long double __x) throw ();
extern long long int llrintl (long double __x) throw (); extern long long int __llrintl (long double __x) throw ();

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long int lroundl (long double __x) throw (); extern long int __lroundl (long double __x) throw ();
extern long long int llroundl (long double __x) throw (); extern long long int __llroundl (long double __x) throw ();


/* Return positive difference between X and Y.  */
extern long double fdiml (long double __x, long double __y) throw (); extern long double __fdiml (long double __x, long double __y) throw ();

/* Return maximum numeric value from X and Y.  */
extern long double fmaxl (long double __x, long double __y) throw (); extern long double __fmaxl (long double __x, long double __y) throw ();

/* Return minimum numeric value from X and Y.  */
extern long double fminl (long double __x, long double __y) throw (); extern long double __fminl (long double __x, long double __y) throw ();


/* Classify given number.  */
extern int __fpclassifyl (long double __value) throw ()
     __attribute__ ((__const__));

/* Test for negative number.  */
extern int __signbitl (long double __value) throw ()
     __attribute__ ((__const__));


/* Multiply-add function computed as a ternary operation.  */
extern long double fmal (long double __x, long double __y, long double __z) throw (); extern long double __fmal (long double __x, long double __y, long double __z) throw ();







/* Return X times (2 to the Nth power).  */
extern long double scalbl (long double __x, long double __n) throw (); extern long double __scalbl (long double __x, long double __n) throw ();
# 142 "/usr/include/math.h" 2 3 4
# 156 "/usr/include/math.h" 3 4
/* This variable is used by `gamma' and `lgamma'.  */
extern int signgam;



/* ISO C99 defines some generic macros which work on any data type.  */


/* Get the architecture specific values describing the floating-point
   evaluation.  The following symbols will get defined:

    float_t	floating-point type at least as wide as `float' used
		to evaluate `float' expressions
    double_t	floating-point type at least as wide as `double' used
		to evaluate `double' expressions

    FLT_EVAL_METHOD
		Defined to
		  0	if `float_t' is `float' and `double_t' is `double'
		  1	if `float_t' and `double_t' are `double'
		  2	if `float_t' and `double_t' are `long double'
		  else	`float_t' and `double_t' are unspecified

    INFINITY	representation of the infinity value of type `float'

    FP_FAST_FMA
    FP_FAST_FMAF
    FP_FAST_FMAL
		If defined it indicates that the `fma' function
		generally executes about as fast as a multiply and an add.
		This macro is defined only iff the `fma' function is
		implemented directly with a hardware multiply-add instructions.

    FP_ILOGB0	Expands to a value returned by `ilogb (0.0)'.
    FP_ILOGBNAN	Expands to a value returned by `ilogb (NAN)'.

    DECIMAL_DIG	Number of decimal digits supported by conversion between
		decimal and all internal floating-point formats.

*/

/* All floating-point numbers can be put in one of these categories.  */
enum
  {
    FP_NAN,

    FP_INFINITE,

    FP_ZERO,

    FP_SUBNORMAL,

    FP_NORMAL

  };

/* Return number of classification appropriate for X.  */
# 224 "/usr/include/math.h" 3 4
/* Return nonzero value if sign of X is negative.  */
# 236 "/usr/include/math.h" 3 4
/* Return nonzero value if X is not +-Inf or NaN.  */
# 248 "/usr/include/math.h" 3 4
/* Return nonzero value if X is neither zero, subnormal, Inf, nor NaN.  */


/* Return nonzero value if X is a NaN.  We could use `fpclassify' but
   we already have this functions `__isnan' and it is faster.  */
# 264 "/usr/include/math.h" 3 4
/* Return nonzero value is X is positive or negative infinity.  */
# 276 "/usr/include/math.h" 3 4
/* Bitmasks for the math_errhandling macro.  */






/* Support for various different standard error handling behaviors.  */
typedef enum
{
  _IEEE_ = -1, /* According to IEEE 754/IEEE 854.  */
  _SVID_, /* According to System V, release 4.  */
  _XOPEN_, /* Nowadays also Unix98.  */
  _POSIX_,
  _ISOC_ /* Actually this is ISO C99.  */
} _LIB_VERSION_TYPE;

/* This variable can be changed at run-time to any of the values above to
   affect floating point error handling behavior (it may also be necessary
   to change the hardware FPU exception settings).  */
extern _LIB_VERSION_TYPE _LIB_VERSION;




/* In SVID error handling, `matherr' is called with this description
   of the exceptional condition.

   We have a problem when using C++ since `exception' is a reserved
   name in C++.  */

struct __exception



  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };


extern int matherr (struct __exception *__exc) throw ();






/* Types of exceptions in the `type' field.  */







/* SVID mode specifies returning this large value instead of infinity.  */
# 348 "/usr/include/math.h" 3 4
/* Some useful constants.  */
# 365 "/usr/include/math.h" 3 4
/* The above constants are not adequate for computation using `long double's.
   Therefore we provide as an extension constants with similar names as a
   GNU extension.  Provide enough digits for the 128-bit IEEE quad.  */
# 385 "/usr/include/math.h" 3 4
/* When compiling in strict ISO C compatible mode we must not use the
   inline functions since they, among other things, do not set the
   `errno' variable correctly.  */





/* ISO C99 defines some macros to compare number while taking care for
   unordered numbers.  Many FPUs provide special instructions to support
   these operations.  Generic support in GCC for these as builtins went
   in before 3.0.0, but not all cpus added their patterns.  We define
   versions that use the builtins here, and <bits/mathinline.h> will
   undef/redefine as appropriate for the specific GCC version in use.  */
# 407 "/usr/include/math.h" 3 4
/* Get machine-dependent inline versions (if there are any).  */





/* If we've still got undefined comparison macros, provide defaults.  */

/* Return nonzero value if X is greater than Y.  */







/* Return nonzero value if X is greater than or equal to Y.  */







/* Return nonzero value if X is less than Y.  */







/* Return nonzero value if X is less than or equal to Y.  */







/* Return nonzero value if either X is less than Y or Y is less than X.  */







/* Return nonzero value if arguments are unordered.  */
# 465 "/usr/include/math.h" 3 4
}
# 2 "neuralNetworkSynth.cpp" 2
}
# 2 "neuralNetworkSynth.cpp"


# 1 "./speech_weights.h" 1
float weightIH[883][25] = {
 {-0.00815459, 0.0573438, -0.000250261, -0.00348743, 0.0137745, 0.00169993, -0.0213381, 0.0106788, -0.0716607, 0.00231552, -0.0287635, 0.0138236, 0.0330649, -0.013128, -0.00544545, 0.0166092, -0.0219842, 0.0307648, 0.0428773, -0.0150377, 0.0112749, 0.000657708, 0.021161, -0.0264807, -0.00441387},
 {-0.0266202, 0.0426562, 0.00268183, -0.0299851, 0.030871, 0.018836, 0.0284106, 0.00879249, -0.0257551, 0.0249378, 0.0251165, -0.0153601, -0.0130418, -0.01552, -0.00259424, -0.0404484, -0.0113499, 0.0269391, -0.018052, 0.0443181, -0.0169295, -0.0240942, -0.0216218, -0.0501404, 0.00867105},
 {-0.0109198, 0.049994, -0.0156184, 0.0266745, -0.0025938, 0.0140568, 0.0117467, 0.00830661, -0.0458251, 0.0416229, 0.0150408, -0.0444971, 0.00236784, 0.017912, 0.0177729, -0.00497614, 0.0152406, 0.0256171, 0.0251593, 0.015805, 0.00226541, 0.0255451, 0.019918, 0.00518025, 0.0201674},
 {-0.0240596, 0.0291822, 0.0175067, 0.0406382, -0.0167519, 0.00204036, -0.0311215, 0.0368903, 0.0190067, 0.0138463, 0.0106255, 0.0396266, 0.0265883, 0.0133341, -0.01362, 0.0243921, 0.0130212, -0.0119636, 0.0202581, -0.0249275, 0.0047503, -0.013415, -0.0327513, -0.00514324, -0.00393637},
 {0.0289281, 0.0247593, -0.00904362, 0.0220192, 0.0116399, -0.0260157, -0.0233653, -0.0193691, -0.00836681, -0.0324357, -9.53641e-05, 0.0249501, -0.0102864, -0.0210143, 0.00645229, 0.0160628, 0.0100263, -0.0197389, 0.0235396, -0.0478627, 0.00983912, -0.0271531, 0.00159048, -0.0163021, -0.00750973},
 {-0.0301441, 0.0267921, 0.00212705, 0.0166571, -0.0176144, 0.0156847, -0.0361634, 0.00188733, -0.0139226, -0.0378043, -0.00550275, -0.0227003, 0.0130676, -0.00451865, -0.0242214, -0.00859965, 0.014636, -0.00348554, 0.0192996, 0.0276081, 0.0207395, 0.0279786, 0.0132641, -0.0157757, 0.0126042},
 {0.0223482, -0.00522215, 0.03441, 0.0305663, 0.0141283, -0.0116405, 0.00235775, -0.00429488, 0.0371239, 0.00716851, -0.0238478, 0.0433628, 0.021391, -0.0106076, -0.0241338, -0.00229557, 0.0223293, -0.0214429, 0.00476915, -0.0312604, 0.00035783, 0.0173403, 0.00742009, 0.0419202, -0.00415627},
 {0.0206619, -0.0368896, -0.0236012, -0.00117696, -0.023876, 0.0139645, 0.0136326, 0.0127402, 0.00565175, -0.0155927, -0.009922, 0.00194035, 0.0053154, -0.0210935, -0.0144621, -0.0227917, -0.0199819, -0.00740843, 0.00107174, -0.0142341, 0.0182482, -0.0208454, 0.0118313, 0.00857175, -0.0167393},
 {-0.0204286, -0.0189135, 0.00566955, 0.0157462, -0.0196155, 0.0139669, -0.0310798, 0.037123, 0.00715144, -0.0072875, 0.00640739, 0.0266634, -0.028733, 0.0124035, -0.00654239, 0.00153238, -0.00394774, -0.0351503, 0.0231341, 0.00730463, 0.00331087, -0.00980478, -0.0167909, 0.00507272, 0.0269187},
 {-0.0167298, 0.0189546, 0.0122829, -0.0156731, 5.14425e-05, 0.00372728, 0.0102849, -0.0149373, 0.0095658, -0.0101277, -0.0312524, 0.00759808, -0.00780963, -0.0136378, 0.0231575, 0.0338278, -0.00985663, -0.00944864, 0.0248432, 0.00647564, -0.0226074, -0.00968215, -0.0281896, -0.01789, 0.00204825},
 {0.0192732, -0.00942355, -0.0115094, 0.0283636, 0.0082704, -0.02599, 0.0311026, -0.00100781, 0.0123588, 0.0134227, 0.00735097, -0.00103457, 0.00961184, -0.0217104, 0.0294543, 0.0261849, 0.00661715, -0.0139988, 0.00967826, -0.00998666, -0.0262009, 0.00359345, -0.01599, -0.0248583, 0.00481768},
 {-0.0262694, 0.0234553, -0.026507, -0.0092091, -0.00953276, 0.00181049, -0.0342034, -0.0169525, -0.0124055, 0.0259517, -0.017901, 0.0273329, 0.00280987, 0.0016492, -0.0179487, -0.0225082, -0.0129276, -0.0249025, -0.0227365, -0.000256334, 3.16428e-05, 0.0277044, 0.00306629, -0.0356357, -0.00764403},
 {0.0278571, 0.015588, 0.0210453, -0.018177, -0.0203053, -0.00422993, 0.0364324, 0.0184533, 0.0221435, 0.0307743, 0.0124054, 0.0128958, -0.0140027, -0.0161291, 0.0171396, -0.0223892, 0.00979843, 0.0196523, 0.0294558, -0.0129459, 0.0199274, -0.00480084, 0.0149346, -0.0189542, 0.0297509},
 {0.0167641, -0.015376, -0.0126726, -0.0274984, 0.0108091, -0.00545231, -0.0207803, -0.0263973, -0.0405403, 0.000257337, 0.0104594, -0.00928973, -0.0303111, -0.032118, -0.0058953, 0.000346089, 0.022616, -0.00894957, 0.00093031, -0.0360824, 0.0118617, -0.0114839, -0.0347388, -1.36483e-05, 0.0275699},
 {-0.0272674, 0.0526411, 0.0356035, 0.0548422, 0.0159544, 0.0170183, -0.0147293, 0.00444222, -0.0516275, -0.00235174, 0.00884493, -0.00867789, 0.00108011, -0.0452917, -0.00150105, 0.00137155, 0.00895145, 0.012429, 0.0229427, -0.0633835, 0.0286064, -0.0180594, 0.0139106, 0.02467, 0.0203166},
 {0.0215002, -0.0225977, -0.0474504, 0.0108646, 0.0353371, 0.00804458, 0.0419085, -0.00147567, -0.0300439, 0.024038, -0.0204112, -0.0331625, -0.000499364, -0.0254019, -0.0135932, 0.00362475, -0.0241791, 0.0471179, 0.00799233, -0.0162515, -0.0129333, 0.0308944, 0.0212029, 0.00660005, 0.00916262},
 {0.0139974, 0.0674801, -0.00930968, -0.0247476, 0.034996, -0.0236592, 0.0189526, 0.00879857, -0.0328468, 0.0328099, 0.0124624, 0.0222693, -0.0158594, -0.0126843, 0.0221803, 0.026989, 0.0226579, 0.0221715, 0.00614, 0.00571677, 0.0296125, -0.022503, 0.0115458, -0.0184649, -0.0128653},
 {0.019132, -0.00928419, -0.011738, 0.0147493, -0.0070104, -0.00478163, 0.00608116, 0.0311818, -0.0135216, 0.0123407, 0.0152315, 0.00360299, -0.0256832, -0.016766, 0.00343845, -0.0123152, 0.0405202, -0.00735995, -0.020251, -0.0158675, 0.0054719, 0.0302245, -0.01467, 0.0118018, 0.0356917},
 {-0.0286947, 0.0117165, 0.00931632, 0.0234241, 0.00279138, -0.0271019, 0.0203828, -0.00601935, -0.0335372, -0.01085, -0.00377706, -0.0101471, 0.0234281, 0.012869, 0.00885541, 0.0164462, 0.0112191, -0.0350396, 0.0385642, -0.0219156, -0.0222063, 0.00513297, -0.0229892, 0.0313654, 0.0282406},
 {-0.00207566, -0.00507623, 0.0353755, 0.00579421, -0.0280451, 0.0314814, -0.00643342, -0.00817327, -0.00654971, 0.0229321, 0.0138071, 0.00676715, -0.0307465, 0.00492695, 0.00419879, 0.0248864, -0.026646, -0.0115226, 0.0317491, 0.0210788, 0.0162965, -0.0144365, 0.00389122, 0.00730864, 0.0209071},
 {-0.0215484, 0.0119671, 0.0394684, 0.00594538, 0.00239603, -0.0214441, -0.0390659, -0.00755589, -0.00608276, -0.0245479, -0.0265946, 0.0459252, -0.00971464, -0.0293667, 0.0319024, 0.00533571, 0.0334323, -0.0322686, 0.0117607, 0.0109146, -0.00729131, -0.0128418, -0.0384259, 0.00631369, 0.0388514},
 {0.0297331, -0.00398173, 0.0180382, 0.0172885, 0.0092867, -0.0278753, 0.00355456, 0.00874488, 0.043246, -0.00501707, 0.00125439, 0.0284181, 0.0202555, -0.0253905, 0.01837, -0.0065398, 0.0291766, -0.0386836, -0.018253, -0.0180867, 0.0210832, 0.00957996, -0.0263311, 0.0565198, 0.0296153},
 {0.00973185, -0.0183469, 0.0146805, 0.0192694, 0.00636201, -0.0262522, 0.0138679, -0.0267324, 0.0274644, -0.0202922, -0.00217399, 0.0130586, -0.00848842, 0.00443531, -0.0201542, -0.000910684, 0.0244166, -0.0330137, -0.00805757, -0.00964232, 0.029658, 0.0281592, -0.0296409, -0.0107361, -0.00894789},
 {0.0264933, 0.00870076, -0.0099037, 0.0344616, 0.00117463, 0.0209455, 0.00663823, -9.21688e-05, -0.00375572, -0.0324335, 0.00264967, 0.0308404, 0.0173668, 0.0286415, -0.0190804, -0.0170357, -0.0301531, 0.00315774, -0.0126124, 0.00496724, 0.0109757, -0.0313348, 0.00501244, -0.0107447, -0.00430502},
 {-0.0115727, -0.0190516, 0.012412, 0.024259, 0.00864965, 0.0205075, -0.0167664, 0.00120397, 0.0111992, 0.0140834, -0.0166534, -0.00751298, -0.00428485, -0.0334347, -0.000158754, 0.0245632, -0.00319774, 0.0128703, -0.023363, 0.027891, -0.0316545, -0.0105387, -0.0148986, 0.0130111, -0.00205301},
 {-0.00626725, -0.00415272, -0.0247624, 0.0214331, -0.00820014, 0.0289326, 0.0279391, -0.0212654, 0.0202605, -0.0302645, 0.0222964, 0.0245096, 0.00698021, -0.0204226, 0.0189502, -0.0101057, -0.0263475, -0.0108576, 0.0285695, -0.0214399, 0.00319999, 0.0224223, 0.00507801, 0.0291621, 0.00947834},
 {-0.0268819, -0.00583587, 0.0132804, -0.0208848, 0.0300726, -0.0215132, -0.0278868, -0.000235447, 0.0250159, 0.00890034, -0.00258158, -0.0235865, 0.0148931, 0.0164578, -0.0139123, -0.0106081, 0.00332049, 0.0319904, -0.0325406, 0.00560499, -0.00521439, 0.0237081, -0.0212597, 0.0293008, 0.00559746},
 {-0.0246876, -0.00710828, 0.0282409, -0.00386561, 0.0317338, -0.0106403, -0.0290531, -0.0292328, 0.0176916, 0.020146, 0.0100694, 0.0114011, -0.0137342, -0.0138294, 0.0184533, -0.0146503, -0.00983477, 0.0213008, -0.00660058, -0.0121436, -0.00745875, -0.0331472, 0.0219659, -0.0168791, 0.00907627},
 {-0.0346772, 0.0418303, 0.0601862, 0.0216877, 0.0478475, -0.0301639, -0.0596099, 0.0166659, -0.0610957, -0.0119724, -0.017534, 0.0272252, -0.00640277, -0.0204614, -0.0120375, 0.0317, 0.0235689, -0.0130332, 0.0237161, -0.019528, 0.0716872, -0.00256331, -0.00403252, -0.00930387, -0.00795685},
 {0.0034112, 0.0156073, -0.0451228, 0.0130552, 0.0306451, 0.0290794, 0.0142606, 0.0167158, 0.0237798, 0.0435432, 0.026823, 0.0116009, 0.0372034, 0.0258521, -0.00404854, 0.00352519, -0.00780232, -0.0206383, -0.0289759, 0.0454882, -0.00538035, 0.0341073, -0.0170985, 0.0104972, -0.0180598},
 {-0.0100424, 0.0413184, 0.0341941, 0.0306647, -0.0277899, 0.000173576, -0.000265256, 0.0176801, -0.0235462, 0.00342684, 0.0142567, 0.021443, -0.0270541, -0.0223625, -0.0253269, -0.00127372, 0.0247988, -0.00250047, 0.0253657, -0.0083252, 0.0291156, 0.0245739, -0.0287698, 0.0159059, 0.00638811},
 {0.00388011, -0.00337305, 0.0414666, 0.0337868, -0.0136925, 0.0157675, -0.0494179, 0.0312795, -0.030211, -0.0165012, -0.00707863, 0.0294968, 0.0132211, 0.00964252, 0.0184998, 0.0366593, 0.0168422, 0.0275928, 0.0234224, -0.0294911, 0.0155085, 0.0198803, 0.0203092, 0.00177036, -0.0137041},
 {0.0212794, 0.0255835, 0.0160708, -0.01811, 0.0247696, -0.0317106, -0.0289934, -0.0251861, -0.0228628, -0.012132, 0.0139772, -0.0167395, -0.0381459, -0.0121659, -0.0222077, 0.0151807, 0.0179108, -0.00459554, 0.0310984, -0.0320409, 0.0172446, -0.0116854, -0.0197583, -0.0179279, -0.0174566},
 {0.0227571, -0.0347887, -0.0180589, -0.000148222, 0.0287929, -0.00728439, -0.0106754, 0.0163193, -0.0131581, -0.019532, -0.0205721, 0.0229266, -0.0334442, -0.0275559, -0.00524469, -0.00143428, 0.0131004, 0.0119398, 0.0270981, -0.00638272, 0.00782684, 0.0233449, 0.000814927, -0.00591568, -0.00914673},
 {-0.0163267, -0.00685422, 0.0134313, -0.00803316, -0.0396037, 0.0249021, -0.0235123, 0.0247752, 0.0144395, -0.00478318, -0.00368467, 0.012119, -0.0253257, 0.0299584, 0.0273217, 0.00654495, -0.0155423, 0.00183217, 0.0290084, -0.0102243, 0.0164551, -0.00384225, -0.0125702, -0.00358968, 0.0405851},
 {0.0282056, -0.0319467, 0.0208095, -0.0344103, 0.00537675, -0.0188434, 0.0243428, 0.00932702, 0.0308514, -0.00898741, -0.00754913, 0.0293861, -0.0192911, 0.00021567, 0.00661765, 0.0048154, -0.0239502, -0.017428, -0.0335847, -0.0137986, 0.00901814, 0.00977543, 0.0113779, 0.0509247, -0.00825021},
 {0.000444242, 0.0256715, 0.0289109, -0.0255095, -0.0110694, 0.0228014, 0.0205817, 0.0197399, 0.000799425, 0.0132414, -0.00515445, 0.00784484, -0.0298073, 0.0343564, 0.0210728, 0.0268576, 0.0141151, -0.0214013, -0.0163577, 0.00749413, 0.0150627, -0.0127546, 0.0174475, 0.0107103, -0.0183485},
 {0.0286653, -0.0322417, 0.00407989, -0.00268156, -0.0250527, -0.00644384, 0.0259069, -0.00426103, 0.0146467, 0.0350745, 0.0324772, 0.0338502, -0.0284772, -0.00967089, 0.0183069, 0.003591, -0.000260895, -0.00886687, 0.0310183, 0.00196277, -0.0317917, -0.0327426, -0.014756, -0.0263536, 0.0113421},
 {0.00866972, 0.024042, -0.0102928, -0.0253816, -0.0174887, 0.0190047, -0.0244807, -0.0275075, -0.0140997, 0.0249943, -0.00440689, -0.0262715, -0.0264956, -0.0154934, 0.00746335, 0.0303308, -0.0157463, -0.0198153, -0.0100613, 0.0246886, -0.0081796, -0.00579247, -0.0290095, -0.00891983, -0.023604},
 {-0.018936, -0.0278048, -0.0166634, 0.0300747, -0.0226144, 0.00942306, -0.033911, -0.00452413, 0.0307618, 0.0060176, -0.0261079, -0.00530519, -0.0144526, 0.0202141, 0.0303936, 0.0345665, -0.00706699, 0.0143306, 0.0205504, -0.0283519, -0.00872746, 0.0122326, -0.0346331, 0.0281391, -0.0280881},
 {0.0174816, -0.0185885, -0.00959905, -0.00271363, -0.00313456, 0.00184029, -0.00988385, -0.00925555, -0.00699877, 0.0290133, -0.0199533, 0.0213365, 0.0128302, 0.0141842, -0.0226356, -0.0134715, 0.031125, -0.0196241, 0.0252082, -0.0143443, -0.0355867, -0.0118284, -0.00818856, -0.0017211, -0.0302602},
 {-0.00783084, 0.0195227, 0.00103245, -0.0132751, 0.00561338, -0.014687, -0.0262274, 0.0149418, 0.0240207, -0.00225134, -0.00666974, -0.0289746, -0.0215362, -0.00261595, 0.00201307, -0.0286639, 0.0188181, 0.0187882, 0.00717418, -0.00527801, 0.0187085, -0.020977, -0.023807, -0.0120037, -0.0012406},
 {0.0223112, 0.0621167, 0.0457539, 0.066893, 0.0057135, 0.0185068, -0.0425912, 0.0596905, -0.0220416, -0.0709282, -0.0331816, 0.0185927, 0.02095, -0.00478026, -0.0222461, 0.0113389, 0.0241528, -0.0421393, 0.038653, -0.0721798, 0.0717322, 0.0188153, -0.00767548, 0.0338236, 0.0524326},
 {-0.0154934, -0.0233663, -0.0400084, -0.0164975, -0.00582834, 0.00213157, -0.0140906, -0.0127801, -0.0364509, 0.0247664, 0.0126389, -0.0308318, -0.025574, 0.0262867, -0.0263015, -0.0270707, 0.0138979, -0.0204375, 0.0134485, -0.00303991, -0.0144527, -0.00573148, 0.0298768, 0.00821913, 0.0256474},
 {-0.00949654, -0.00860012, -0.00307522, -0.0252426, 0.0173421, -0.015568, 0.0273745, -0.00810481, 0.0175405, 0.0131001, -0.0179357, -0.0101102, 0.0157503, -0.0277795, 0.0240474, -0.0132217, -0.00215502, -0.0398673, 0.00627137, -0.0168537, 0.0192218, -0.00378945, 0.0212809, 0.0186768, 0.00139333},
 {-0.0101104, -0.00960216, -0.00112407, 0.0316232, 0.0336752, 0.0174785, -0.0497563, 0.0221247, 0.0190215, 0.0162193, -0.0150646, -0.00271147, -0.00641141, 0.028221, -0.011408, 0.028256, -0.0138898, -0.0096165, 0.0301953, 0.00431691, 0.0161041, 0.0206421, -0.0025654, -0.0183654, -0.0237715},
 {-0.0271932, 0.0186007, 0.0175269, 0.0173559, 0.0344187, -0.0115533, -0.0155401, -0.0209755, -0.0244027, 0.0112097, 0.00401264, -0.0271082, -0.0359731, -0.0151995, 0.018969, 0.00960393, 0.0345726, 0.0132393, 0.0284883, -0.00412679, 0.00540197, -0.00958036, -0.0249951, 0.000817567, -0.0320214},
 {-0.00198886, -0.0384427, 0.00198835, 0.00722192, -0.0273512, -0.0140258, 0.0216687, 0.00897949, 0.0151711, -0.04202, 0.0333942, 0.00706433, 0.0171858, 0.0285378, 0.0231143, -0.00149609, -0.0229726, 0.0266926, -0.0350071, 0.0195956, 0.0352655, 0.0212949, 0.0161996, 0.0211239, 0.00897288},
 {0.0294942, -0.0131835, 0.020712, 0.0348242, 0.0017407, 0.000591199, 0.0254597, -0.0154228, -0.00984345, 0.0128121, -0.022418, 0.0473686, -0.00518591, 2.40894e-05, -0.0240742, -0.0239397, 0.0105015, -0.0189978, 0.0254845, -0.00209158, 0.021872, 0.0326991, -0.0305946, -0.00491476, 0.041159},
 {0.0135349, -0.0414475, -0.0357424, -0.0222926, -0.0123338, 0.00520875, 0.0141485, -0.0321712, -0.0137267, -0.009606, -0.0175406, 0.0312389, 0.0269687, -0.00646694, -0.0219272, -0.0294028, 0.0400991, -0.0257685, -0.0363839, 0.00308272, 0.0339799, 0.0265757, -0.0328813, 0.0136315, -0.0206228},
 {0.00126332, 0.00495722, -0.0025695, 0.0100146, 0.0136183, -0.0146244, -0.0219323, 0.0114368, 0.0015291, -0.00956078, 0.0152464, 0.0351124, -0.00444943, 0.0150145, -0.00605067, 0.0265617, 0.0352651, -0.0213936, -0.0394439, 0.0329756, -0.0187571, -0.0221517, -0.0204836, 0.0430265, 0.000283453},
 {-0.0272966, -0.0307713, -0.0107544, -0.00281423, -0.037657, 0.00140272, 0.00355683, 0.0233002, 0.0275263, -0.0032007, -0.0293721, -0.0259215, -0.0198979, -0.0270592, -0.0116573, -0.0157816, -0.00243397, 0.00423606, -0.00790252, 0.0222511, -0.0343462, -0.00706112, -0.0132316, 0.0214417, 0.0196929},
 {0.000387266, 0.0215056, -0.02261, 0.00244815, 0.0336479, 0.0101432, -0.0246272, -1.04756e-05, 0.0132377, -0.0130115, -0.0104394, 0.00116835, 0.00856311, 0.00575375, 0.0169681, -0.0176059, -0.00703961, 0.0171756, 0.00644283, -0.0265539, -0.00558061, -0.0210954, -0.0293706, -0.0245192, -0.031381},
 {-0.000736, 0.0358831, 0.00287819, 0.0181656, -0.0106576, 0.0313197, 0.0229623, 0.0207388, -0.00067403, -0.0353112, 0.00952137, 0.0166979, 0.00825844, -0.0252951, 0.0210495, 0.0375632, -0.000298067, -0.0339031, 0.0089447, -0.0144421, 0.00803311, 0.00203202, 0.00511922, 0.0144445, 0.0196962},
 {-0.0283462, -0.0128925, -0.0166316, -0.025914, -0.0118202, -0.0153234, 0.00490059, -0.0148909, -0.0258504, 0.0383324, 0.016452, -0.0183673, 0.0120089, -0.0179422, -0.0130141, 5.25993e-05, -0.022903, 0.0389648, 0.0283992, 0.0141102, -0.00232, -0.0064112, -0.02561, -0.0128239, 0.00236723},
 {0.0230547, -0.0174233, -0.00153436, -0.0237836, -0.0255154, -0.0245399, -0.0101199, -0.0165661, -0.00646896, -0.0230822, -0.022784, -0.00863773, -0.0129208, -0.0298673, 0.0325243, -0.00443944, 0.0133038, -0.016865, -0.0114378, -0.024462, 0.00732909, 0.0182114, -0.00380773, -0.0316589, 0.0189993},
 {-0.0123961, 0.0308387, 0.0682158, 0.0904583, 0.00376672, -0.00313761, -0.0408612, 0.0132682, -0.0201681, -0.0265357, 0.00466103, -0.000751855, -0.0329965, -0.0125314, -0.0142173, 0.0479761, 0.0334363, -0.0130382, 0.00741396, -0.0638979, 0.0397009, -0.017838, -0.0335621, 0.00958469, 0.0466411},
 {-0.0154741, 0.0296992, -0.00671217, -0.00579981, -0.00512333, 0.00361702, 0.0298659, 0.000107575, -0.0122246, -0.0107458, -0.0169301, -0.0273167, -0.0167376, 0.0294856, -0.00339413, -0.0377393, -0.0285647, -0.0129729, 0.0244206, 0.0107852, -0.00475827, -0.0266058, 0.0408487, -0.0184038, 0.0229972},
 {0.0322848, 0.0550173, 0.00842368, -0.0054063, 0.0201766, -0.00597314, 0.0225384, -0.0246039, -0.0255356, 0.0358334, 0.0273031, -0.00851852, -0.0126795, -0.00403836, 0.0215264, 0.0068213, -0.0137093, -0.0250161, -0.0204445, 0.0249808, 0.0097871, 0.000938427, -0.0115579, 0.0121732, 0.0205526},
 {0.0120362, 0.0094604, 0.0483438, 0.011708, 0.0364969, -0.0199211, 0.0106895, -0.00784747, -0.0469993, -0.000992233, -0.0186583, -0.0270124, 0.016642, 0.0223008, 0.0178631, 0.0340818, -0.0167696, 0.0320797, 0.0474493, -0.0417806, 0.00969092, 0.0293575, -0.036334, 0.00837595, -0.0185932},
 {-0.0210308, -0.0142557, 0.000754528, 0.0238521, 0.0363903, 0.0255428, 0.0117798, -0.0246359, -0.027206, 0.0163255, 0.0162007, -0.0230052, -0.00692256, -0.0137648, -0.022792, 0.0101008, -0.00943828, 0.0304842, 0.00875349, -0.0114775, -0.00156786, 0.0219564, 7.37223e-05, 0.0159718, 0.0169509},
 {-0.0120596, -0.00306486, 0.00630345, -0.0218754, -0.0365021, 0.013432, -0.0168811, 0.0106178, -0.00910212, -0.0311467, -0.0218128, 0.0238068, -0.0128847, -0.0162635, 0.0318576, -0.0213773, 0.0328781, 0.0188157, -0.0313382, -0.00339465, -0.00743562, -0.001683, 0.00332649, 0.0385875, -0.00538793},
 {-0.0228316, 0.0270036, 0.0383544, 0.0306977, -0.023392, 0.0282896, 0.00377655, -0.0199493, -0.00287499, 0.00391512, 0.0222326, 0.0330232, 0.00186964, 0.0198556, 0.00831389, 0.0303707, 0.00565485, -0.021051, 0.0140181, 0.0168401, -0.00813299, 0.0110814, -0.0307894, 0.00167796, -0.0265271},
 {-0.011388, -0.0437925, -0.0318938, -0.00983972, -0.00223335, 0.000601904, -0.0187201, -0.031043, 0.0293787, 0.0193574, 0.0127652, 0.0365074, 0.0156722, 0.0219104, 0.0205426, -0.0265253, -0.0190052, -0.0144284, 0.00430225, -0.0168705, 0.00652398, -0.0312359, 0.0101791, 0.0433011, -0.00657077},
 {-0.00759052, -0.0397482, 0.00824939, -0.0257278, -0.0413708, -0.00538066, 0.00690865, 0.00891879, 0.0106765, -0.0152003, 0.00506941, 0.021426, -0.00320653, -0.000424351, -0.0139654, -0.01164, 0.0100793, -0.0227284, -0.0243458, 0.0251529, 0.0313042, -0.00593653, 0.0251691, -0.00650876, -0.021702},
 {-0.0172656, 0.0321038, -0.00538541, -0.037031, 0.00629465, -0.0251224, 0.0317849, -0.0078813, 0.008863, -0.00103198, 0.0137961, -0.00424077, -0.0235662, -0.0296167, -0.0294915, -0.0164393, 0.0227891, 0.0230921, -0.0221629, 0.00383007, -0.00860922, -0.00687607, 0.0015021, -0.0074968, 0.0367111},
 {0.00842698, 0.00180195, -0.0175012, 0.0289828, -0.00718881, -0.0212076, 0.0101223, 0.000687354, 0.0141468, 0.0274241, -0.0150713, -0.0219541, 0.000227456, -0.00552487, 0.0119241, -0.000661849, -0.00382429, -0.0130643, 0.0297546, 0.000168074, -0.0042841, -0.0230207, -0.0281954, -0.0309243, -0.0278773},
 {0.00645661, 0.0254062, -0.0103551, 0.0389509, -0.0286926, -0.0235072, 0.0149618, 0.0168948, 0.0142687, 0.00953791, 0.0106616, -7.6209e-05, -0.0115808, -0.0295135, -0.00155631, 0.0380861, 0.0112931, -0.00772656, 0.0253809, -0.0181002, 0.0262461, -0.0247642, -0.0328256, -0.00460267, -0.00758022},
 {-0.0208128, -0.0366978, -0.00053433, 0.0094164, -0.0230296, 0.0157749, -0.0248508, 0.0165869, -0.00554967, -0.0184384, -0.022411, -0.00888682, -0.00172576, 0.0198954, 0.0117423, 0.0267176, 0.0066494, 0.0190486, -0.00479456, 0.0179265, 0.00556323, -0.0178555, 0.020224, -0.0235978, 0.0119053},
 {0.00907287, 0.0035223, -0.0127363, -0.0328822, 0.0163417, -0.00424625, 0.0179011, 0.022863, -0.0177596, 0.023096, -0.0137644, -0.00777875, 0.0135429, 0.00244073, 0.0290502, 0.0132959, -0.0085864, -0.0198805, 0.0016354, -0.0291225, 0.0156826, 0.000617251, -0.00759268, -0.0315678, -0.027701},
 {-0.00173028, 0.0388544, 0.0699824, 0.0732426, -0.0268637, -0.00217391, -0.0837937, 0.0269159, 0.00992637, -0.0872227, -0.0254034, 0.0200959, -0.00714328, -0.00360846, 0.0312277, 0.0126409, 0.0028151, -0.04499, 0.0169578, -0.035335, 0.0616947, -0.027947, 0.0156549, 0.0390037, -0.013947},
 {0.0100481, 0.0175875, -0.0183173, 0.0194308, 0.0247718, -0.0144265, -0.0195272, 0.00354396, 0.0155698, 0.0244605, 0.0145911, 0.000579077, -0.0253319, -0.00971677, -0.0138857, -0.0208021, -0.0174953, 0.0226152, 0.0322834, 0.00107689, -0.0310539, -0.0151112, -0.000211759, -0.0347259, -0.00780169},
 {0.0331757, 0.0386712, -0.0357484, 0.0287743, 0.0420179, -0.000817175, -0.00950138, -0.00909234, -0.0623926, 0.028044, -0.00235834, 0.0108721, -0.0199963, -0.00632421, 0.0326533, -0.0401916, -0.0131452, 0.0329099, 0.0422921, -0.0137535, -0.0346299, 0.0270322, 0.0130966, -0.0113476, 0.0393503},
 {0.018569, 0.0371495, 0.0147335, -0.00807219, -0.0195868, -0.0341571, -0.0342896, 0.0428671, -0.00330773, 0.0056991, 0.0175359, 0.0293163, -0.0236653, -0.0063941, -0.0121653, 0.00707098, 0.0269667, -0.0280266, 0.0203779, -0.0194744, -0.0042874, 0.026648, 0.021606, -0.00558228, 0.0138275},
 {-0.0141675, 0.0301152, -0.0133241, 0.00516284, 0.00313751, 0.00083779, -0.0289435, 0.00224447, 0.00817201, -0.0436972, 0.0114874, 0.0214237, -0.0127892, 0.0256648, -0.0264105, -0.00346892, -0.019412, 0.00702936, -0.0114199, -0.00599796, 0.0205377, -0.0226643, -0.0264039, -0.02476, -0.0226004},
 {0.0263846, -0.0259318, 0.0159158, 0.0279618, -0.0440518, 0.0180772, 0.0264338, 0.0437469, 0.00663775, -0.0410573, 0.0133136, -0.00209273, -0.00248774, 0.0108698, -0.022839, -0.00621621, 0.0147119, -0.0343395, -0.00931237, 0.00256674, -0.0167033, 0.0333422, 0.0120208, 0.0190507, 0.0258352},
 {-0.00983248, -0.00980939, -0.00912894, -0.0187912, 0.0118915, 0.0203469, -0.0293159, 0.00972356, -0.0231282, 0.020221, 0.028439, 0.0394115, -0.0246792, -0.022737, 0.0274407, -0.00196233, 0.0260578, 0.00226834, -0.00157903, 0.0102949, 0.0340043, 0.0189797, 0.0194181, 0.0232983, -0.00566719},
 {0.0122659, 0.0221484, 0.0309605, -0.0332441, 0.00494458, 0.0265799, -0.00586807, 0.00739105, 0.0144392, -0.0227562, -0.0181822, -0.0165258, 0.0206728, 0.0283421, -0.0148864, -0.00299273, 0.00181039, -0.0178247, -0.00997377, 0.0291412, -0.0215738, -0.0178064, 0.0154603, 0.0375382, 0.000382251},
 {-0.0128019, 0.0205644, 0.0247834, 0.00155845, 0.0219034, -0.0060595, 0.0100392, -0.0025137, 0.0194092, 0.0153593, 0.0327475, 0.0220993, -0.022749, -0.00575697, -0.000437571, -0.000407321, 0.0169321, -0.0395408, 0.0211266, 0.0200505, 0.0146992, -0.0208981, 0.0183472, -0.0131623, -0.0186563},
 {0.0339728, -0.0225233, -0.00277428, 0.0123174, 0.0280514, -0.0258048, 0.00383879, -0.0371142, -0.0185501, 0.0411409, -0.0063309, 0.0268939, 0.00599254, 0.00417468, -0.00298358, -0.0348612, -0.00143304, 0.00349712, 0.0197204, 0.0255472, 0.00483139, 0.00727413, 0.00731769, -0.0081497, 0.0351529},
 {0.0153186, -0.0154032, -0.0336841, 0.0233541, 0.0344411, 0.0177773, -0.022798, -0.00493522, 0.0152951, -0.0283465, -0.0236565, -0.0297802, 0.0112676, -0.00446689, 0.0261035, 0.0028977, 0.0273893, 0.0344659, 0.00664946, 0.0334569, 0.0255858, -0.0102792, 0.0295533, 0.00554004, 0.00948091},
 {-0.0102308, 0.0399367, -0.00948648, 0.02355, -0.0264011, 0.0134306, -0.0138704, 0.024325, -0.00110417, -0.00939005, -0.0310325, -0.00182616, 0.0129896, -0.00185609, -0.0146686, 0.0193875, 0.012324, 0.0234498, -0.0208041, 0.0129967, -0.0266493, 0.00750715, 0.00916994, -0.00631338, 0.0400044},
 {-0.0326594, -0.00338657, -0.0358228, -0.0142103, -0.019848, -0.0232296, -0.0132112, -0.0178576, -0.0189349, -0.0043642, -0.0249298, 0.023156, 0.0307774, -0.0104237, 0.0224744, -0.0299034, -0.0061379, 0.00662607, 0.0226405, 0.0276229, -0.0280291, 0.0162991, 0.00299829, -0.0104539, 0.0047905},
 {-0.00154073, -0.0251292, 0.0280316, 0.0269793, 0.0287074, -0.026454, -0.0272679, 0.0135616, 0.0186413, -0.0137227, 0.00912022, 0.00738933, 0.022871, -0.00263958, 0.0258491, -0.0208, 0.0241669, 0.0128196, 0.0165224, -0.0175617, 0.0258727, 0.00379275, -0.0310795, -0.00880637, 0.00119596},
 {0.0272622, 0.0330225, 0.00268068, 0.0298085, 0.0291932, -0.0197937, -0.0187488, 0.0087566, -0.0199462, -0.0200484, -0.0107729, 0.00447063, -0.014671, 0.000489361, 0.0118663, 0.0552095, 0.0260004, -0.0548538, 0.0255076, -0.0642862, 0.0662677, 0.0313224, 0.0185469, 0.0652962, 0.00399711},
 {-0.0335968, -0.0067647, -0.00291216, 0.0158009, -0.0265087, 0.0265763, 0.0352983, 0.00130364, 0.0187377, 0.0228815, -0.0266005, -0.0290996, -0.0149085, -0.0296433, 0.015353, -0.0117902, -0.0401084, 0.0344557, 0.0146299, -0.00706838, -0.0365009, 0.0131231, 0.00140128, -0.0123906, -0.034237},
 {-0.0200934, 0.00853529, 0.0190663, 0.0244709, 0.00500312, 0.0217542, -0.013528, -0.0194792, -0.0125538, -0.0270863, -0.0299059, -0.0190405, 0.010197, 0.00435696, 0.0387918, -0.0351682, -0.0123236, 0.0197143, 0.0334714, 0.0118303, -0.00931165, -0.035271, -0.0182144, -0.0121125, 0.0341011},
 {0.0200962, 0.0025143, 0.0215775, 0.0411847, 0.0153553, -0.0286519, -0.0245273, 0.0263344, -0.0169858, -0.047139, -0.00480613, -0.0237018, 0.000458451, 0.00961746, -0.00358228, 0.0167093, 0.0079357, 0.0349886, 0.0371061, -0.00765809, 0.00561091, 0.019798, -0.0302323, -0.0156385, 0.0190762},
 {0.0156382, 0.00128119, 0.0296354, 0.0256365, -0.0212968, 0.0142659, -0.0259344, 0.0184839, -0.0139292, 0.013639, 0.021101, -0.00794886, -0.0135468, -0.0197283, -0.00274814, -0.0114205, 0.0040085, 0.00283766, -0.0161265, -0.0133023, 0.0197877, 0.0278866, 0.0172463, -0.0197545, -0.021653},
 {0.0102255, -0.00808512, 0.0382378, -0.0127638, -0.031529, -0.00101239, 0.0117357, 0.028116, 0.0530162, -0.0320104, -0.0256818, 0.0160865, -0.0305546, -0.03063, -0.0175758, 0.0420148, -0.00137905, -0.0238348, 0.0155995, 0.0151981, 0.0158546, -0.0158765, -0.0290144, 0.0554095, -0.0339752},
 {-0.014313, 0.0284133, 0.0130133, 0.0170875, -0.0230532, -0.00646906, 0.0220197, -0.00637254, -0.00811026, -0.0446862, -0.0124885, 0.0297334, -0.0306826, 0.0130403, -0.0264996, -0.00285758, -0.0121977, -0.0365162, -0.0191293, 0.011778, 0.0212183, 0.0080147, 0.0108997, 0.00339132, 0.0146055},
 {0.00780349, -0.00011328, -0.0244853, -0.000470612, -0.0333977, 0.0307267, 0.00172639, 0.00357048, -0.00126608, 0.0163326, -0.00594674, 0.0132548, -0.0143063, -0.0145821, 0.0106508, 0.0242676, -0.00740728, -0.00796242, -0.0170423, 0.0214857, 0.00684007, -0.00395269, 0.0100679, -0.0038998, 0.0425896},
 {0.00299734, -0.030848, 0.0152224, -0.0325894, 0.0156311, 0.000294137, -0.0326467, -0.0218034, 0.0203481, -0.0181245, -0.031613, -0.0221408, 0.0206214, -0.0208358, 0.000710187, -0.0147215, 0.0133477, 0.0148086, -0.0163726, 0.0232291, 0.0041804, 0.0227664, -0.0123569, 0.00296971, -0.0162738},
 {0.00981403, 0.0370421, -0.0461455, 0.0198164, -0.0195656, 0.00168392, 0.00690912, -0.0420682, 0.00398836, 0.000554343, 0.0227123, 0.0197804, 0.00792161, -0.0320656, 0.00670328, -0.0025367, 0.022761, -0.0102909, 0.0124498, 0.0295791, 0.014387, 0.00789436, 0.0185404, -0.000911628, 0.0174388},
 {0.024827, -0.0401592, 0.00967327, -0.0168952, -0.00448139, -0.0243706, 0.0280564, -0.0140536, 0.0366645, 0.00246033, 0.00942541, -0.0166745, 0.0105323, -0.00949349, 0.023705, -0.0285532, 0.011507, -0.00296711, 0.00856591, 0.0199829, 0.0161507, 0.0111842, 0.0170054, 0.00383369, -0.0353491},
 {0.0206331, -0.0188721, -0.0121952, 0.0306835, 0.00744509, 0.0226166, 0.00293473, 0.000999393, 0.00589122, 0.0116096, 0.019378, 0.017643, 0.0192398, -0.0224135, 0.0024623, 0.0208411, -0.00884148, 0.0322172, -0.0193307, 0.000745854, -0.013809, 0.00896863, 0.0272603, 0.0238132, 0.0374594},
 {0.0340896, 0.0162782, -0.0204074, -0.0195013, 0.0093501, -0.0208572, -0.00104552, 0.00258919, 0.0292543, -0.0303646, 0.0222419, -0.00897313, 0.0298415, 0.0213418, 0.0262263, -0.0166835, -0.0145757, -0.0271733, 0.0259074, 0.00411627, -0.0345724, 0.00473057, 0.00981285, 0.0141946, 0.00161099},
 {0.00934355, -0.0144317, 0.0128396, -0.0345817, -0.0277872, 0.026282, -0.00411918, -0.0258087, -0.0327271, 0.00849403, -0.011605, 0.00934704, 0.00502105, -0.00550073, -0.00313546, -0.0159068, 0.0244025, 0.00162469, 0.0116374, 0.0129982, -0.00257833, 0.0159374, -0.0213923, -0.00897288, 0.00882901},
 {-0.0304182, 0.0321497, 0.0151994, -0.000519581, 0.0477414, 0.0153766, -0.0296959, 0.0175259, -0.0135604, 0.0123038, -0.041596, 0.00706661, 0.0387861, 0.0158688, 0.0170968, -0.0248912, 0.0152031, 0.0157044, 0.0228435, -0.0115272, 0.0122203, -0.0092368, 0.0350422, -0.0276549, -0.0105859},
 {0.0175042, 0.0114304, 0.00339276, -0.0228505, -0.0222497, 0.0323656, -0.00252196, 0.00380552, 0.00504742, 0.0135627, -0.017349, 0.010199, 0.0362635, 0.0174352, 0.00599559, 0.0156702, 0.00245953, 0.0283651, 0.0263999, -0.00853416, -0.00575892, -0.0283687, -0.0218305, -0.0370603, -0.0241844},
 {0.0338568, 0.0333475, -0.0237772, -0.00739387, 0.0395489, 0.0125075, -0.0228612, 0.019538, 0.00551618, 0.00757226, -0.0213332, -0.0171014, -0.00763664, 0.00745064, 0.0388319, -0.0192819, -0.00552671, -0.019177, 0.0178454, -0.0259245, 0.0187676, -0.0302708, 0.0149867, 0.000326659, 0.0155136},
 {-0.0190381, 0.023295, -0.0106907, 0.00114996, 0.0312543, 0.00943287, 0.00613673, 0.00219931, -0.0282845, -0.00179305, 0.026508, -0.0399826, 0.000312922, 0.00951817, 0.018084, 0.0251033, 0.016654, 0.0565237, 0.0239368, -0.00553917, -0.0244019, -0.0199794, -0.00663193, -0.0168634, 0.00568295},
 {-0.0247038, -0.0330762, 0.00733761, -0.000730857, 0.0134956, -0.00680394, 0.00984547, 0.0297434, -0.00134288, -0.013903, 0.0110003, 0.0130008, -0.0109226, 0.0121952, 0.0277509, -0.00393484, -0.0069465, 0.0291863, 0.00111046, 0.0112171, 0.000611101, 0.0251528, -0.00651623, 0.0248609, 0.0030157},
 {0.00249813, -0.0466885, 0.0238941, -0.00384965, -0.0480292, -0.000415393, -0.0228073, 0.0439624, 0.0690277, -0.0201219, -0.00268639, 0.0393116, 0.030452, 0.0179603, 0.0159095, 0.0386397, 0.0351536, -0.0411711, -0.0377475, 0.0101254, 0.00795184, 0.014685, -0.0322111, 0.045638, 0.0189612},
 {-0.0213203, 0.00111677, -0.014214, 0.0422374, -0.0103269, 0.0209978, 0.00921012, -0.0200973, 0.00799498, -0.0234562, -0.00694816, 0.0449829, 0.0281956, -0.00935381, 0.002293, 0.00885027, 0.0429914, 0.0075607, 0.0147978, 0.000327961, -0.00739858, -0.01719, -0.0145788, 0.0401717, -0.00496184},
 {-0.0294246, 0.0188694, 0.0258619, -0.0230355, -0.0181339, -0.0157604, -0.0306005, -0.00123884, -0.0126239, -0.0300504, -0.0251994, 0.0355098, 0.0102877, 0.0281701, 0.0220337, 0.000539788, -0.000443194, -0.00803862, 0.0121943, -0.0313468, 0.00557182, 0.0146065, 0.011215, 0.0309664, 0.00463607},
 {-0.016771, -0.00325966, 0.00615525, 0.0274791, 0.0156903, 0.0193906, -1.70581e-05, 0.0182706, 0.0360312, -0.0172199, -0.00631073, -0.0203269, 0.00625878, 0.0262876, -0.00486189, -0.00637317, 0.0269963, -0.0368298, 0.00238051, -0.0195617, 0.0317628, 0.00214377, 0.0131114, 0.00534061, -0.0086927},
 {0.0229078, 0.0398374, -0.0271019, 0.0130362, -0.0210219, 0.0126762, -0.0239825, -0.00355647, -0.0228414, -0.00844435, 0.0236869, 0.00454935, -0.0126519, -0.0185735, -0.0245607, 0.02175, -0.0330306, -0.0156502, 0.0373131, 0.0295071, 0.00451947, -0.0207857, 0.0117203, 0.0231736, -0.014235},
 {-0.0286114, -0.023582, 0.0156638, 0.00984365, -0.0198878, -0.012586, 0.0345953, 0.0284834, 0.0199043, -0.0151193, -0.0284686, -0.0245237, 0.0345295, -0.0305245, -0.0127617, -0.0296699, 0.00231202, -0.0148316, 0.0197325, -0.0115339, -0.0135944, -0.0237818, -0.0199034, 0.0234598, 0.0149517},
 {-0.00740573, -0.0107364, -0.0149969, 0.0181236, -0.0122248, 0.0157682, -0.00357988, -0.00774825, 0.0112646, 0.0165734, 0.023256, -0.0180144, -0.00277759, -0.0135284, 0.0180052, 0.00155397, -0.0342618, 0.0107375, 0.0414133, -0.005901, 0.0271272, 0.0106711, 0.018641, -0.017758, 0.0286531},
 {-0.019032, -9.23631e-05, -0.032142, -0.007645, 0.0186062, 0.0328797, -0.0160151, -0.0115423, -0.00397056, -0.0278028, -0.028269, 0.0359003, 0.0303019, 0.0176919, -0.0196136, -0.012578, 0.000537477, -0.00551273, -0.0112938, -0.00987602, 0.00771394, 0.0200845, 0.0287646, 0.0290062, -0.0271517},
 {-0.020666, -0.018492, 0.0265305, 0.00638981, -0.0252611, 0.0203649, 0.0137684, 0.0280297, -0.0293243, -0.0013882, -0.00860076, -0.0283334, 0.0176667, 0.0220059, 0.000498996, 0.0298401, -0.0170661, -0.01423, 0.00574795, 0.00464571, 0.027071, -0.0154564, -0.0107115, -0.00170293, -0.0260317},
 {-0.041184, 0.0108137, 0.00446489, -0.0061624, 0.0258845, 0.0277977, -0.00173306, -0.0107326, -0.0258258, -0.0199177, 0.00847313, -0.0282347, 0.0469085, 0.0219562, -0.00884829, 0.0151393, -0.01836, 0.0356542, 0.0180212, 0.00966361, -0.0244682, 0.0248042, 0.00781081, -0.0471496, -0.00241711},
 {-0.000340834, 0.0309531, -0.021397, -0.0186364, -0.0198485, -0.0290902, 0.0017215, -0.00956871, -0.0145949, 0.0495557, 0.033163, 0.0134067, 0.0292672, -0.0305549, 0.017512, -0.00258432, 0.00748278, 0.0254827, 0.0306981, 0.0106903, -0.00972122, -0.0309721, 0.0352212, -0.0216532, 0.0215732},
 {-0.00948857, 0.071223, 0.0142049, -0.0144484, 0.0444, -0.0450247, 0.0158746, -0.00282475, -0.0264061, -0.0250663, 0.0084281, 0.0164236, -0.014514, 0.0181912, 0.0348158, -0.0254047, -0.0061856, 0.0246055, 0.0512357, -0.0361737, -0.0237454, -0.0354476, -0.0150425, 0.0238418, 0.0520962},
 {0.0257056, 0.014508, -0.0157145, 0.0185742, -0.0185033, -0.0279465, 0.00952777, -0.017033, 0.00944936, -0.0105787, -0.0148226, -0.0102353, -0.0215688, 0.0230922, 0.0265282, 0.00447035, -0.0346031, 0.00460806, -0.0259991, 0.00834478, 0.0319527, 0.0292642, 0.00120312, -0.00620391, -0.00373526},
 {0.0180347, -0.0211094, 0.0185378, 0.0362387, -0.00933128, -0.00722552, -0.0168839, 0.0250861, 0.0398726, -0.0220875, -0.0225747, -0.0124554, 0.00391287, 0.0100559, 0.00766694, 0.0313089, 0.00274821, -0.0295408, -0.00409723, 0.0061502, -0.0176843, 0.0199863, -0.0088086, -0.00219133, 0.0193427},
 {0.00204766, -0.0548566, 0.0187604, 0.0134337, -0.0436583, -0.0330435, 0.0244371, 0.0428277, 0.0299799, -0.0385386, -0.024797, 0.0505231, 0.0172883, 0.00637566, 0.0272614, 0.00019687, 0.0398134, -0.0377476, -0.0186999, 0.00910803, -0.000774022, 0.0134079, -0.00948323, 0.0074424, -0.0287718},
 {-0.0304165, -0.0307407, 0.0466096, -0.0209269, 0.00273368, -0.0044663, 0.000123402, 0.0294342, -0.00170111, -0.0455346, -0.0100572, 0.0399103, 0.0236675, -0.032062, 0.0264438, 0.0375009, -0.00830393, -0.04424, -0.00685475, -0.0286875, -0.0166409, -0.0082787, -0.0281884, 0.0149252, 0.0245085},
 {-0.00240856, -0.0120019, -0.00460727, -0.0041852, -0.0251122, -0.0209161, 0.00449237, 0.0278264, -0.0154548, 0.0254404, -0.0137656, 0.038365, -0.0127078, 0.0286433, -0.0227271, -0.0271845, -0.0263685, -0.00897006, -0.011465, -0.0260514, -0.000775068, -0.0332998, 0.0118762, 0.0340672, 0.0334226},
 {0.0048413, 0.0026329, -0.0249096, -0.00456572, -0.0186417, -0.00741947, 0.0281808, -0.0179942, 0.0104016, -0.0250752, -0.0273299, -0.0230896, -0.0349176, -0.0159691, 0.00696804, 0.0101961, 0.0125939, 0.0196254, -0.004195, -0.0190325, -0.00521969, 0.029362, 0.0142796, -0.00266132, -0.0199806},
 {0.0256352, 0.000704762, -0.000652867, -0.0279536, 0.0318884, -0.027138, 0.0321453, -0.00821383, -0.023837, 0.00764378, 0.0243126, 0.0025716, -0.00418398, 0.0331045, 0.010529, -0.00629323, 0.00287198, 0.0269162, 0.0190472, -0.0198863, -0.022687, 0.00992245, -0.015476, 0.0253906, -0.0189077},
 {0.0151412, -0.0148368, -0.0174277, -0.0239946, -0.000106052, -0.0258866, -0.00922403, 0.0307773, 0.0379186, 0.0109309, 0.00240562, 0.0319634, 0.0100217, -0.0172198, 0.0300691, 0.0131691, 0.0222029, -0.00684148, 0.0219185, 0.0166347, -0.0191235, -0.0115922, -0.00560341, -0.0105418, 0.0136791},
 {-0.0131284, 0.00207048, -0.0228277, 0.0250313, 0.0156307, -0.00273568, -0.0300256, 0.0206935, -0.0349323, -0.0075143, 0.0217271, -0.0219141, -0.00517038, 0.0151874, -0.00108672, -0.0277761, 0.01982, -0.0110954, -0.016784, -0.0237698, 0.0257021, 0.0155808, -0.0120771, -0.0208278, -0.0118038},
 {-0.00578912, -0.0303467, -0.0300485, 0.0151428, -0.00849675, 0.0303521, -0.0177864, -0.000945278, 0.0388795, 0.0302313, 0.00921138, -0.00763869, 0.0101411, 0.0198851, -0.0245076, 0.00287661, 0.0138415, 0.0252916, 0.0110536, 0.0077195, 0.00533309, -0.0261286, -0.0313006, -0.00923473, 0.0321128},
 {-0.0269917, 0.0265948, -0.023537, -0.00997948, 0.021132, -0.0213163, -0.02453, 0.00838654, 0.0089896, 0.03021, 0.0288183, 0.02986, 0.0318783, -0.0316594, 0.0317772, 0.028723, 0.0189859, 0.0123727, 0.0311442, 0.0259233, -0.0273443, -0.029643, -0.0306874, -0.0161221, 0.0170311},
 {0.0191362, 0.0525452, -0.000349549, -0.00852113, -0.000293059, 0.0329469, 0.0222258, 0.000911867, -0.0136458, -0.0111585, -0.0172272, -0.0213285, 0.00178223, -0.0141946, -0.0197679, 0.0125777, -0.050656, 0.0218424, 0.0364625, -0.00173387, 0.00794352, 0.0225802, 0.0251506, -0.0428344, -0.0132147},
 {0.0223161, 0.0052054, 0.0122156, -0.0157058, 0.033253, -0.0264629, 0.0220533, 0.015336, 0.00352105, 0.049478, 0.0282502, -0.00959062, 0.0139478, 0.00694609, 0.0166009, 0.00267336, 0.0157323, 0.00876501, 0.0310214, -0.00308726, 0.0148753, 0.0245945, 0.0359929, 0.00434744, 0.0281552},
 {0.0109938, 0.0374312, -0.0216952, -0.014405, 0.0335767, 0.00555112, -0.0285606, -0.0384, -0.0286703, 0.0273812, 0.00638073, -0.0292504, -0.0220512, -0.00653023, 0.0387906, -0.00215715, 0.0264747, -0.0175316, 0.0296431, -0.00345673, 0.0311825, 0.00761215, -0.0205669, -0.00691825, 0.00808768},
 {0.0159607, -0.0145807, 0.0482211, 0.0295863, 0.0224929, 0.0367891, -0.0358171, 0.0309048, 0.00983425, -0.0316899, 0.00228545, -0.0409957, 0.0306103, 0.0173898, -0.0109004, -0.00705639, -0.0124215, 0.0451927, 0.00942358, -0.0143732, -0.0112685, -0.00523323, -0.0240155, -0.0448469, -0.0421531},
 {-0.00959856, -0.0301446, 0.0426863, 0.0122353, -0.0330567, -0.0232282, 0.0122118, 0.0334665, 0.00813943, -0.0361152, 0.000790493, -0.013534, 0.0248847, -0.00514156, -0.0210876, 0.0177474, 0.0112523, -0.00500583, -0.0132397, 0.00651844, -0.0146503, -0.0178241, -0.000252363, 0.0475319, -0.0190616},
 {-0.0057578, -0.035698, 0.0285646, 0.00891399, -0.0440105, 0.0277355, -0.0353761, 0.0325761, 0.0180118, -0.0139435, 0.015404, 0.00407033, 0.026863, 0.00141553, -0.00418246, 0.0215337, 0.0415505, -0.0434851, 0.00748924, -0.00354185, 0.0364597, 0.00893685, -0.0282124, 0.0526032, -0.00370493},
 {0.0252841, 0.0294656, -0.0152223, 0.0353545, -0.00852138, -0.0194264, -0.0126474, -0.00943498, 0.0148037, -0.0199848, 0.00157604, 0.0363925, -0.0255024, -0.024983, -0.0132902, 0.00353602, 0.0346382, 0.013583, 0.00740263, -0.00231051, 0.00569082, 0.00907801, 0.0230117, 0.0369947, 0.013237},
 {0.032368, 0.0366658, 0.0227911, -0.00839591, 0.0172144, -0.0189835, -0.00204826, 0.0144345, -0.0451258, -0.00477387, -0.00820271, 0.00396547, -0.0238266, 0.0229961, -0.0224913, -0.00845847, -0.0230786, 0.00326739, 0.0424187, 0.0124138, -0.0187423, 0.00437935, -0.0202843, -0.0221639, 0.035199},
 {-0.0149944, 0.0253386, 0.00267589, 0.00607622, 0.0221901, -0.0278346, -0.0221134, -0.00634898, -0.000487325, 0.0192213, -0.000991375, 0.0346086, -0.00161577, 0.0240041, 0.0128115, -0.0133269, -0.0187912, 0.0068639, 0.0143708, 0.0232545, 0.000479245, -0.0186691, -0.0232361, 0.00775674, -0.00334751},
 {0.0233678, 0.0630582, 0.0114134, -0.0276076, 0.0218612, -0.0242191, -0.0361768, 0.0209775, -0.0571558, -0.0143581, -0.000535462, -0.0195276, 0.0139298, 0.00198068, -0.00940293, 0.0261261, -0.00630387, -0.00224939, 0.0369939, -0.0213167, 0.0198449, 0.0130383, -0.0323393, -0.0168038, -0.0112465},
 {-0.0306694, -0.0362409, 0.0344983, -0.00740411, -0.017868, -0.0171259, 0.0159677, 0.0265455, 0.0101636, -0.0302634, -0.0287096, 0.000807203, -0.0276826, -0.0122892, -0.00236651, 0.0236921, -0.00910619, 0.00606755, -0.0235187, 0.0231056, -0.0274487, -0.0243994, 0.0164944, -0.00174967, 0.00634273},
 {0.0159748, 0.0136425, 0.00253783, 0.0397245, 0.0362714, 0.0270422, -0.0204087, 0.000295957, 0.0110477, -0.0070219, 0.0232101, -0.0239848, -0.0222871, -0.0024165, -0.0307998, -0.0324401, -0.0365888, 0.0134419, 0.0115627, 0.00050411, 0.0309355, 0.0127324, 0.00283657, 0.0117577, -0.0261238},
 {0.0120759, -0.0375136, -0.0166132, -0.011808, -0.0105976, 0.00674244, -0.00853323, 0.0111137, -0.00433304, 0.0102313, -0.0213563, 0.0113261, -0.020681, -0.019414, -0.00515959, -0.00223254, -0.0174083, -0.0424474, -0.0013978, -0.013847, 0.0215862, -0.00926365, -0.0277104, -0.0206534, -0.0213996},
 {-0.0118022, -0.00772511, -0.00851183, -0.00964135, -0.00118942, -0.0189689, 0.00604144, 0.000217823, 0.00807964, -0.0303877, 0.0162537, 0.00756284, -0.031001, 0.00609652, -0.0099227, 0.0235925, -0.0236187, 0.0167633, 0.0203087, -0.00349789, -0.0257551, 0.0111732, 0.000511254, 0.0109062, -0.00481271},
 {-0.00722862, 0.0185756, -0.0204477, -0.0129411, 0.0522811, 0.0308557, -0.00424474, -0.0317322, -0.0105803, 0.00458562, 0.0263407, -0.0440402, 0.0136901, -0.036508, -0.0499643, -0.0105798, -0.015717, 0.0631369, 0.00933123, -0.00824374, -0.0102201, 0.0314586, 0.0523921, -0.0346405, -0.0411488},
 {0.0262827, 0.0277381, -0.0351978, -0.0233318, -0.0112048, 0.0249053, 0.00619381, -0.0213758, -0.00851697, -0.0145954, -0.0220551, -0.0167163, 0.00526937, 0.0184427, -0.00544444, 0.0186801, -0.00350316, 0.0371253, 0.0179483, -0.0131218, 0.00349943, 0.0258682, 0.000243112, -0.0468916, 0.0281621},
 {-0.00523605, 0.0949478, 0.00501454, 0.0466811, 0.0204664, -0.00314371, -0.00950495, -0.0155034, -0.0748353, -0.0452741, 0.0103983, -0.0141947, 0.00231285, -0.0247856, 0.00486685, 0.0148522, -0.0165892, -0.00788644, 0.0538711, -0.00590849, 0.0496044, 0.000534674, -0.0141125, 0.0169538, 0.00537433},
 {-0.0172569, -0.00120443, 0.0395505, 0.031318, -0.00913665, 0.0180598, 0.0317642, 0.0177817, 0.029844, 0.01695, -0.00123376, -0.0145938, 0.000140666, 0.00429048, 0.00646309, 0.0199038, -0.0329379, 0.0347875, 2.31804e-05, 0.0201851, 0.0250075, -0.0139393, 0.0364578, -0.0507202, -0.0418458},
 {0.0180931, -0.0348079, 0.0517499, 0.0327707, 0.00792443, -0.0257261, -0.0115757, 0.050085, 0.0209787, -0.0239274, -0.0221299, -0.00777452, -0.00718338, -0.0341132, 0.0387897, 0.0191812, 0.0317628, -0.036464, 0.00553628, -0.0414266, 0.0404604, 0.00387913, -0.0260502, 0.0115761, -0.0237581},
 {-0.0261115, -0.0711657, 0.0105994, -0.0146698, -0.053417, -0.0161006, -0.0277544, 0.017511, 0.0603323, 0.00851416, 0.0255318, 0.0638787, -0.00302788, 0.00196888, -0.0125295, 0.0378679, 0.0291811, -0.0755631, 0.0064045, -0.00686866, 0.00627176, -0.0217368, 0.0126784, 0.0811407, -0.0189462},
 {-0.0119408, 0.0417744, 0.0276278, -0.0124777, 0.0306401, -0.0278474, -0.00357307, 0.0218433, -0.0144922, 0.005255, 0.0175944, 0.00294951, 0.0190341, 0.0313206, 0.0268004, -0.0087233, 0.02071, 0.0206723, -0.00505984, -0.0169633, -0.0202943, -0.0317039, -0.00928536, 0.0310181, -0.00861294},
 {0.0207337, 0.0515455, -0.00203807, -0.00282403, 0.00417631, -0.0253131, -0.0400445, -0.0211022, -0.0224541, 0.0284843, -0.000862614, -0.0157116, -0.0315456, -0.00701053, 0.0162365, 0.00567233, -0.0380438, -0.003573, 0.0553291, -0.043518, 0.0378743, 0.0214292, 0.0270432, -0.0170253, 0.0152981},
 {0.0278432, 0.00279215, 0.0147482, 0.0335481, 0.022884, -0.0199095, -0.0181357, -0.00063184, 0.00617541, 0.0102983, 0.00956948, -0.00356438, -0.0270373, 0.00425386, -0.0273477, -0.0110676, 0.0243389, -0.000777, -0.0114651, -0.0157577, -0.0154083, 0.017894, -0.00878957, -0.0287322, 0.00329783},
 {0.00854413, 0.00628177, 0.0113667, -0.0113046, -0.00143581, -0.0124982, 0.00738953, -0.0106191, -0.0378744, -0.0233934, 0.00863597, 0.0116098, -0.0353956, 0.00819399, -0.00270781, -0.0325956, -0.0145438, 0.0371258, -0.00358156, -0.00546439, 0.0148661, -0.0274492, -0.0286026, -0.0192519, 0.0162936},
 {0.00400659, -0.0283402, 0.0228351, 0.0227792, 0.00938003, -0.0102758, 0.0300527, 0.0171483, 0.0213315, -0.0201018, -0.0198929, 0.00955503, -0.0343554, -0.023213, -0.015652, 0.0156116, -0.0112725, -0.0443385, 0.00601589, -0.00400756, -0.0148478, -0.0115152, 0.02146, 0.052642, -0.0127323},
 {-0.010395, 0.0355322, 0.0260926, 0.0135322, -0.003307, -0.0152495, 0.0243909, -0.0104024, -0.0397953, -0.0338455, 0.0282337, -0.0120838, 0.0208581, 0.0163672, 0.0343593, -0.00972101, -0.0222038, 0.04255, 0.00305453, -0.0218404, -0.00516288, 0.0143994, -0.00147227, -0.0229434, 0.00163537},
 {-0.0262379, -0.0472767, 0.0191186, 0.025645, -0.0152178, 0.0284827, 0.0318453, -0.0267879, -0.0149343, -0.0166225, 0.0299894, -0.0143249, -0.0196676, -0.00589657, 0.0283034, -0.0237371, 0.000484186, -0.0391645, 0.00216718, 0.00918782, -0.0194634, -0.0253682, 0.00617886, -0.00613503, -0.0151678},
 {0.00645701, 0.011423, -0.00919273, 0.0283497, -0.023644, -0.00967127, -0.00260392, -0.0280222, 0.0093821, 0.00491206, 0.0089089, 0.00156121, 0.0168957, -0.0308559, -0.0078735, 0.00655373, 0.0182678, -0.0208013, -0.00130362, -0.0168087, 0.0271064, -0.00917743, -0.00988036, 0.0103167, 0.0185724},
 {0.00379189, 0.000424478, 0.0376699, 0.0347239, 0.0131153, 0.0367702, 0.0379128, 0.0189371, -0.0581576, -0.00771115, 0.00350446, -0.0505657, 0.00778033, 0.00299114, -0.0252064, -0.00276016, -0.0190607, 0.00201353, 0.00801221, -0.0179474, -0.00168399, -0.0158535, 0.04152, -0.0336941, -0.0505163},
 {0.0139034, 0.0338514, -0.0127961, 0.00205664, 0.0385028, 0.00413301, 0.0336089, 0.0168631, -0.0265366, -0.0144081, 0.0255818, -0.00788719, -0.00517167, 0.000977575, -0.00917958, 0.00403169, 0.0148612, 0.0311424, 0.0244425, 0.00756164, -0.0203853, -0.0255972, -0.026029, -0.0164543, -0.0167939},
 {0.0128825, 0.0865893, 0.00302285, -0.00355952, 0.0592801, 0.00126435, -0.010748, -0.017003, -0.0646068, -0.0171206, 0.0125901, -0.0384317, -0.0167544, 0.0275213, 0.0306324, -0.0115918, -0.0204328, 0.0226724, 0.0667817, -0.0075469, 0.0476942, -0.00528668, -0.051403, -0.033203, -0.000980261},
 {0.0216672, 0.0112087, 0.0114257, 0.00158108, 0.0102446, -0.0169594, -0.0279571, 0.0358769, 0.0046758, -0.0426813, -0.00608315, 0.0242173, 0.0213129, -0.025647, 0.0218506, 0.0281756, 0.0351507, -0.00901601, -0.0272139, -0.0183042, 0.0201406, -0.0214286, -0.00541948, 0.0269166, -0.0128005},
 {0.000403369, -0.017613, 0.00606646, 0.0149064, -0.0397285, 0.00541145, 0.0167241, -0.0115833, 0.0586099, -0.0342273, 0.00453854, 0.00377297, -0.034745, -0.0289846, 0.0386789, 0.0529455, -0.00389963, -0.0408088, -0.0406866, -0.0370053, 0.010299, 0.0167838, -0.00942431, 0.0602331, -0.0188488},
 {0.023035, -0.0564199, 0.0283217, 0.00937551, -0.0576989, 0.0232066, 0.0248086, 0.0187684, 0.0427339, -0.0395152, 0.00289806, 0.01996, 0.0319968, 0.0175706, 0.0281127, 0.00194252, -0.00505962, -0.0167557, -0.0565052, 0.0107136, 0.00602992, 0.00929635, -0.0248114, 0.0217419, 0.00130327},
 {-0.0151816, -0.00511533, 0.0511006, 0.0123971, 0.0040556, -0.00943223, -0.0345166, -0.0172044, 0.00253089, -0.0436004, 0.0326245, 0.0249596, -0.0345766, 0.0273987, 0.0382582, -0.00896658, -0.0109672, 0.0193129, 0.0120079, -0.0308732, 0.0277401, -0.0330705, 0.00483369, 0.0190339, -0.0167505},
 {0.00621668, 0.0171254, -0.00671038, 0.0019463, 0.0281672, -0.0098559, 0.019952, 0.0138102, -0.0163063, -0.0341817, 0.0272366, -0.0185143, 0.0167965, -0.014425, 0.0299707, 0.0249425, 0.0118941, 0.0506711, 0.0276347, -0.0240037, 0.0157925, -0.00753207, -0.00821015, -0.0291198, 0.0155966},
 {-0.0287419, 0.0297856, 0.0131432, -0.0160171, -0.0230801, 0.0118673, -0.00176569, 0.0181569, 0.0273248, -0.00251408, 0.0162922, 0.0121741, -0.00913505, 0.0255792, 0.0233649, 0.00988363, 0.0208394, 0.000871808, 0.0126763, -0.0162179, -0.0129371, -0.0231641, 0.00183034, -0.0157779, 0.0205532},
 {0.0332715, 0.0693476, 0.00544354, -0.0137979, 0.039012, 0.0241118, -0.0116357, -0.0216156, -0.0387722, -0.0194305, -0.0300849, -0.0321704, 0.0170338, 0.00476968, 0.0013813, 0.0260456, 0.014344, 0.0210508, 0.0364358, 0.00304433, -0.0136302, -0.00984221, 0.0215306, -0.00432949, 0.00300636},
 {0.0212511, -0.0578192, -0.0156385, -0.00962096, -0.0127517, 0.0249399, 0.0148407, 0.0302439, 0.018481, 0.0137318, 0.0155855, 0.045208, -0.00262391, 0.0096078, -0.00916793, 0.000869329, 0.00274442, -0.0553343, -0.0233287, 0.0217147, 0.028381, -0.0201458, 0.0198897, 0.0390369, 0.0202689},
 {0.0317897, 0.0330294, 0.00462881, 0.0334452, -0.0166185, 0.0126694, -0.032854, -0.0220855, -0.0197902, 0.00455314, 0.027692, -0.038443, 0.0147805, -0.0162296, -0.0239251, -0.0104729, 0.00296027, 0.0216937, 0.0274233, -0.038205, -0.00938086, -0.00136537, 0.0160192, -0.0345859, 0.0189364},
 {-0.0220705, -0.0482877, -0.00838456, -0.0229463, -0.0190188, -0.00308376, 0.0378546, -0.00485695, 0.0331471, -0.0148433, 0.0320691, 0.0374607, 0.0202154, 0.00200803, 0.00894151, 0.00859504, 0.00302225, -0.00458582, -0.0379065, -0.00378432, 0.0264087, 0.029696, -0.0147454, 0.0248781, 0.0042622},
 {0.00303786, -0.02414, 0.0134006, 0.0366374, -0.000347651, 0.030697, -0.0383823, 0.017706, 0.0251742, -0.0370143, 0.0259945, 0.0089264, -0.0177248, -0.0105691, 0.00473399, -0.0259929, 0.0374218, 0.0233808, -0.0250825, -0.0256599, 0.00886095, -0.0228589, 0.0234437, -0.00581447, 0.0240016},
 {-0.0255084, -0.00560455, 0.0225642, 0.0249793, 0.0428207, 0.0295236, -0.0186921, -3.6111e-05, -0.0247632, -0.0213985, -0.0136102, -0.00384753, 0.0243805, -0.0388845, -0.00308553, 0.0573243, -0.00618591, 0.0380034, 0.0301565, -0.0449798, 0.0217191, 0.000595887, 0.011296, -0.0283789, -0.00480274},
 {0.0244452, 0.036006, 0.00882666, 0.0224323, 0.0343122, 0.0105659, 0.0213925, -0.0306726, -0.0140658, -0.0131269, 0.00533311, -0.011845, 0.0147756, -0.0193722, 0.0265418, 0.015105, 0.00536585, 0.0484676, -0.00481604, -0.0125799, -0.00761729, -0.0211752, 0.0308073, -0.0237517, -0.00610561},
 {0.0116905, 0.0695346, 0.00213481, 0.0301709, 0.0390597, 0.0102212, -0.043885, -0.0157181, -0.0582459, -2.23806e-05, 0.00454071, -0.0214839, 0.0166367, 0.00147616, -0.00901653, -0.0073306, 0.0112219, 0.0470538, 0.0582073, -0.0173829, 0.0298141, 0.0273262, -0.02456, -0.0447619, 0.0455688},
 {-0.0250371, 0.00347311, 0.01923, 0.0317772, 0.0389791, -0.00570624, -0.0307492, 0.0537223, 0.012652, -0.0391005, 0.00599429, -0.014043, 0.00279406, 0.0163026, 0.0247175, 0.0509792, 0.0310034, -0.0130144, -0.0194041, -0.0425307, 0.0137383, -0.0209136, -0.0197858, 0.0151291, 0.0129027},
 {0.00753586, -0.0361165, 0.0123859, 0.00307659, 0.015755, -0.0143506, -0.0166352, 0.00534981, 0.0413015, -0.0461094, 0.0313246, 0.00556033, 0.024107, 0.0145907, -0.0203914, 0.050096, -0.0140482, -0.0381923, -0.0335543, -0.00705385, 0.033117, -0.0232013, 0.0167998, 0.0307806, -0.00202882},
 {-0.0131372, -0.0690946, 0.0238678, 0.0163557, -0.0278773, 0.014444, 0.03143, -0.0116449, 0.0250228, 0.0184035, 0.0301781, 0.0366723, 0.0118717, 0.0172317, -0.0208007, 0.0298263, 0.0471763, -0.0461839, 0.00768491, 0.0337343, 0.0276217, 0.00328891, -0.0169394, 0.0369838, -0.0236775},
 {0.00764099, 0.0220193, 0.0416514, 0.0425842, 0.00395132, -0.0310964, -0.00945076, 0.0199165, 0.034222, -0.00215471, -0.00300931, -0.0128589, -0.00280147, 0.00890368, 0.00326136, 0.00311663, 0.00794251, -0.00185582, 0.0134002, 0.0177692, 0.00366536, -0.0180703, -0.0171482, -0.017039, 0.0357251},
 {0.00555453, 0.0687222, -0.0161722, 0.0420278, 0.00243087, -0.0144718, 0.0227645, 0.00789776, -0.0145996, -0.00470296, 0.0165299, -0.0384877, -0.0198124, 0.0198033, -0.0180101, 0.000537689, 0.0157218, -0.000389552, -0.0080635, -0.00779748, 0.0217434, 0.0287375, 0.00730729, -0.00694543, -0.0298982},
 {-0.0234692, 0.0209443, 0.0152752, -0.00634692, -0.0083395, 0.0213039, -0.0356625, 0.0168377, 0.0314576, 0.00136519, 0.0140805, -0.0169409, 0.00635198, -0.0182597, -0.00489222, 0.0242759, -0.00206252, 0.0227321, -0.0123877, -0.0189811, 0.017547, -0.00903337, 0.0017773, 0.033502, -0.0196444},
 {-0.0099381, 0.0634999, -0.00727589, 0.00458016, 0.00577592, -0.0311155, -0.0224546, -0.0118264, -0.0116055, -0.00244615, -0.0241321, -0.00425812, -0.00716277, 0.030733, -0.0100542, 0.0259802, 0.0299781, 0.0410796, 0.0293905, 0.0169114, -0.00691481, -0.0205651, 0.0228079, 0.00647427, 0.013044},
 {0.0196533, -0.00886934, 0.0152403, -0.015529, -0.0483158, 0.0235499, -0.00593918, 0.0119702, 0.0426754, 0.0288638, 0.0329888, -0.00448974, 0.0152684, -0.00394953, 0.0111252, -0.00377974, 0.00983068, -0.026498, 0.0133091, 0.00260108, -0.0336208, 0.0205345, 0.0218182, 0.0224582, 0.00915155},
 {0.00184891, 0.0236157, 0.0254468, -0.0089717, -0.00178714, -0.0071167, 0.0204349, 0.0174445, -0.019122, -0.0226168, 0.0333778, -0.00807476, 0.0243445, -0.000395692, -0.0172216, 0.0338879, 0.0296205, -0.00471859, 0.0311943, -0.0101167, 0.0390147, -0.0216031, 0.0104126, 0.00436875, -0.0193888},
 {0.0315392, -0.0152204, -0.0161428, -0.0306953, -0.00776101, -0.0328621, 0.00333954, 0.000387484, -0.0135887, -0.00911482, 0.013018, 0.00905434, -0.00782576, 0.000192239, -0.000876317, -0.00771989, -0.00926032, 0.0220428, -0.0332142, -0.0178289, 0.0270618, -0.0244851, 0.0125542, 0.0108089, 0.0292335},
 {0.00545292, 0.0203148, -0.0234455, 0.0203106, 0.0300778, 0.0127925, 0.0164798, 0.0122486, -0.00183242, 0.00595417, -0.0106665, 0.00300895, -0.00795284, -0.0258799, -0.0027378, 0.0204513, 0.0349633, -0.0218009, -0.0044404, 0.0201488, 0.0062601, 0.0120306, -0.0179349, -0.0233688, -0.0123468},
 {-0.0303557, 0.0678797, 0.0425561, 0.0568597, 0.0540679, -0.000590029, -0.0577926, 0.0592153, -0.0198812, -0.0781399, -0.00392408, 0.0235948, 0.038733, -0.0458917, 0.0156327, 0.0670124, 0.0124716, 0.0259834, 0.0427342, -0.0221546, 0.0583678, -0.0100856, 0.0226309, 0.00404378, -0.0311257},
 {0.0282056, 0.00421913, 0.021685, -0.0183837, 0.0519365, 0.000762542, 0.0311006, -0.0315222, -0.036516, 0.0314191, -0.0123275, -0.0216767, 0.00533756, 0.0136793, 0.0119676, 0.000849008, -0.0356458, 0.0623806, -0.0176037, 0.000309037, -0.0251528, -0.0125854, 0.0161931, -0.0643688, -0.00489885},
 {0.0100828, 0.0491078, 0.00452898, 0.0239733, 0.0388274, -0.000189815, -0.02054, 0.00148483, -0.0133965, -0.0112196, 0.0249845, -0.0330819, -0.0289671, 0.015571, 0.0295327, -0.00220569, -0.0113322, 0.00642998, 0.00686721, -0.0411074, 0.0154801, 0.0211978, -0.0323302, -0.0420451, 0.00478407},
 {0.0130465, 0.0419087, 0.00244574, 0.033046, -0.00139255, 0.0130217, -0.0120627, 0.0451058, -0.0203135, -0.0416087, -0.0300771, -0.0266907, 0.0181399, -0.00471577, 0.00866005, 0.000737692, -0.0136384, -0.00710292, 0.0116536, -0.016906, 0.0129984, -0.0100357, -0.0256386, 0.0211358, 0.0222545},
 {-0.00669003, -0.0281678, 0.0471274, -0.00412806, -0.00238289, 0.0232985, -0.0254813, 0.00156597, -0.000199415, -0.00170785, 0.0105926, -0.00672741, 0.0175969, 0.0234441, 0.0105803, 0.0257471, -0.0145435, -0.00983461, -0.00918893, -0.0113062, 0.0212552, -0.0277797, 0.00582503, -0.00143188, 0.0151413},
 {0.0259682, -0.0328958, -0.0300302, -0.0322018, -0.0473455, -0.00735797, 0.0263518, 0.00897798, 0.0507194, -0.0059144, 0.0287852, 0.0594955, -0.00995559, -0.015304, 0.0198263, 0.0352571, 0.0410427, -0.0386864, 0.00860537, 0.000549778, 0.0293267, -0.0283234, -0.00969618, 0.0345871, 0.0337454},
 {-0.0208007, -0.0106033, 0.00998224, -0.0159913, -0.0198028, -0.017404, -0.0414353, 0.0107085, -0.00943095, -0.0286695, 0.0151017, 0.0368569, -0.027707, 0.00175634, -0.0158937, -0.00825598, -0.022477, 0.0197274, 0.00525975, -0.0271051, -0.0063982, -0.0334046, -0.00372328, -0.00791646, 0.00743895},
 {-0.0113257, 0.0241018, 0.00155191, -0.00825533, 0.0489888, -0.00606327, 0.000999266, 0.0102067, -0.00471326, -0.0338918, -0.00845911, 0.0157859, -0.0108363, 0.00597095, 0.0225451, 0.00213296, 0.000959139, 0.00388015, 0.00637873, -0.0272381, -0.0235636, 0.0240308, -0.0242389, 0.00793113, -0.0189876},
 {-0.0142709, 0.0143148, 0.0364431, 0.00463587, -0.0114879, -0.00454252, 0.0126997, -0.0226499, -0.0140999, -0.0405037, 0.0120242, 0.0277236, 0.0132632, -0.00978134, 0.00141393, -0.0183405, 0.0362705, -0.0102644, -0.0113699, 0.00251455, -0.0157881, 0.0173759, 0.0166618, 0.0351532, -0.0303001},
 {0.0288635, 0.0155712, 0.0275361, -0.0172629, 0.00649407, 0.014415, 0.00572413, -0.0118946, 0.0112293, 0.00272176, 0.00947021, 0.00547461, -0.0338421, -0.0279405, -0.0166873, 0.0278621, 0.0258956, 0.0255985, 0.0430727, -0.0298743, -0.0119778, -0.0197073, 0.00416275, 0.0268796, -0.00164706},
 {0.0310469, -0.0576783, -0.0159827, -0.0299199, -0.0269011, 0.00598239, 0.0171532, 0.031792, 0.0320357, 0.0118924, 0.0013446, 0.00991145, -0.0206036, 0.0098732, -0.015749, 0.00343297, 0.025036, -0.00960075, -0.00652229, 0.00199042, -0.0182357, -0.0204814, 0.0123273, 0.0150048, -0.00744208},
 {0.0205458, 0.0531085, 0.0181352, 0.016616, -0.00215418, -0.0187594, -0.0348664, 0.0087273, -0.0550867, -0.0436855, -0.028766, -0.0111906, -0.00701964, 0.0254062, 0.0246386, 0.0409915, -0.0128791, 0.0199285, 0.031187, -0.0403481, 0.0273433, 0.0316185, -0.0263057, 0.0201984, 0.0016032},
 {-0.0300258, -0.00557935, -0.00786207, 0.0199997, -0.0157428, 0.00950911, 0.016171, -0.0263702, 0.0415519, -0.00385166, 0.0207872, -0.020741, -0.0284094, 0.0289543, 0.0300744, -0.0292736, 0.0353138, 0.00845947, -0.0387024, -0.00404325, 0.0181829, -0.00950626, -0.00214476, -0.0229093, -0.021894},
 {0.028657, -0.0134023, 0.0130756, 0.0101386, 0.00913465, 0.00302367, -0.0277486, 0.0305088, 0.012384, -0.0156377, -0.0283266, -0.011653, 0.00127912, -0.014843, 0.0177816, 0.0379479, -0.0187803, -0.0199282, -0.00420713, -0.00739289, 0.0119135, 0.0176343, -0.0227205, 0.024085, 0.00742928},
 {-0.00102939, 0.0469828, 0.12336, 0.0758641, -0.0173495, 0.018937, -0.0753922, 0.0525715, -0.03541, -0.0986202, 0.0103936, 0.0021932, -0.021061, -0.0168745, -0.0185453, 0.0837184, 0.0576221, -0.0270747, 0.0351111, -0.0390221, 0.0707513, 0.00803763, 0.0107051, 0.0497401, -0.0297421},
 {-0.00569683, 0.00950883, 0.00827137, -0.0186972, 0.000450973, -0.0183231, -0.00911792, 0.0246416, 0.00392178, -0.00563646, -0.000257964, 0.00473186, 0.0277546, -0.015331, -0.0341178, -0.0147524, 0.00248573, 0.00759188, 0.0316983, 0.0291014, 0.0235504, 0.0249528, 0.000951667, -0.0609656, -0.0134936},
 {-0.00578151, 0.0475099, 0.0267701, -0.0189784, 0.0102351, 0.00921006, 0.00701313, 0.0271036, -0.0452431, -0.00767054, -0.022213, 0.0105479, -0.00771562, -0.025895, -0.0112678, 0.0299239, 0.0305481, -0.0114282, -0.0042353, 0.00428452, -0.013633, -0.0310613, -0.0390868, 0.00810952, -0.00289507},
 {-0.0212838, -0.0120685, 0.0134128, 0.0422129, 0.0101573, -0.00929362, -0.023503, -0.00279304, -0.034846, -0.0485733, -0.0147113, -0.0101499, -0.0289606, 0.0274633, 0.0165266, 0.0342258, -0.00125182, -0.0264689, 0.0160462, -0.0148306, -0.0158865, -0.0270627, -0.00372085, 0.0215418, -0.029976},
 {-0.00215565, -0.0411753, 0.000923006, -0.0204172, -0.0292205, 0.0032359, 0.0136269, 0.0306225, 0.00468731, 0.00296132, 0.0217866, 0.0273522, -0.018254, 0.0216765, 0.00783054, -0.0130993, -0.0144847, -0.0215245, -0.00134958, 0.00902974, -0.00566178, 0.00556001, -0.00807891, 0.00811246, -0.0130422},
 {0.0273315, -0.0645022, -0.0171745, -0.000522998, -0.045141, -0.0101253, -0.0318989, 0.0213249, 0.0695959, -0.00382925, -0.0111545, 0.023934, -0.0102256, 0.0255375, -0.029273, 0.0227434, -0.0194221, -0.0668138, 0.0123561, -0.0279564, -0.00948988, 0.0174271, -0.0195984, 0.0258262, 0.0259661},
 {0.0229484, 0.038906, 0.0456323, 0.0456403, 0.0208685, -0.0278197, 0.00879664, 0.0411873, -0.0231086, -0.0190899, 0.0306162, 0.000545377, -0.010101, 0.00128618, 0.0258004, 0.0303996, 0.0234377, -0.0270103, -0.0225562, -0.00499251, -0.0206482, -0.0187307, 0.0256473, 0.0406155, -0.0287157},
 {-0.016902, 0.0588909, 0.00931279, 0.00312208, 0.0270537, 0.027909, -0.0201408, -0.0149225, -0.00184441, -0.0298704, -0.00726917, 0.00397646, 0.0051766, -0.0324402, -0.000249894, -0.0136628, 0.000899033, -0.00892635, 0.0220784, 0.0052915, 0.0207581, -0.000818726, -0.00864456, 0.0124157, 0.0317361},
 {-0.0215721, -0.0182776, -0.0181591, -0.000781253, -0.00164389, -0.0286596, -0.0325735, -0.0119754, 0.0163087, -0.0329258, -0.015595, -0.00137075, 0.0214681, -0.0204039, 0.00698437, -0.00535341, 0.0164056, 0.0253999, 0.00691226, -0.0200194, 0.0310183, 0.0200413, 0.0231866, 0.0379665, 0.00255485},
 {-0.0182488, 0.0447249, 0.000626615, -0.015562, -0.0057191, 0.0313676, -0.0311127, 0.0235288, -0.0434529, 0.0216948, -0.0159177, 0.0276261, 0.024381, 0.0289396, -0.0100941, 0.0279901, -0.025616, 0.0173737, 0.0346919, -0.0134714, 0.00420086, -0.00415592, -0.00187648, -0.0152146, -0.0122101},
 {0.0115647, -0.059313, 0.0113501, 0.0127181, 0.00294079, -0.0182053, 0.0363084, -0.0203999, 0.0414539, -0.0208829, 0.019652, 0.0284739, -0.0335406, 0.00255393, 0.00663223, -0.0217434, 0.00471555, -0.047638, -0.0384692, 0.00525648, 0.0150882, 0.0159854, -0.0162963, 0.00632999, 0.0167452},
 {0.000387684, 0.0616175, -0.00497132, 0.0255378, 0.0258188, -0.028459, -0.0365942, 0.00496818, 0.013012, -0.0459633, -0.0153765, -0.0184551, 0.0289838, 0.0231554, 0.0148466, -0.00384544, 0.00450306, 0.0387292, -0.00146642, 0.00331398, 0.0153074, -0.00877667, -0.0219891, -0.0145681, 0.0381664},
 {0.031054, -0.00323568, -0.0300859, -0.0311837, 0.019948, 0.0279706, -0.0132836, -0.00111211, 0.0458963, 0.016642, -0.0164152, -0.00626986, -0.0215155, 0.0214744, 0.0216146, 0.00515399, -0.0307901, -0.0216124, -0.0217599, 0.0189437, 0.0272558, 0.00810212, -0.001134, 0.0289396, -0.00280053},
 {0.0204263, -0.000489092, -0.0170327, 0.0266149, 0.0104967, -0.0128455, -0.00884805, -0.0175292, -0.00469166, -0.00171836, -0.0209962, -0.0110411, 0.0319441, 0.0016685, -0.002195, -0.0245465, 0.0198657, 0.0197102, 0.021688, -0.0232223, 0.00140155, -0.0145242, -0.0169129, 0.0323263, -0.00105802},
 {-0.0177126, 0.0115794, 0.0730811, 0.0813322, -0.017039, 0.00221498, -0.0723186, 0.030151, 0.0315077, -0.0403143, -0.0252626, 0.0479406, 0.0205967, -0.0275777, -0.0182683, 0.0748817, 0.007214, -0.0535255, -0.0135035, -0.0777978, 0.0709691, 0.0366228, 0.0240613, 0.0658726, -0.0422819},
 {0.0179984, -0.0117391, 0.0121087, -0.00956079, 0.00485399, -0.0179385, 0.00353937, -0.0102606, -0.0240146, -0.00455297, -0.0238549, -0.0211547, 0.0230655, -0.0127393, -0.00664037, -0.0361182, -0.00490426, -0.00289363, 0.0318656, -0.0229109, 0.00937003, 0.0305464, 0.0127537, -0.00147043, 0.0178496},
 {0.017402, 0.0169464, -0.00446334, 0.020164, 0.0515857, -0.033975, -0.0168054, -0.0133067, -0.0456942, 0.000473567, -0.00208584, -0.00390436, 0.00533262, -0.0300303, 0.0350974, 0.00608394, 0.0252895, 0.00630768, 0.0525534, 0.00197283, 0.0142543, 0.00892883, -0.010148, -0.00709751, 0.0348544},
 {-0.0253736, 0.011743, 0.0329659, 0.0250386, 0.045291, 0.0186016, -0.0192219, 0.0279647, -0.0256883, -0.0157844, 0.0252389, 0.0284122, 0.0170818, 0.0299719, -0.00298247, -0.00318367, -0.0168657, -0.00605445, 0.0179163, -0.0237217, 0.0443475, -0.0247992, -0.0362733, -0.0189864, 0.0149529},
 {0.0270172, -0.00694324, 0.02003, 0.00732, 0.0230721, -0.0163962, 0.00612444, 0.00971045, 0.00849722, 0.0141847, -0.0278539, 0.0483953, -0.0271839, 0.0214543, -0.00762861, -0.0149107, -0.0109816, -0.00188849, -0.0266138, 0.00995373, -0.00267839, -0.00902358, -0.0359179, 0.0055779, 0.015977},
 {0.00996962, -0.0555339, 0.0377005, -0.0149689, -0.0115753, -0.0087735, -0.0277593, -0.00412451, 0.0452926, 0.0222773, -0.0137247, 0.0421746, 0.0274647, 0.0144046, 0.02538, -0.00235871, 0.000706915, -0.0246188, -0.0231069, -0.00659923, 0.00523574, 0.00454589, 0.0195678, 0.0528684, -0.00682538},
 {0.00377335, 0.00170661, 0.0476974, -0.00517876, 0.0170611, 0.0171067, -0.0376812, 0.0260548, -0.0304957, -0.01454, 0.0295462, -0.0114496, -0.0180764, -0.00993766, 0.0355048, -0.0111427, 0.0194605, -0.0236636, 0.00229382, -0.00378034, -0.00957822, 0.0113638, -0.0120082, -0.023153, -0.0254175},
 {0.0203355, 0.0354655, 0.00833693, -0.00890203, 0.0425817, -0.0217006, 0.0127228, 0.00601044, -0.0492087, -0.0211767, -0.00298239, -0.0320183, 0.0166771, 0.0272601, -0.00259239, -0.00588836, -0.0267716, -0.004935, 0.0421195, 0.00388178, 0.0245308, 0.0187874, 0.0310107, 0.0158238, -0.00781452},
 {0.0196234, -0.0104404, 0.016053, -0.0192202, -0.00286915, 0.0193056, -0.0200668, -0.0224257, -0.0247595, -0.00520311, 0.0283579, -0.0127639, -0.0229544, -0.0198589, 0.0130362, 0.00767265, 0.029483, 0.0134082, 0.0153435, -0.0018014, -0.017141, 0.0220752, 0.00901406, 0.013609, -0.00851556},
 {-0.0201826, 0.0326252, -0.0131061, 0.0267749, -0.0221613, 9.28174e-05, -0.0174564, -0.0219122, 0.00295249, 0.00122268, 0.00568439, 0.0264378, -0.0355068, 0.0144669, 0.00190861, 0.0218883, -0.00521351, 0.0103266, 0.0358066, -0.0244385, 0.0184414, -0.00291416, 0.0134464, -0.0196406, 0.0357463},
 {-0.0166139, -0.00950486, 0.00305845, -0.0110732, -0.0343558, -0.0198899, 0.0139475, -0.0230197, -0.00375137, 0.023842, 0.00412231, 0.0545369, 0.0246992, 0.032386, -0.00934142, -0.00936728, 0.00134316, -0.0353494, -0.0230705, 0.0131641, -0.00761175, 0.0049583, 0.000225865, 0.0521484, 0.0310373},
 {0.0106106, 0.0406071, 0.0231657, -0.00481239, 0.0464849, 0.0210021, 0.0106208, 0.014951, -0.0230193, 0.00522435, 0.0171185, 0.00639455, -0.006008, -0.0309039, 0.0271064, -0.00755041, -0.0206557, -0.00923938, 0.00232099, -0.00387759, -0.0209412, -0.0162889, -0.0270226, -0.0382539, -0.00950306},
 {0.00221441, -0.00985689, 0.0204982, -0.0243055, 0.0153403, -0.0265002, -0.00071157, -0.0220291, -0.000660161, -0.0280269, -0.00626425, 0.00996667, 0.0180281, 0.0274503, -0.032875, -0.00816172, -0.019815, -0.0328002, -0.0104937, -0.0123162, 0.0214119, -0.0242362, 0.010256, 0.0155876, -0.0108954},
 {0.0169417, -0.0276552, -0.000895129, 0.00653729, 0.0136084, 0.0229668, 0.000861003, 0.016088, -0.0189359, 0.00595996, 0.0299711, 0.0283965, -0.0161641, 0.0226149, -0.0147061, -0.0140406, 0.0270169, 0.00400116, 0.0240291, -0.00935112, -0.0158236, -0.00925058, -0.00859475, 0.0030558, 0.0220515},
 {-0.0131151, 0.015273, 0.0423776, 0.0159754, -0.0197857, -0.00535162, 0.00429805, 0.0112698, 0.0220937, -0.0446081, 0.00559113, -0.00703922, 0.0033933, 1.67988e-06, -0.0123249, 0.00717147, 0.00902719, -0.0153931, 0.0206682, -0.0339598, 0.0236124, 0.0275506, 0.0137248, 0.0240119, 0.00589381},
 {-0.00127405, -0.00274263, 0.0189415, -0.0200057, 0.000629687, -0.0222999, 0.0284204, -0.0201618, -0.0200631, -0.0114234, -6.04738e-05, -0.00640876, -0.0130063, -0.0181182, -0.0360947, -0.0240788, -0.0163914, 0.0402751, 0.0339123, -0.00739577, 0.00673906, 0.0268733, -0.0131142, -0.0124477, 0.000862243},
 {0.00422904, 0.0727931, 0.0387223, -0.0126318, 0.0499684, -0.0309003, -0.0475323, 0.00336599, -0.0218799, -0.0188447, -0.00685741, 0.0104099, -0.0194406, 0.00498708, 0.0148597, 0.0232609, -0.0101024, 0.034348, 0.0342561, -0.026054, 0.00652401, 0.00236285, -0.0315944, 0.019889, -0.00451961},
 {-0.0169676, 0.0318859, 0.00586643, 0.0291626, 0.0152007, -0.00422259, -0.0245907, -0.0190509, -0.026938, -0.0226012, -0.0215181, 0.0360283, -0.00946047, 0.0269897, -0.00646331, 0.0266635, 0.0109651, -0.00751169, 0.000905808, 0.0133919, 0.0403741, 0.0287244, -0.0251053, 0.0373927, -0.0285564},
 {-0.00947613, 0.0162091, 0.00979073, 0.0143217, -0.0395661, -0.0104673, -0.0404398, 0.0405152, 0.0357934, 0.000641054, 0.0201891, 0.00730253, -0.0172795, 0.0186102, 0.0404608, 0.0495046, 0.0285292, 0.000104048, -0.0100457, -0.0289207, 0.0290617, 0.00581404, 9.07177e-05, 0.016927, 0.0338999},
 {-0.00340622, -0.0447002, 0.0147726, 0.00754503, -0.0459143, -0.0239071, 0.00209341, -0.0110501, 0.016062, 0.0167588, -0.0278997, 0.0153103, -0.0210248, 0.00808443, 0.0152498, -0.0182537, -0.0184579, -0.00959793, 0.00755257, -0.0316525, -0.0223316, -0.0286044, -0.00778907, 0.0357682, -0.00444618},
 {0.0290105, -0.027412, -0.0044878, 0.0392343, 0.0015474, 0.0221029, -0.037765, -0.00742411, 0.0129407, -0.0410247, 0.0117073, 0.0288308, -0.00802161, -0.000174633, -0.0157662, 0.017706, 0.0265686, 0.0159997, -0.0198871, -0.00497911, -0.00157766, 0.0226861, -0.0292163, -0.00201573, -0.00085437},
 {0.0110106, -0.00128299, -0.00782887, 0.0108905, 0.0301425, 0.029953, -0.0229501, 0.0142895, -0.0333119, 0.0227378, -0.0201744, 0.00573685, -0.0247803, -0.0118462, -0.00839593, 0.024993, -0.0125318, -0.0100849, -0.00140178, -0.0127071, 0.00285873, -0.0302841, 0.0253233, -0.0326105, 0.0107765},
 {0.0172236, 0.02362, -0.012631, -0.0112819, -0.0179511, 0.0302545, -0.039927, 0.00302891, 0.00825069, 0.00607416, 0.0197031, 0.0238469, -0.0287652, 0.0302204, -0.0176039, 0.0411121, 0.0319752, -0.0418402, 0.0175864, -0.0183373, 0.0350237, 0.0161937, -0.0228236, -0.0102396, 0.0238651},
 {0.0277812, 0.0416988, 0.0394481, 0.00169366, 0.0268384, 0.0171206, -0.0380378, -0.0144223, -0.0125378, -0.0289212, -0.00900317, 0.0325635, -0.00260249, 0.00140552, 0.00950194, -0.0210591, -0.0166804, 0.00760311, -0.0131486, -0.0308884, 0.0275013, 0.00147805, -0.00717866, -0.0143656, -0.022023},
 {0.0254205, -0.00150975, 0.0296878, 0.0188344, -0.0248354, 0.0270786, 0.0264868, 0.00609298, 0.0482796, -0.0154719, -0.0314982, -0.00280114, 0.00372358, -0.00958933, 0.0190425, 0.0282748, 0.0369346, -0.0263317, -0.0422186, -0.0255618, -0.0212342, -0.0163184, -0.0339912, 0.0336125, 0.0139697},
 {-0.015073, 0.0215942, 0.0126575, 0.0453107, -0.00771228, -0.0201405, 0.0156525, -0.0205051, 0.0168963, -0.0131348, 0.011842, -0.0169182, 0.00568203, 0.0251342, 0.024061, 0.00632118, -0.00779936, 0.0332948, -0.00648458, 0.0175049, 0.0401526, 0.0328421, -0.0286511, -0.0142034, 0.00223696},
 {0.00886235, -0.019473, -0.0141067, 0.00545473, -0.0297874, 0.0281031, 0.00185137, -0.0276915, 0.03051, 0.0139388, -0.0143296, 0.0031781, -0.0042512, 0.018167, 0.00505361, -0.0254729, -0.00776398, -0.0120996, 0.0071411, -0.00181166, 0.00550846, 0.0284845, 0.0227306, -0.0202789, -0.0107613},
 {-0.0186581, -0.0235935, 0.0163356, 0.0171812, -0.0137585, -0.00329177, -0.0138827, 0.000618199, -0.015848, -0.0197529, -0.027155, 0.0117488, -0.0148063, -0.00499884, 0.0235689, -0.00704044, 0.0215545, 0.00697298, 0.0159076, -0.0285028, 0.0134464, 0.00737866, -0.0183642, 0.0173773, 0.0298619},
 {0.0116485, -0.00593994, 0.00720528, 0.00282754, 0.0275516, 0.0557939, 0.00206253, 0.020661, 0.0173116, -0.00538971, -0.0285327, -0.0504172, 0.00590379, 0.0407174, -0.0366691, -0.00761573, 0.0132137, 0.0535104, -0.0105092, 0.0101517, -0.0121981, 0.0241192, 0.0434294, -0.0537052, -0.0491843},
 {0.00871851, 0.00769226, -0.017913, 0.0170068, 0.0405372, -0.0286764, 0.00846695, 0.0232148, 0.00634402, -0.0184372, -0.0306308, -0.0333881, 0.0103579, -0.0329853, -0.00196163, 0.0130162, 0.011144, 0.0349541, -0.0110455, -0.00514734, -0.010475, 0.0264449, 0.0294757, 0.0117697, -0.0353315},
 {0.00703864, 0.0526428, 0.0479124, 0.0314449, 0.0137304, -0.0350387, -0.0296146, 0.0201273, -0.0325585, -0.0504944, 0.0196581, -0.0113544, -0.0304605, -0.00964227, 0.048306, 0.00808159, 0.0233551, 0.0157413, 0.0102635, -0.0241589, 0.0389746, -0.0330729, -0.0550661, -0.0119563, 0.0075278},
 {-0.0188731, 0.0247376, -0.00513615, 0.0137238, 0.00965698, -0.00390495, -0.0196651, -0.0131836, 0.0334687, -0.0402462, 0.0223638, -0.0100715, -0.0120504, -0.0144235, -0.0144932, 0.0230463, 0.00599912, -0.00662833, -0.0133299, -0.0244868, -0.00511704, 0.0215482, -0.0216308, -0.0115488, -0.0294848},
 {0.00644094, -0.0255507, 0.0586096, 0.0193345, -0.0268632, -0.0289455, -0.0491223, 0.0205372, 0.0188219, -0.0253138, -0.0315796, 0.0132455, 0.00902962, -0.0353406, 0.0197003, 0.0403115, 0.00504044, -0.0171552, -0.0346651, -0.0179159, 0.0508095, -0.00803814, -0.000131798, 0.0168984, 0.0174811},
 {-0.0169494, -0.0262508, 0.0307082, -0.000108266, -0.0398921, -0.0135664, -0.00811637, 0.0241891, 0.0625678, -0.0371232, -0.000196369, 0.0188046, -0.0293473, -0.0137074, 0.0183573, 0.0355916, 0.0343546, -0.0213832, 0.00963923, -0.0296507, 0.027322, -0.0250759, 0.0195436, 0.0311101, 0.0309444},
 {0.0270602, -0.0128858, 0.0239549, 0.00987693, 0.0105352, 0.00619254, -0.00392652, 0.0386989, -0.00550218, -0.0456936, -0.00246195, -0.00196737, -0.00159951, -0.00369706, 0.0298404, 0.0403025, 0.0400738, -0.0328478, 0.0182822, -0.0163416, 0.0400964, -0.00639953, 0.00964969, -0.017854, 0.0327501},
 {-0.0201504, 0.0421338, -0.0284203, -0.0183055, 0.0241181, 0.0312066, -0.00253473, -0.0315882, 0.00834876, -0.0241056, 0.00672782, 0.00541658, 0.0119095, -0.0177362, 0.0243749, 0.0134895, 0.0131221, -0.0057092, 0.0234296, -0.0227118, 0.0228751, -0.0329035, -0.0101734, 0.00272953, 0.0250819},
 {-0.0185025, 0.0178208, -0.00816397, 0.0185075, 0.00491582, 0.00642891, -0.00484955, -0.0253931, -0.0304089, -0.0232912, 0.00751576, 0.0274794, 0.025067, 0.021086, 0.0284181, -0.00196872, 0.0183078, -0.0387372, -0.0184511, -0.0143275, 0.0172784, -0.0100912, -0.0178119, 0.0411123, 0.0216894},
 {-0.0159452, 0.0234938, 0.0322724, -0.0199573, -0.0236139, 0.016109, -0.0145432, 0.0168969, -0.0198484, -0.00726072, -0.00281478, -0.00892253, 0.000825261, -0.0103549, 0.0149629, 0.0246058, 0.0335221, -0.0203466, -0.0129713, -0.0358936, -0.00139418, 0.018193, 0.011638, 0.0406506, 0.00633238},
 {-0.000558855, -0.0548553, 0.00961958, -0.0177182, -0.0347397, -0.0347106, -0.00281364, -0.0218894, 0.0536943, 0.0117774, 0.00917509, 0.00150249, 0.0283596, -0.00592122, 0.00957656, -0.00522183, 0.0293464, 0.00278128, -0.0213975, -0.0271346, -0.0148744, -0.0239089, -0.0245205, 0.0575101, 0.0370228},
 {0.000590348, 0.0197603, 0.0334296, 0.0182972, -0.0156158, 0.0252141, 0.0179654, -0.0206901, -0.00983649, 0.00610462, 0.00459462, 0.0215752, 0.0257063, -0.0198702, 0.0205576, 0.00523446, -0.000966976, 0.0326973, 0.0407901, -0.0205652, 0.013451, 0.00790744, 0.0019038, -0.0235714, 0.0408504},
 {-0.0052792, -0.0131018, -0.0167038, -0.00206674, -0.0197806, 0.0330174, 0.00441153, -0.00367157, 0.0149317, -0.0142631, 0.0179193, 0.0107756, -0.0298239, -0.00705048, -0.0171908, -0.0278921, 0.000224648, -0.0279596, 0.00153038, 0.0391722, 0.00745077, 0.0298963, 0.00672099, -0.00614033, -0.0212101},
 {0.0333199, 0.0244145, -0.0136162, -0.00481024, 0.0168577, -0.0338856, -0.0236552, 0.000855486, 0.0184254, 0.021411, -0.00635346, -0.020117, 0.0269268, 0.0220891, -0.0075538, 0.034427, 0.0378147, -0.00804522, 0.0111956, -0.0150799, 0.00694382, 0.0314193, -0.00378469, 0.021365, 0.00547934},
 {0.000717779, -0.0310031, -0.0531941, -0.0484725, 0.00634492, 0.0415594, 0.0286103, -0.00120404, 0.0063165, 0.0424852, 0.00559813, -0.0337295, 0.0481481, -0.020631, -0.00815498, -0.0213875, -0.0418128, 0.0257307, -0.0471022, 0.0440722, -0.0574213, 0.0266883, 0.0299027, -0.030709, -0.0260478},
 {-0.018967, -0.00355093, -0.0189298, -0.0321431, 0.00975542, -0.0115826, 0.0288318, -0.0239964, 0.0124559, -0.0142525, 0.00815304, -0.0312881, 0.0180918, -0.00267317, -0.0286506, -0.0226171, 0.0096224, 0.0175872, -0.0171006, 0.0177288, 0.00618168, 0.0178097, -0.0294563, 0.0267655, 0.0298974},
 {0.0395031, 0.0234861, -0.0126547, -0.0110639, -0.00113062, 0.000256079, -0.0218503, -0.00841562, -0.0288486, -0.0175085, 0.0224979, 0.0281353, -0.0133314, 0.0172314, 0.0464515, -0.01624, -0.0091017, -0.0472177, -0.0113203, -0.0181772, 0.0346857, 0.0189221, 0.00237223, 0.0494259, 0.0448098},
 {-0.0324806, -0.00218309, 0.0245513, -0.00507377, 0.00661983, -0.0165445, -0.04218, -0.0141806, -0.012147, 0.00312857, 0.0285974, -0.00590306, 0.026779, 0.0198051, -0.00926017, 0.0333984, 0.0310911, -0.035422, 0.0159924, -0.0162545, 0.0151669, 0.034403, -0.00145069, 0.0431381, 0.0215925},
 {0.032566, -0.020257, 0.0157096, 0.0300588, -0.0414501, -0.0409021, -0.0335833, -0.00931725, 0.0352035, 0.00252565, 0.00439148, -0.00277417, -0.0235143, 0.0204112, 0.0265687, 0.014537, 0.0247542, -0.0273433, -0.00600442, -0.0475831, 0.00875401, 0.0032387, 0.0068734, 0.00135131, 0.0254787},
 {0.0260109, -0.0318824, 0.0210473, -0.011949, 0.00110306, 0.0304588, -0.0110945, 0.0290404, 0.0163652, 0.0206719, -0.0224661, 0.00234145, -0.0199448, -0.00529559, 0.0320669, 0.00561113, -0.00257099, -0.030913, -0.0325541, 0.0265263, -0.00715098, 0.0113458, -0.000661788, 0.00427966, -0.0353858},
 {0.028991, 0.0151075, 0.014166, 0.00149063, -0.0166319, -0.037604, -0.00129318, 0.0210614, -0.0127474, -0.00717743, 0.0338539, -0.00405955, -0.0344895, 0.0052167, 0.0335088, 0.021548, -0.00221315, -0.0230484, 0.00520804, -0.0115948, -0.00780517, 1.79631e-05, 0.0226378, 0.00161306, -0.0146271},
 {0.0247195, -0.0123579, -0.0125937, -0.00322202, 0.0203746, 0.0267673, 0.00627434, 0.00555092, -0.0397891, -0.0278961, 0.00332157, -0.0168384, -0.0331517, -0.0172281, -0.00248038, -0.0128959, -0.0274423, -0.00487664, 9.70153e-05, 0.00632653, 0.018544, -0.0015587, -0.0286676, -0.00469758, -0.0139538},
 {0.0200283, 0.000148837, -0.0226422, -0.000877232, -0.0210083, -0.0143304, 0.00656192, 0.00166896, -0.0132161, -0.0110131, 0.0237862, -0.00101913, -0.00297701, 0.00767382, -0.0144684, 0.00420775, -0.022506, -0.00119986, 0.0135525, -0.0313844, 0.0276202, -0.0342964, 0.0218463, -0.0149678, 0.00582231},
 {0.00134175, 0.0251561, -0.0060273, 0.0324676, -0.0376131, 0.00410131, -0.0223653, -0.0248152, 0.0322827, -0.0195803, -0.0212485, 0.0287689, -0.00641158, 0.0214189, 0.00647285, -0.013776, 0.0402018, -0.0419947, 0.00776096, 0.0214101, -0.0032532, 0.00312581, 0.0227446, 0.0190615, 0.0377675},
 {-0.0257019, -0.00790631, 0.0122175, 0.0175229, -0.0562592, 0.0103203, -0.0208046, -0.0262457, 0.0547033, -0.0285887, 0.00140361, 0.0238238, -0.0109945, -0.0168218, -0.0039988, 0.00680221, 0.0203148, -0.011371, -0.03758, 0.0261663, -0.000719851, -0.0142268, -0.0344325, 0.0259395, 0.0254205},
 {0.012786, 0.040898, -0.00569808, -0.00357113, 0.0387324, -0.0242889, -0.0254313, 0.0203248, -0.0246323, -0.00994197, 0.0113167, -0.014092, -3.74523e-06, 0.00684877, 0.0371599, 0.00408358, 0.0236253, 0.00564817, -0.0159818, -0.00632366, 0.0362635, 0.00789567, 0.0129583, -0.00199713, 0.0400872},
 {0.03218, 0.0222316, -0.0241112, 0.022348, -0.00834468, -0.0228131, -0.0131578, 0.0247762, 0.00881276, -0.021842, -0.0147841, 0.00179396, 0.00236328, -0.0124598, 0.0216329, -0.00600843, -0.00829064, -0.0240229, 0.00615899, -0.0212255, -0.0155184, 0.0212578, -0.0294156, 0.0106163, -0.0237968},
 {0.0308453, 0.00691789, 0.000427574, -0.026302, 0.0339795, 0.0241608, -0.0386922, 0.00232279, -0.0259029, -0.0393994, -0.0070177, -0.00935889, 0.0278296, 0.0249926, -0.00248641, 0.014268, 0.017605, -0.0320929, 0.0361021, -0.0207588, 0.0159362, -0.0191808, -0.0142813, -0.00562517, -0.0149809},
 {0.00885087, -0.0316127, -0.0140823, -0.0350202, -0.015775, 0.0221433, 0.00106059, 0.00915974, -0.00555829, 0.0214142, 0.0204934, -0.00272402, 0.00851797, -0.0202907, -0.0164238, -0.0328281, 0.00331099, 0.0338376, -0.031887, 0.0337183, -0.013909, 0.0170934, 0.0565812, -0.0320796, -0.0451842},
 {-0.0113394, -0.00542208, -0.0315014, 0.0161542, -0.0279245, 0.0101596, 0.0225112, 0.0313606, 0.0122511, 0.0320274, 0.0178405, 0.0250037, 0.0316949, 0.0198887, -0.0107552, 0.0133834, -0.0244293, 0.0196693, -0.000666472, -0.0061786, 0.0243179, 0.0128355, 0.0254569, -0.0178672, -0.0186827},
 {-0.00644163, -0.00423703, 0.0348632, 0.0277732, 0.00359626, -0.00161223, -0.0275821, -0.0121461, -0.0164845, -0.00500937, -0.00629226, 0.0304739, 0.00957605, 0.0226354, 0.00444864, 0.0241934, -0.0123049, -0.0148087, 0.00868584, -0.000974592, -0.0021623, -0.0164868, -0.0366234, 0.0112158, 0.0521176},
 {-0.00205666, 0.0223751, -0.0104586, 0.0335646, 0.017884, -0.0292019, -0.0313831, -0.0153955, -0.016362, -0.0154205, -0.0157346, -0.0138978, -0.0126236, 0.00693663, -0.00464232, 0.0363544, -0.00153628, -0.0395703, -0.032064, -0.0332714, 0.0057155, 0.0154996, -0.0161722, -0.00671281, 0.0159685},
 {-0.0153891, -0.0207061, -0.00781925, 0.00127266, -0.0208883, -0.00641832, -0.0378884, -0.0204206, 0.0288567, -0.0141276, 0.0304372, 0.0211509, -0.0119697, 0.0150552, 0.00758266, 0.0382288, 0.0251888, 0.00288663, -0.0325733, 0.00952313, -0.0180981, 0.0109892, 0.0190957, 0.026665, -0.010256},
 {-0.0300051, -0.0440228, 0.0229885, 0.0245263, 0.0120034, 0.000648569, 0.00310797, 0.0399081, 0.0344314, 0.0116161, -6.7691e-05, 0.036487, -0.0289419, 0.0310744, 0.0141231, 0.0216026, 0.037812, -0.0354738, -0.0422762, -0.0213709, -0.0238669, 0.00363032, -0.0105907, 0.0254243, -0.0158846},
 {-0.0133741, -0.00181965, 0.0354625, 0.0250311, -0.019278, -0.0275762, -0.0232116, 0.028776, 0.00502687, 0.000664707, -0.00890384, 0.0146386, -0.0019183, -0.00842522, 0.0315536, -0.00855176, -0.0045314, -0.00100828, -0.00940117, -0.0259972, 0.0133885, -0.00889514, -0.0121439, 0.0297341, -0.0187246},
 {0.0250521, 0.0215829, 0.00413006, 0.00622331, 0.037659, 0.00661924, 0.0126617, 0.0273798, 0.0262884, -0.0201249, -0.0120939, 0.0179143, 0.00821946, 0.0290642, 0.0043909, 0.00262159, -0.0228759, -0.00664722, -0.0129826, -0.0220753, -0.0219907, 0.00467972, 0.00924023, -0.0278384, 0.00854628},
 {-0.00460828, -0.0152161, -0.0254279, 0.00244365, -0.0067199, 0.0188484, -0.0178697, -0.0288427, -0.0219985, -0.0183445, -0.0207882, 0.0368598, -0.0157805, -0.0279889, -0.0114577, 0.0305344, 0.0246035, -0.0106047, -0.0255725, 0.026043, 0.0142351, -0.0122037, 0.00940592, -0.0217625, -0.0289792},
 {0.00227058, -0.0349305, 0.0150684, -0.0300139, -0.0197465, -0.00744664, 0.00176714, 0.0223542, 0.0299871, 0.0274844, -0.0114764, 0.0319736, -0.0287633, -0.0276779, -0.000729854, 0.00200431, -0.0127087, -0.0228283, -0.0137202, -0.00448056, -0.0275869, 0.0124388, 0.0260245, -0.0172079, 0.00881296},
 {0.0230617, 0.0049599, 0.0124109, -0.0241104, -0.0204755, 0.026032, -0.0241373, 0.0139231, 0.013475, 0.0288056, 0.00350772, 0.037075, -0.0256647, 0.032837, 0.0253439, -0.00396895, 0.0316581, -0.0491578, 0.00121884, 0.00124889, -0.0306369, 0.0119532, -0.0170508, 0.0415176, -0.0186684},
 {-0.0282328, 0.0366324, 0.0348165, 0.0225555, -0.0107389, -0.0171875, -0.0216296, 0.0300522, -0.0280853, 0.0225176, -0.033673, -0.0308217, -0.0190439, 0.0109222, 0.00312018, 0.028052, -0.0168943, -0.0295227, -0.00581502, 0.0020293, 0.0334221, -0.0265985, 0.0115974, -0.0146313, 0.0244083},
 {-0.000124992, 0.00988701, 0.00497772, 0.016168, -0.0157874, 0.023096, 0.00900212, -0.0146587, 0.0159243, 0.0333633, -0.012121, -0.0114791, -0.0122971, -0.0202502, 0.0100063, -0.0218864, 0.0224779, 0.0248103, 0.00333955, -0.0307588, 0.0265754, -0.0192597, -0.0197677, 0.0136969, -0.00949239},
 {0.0319069, 0.0284303, -0.0272095, -0.00474491, 0.0347088, -0.0148501, -0.0132501, -0.029909, 0.00195185, 0.0112192, 0.0290474, 0.0152619, 0.0089479, 0.0128484, 0.0280546, 4.71904e-05, 0.00119872, -0.0148128, -0.0214397, -0.0371288, -0.0138999, 0.0304264, -0.010262, 0.0341237, 0.0349206},
 {-0.0233212, -0.0108498, -0.0139336, -0.0173721, -0.0175991, 0.0655398, 0.0215117, -0.0124378, 0.0350489, 0.0527416, 0.0259955, -0.0347479, 0.0695732, -0.0333034, -0.0177956, -0.00949879, -0.0389903, 0.0255869, -0.044097, 0.0382825, -0.0332067, 0.0147259, 0.0502866, -0.0198419, -0.0105276},
 {-0.0217567, 0.00966541, -0.034312, -0.00330343, 0.00770653, -0.0208908, -0.0291037, -0.00392104, -0.0334828, 0.0117347, 0.00753008, 0.00569253, 0.00667564, -0.00303924, -0.0141844, -1.44074e-05, 0.0089284, -0.0203103, -0.00990803, -0.00542149, 0.023411, 0.0224953, -0.0242791, 0.00267546, -0.00657842},
 {-0.00328886, 0.0132739, 0.0299659, 0.0176119, -0.0273128, 0.00634994, 0.0113804, 0.0102684, 0.0063841, 0.01507, 0.0137269, -0.00258326, -0.0111723, 0.0113189, 0.041087, 0.0348557, 0.030923, 0.0124997, -0.00401139, -0.0092468, 0.0213892, -0.0314205, -0.00847803, 0.0375645, 0.00324482},
 {0.028647, 0.0182306, 0.000912421, -0.00682711, -0.0271651, -0.0200031, 0.0156003, 0.00924087, -0.00891157, -0.0153455, -0.00332163, 0.0496745, -0.0258082, -0.00683562, 0.00575067, 0.0212695, 0.0087302, -0.0457828, 0.000899676, -0.0347213, -0.0201585, -0.0210152, -0.00187397, -0.00425437, -0.00237068},
 {-0.0211283, 0.0133646, 0.0124078, -0.0195005, 0.0264186, 0.00818211, -0.024163, 0.0247819, 0.0255862, -0.0369179, -0.00721205, 0.0320186, 0.0158207, 0.00861933, -0.0139196, 0.0318764, -0.0239526, -0.038393, 0.0125992, -0.00852777, -0.0253865, -0.0288456, 0.0126718, 0.0126601, -0.0102553},
 {0.0077446, 0.00130731, -0.0179246, 0.00152294, -0.0123682, -0.00845467, 0.0256986, -0.0101749, 0.0518672, 0.024887, 0.00219421, -0.000162156, 0.0313497, -0.0178157, -0.0333129, -0.0126091, -0.0160381, -0.0249858, 0.0158408, 0.0339238, -0.00388252, 0.0117229, 0.0283589, 0.02241, 0.0194382},
 {-0.0273142, -0.0171353, 0.0177873, 0.0276331, 0.0160214, -0.00472603, -0.0199765, 0.0259895, -0.0285131, -0.0161534, -0.0113079, -0.0263528, -0.00643267, -0.0292198, 0.00504846, 0.0380559, -0.0258053, 0.0296826, -0.0198759, 0.0192801, -0.0111331, -0.032307, 0.0299473, 0.000753662, 0.0265992},
 {-0.0112342, 0.0247564, 0.0129776, -0.00136134, -0.0171206, 0.0190143, -0.0310736, 0.0140602, -0.0241342, 0.0125421, 0.0229767, -0.021962, -0.000197577, 0.0211227, -0.0203235, 0.0039563, -0.0209218, -0.00708066, -0.0307605, 0.0352645, 0.0225886, 0.0127052, 0.0290282, -0.0164571, 0.00288678},
 {-0.0198324, -0.00972163, 0.000372561, -0.0111385, 0.0129305, 0.0259855, -0.00094131, -0.0083366, -0.0123184, -0.0147394, -0.0312184, -0.000226033, 0.00230077, -0.0244953, 0.00341957, 0.0205688, 0.00995182, 0.00717525, -0.0142728, -0.0235083, -0.00484145, -0.024745, 0.0136999, 0.0236327, 0.0181462},
 {0.0180581, 0.00572843, -0.00394847, -0.0198045, -0.0441001, -0.00238728, 0.00374275, 0.0277584, 0.0236257, -0.00235358, 0.0131871, 0.0263319, 0.00737872, -0.0258916, 0.00196748, -0.0355837, -0.002954, 0.0147103, -0.00999474, 0.0113874, 0.0192413, -0.00747568, 0.0295896, -0.00587864, -0.020065},
 {-0.020457, -0.0285859, 0.0226303, 0.0186353, -0.00872102, -0.0235752, 0.0225009, 0.00846054, -0.0110367, 0.0132092, -0.010235, 0.0312762, 0.0237321, -0.00855265, -0.00531873, 0.0185568, 0.00181443, 0.00120055, -0.0249698, 0.0248476, -0.00912422, -0.0201356, 0.00386334, 0.0530482, -0.010197},
 {-0.0169508, 0.0431396, 0.0152967, -0.01172, -0.00563936, -0.0288212, -0.00206788, -0.0295841, -0.043043, 0.0127483, 0.0202302, 0.0233252, 0.00482468, -0.0258087, -0.0195863, -0.0141525, -0.0163907, 0.0203182, 0.0370541, -0.0126744, 0.00667365, 0.0192972, 0.00167815, 0.0011412, 0.0181293},
 {-0.0189995, 0.0357327, 0.0246898, 0.00827147, 0.0191153, 0.0121948, -0.00464952, -0.0171073, -0.00456563, 0.0207266, -0.00147799, -0.012277, 0.02844, 0.00522994, -0.0106588, -0.0113559, -0.0394104, 0.0196445, -0.0151884, -0.0184951, 0.0177867, -0.0126916, 0.0289891, -0.0204611, -0.00414648},
 {-0.0298386, 0.0506667, 0.0301893, 0.0345135, -0.0136727, -0.00129336, -0.00364949, -0.0304437, 0.0108365, 0.0240301, -0.019032, 0.00407578, -0.0183467, -0.0219178, -0.0282613, -0.00452885, 0.0227669, 0.00934122, 0.0331555, 0.027037, 0.0288433, 0.0320827, -0.0339955, -0.0178773, 0.00880178},
 {0.0265544, -0.0273182, -0.031807, -0.0429389, 0.0165884, 0.0414147, 0.0325926, -0.0443546, 0.0338872, 0.033414, 0.0122222, -0.0219977, 0.051206, -0.0305837, -0.0236162, -0.0401226, -0.0402314, 0.0260562, -0.0262594, 0.0276423, -0.0162315, 0.00306427, 0.0427797, -0.0132095, -0.0229645},
 {-0.0295648, -0.00637314, 0.0070706, 0.0102575, -0.000123783, -0.00523591, -0.0189935, 0.0198053, -0.025844, -0.0253174, 0.000704117, -0.03103, -0.0320723, -0.014291, -0.0299969, -0.0178823, -0.0096432, 0.0104973, -0.00349485, -0.0272431, -0.0324732, -0.018984, -0.0123156, -0.0334641, 0.0318726},
 {0.0269154, -0.00346204, 0.00417761, -0.0227352, -0.0236813, -0.0105892, -0.0233509, -0.00244318, -0.0454996, 0.00654783, 0.0206205, 0.0226962, -0.00252389, -0.0101501, -0.0147442, 0.0267862, 0.0257695, 0.0289473, 0.0244144, -0.0141031, 6.56443e-05, -0.0283224, -0.0345611, -0.00393785, 0.00227928},
 {0.0110118, -0.0192522, 0.0228075, 0.029977, -0.0491168, -0.00695073, -0.00578291, 0.0340663, 0.0203946, -0.00859654, -0.0266276, 0.0352415, -0.0268093, -0.0274244, 0.0145753, 0.03023, 0.0186437, -0.0065421, 0.00695564, 0.00946146, -0.0242485, 0.00772638, 0.00517367, 0.0215612, -0.017062},
 {-0.0147467, -0.0207551, 0.0137233, -0.0163636, 0.0134903, -0.00370518, -0.00947422, -0.0242513, 0.0256167, 0.00634656, 0.029747, -0.0234568, 0.0185706, -0.023805, 0.00622875, 0.00851164, -0.025242, -0.00499466, -0.0285966, -0.00265116, 0.0218339, -0.00116138, 0.022142, 0.0260651, 0.0195724},
 {0.00659458, -0.0395017, 0.0117632, 0.0305983, -0.0294346, -0.0158949, -0.0238236, -0.0200971, 0.0420309, 0.010491, 0.0270588, -0.00512681, 0.0285969, 0.0214054, -0.0202047, -0.0190895, -0.0173345, -0.00516205, -0.000444495, 0.00933891, -0.0167811, 0.0155233, 0.00253597, 0.0207441, -0.0198836},
 {-0.011021, 0.00750863, 0.0140157, 0.034378, -0.0158786, -0.0103464, -0.0028092, -0.00488564, -0.00962839, -0.0215581, -0.0189874, 0.00329412, 0.031, -0.0169418, -0.0035118, -0.0194718, -0.00332159, -0.0163841, 0.0145025, 0.0117897, 0.0278528, -0.0227994, 0.0156446, -0.0135486, 0.000758152},
 {-0.0144476, 0.030173, -0.00558523, 0.0265063, -0.0277651, -0.0238392, -0.0113635, -0.0279023, 0.0141447, 0.0348426, 0.0195766, 0.0274792, -0.0227093, 0.0250716, -0.0168769, -0.0210311, 0.0328957, 0.0229491, 0.0303269, -0.0104813, 0.00190062, 0.00839204, -0.0276556, 0.0219279, -0.024511},
 {-0.0166277, -0.0185169, 0.0188403, 0.0131735, 0.00613402, -0.0180257, -0.0303389, 0.00490262, -0.00229221, -0.00198651, 0.00249789, -0.0106201, 0.0260113, -0.0230459, 0.00279808, 0.0182496, -0.0227592, -0.0154202, 0.0123436, 0.00705399, -0.0184252, -0.0204649, 0.00495604, 0.0333848, 0.0285511},
 {0.00151764, -0.0135779, -0.0412973, 3.36725e-05, -0.0258498, -0.0113079, 0.0263457, 0.017524, 0.0280043, 0.019385, -0.0218209, 0.0150917, 0.00389917, 0.00596692, 0.0124811, 0.0208748, -0.00127521, 0.00390174, -0.00176117, 0.0141566, 0.00115863, -0.0246322, 0.0299098, 0.00407866, -0.0210749},
 {-0.0222637, -0.0308826, 0.0257218, -0.026144, -0.0274835, 0.0235588, 0.0276278, 0.0243604, 0.0350852, 0.00638748, 0.0160346, 0.0375796, -0.016784, 0.0126667, 0.0074217, -0.0206451, -0.0127458, 0.0020814, -0.0152373, -0.00715265, 0.0168329, -0.032498, -0.0262731, 0.00736863, -0.021684},
 {0.00825245, 0.021113, 0.0215174, 0.0224594, 0.00876213, 0.0259381, -0.00992089, -0.0152791, 0.00893676, 0.0253728, 0.0269806, -0.028646, 0.0117099, -0.0229539, -0.00217642, 0.0129656, 0.00046087, -6.71991e-06, 0.0283719, 0.00459625, -0.0191199, -0.0287227, 0.0167248, -0.00690531, -0.000994183},
 {-0.00741099, -0.0038828, 0.00487182, -0.0167198, 0.0517072, 0.0284287, -0.0138179, -0.0123863, -0.05295, 0.00113896, 0.0214299, 0.00824952, -0.0189559, 0.028028, -0.0318664, -0.0157864, -0.0304864, 0.0444501, 0.0470658, 0.00467955, -0.00831301, 0.0108421, 0.0213743, -0.0411566, 0.0228529},
 {-0.0179706, -0.00137835, -0.027037, -0.00348424, 0.0309387, -0.0172813, 0.0102148, -0.0274979, -0.0197929, 0.021932, 0.00263056, -0.00512397, -0.00889028, -0.009589, 0.00624073, 0.0136556, -0.0266004, 0.0173502, 0.028439, -0.0127531, 0.00643363, -0.0159179, 0.00883498, -0.00753943, -0.0190393},
 {-0.00416566, -0.0182171, -0.0383583, -0.0245699, -0.0219954, 0.00507671, -0.00511572, -0.0352049, 0.0175175, 0.0287903, -0.0274352, -0.00701379, 0.00959664, -0.0374447, -0.0182861, -0.0134282, -0.0238903, 0.00093205, 0.0165336, 0.0275666, -0.000461784, 0.028484, 0.0202167, 0.00873275, -0.0112375},
 {0.0106412, 0.000413722, -0.000328874, 0.00765317, -0.0103861, 0.0300715, 0.0177074, -0.0227534, -0.0100617, 0.0219291, -0.0115558, -0.0136992, 0.028491, 0.00367789, -0.0289765, -0.00277978, 0.0119042, -0.0320258, 0.0151861, 0.0240673, 0.00701499, 0.0229777, 0.0254985, -0.0235211, -0.0148966},
 {0.0189228, -0.0119556, -0.00788418, 0.019732, 0.024669, 0.00778003, -0.00513708, 0.0106015, -0.0241956, 0.0108748, -0.0263994, 0.00564162, -0.00112065, -0.00897609, -0.00589217, -0.0251931, 0.00986137, -0.0300918, -0.0194845, -0.0270249, -0.00339814, -0.00619261, 0.0233789, -0.00283958, 0.0302281},
 {-0.0263811, -0.0526461, 0.00952844, -0.0193805, -0.0317816, -0.012226, -0.0151977, 0.0432611, 0.00267635, 0.00324402, 0.0273883, 0.0158998, 0.0173385, -0.0268245, -0.0205488, -0.00978806, 0.0159318, -0.0469019, -0.0127107, 0.0249325, 0.0218499, -0.00736442, -0.0326756, 0.00966616, -0.0318733},
 {0.0186986, -0.0323816, 0.000777941, 0.0271854, -0.0360103, -0.0340692, -0.0177276, -0.0073704, 0.016936, -0.0137193, 0.0180428, 0.0290717, -0.0213846, 0.0179572, 0.00935907, 0.00691246, 0.0103315, 0.0254473, 0.0162857, -0.0060068, 0.0322045, -0.00160833, 0.00255516, 0.010549, 0.0264165},
 {-0.00608084, 0.030109, 0.0309365, 0.0150105, -0.0126826, 0.0326425, -0.00690635, 0.00252047, -0.0274496, -0.0262991, 0.0284518, -0.0317083, -0.0120216, -0.0296396, 0.0224826, 0.0139594, 0.0174922, 0.0320981, 0.00610325, -0.00809929, 0.017428, -0.000738358, -0.00885113, 0.0113591, 0.0336693},
 {0.0147542, -0.0211371, 0.0137284, -0.0214445, 0.0325847, 0.0111768, 0.00251962, -0.00818715, -0.0106188, 0.0262688, 0.0238651, 0.0302886, -0.0262177, -0.00959312, -0.0316315, -0.00779402, 0.00854174, 0.0108824, 0.0312381, -0.00964693, -0.0124762, 0.0059401, -0.00259267, 0.00723828, 0.0241045},
 {-0.0050369, 0.019563, 0.00307691, 0.016995, 0.0118206, 0.0107885, 0.0231639, 0.000858955, -0.0411658, 0.0324206, 0.0316082, 0.0103307, -0.031557, 0.000191555, 0.0139933, -0.00968268, 0.0105021, 0.0268404, 0.00540525, -0.00989145, 0.0216828, -0.0179019, -0.00726586, -0.021923, 0.00904492},
 {-0.015635, 0.0247867, -0.0144348, -0.0114961, -0.0162866, -0.00871381, -0.0132767, -0.000836584, 0.0244824, -0.0333259, 0.000434549, 0.0223427, -0.0155965, -0.00475466, -0.0101753, 0.0152362, 0.00841076, -0.0307514, -0.0240364, -0.0141139, -0.0212779, -0.00805918, -0.0107018, 0.0261722, 0.0307962},
 {0.0101562, 0.00755627, 0.00166668, -0.0199686, 0.00376742, 0.0101895, -0.0327525, -0.0211205, 0.00859861, 0.0086716, 0.0117883, -0.0124785, 0.0218705, -0.0230458, 0.00249517, 0.00222582, -0.0192937, 0.0131002, -0.0112521, 0.0268851, 0.0153913, 0.0253379, 0.0139061, -0.00619188, 0.0350666},
 {0.0126818, -0.00298283, -0.0325314, -0.0241545, -0.0270285, -0.0300747, -0.0147755, -0.00333847, -0.00414984, -0.000765552, 0.0288574, 0.00261592, -0.00651425, 0.0295539, 0.0166486, -0.0140657, 0.0289548, 0.00147393, 0.00468196, 0.0251441, 0.00311852, -0.0309549, -0.031084, 0.00358941, 0.00513957},
 {0.000771189, -0.0174535, -0.00413945, 0.000266503, 0.00569658, -0.0133779, 0.00599076, -0.0182932, 0.00507202, -0.0139151, 0.00278064, -0.00579586, -0.0169318, -0.0194204, -0.0193663, -0.0214585, 0.0158449, 0.0114277, -0.00432411, 0.02719, 0.0206576, 0.0171956, 0.0233062, -0.0139706, 0.0311524},
 {0.0331052, 0.0251951, 0.0145679, -0.0113473, 0.0186994, -0.0102212, -0.00236683, -0.0278999, -0.0421555, 0.00404336, -0.0115211, -0.0403045, -0.00640329, 0.0106355, -0.024131, -0.031317, -0.00885149, -0.00576319, 0.00514902, 0.0299159, 0.0300186, 0.0282804, 0.0264822, -0.0378608, 0.0132513},
 {0.0290982, 0.00336897, 0.0234251, -0.0120348, -0.00373201, -0.00376018, 0.0190444, -0.0115056, 0.012614, 0.0168712, 0.0236247, 0.000533722, -0.0299131, 0.0315944, -0.00399898, -0.0206566, -0.00327977, -0.0266037, 0.00997622, -0.0189063, 0.0137263, 0.0111156, -0.026404, -0.0110037, 0.032264},
 {0.00850899, 0.00704041, -0.0146278, -0.0347496, 0.0137697, 0.0299708, -0.00924186, -0.0156635, -0.0205859, 0.0508476, -0.00157989, 0.00634666, 0.0193731, -0.00423251, -0.0354622, -0.0279221, 0.00137373, -0.00590005, -0.00258847, 0.00133256, -0.0212445, 0.00278603, 0.00325071, -0.0105495, 0.0488696},
 {-0.00487431, -0.0412151, 0.0243382, -0.00151005, 0.013643, -0.0159438, -0.0101169, -0.0280705, 0.0391487, -0.0256494, -0.0311586, 0.0382469, -0.00665484, 0.0110165, -0.00923488, -0.0311693, -0.0182102, -0.0451353, -0.0279885, 0.0283151, -0.00339748, 0.0249711, 0.0318385, -0.00571007, 0.000776219},
 {-0.0209033, -0.00397257, 0.00421514, -0.00597753, -0.0393918, 0.00175147, -0.0013834, -0.0342434, 0.0286171, 0.029912, 0.0288763, 0.0297807, 0.0248372, 0.0153477, 0.00578623, -0.00287849, 0.0330333, -0.0154202, -0.00154305, -0.02049, 0.0146801, -0.0103761, -0.00536067, 0.0351936, -0.00406802},
 {0.0228059, -0.0460278, 0.0333637, 0.0252605, 0.00264955, 0.00760425, -0.0274199, 0.0288774, 0.0259043, 0.00103036, 0.0215146, 0.0132651, -0.0237043, 0.0269139, 0.0294998, -0.0136232, 0.0113138, -0.0502336, -0.0272698, 0.0193578, 0.0126753, 0.00481809, -0.0123599, 0.0202828, -0.0175849},
 {0.0142195, 0.00679587, 0.0133338, -0.0257534, 0.00726669, -0.00871841, 0.0050047, 0.0309818, 0.00873785, 0.0190725, 0.000904291, 0.00254917, 0.00753035, -0.0069675, -0.00012309, -0.0138871, 0.00773932, -0.0107203, 0.0217196, 0.0015592, 0.0277518, 0.0192897, 0.00894392, 0.0181559, 0.000255738},
 {-0.00610829, 0.0323379, 0.00615345, -0.0120991, 0.0141936, 0.0114013, -0.0297683, -0.0305922, -0.00519809, 0.0292857, -0.00943757, 0.0182726, 0.00335019, 0.0243124, -0.0101583, 0.0304034, 0.0290521, -0.00936104, 0.0353472, 0.0140655, -0.02258, 0.0167052, -0.0174743, -0.0214053, 0.0198705},
 {-0.00929638, -0.0268222, -0.0152798, -0.0243886, -0.00527414, 0.0106018, 0.0204741, -0.0212088, 0.0157873, -0.0187455, 0.0105608, 0.00724964, -0.00603469, 0.0321258, 0.0238076, -0.00620375, 0.00357896, -0.0148544, -0.00374695, -0.0334842, 0.0322648, -0.00956773, 0.0209764, -0.00946773, -0.0145326},
 {0.0139606, 0.00538663, -0.0176823, 0.0295295, 0.0281019, 0.0309709, -0.0289809, -0.0131376, 0.0183601, 0.0356464, 0.0302775, -0.00268453, -0.0197449, 0.0198194, -0.0113676, 0.0141114, 0.00731256, 0.0342273, 0.0247065, 0.0307776, -0.0285519, -0.0267866, -0.0201467, -0.0302472, 0.0161153},
 {0.00271511, 0.0161413, -0.0238379, -0.0317606, 0.0126857, 0.0220548, 0.0203915, -0.015816, -0.0207664, 0.0301368, -0.0142245, -0.00267084, 0.0118084, 0.0155934, 0.0218026, -0.00156598, -0.00555951, 0.0117817, -0.0164554, 0.0111148, -0.0138791, -0.0189198, -0.0163247, -0.0151018, 0.0028689},
 {0.00636852, 0.00167044, -0.0325566, 0.0212553, 0.00599257, 0.00833112, -0.0168773, 0.0240238, -0.00359574, 0.027526, -0.0303508, 0.0342677, 0.0295338, -0.0310997, 4.89345e-05, -0.012834, -0.00293503, -0.0192344, 0.0241662, 0.00502307, 0.00429868, 0.00507852, -0.0115448, 0.023325, 0.0227245},
 {-0.0256322, 0.0253257, -0.0315692, -0.0142939, -0.0354611, -0.0173866, 0.032575, 0.0104261, -0.00791614, 0.0140006, 0.0128075, -0.00880903, -0.0227334, 0.00132635, 0.0216616, 0.0134354, 0.0351282, 0.0260099, -0.00418824, -0.00315017, 0.017734, -0.0174561, 0.0138304, 0.0205495, 0.0182635},
 {0.000325095, 0.0220348, -0.00674128, 0.0114902, -0.0341625, -0.0145381, -0.0251336, -0.00421827, 0.0265301, 0.0140134, -0.0258424, -0.0123242, -0.0325027, -0.0232509, 0.0197214, 0.0156361, -0.0198198, 0.0201362, -0.0267795, -0.0188196, 0.0172604, 0.0123248, -0.0180953, 0.0190545, -0.00654403},
 {0.028956, 0.00905879, -0.00263891, 0.0128142, 0.0136293, -0.021195, 0.0300455, -0.00451925, -0.0287272, 9.26909e-05, 0.0133084, 0.00741909, -0.00650343, 0.0119653, -0.00788582, 0.00969257, 0.00685014, 0.0487194, 0.0274674, -0.0106444, -0.00415257, 0.0290299, 0.0262499, -0.0166256, 0.00518588},
 {0.0326321, 0.0250018, 0.019096, -0.0236707, 0.0140697, 0.0334936, 0.0216748, 0.00230598, 0.0111436, -0.0109613, 0.00576263, 0.00685795, -0.031364, 0.0249717, -0.0308064, -0.0332659, 0.00468023, -0.0303529, -0.00404025, -0.0155316, 0.0255998, -0.00773624, -0.0334995, 0.0220384, -0.0169855},
 {-0.0142659, 0.0168937, 0.00801471, -0.00258456, 0.0161818, -0.000488199, -0.0275413, -0.02165, -0.0464789, 0.00509283, 0.00318183, 0.0103741, 0.0322397, -0.00407364, -0.000587128, 0.0157234, -0.00252629, -0.0195391, 0.0249082, -0.000685785, 0.00520908, 0.00517212, -0.00524294, -0.000743664, 0.0258195},
 {0.00871473, -0.000864786, -0.0306726, 0.0226665, -0.00115449, -0.0136101, -0.00708461, -0.0176752, 0.0442743, -0.0202463, -0.00271355, 0.0406203, -0.0281218, 0.0218708, -0.00269886, 0.0230129, -0.0178148, 0.00731281, -0.0221361, -0.0243246, -0.00804708, 0.0228669, -0.0147852, 0.00100446, -0.0136891},
 {0.0158472, -0.00701144, -0.0289299, -0.00206759, -0.0272633, -0.0258642, 0.034455, -0.00102588, 0.00994015, -0.010464, -0.00507033, -0.00196539, 0.00247828, 0.0326531, -0.0284054, -0.0172357, -0.0305359, -0.029216, 0.0180811, -0.00230685, -0.0358321, 0.012552, -0.000715551, 0.0512967, -0.0240413},
 {-0.0232416, -0.0276413, 0.0380318, 0.016946, 0.00887674, -0.0286388, -0.034942, 0.0100087, 0.0165257, -0.0309895, 0.00370818, 0.0481411, 0.0156324, 0.014659, -0.0108567, 0.000151189, -0.0111576, -0.0103268, 0.00157128, -0.0400309, 0.0332744, -0.00510585, 0.0172359, 0.0323424, -0.00679292},
 {-0.0142183, 0.00921622, -0.0126272, -0.00464847, 0.0166459, 0.0113723, 0.0238419, -0.0201479, -0.0114169, 0.00625822, 0.00949873, 0.0175508, -0.0178918, -0.0275879, -0.0155041, 0.0364203, 0.0255521, -0.00142518, -0.0153433, 0.0252879, 0.00579541, 0.00489672, 0.0297658, -0.0221887, 0.0142619},
 {0.000714517, 0.0475049, -0.00991523, -0.00301227, 0.0330067, -0.0223101, 0.0145225, -0.0211881, -0.0378875, -0.0279862, 0.0129459, -0.00824938, 0.0145279, 0.0196153, -0.0315898, 0.0193704, 0.0272234, 0.0168768, 0.0171121, 0.0240432, 0.0269013, 0.00668948, 0.0103373, -0.0218573, -0.0204782},
 {0.0286848, -0.032851, 0.0382243, -0.0315198, 0.033168, -0.00708092, -0.0192007, 0.0106835, 0.00999326, -0.0219666, 0.0135754, -0.0355693, -0.00913004, 0.0309972, 0.0222561, -0.0235572, 0.0109118, 0.0138629, -0.00150121, 0.0197026, 0.0212697, -0.0015976, -0.00827524, -0.0370048, -0.00480583},
 {-0.0250075, 0.020124, -0.0246025, -0.00775808, 0.0155895, 0.0208748, -0.031576, -0.00370842, 0.00863766, -0.00613436, -0.00396525, 0.014644, 0.00645306, 0.0238935, -0.0247702, 0.0226103, 0.0126413, 0.0335526, -0.00420809, 0.0051452, -0.031967, 0.0317527, 0.00823208, 0.00484308, 0.00417685},
 {-0.00647246, 0.021762, -0.00116678, -0.0258213, 0.00452608, -0.0299053, -0.0301977, 0.0292911, -0.03141, 0.0362841, 0.0317034, -0.0262955, -0.00371406, 0.0164102, -0.028814, -0.024833, -0.0248954, -0.0325488, 0.0320558, 0.031989, 0.0261481, 0.0025308, -0.0291827, -0.0112859, 0.0225717},
 {-0.0313709, -0.0156243, -0.0320707, -0.0115782, -0.0585438, -0.0204716, -0.00896567, -0.00281683, -0.000625042, 0.0178013, 0.0160093, 0.0462582, 0.0108835, 0.00368742, -0.0128381, -0.0191006, 0.025831, -0.0414809, -0.0152112, -0.00551671, -0.0242583, -0.01048, 0.00244363, 0.0195142, 0.0268229},
 {0.0276068, 4.26599e-05, 0.0136149, 0.0205336, 0.00580299, -0.0319165, -0.0181369, 0.00560645, -0.0241259, 0.00874223, -0.00269188, 0.0338251, -0.0211648, 0.0193328, 0.0243035, 0.0286153, -0.00144331, -0.0128888, -0.0230984, -0.0218909, 0.0308102, -0.00874443, 0.0301331, 0.0125374, -0.00624159},
 {0.0206837, 0.00466918, -0.00748763, 0.02916, -0.0302331, -0.00195226, 0.0162165, 0.00827452, 0.0230703, -0.00453314, 0.0247293, 0.0127733, -0.00826215, -0.00858041, 0.00950666, -0.0371142, -0.0200462, -0.0220838, -0.0316164, 0.0142705, -0.0165027, 0.0128923, 0.0138257, 0.0169663, -0.00548267},
 {-0.0262925, 0.0653297, -0.0175119, 0.0315153, 0.0145679, -0.00110573, 0.000668039, -0.00241482, -0.0250898, -0.0333567, 0.00123442, 0.0111583, -0.0261417, 0.0173727, 0.0231403, 0.0238617, 9.27816e-05, 0.0152053, -0.00956143, -0.020726, -0.0104093, 0.012877, 0.0106515, -0.0274838, 0.000540624},
 {-0.00567765, 0.00698195, -0.00799304, 0.00935545, -0.0218024, -0.0161717, 0.028375, 0.00967268, -0.0128189, 0.0149427, -0.0312225, -0.00462347, -0.0215909, 0.0247616, -0.0181725, 0.0241619, 0.00973692, 0.0131972, 0.00785284, -0.00923503, -0.00445271, 0.0251953, 0.00700948, -0.00819304, -0.00375284},
 {0.00631088, -0.0229477, -0.00826859, 0.000322187, -0.0495116, 0.0310816, 0.00813612, -0.0185309, 0.0132511, 0.0316729, 0.000206505, 0.0138094, -0.0156534, -0.027443, -0.0327009, -0.036157, 0.00930691, -0.0305866, -0.0170335, -0.0297728, 0.0165934, 0.0209711, -0.00650056, 0.0292412, 0.0383382},
 {0.00936303, -0.0667119, 0.0101585, -0.0189264, -0.0628835, -0.0318063, 0.0345087, -0.00315993, 0.0148766, 0.0301688, 0.00129573, 0.0408407, 0.0200191, -0.0308919, -0.0311272, 0.0277087, -0.00610206, -0.0612694, -0.0355708, -0.00760744, 0.0314235, 0.014799, -0.0201963, 0.0319592, 0.00301121},
 {0.0322289, -0.0442127, 0.021699, 0.00131392, -0.057004, 0.0199365, 0.0123427, -0.0248202, 0.0495792, 0.0322895, 0.0332227, 0.0108743, 0.015433, -0.019192, -0.00209994, -0.0157413, -0.0353216, -0.0314109, 0.0121246, -0.000111215, -0.0219267, -0.0286045, -0.000494067, 0.0571569, -0.00443615},
 {0.00300586, -0.0524302, 0.043916, 0.0241307, 0.00551162, 0.0255986, -0.00576983, 0.0356228, 0.0468094, -0.00900937, 0.000471609, 0.0216921, -0.0133136, -0.0286745, 0.0107011, -0.0127708, 0.0460396, -0.0351377, -0.00332759, 0.00333813, -0.0191797, 0.0110388, -0.0210813, 0.012326, -0.0146539},
 {-0.0288056, -0.0092782, 0.0356852, 0.0208236, -0.00143115, 0.0302861, 0.0293737, -0.0052498, -0.0151216, 0.00411384, -0.0294106, -0.00514727, 0.0157018, 0.0083819, 0.00618676, 0.0350458, -0.0368429, -0.0100328, -0.0129628, -0.00689723, 0.0265237, -0.0174192, 0.0314727, 0.0167426, -0.00120202},
 {0.0156114, 0.032016, 0.0213207, -0.0133174, 0.00044973, -0.0316199, 0.00341833, 0.0278336, -0.00650621, -0.00743367, 0.0150175, -0.0416585, -0.0132853, -0.0152437, -0.0206793, -0.00978594, -0.00477104, 0.0186465, 0.0104538, 0.000850997, -0.0337776, -0.0141995, 0.00169006, -0.0552851, 0.0251},
 {0.00535479, -0.030932, -0.0185321, 0.033339, 0.00282802, -0.0268349, 0.0154173, 0.0356205, 0.0276474, 0.00620411, 0.0286718, -0.0172183, -0.0238986, -0.0215652, 0.00552379, 0.0290441, 0.00229454, 0.0044102, 0.00308841, -0.0281723, 0.0152521, -0.00042975, 0.014442, 0.00504678, -0.0204248},
 {-0.00873402, 0.0101844, -0.00946527, 0.0129016, -0.0346672, 0.00814494, -0.0256554, 0.0220714, 0.0358737, 0.0217761, -0.0280632, -0.0151043, 0.026858, -0.0272615, 0.000772097, 0.0114569, 0.0191735, -0.0286939, 0.0296924, -0.014603, 0.0231557, 0.0215223, -0.0245191, 0.00148675, -0.0216278},
 {-0.0259028, 0.018362, 0.00339037, -0.0323346, -0.0141908, 0.00747335, 0.00711053, -0.016269, -0.0049412, 0.0249651, -0.024114, -0.01267, 0.0171855, -0.0303854, -0.0241359, -0.0177279, 0.00693227, 0.0184927, -0.0186363, 0.0317625, 0.00240772, -0.00764088, -0.016185, 0.0101978, 0.0230889},
 {0.0083639, -0.0146236, -0.0319364, 0.0215132, -0.0466425, -0.0170239, -0.00015557, 0.0225751, 0.0537328, -0.00145356, -0.0097038, 0.0412002, 0.0237477, 0.0176123, -0.00549476, -0.00190632, -0.0263078, -0.0186611, 0.0127465, 0.00853299, 0.00766703, -0.0273494, 0.0124748, 0.0215526, 0.04079},
 {-0.028203, 0.0274391, -0.000208812, 0.00850233, 0.0193541, -0.0196004, 0.00477167, 0.0206603, 0.00906469, -0.00917836, -0.0215666, 0.0231994, -0.0327095, -0.0211805, 0.0250459, -0.0237772, -0.0238356, 0.0311026, -0.0231568, 0.0247381, -0.0141981, 0.00944874, 0.00598377, 0.0107965, -0.0114448},
 {-0.0262371, -0.0109512, 0.024654, 0.00261367, -0.0350608, 0.0290193, -0.0176371, -0.0134218, -0.00470567, 0.0163836, 0.00554644, 0.00171537, -0.0326622, 0.0162757, -0.00475248, -0.0166809, 0.018468, -0.0371048, -0.0242709, 0.0256379, -0.0120652, -0.0154335, 0.0292066, -0.010513, 0.00785718},
 {0.0317284, 0.010677, -0.0310082, 0.0285931, 0.0110564, -0.0234446, -0.0225542, -0.0017467, -0.061982, 0.0125202, -0.0254895, -0.0169031, 0.0325821, 0.0155128, -0.022655, -0.0126717, -0.0108368, 0.000498379, 0.0124833, 0.0269845, 0.00501311, 0.0135372, -0.0261502, -0.0120898, 0.0144947},
 {0.0159156, 0.0213004, -0.0284518, -0.00884471, -0.0158163, -0.0114904, -0.0115026, -0.0285104, -0.0134424, -0.0251214, -0.00017109, 0.0274114, -0.0053298, 0.0193026, 0.0295437, 0.0177569, -0.0222564, -0.0400982, 0.0208021, -0.00614217, 0.00229431, -0.0118516, -0.00501261, -0.00792337, 0.0338926},
 {0.0094401, -0.0431175, -0.0302297, -0.0143861, -0.0483082, 0.0283487, -0.0503489, -0.00300978, 0.0425472, -0.00886996, -0.0225879, 0.0717832, 0.029444, 0.0077343, 0.0115979, -0.0423835, 0.061594, -0.0535187, -0.0279203, 0.00311955, 0.0400376, 0.0337819, 0.0195755, 0.084139, 0.0708209},
 {-0.0161984, -0.052033, -0.00322368, -0.02801, -0.0404536, 0.0268273, 0.0154342, 0.0291639, 0.0566602, 0.0117151, -0.00881201, -0.00955881, -0.0318191, 0.00599556, -0.0123085, -0.0314748, -0.00846137, -0.0327807, -0.00496768, 0.00719937, -0.00859148, -0.0296722, -0.0121316, 0.05506, 0.0196358},
 {-0.0143277, -0.0694078, -0.0302011, 0.00160906, 0.00859232, 0.00157798, -0.00203663, -0.00627198, 0.0468581, -0.00444058, 0.0249491, 0.0126206, -0.00314806, 0.0258355, -0.0237448, 0.0202891, -0.0210474, -0.00742169, -0.0239846, -0.0202352, -0.0286521, -0.0100745, -0.0170152, 0.0077518, 0.00420485},
 {0.0057131, -0.0566262, 0.00865357, -0.0103561, 0.00900512, 0.0113566, -0.022286, 0.0282642, 0.0564921, 0.00749597, 0.019394, 0.0422779, -0.031523, 0.0215651, 0.0302581, 0.0385764, 0.0376927, -0.00776749, -0.0278078, -0.00122128, -0.0100866, 0.00626572, -0.0137118, 0.00747651, -0.0136412},
 {-0.00773191, -0.0299997, 0.012563, 0.0260961, 0.0263033, 0.0277813, 0.00011216, 0.0203647, -0.00872732, -0.0271565, 0.0327221, -0.0282892, -0.0145937, 0.015572, 0.00414439, 0.0286817, -0.0112746, -0.000234818, -0.00569694, -0.0106501, -0.0166774, 0.00539407, 0.0305071, -0.00312348, -0.00842358},
 {-0.0135525, 0.0296931, -0.0376665, 0.0273651, 0.00323329, -0.0188433, 0.0273679, -0.0201178, -0.0318625, 0.0323049, -0.00946013, -0.0435495, 0.0080648, -0.00113921, 0.016435, 0.000952979, -0.00120292, 0.0410416, 0.0112501, -0.00130696, 0.0111112, -0.0187224, 0.0303503, 0.00131462, 0.00447825},
 {-0.0121326, 0.0156921, 0.0259606, -0.0156223, 0.0414471, -0.010633, -0.019983, 0.0144088, -0.028465, 0.0243894, 0.0278879, -0.0396591, 0.0304766, 0.0194977, 0.0123221, 0.0161405, -0.0253193, 0.0270956, 0.0239575, 0.0157206, -0.00346732, 0.0285119, -0.000527812, -0.00316188, 0.0254872},
 {-0.0330969, 0.015768, 0.00927018, 0.0162076, -0.0209926, 0.00606159, 0.0200089, 0.00842662, -0.0163252, -0.0131957, -0.00809688, -0.00497766, 0.029474, 0.021865, -0.0038985, 0.013411, 0.0323655, -0.0249267, 0.0255614, -0.0221144, 0.009247, 0.0316688, 0.0235984, -0.0056124, 0.0127181},
 {-0.0299205, -0.017675, 0.027631, -0.0306267, -0.0301775, -0.0140389, -0.0181681, -0.016924, 0.0172921, 0.0241125, -0.00926947, 0.000514422, 0.0240277, 0.0031391, -0.0289083, -0.0202719, -0.0225697, 0.00185473, -0.0321043, -0.0055783, 0.0127295, 0.0179154, 0.00817991, -0.0265208, -0.00207838},
 {0.00320321, 0.00155904, -0.033713, -0.014802, -0.0611039, -0.0277135, 0.0125902, 0.0256513, 0.0225469, 0.0160967, 0.0100222, 0.0263011, 0.0037414, 0.0169264, 0.0133621, 0.0121991, -0.0022994, -0.0378778, -0.0147344, 0.014966, -0.00429404, 0.012213, -0.00540516, 0.00378838, 0.0364732},
 {-0.000462912, 0.025418, -0.013532, 0.0268235, 0.0203408, 0.0323429, -0.00737491, -0.00540719, -0.0103119, -0.00925194, -0.0235082, 0.019166, 0.0319131, -0.0299512, 0.000164291, -0.0194497, -0.0160636, 0.00751171, 0.0246205, 0.0274699, 0.0228897, 0.0100106, 0.0283522, -0.0137673, -0.0173562},
 {-0.0223395, -0.0129669, -0.0340769, -0.0146893, -0.0360772, 0.0316405, 0.0117313, -0.0184706, 0.00482437, 0.00355647, 0.0248997, -0.00254966, -0.0260171, -0.0108281, -0.0142046, 0.00284274, -0.0136961, -0.0103587, 0.0287893, -0.0232664, -0.030325, -0.0134345, -0.00407847, -0.00186599, -0.00191471},
 {0.0316713, 0.0487125, -0.0167168, -0.00944603, 0.0567081, -0.0140711, -0.0107418, 0.0245332, -0.0319423, -0.000946637, -0.0154423, -0.0284852, 0.0270961, 0.0270368, 0.0217941, -0.0182461, 0.0216388, 0.0261601, -0.00594192, 0.000899597, -0.0138477, -0.0242308, -0.0013259, -0.0397855, 0.0249588},
 {0.0207561, 0.0187664, -0.0251765, 0.000420426, -0.0164361, -0.0283126, -0.0121277, -0.0262297, 0.0207172, 0.0341367, 0.00941664, 0.0120397, -0.0105785, 0.0321388, 0.00527655, -0.0160478, -0.0109049, 0.00333859, 0.0255153, -0.0207634, -0.0010052, 0.0216106, 0.0248924, -0.0226822, -0.0262651},
 {-0.0138111, -0.0141455, -0.0545224, -0.0320872, -0.0520507, 0.0275482, -0.0356491, -0.0425801, 0.0290577, 0.0349628, 0.0272169, 0.0402554, 0.0188974, -0.021183, 0.026296, -0.00645168, 0.0411129, -0.0498248, -0.0385331, 0.00433519, -0.00507033, -0.0246825, 0.0214845, 0.0609536, 0.0606363},
 {-0.00802703, -0.0489308, 0.0349148, 0.00539693, -0.0332092, 0.00864037, -0.0282155, 0.0155131, -0.00162408, -0.00400669, -0.00339793, 0.00264523, 0.0282979, -0.033209, -0.00566134, -0.000756013, -0.0239713, -0.0297408, -0.0317093, 0.0151748, -0.0287276, 0.00595365, 0.0201674, 0.0266652, 0.00542406},
 {0.026906, -0.0415214, -0.022743, -0.00287602, -0.0373099, 0.0197629, 0.00624142, -0.0102426, 0.0265789, 0.0051764, -0.0315743, -0.00299896, -0.0289955, 0.002704, -0.0278984, -0.0126186, -0.0205494, -0.0300493, -0.0184302, -0.019874, -0.00278974, 0.0248313, 0.0240062, -0.00637921, -0.0381765},
 {0.0143773, -0.0366339, 0.0123216, 0.0287175, -0.0308149, -0.0236455, 0.0130965, -0.0126755, 0.0587593, -0.0355187, 0.0113337, -0.0111385, 0.0133686, 0.0215393, -0.0115037, 0.00951755, -0.000946183, -0.00538023, -0.0139204, 0.028742, 0.00949635, 0.00289683, -0.00561713, 0.0106601, 0.0236932},
 {0.0339912, 0.00543571, 0.0294169, 0.0231843, -0.0271786, -0.0267628, 0.0248319, -0.00221336, 0.0235544, -0.0149423, 0.0132101, 0.00715485, 0.0231719, 0.0208931, 0.0296957, 0.00136235, 0.00272136, 0.0256405, -0.0231831, -0.0105473, -0.00501803, -0.00201807, -0.00385361, 0.00895099, -0.0147289},
 {0.0206956, 0.013231, -0.008921, 0.0147972, 0.0383833, -0.00607949, -0.0173605, 0.00464419, -0.00657423, -0.017405, -0.0270105, 0.0149865, -5.38604e-05, -0.0247244, 0.00767615, 0.00394969, -0.0257889, 0.00527975, 0.0224628, -0.0137698, -0.0342376, -0.0179546, -0.0262241, 0.00872236, 0.0229863},
 {0.0147779, -0.0139529, 0.0266028, 0.0220043, 0.00587257, -0.00928093, 0.0310008, -0.0215586, -0.0352914, 0.00898804, -0.00779785, -0.0285127, 0.0265496, -0.0249131, 0.0203716, -0.0136176, -0.0123036, 0.0284408, 0.00681332, -0.0210207, -0.018823, 0.0271476, -0.0308324, 0.00952406, -0.0278319},
 {0.0207476, 0.0148139, -0.0163727, -0.0316595, -0.00700875, 0.00740479, 0.0197532, -0.0117056, -0.0158741, -0.000890918, -0.000721464, 0.0281881, 0.0288883, 0.0279255, -0.00792935, 0.00272486, 0.0240064, -0.0229662, -0.0165808, -0.020177, 0.0250977, -0.0181182, 0.0262815, 0.021709, -0.0180119},
 {-0.0246196, -0.0325245, -0.0325847, 0.00239214, 0.0147308, 0.0202887, -0.0191884, -0.0102184, 0.00533754, -0.00938054, 0.0250417, 0.0261226, -0.00900978, 0.0320802, 0.00821307, -0.0349261, -0.0214951, -0.0240193, -0.0118587, 0.0088392, 0.00883754, -0.0244228, 0.0236504, 0.0193005, -0.0222669},
 {0.0132565, -0.0105108, -0.0178724, 0.00252021, -0.0180872, 0.0126702, 0.0251774, 0.0138105, 0.0311636, 0.02755, -0.00546555, 0.0177258, -0.02392, 0.0241813, -0.00277825, 0.00675474, -0.0244524, 0.00534504, 0.0102841, 0.00571215, 0.0101154, -0.0207947, 0.00737266, 0.028398, 0.0179501},
 {0.0311158, 0.026668, 0.0180586, -0.0123771, -0.0114693, -0.0128071, -0.0257476, -0.0335392, -0.00472232, -0.000968516, -0.0174459, -0.00869473, -0.0220648, 0.0205036, 0.00828587, -0.022093, -0.0042875, 0.0242403, 0.00251991, -0.0129912, -0.0306331, -0.00275651, -0.013396, 0.0156204, -0.00244305},
 {0.0160551, 0.0175187, 0.0305749, 0.0112471, -0.00093314, 0.0249011, -0.0010514, -0.0312188, -0.0264648, -0.00804402, -0.0189001, -0.0165351, -0.00790331, 0.00533046, -0.00339919, -0.0126456, -0.0249442, -0.0116702, -0.00429864, -0.018659, 0.0328818, 0.025022, -0.0242795, 0.00378456, 0.0136732},
 {-0.0309911, 0.0299512, -0.0148551, 0.012997, -0.00496862, 0.0222959, 0.0201209, -0.015644, -0.0414762, 0.0150104, -0.00672114, 0.00275624, 0.0190196, -0.0240945, -0.00449384, -0.00617173, -0.0107972, 0.00098936, 0.0348534, -0.0253012, 0.00554757, 0.0196285, 0.0128227, -0.0195025, 0.032387},
 {-0.0163765, -0.013001, -0.0156893, -0.025562, -0.000853861, 0.00600143, -0.0177919, 0.00735554, 0.0347474, -0.003586, 0.00600813, 0.0254028, 0.0116441, 0.0117944, 0.00791446, -0.00828531, -0.00320614, -0.0294752, 0.0184567, 0.01582, -0.0181348, -0.0079175, -0.0249704, 0.0419358, 0.0271296},
 {-0.000478235, -0.0232053, -0.0202829, -0.0255309, -0.0423092, -0.00876151, 0.00328086, -0.0194306, 0.0116587, 0.019963, -0.0301105, 0.0411431, 0.0255498, -0.0161062, -0.0307525, 0.0191296, 0.0370168, -0.0541556, -0.017801, -0.0366046, -0.00623462, -0.00960257, -0.0296935, 0.0369611, 0.0297446},
 {-0.0208481, -0.0277454, 0.0217034, -0.0212707, -0.0182329, -0.0304344, 0.0202099, 0.00430643, -0.00357926, -0.0210482, 0.0242123, 0.0281378, -0.013576, -0.0319347, -0.0331871, 0.00903114, -0.0237608, -0.025081, -0.030359, -0.0208829, 0.0117719, 0.0322565, 0.00803729, -0.00687487, 0.0218417},
 {-0.0196182, -0.00942015, -0.00233174, -0.0109202, -0.00991163, 0.0177256, -0.00538379, -0.00727448, 0.0162558, 0.00357657, -0.0106909, 0.003982, 0.00645939, 0.0265019, 0.00815657, 0.0310187, -0.0388595, -0.0288626, -0.0384929, -0.0103915, -0.030784, 0.0295528, -0.0238715, -0.00178779, -0.0391532},
 {-0.00103321, 0.00916142, 0.0414556, -0.0114816, -0.00939436, 0.0208575, 0.0328494, 0.0455346, 0.000375756, -0.0261206, 0.0234902, 0.0324984, 0.033166, -0.0219147, -0.0219693, 0.027587, -0.0220714, 0.00460801, -0.00190673, -0.0311619, -0.00590189, 0.00683205, -0.0122916, -0.00206031, -0.0220217},
 {-0.00368567, -0.00322845, 0.0112085, -0.0168322, -0.0114889, -0.0112491, -0.0208514, -0.00494908, 0.00224175, 0.025505, -0.0298525, 0.0031339, 0.0240317, 0.0256017, 0.0181472, 0.0349052, -0.0386228, -0.0194006, 0.0302625, 0.00959767, 0.0276503, -0.00621228, -0.030789, 0.0207149, 0.0197572},
 {-0.0109332, 0.038038, 0.00386131, -0.0321788, 0.0360639, 0.0195166, -0.000562033, -0.0177825, -0.0137062, 0.0087045, 0.00667439, -0.00822657, 0.0121863, 0.0177909, 0.00827208, 0.00130779, 0.00188113, -0.021692, -0.00198788, 0.00465204, -0.00173269, 0.00822487, -0.0167898, 0.0223173, -0.0176746},
 {-0.0316899, 0.0237402, -0.0225922, 0.0294191, -0.0152713, -0.0240817, 0.0303192, 0.0317396, 0.0237868, -0.0281184, 0.00566944, -0.0126234, 0.00980803, -0.032359, -0.0275342, -0.0124947, -0.0325128, 0.00651635, -0.0199297, -0.00691947, -0.0125244, -0.0334617, 0.00889041, -0.0288212, 0.0214565},
 {-0.0278137, -0.0106171, -0.0369616, 0.00364483, -0.0213092, 0.0174733, -0.0201697, -0.0166083, -0.012702, -0.006422, -0.00883865, 0.00790502, -0.00611884, 0.00215353, -0.0167016, -0.0188915, 0.0265957, 0.0112949, 0.0257332, -0.00324949, -0.00551652, 0.00221377, 0.010758, -0.0281697, 0.0353831},
 {0.00430315, 0.0235552, 0.00929664, 0.00864214, 0.0349159, -0.0113736, 0.0138692, -0.0317253, 0.0178565, -0.0302429, -0.00121452, 0.0129804, 0.0248044, 0.00699863, 0.0115212, -0.0160913, -0.010556, 0.0269251, -0.00227883, -0.00459345, -0.0270388, 0.0166373, -0.0147643, -0.0144299, 0.00867441},
 {0.00512932, 0.0215023, 0.00484997, 0.0180842, -0.01875, -0.0297705, 0.00342788, 0.0317976, 0.0279409, 0.0109963, 0.032226, -0.00689055, -0.00244313, -0.0238538, -0.00816587, 0.00565376, 0.0195004, 0.0080744, 0.00026193, -0.0177666, -0.00110708, 0.00152074, 0.00735268, 0.0216498, 0.0116561},
 {-0.0254869, 0.0205716, -0.036334, -0.00100275, 0.027092, 0.0302854, 0.0307537, -0.0282097, -0.015276, 0.00582151, 0.0148662, -0.018538, 0.0333141, -0.0253708, 0.0316776, -0.0257164, -0.0177257, -0.018387, 0.0258961, -0.0298724, 0.0147208, -0.0330641, 0.0270036, -0.0242655, 0.00609905},
 {0.0173575, 0.000193004, 0.0235001, -0.0345866, -0.0354918, 0.0316052, 0.020434, 0.0240765, -0.0100538, 0.0103739, -0.000734656, -0.00438201, -0.0112573, -0.0102649, -0.0236249, -0.0136207, -0.0151245, 0.0239005, -0.00153778, -0.015021, 0.0214731, 0.029039, 0.00737153, -0.0106632, 0.0255967},
 {0.00608696, -0.0172231, 0.00191704, 0.0246185, 0.0409359, -0.000620616, -0.00808303, 0.0305296, -0.00606458, 0.0246901, -0.00133078, -0.0409858, 0.0245764, -0.0213878, 0.0243218, 0.00197786, 0.0115985, 0.0399927, -0.0155929, -0.0235508, 0.0251534, 0.0161795, -0.0255523, -0.0155014, 0.00795346},
 {-0.0310799, -0.0327462, 0.000833077, 0.0254281, -0.0166049, -0.0269724, -0.0231196, -0.0166956, 0.031836, -0.0033527, -0.0256094, 0.0257556, 0.0324859, -0.00698005, -0.0196066, -0.0217293, 0.0184609, 0.01787, 0.00728245, 0.0186739, -0.0134877, -0.0114068, -0.0161978, 0.00274659, 0.00181725},
 {-0.010718, -0.0252366, -0.0178654, -0.00717633, -0.0337817, 0.00521242, -0.0259232, -0.0254991, 0.0205274, 0.0348162, -0.0322725, 0.061458, 0.0118645, 0.0270389, -0.0211447, -0.0433022, 0.0499085, -0.0642583, -0.0181608, -0.0119388, 0.00287564, -0.0129529, -0.011291, 0.0944432, 0.0593505},
 {0.0229393, -0.0470773, 0.0328015, -0.0171772, 0.00909038, -0.0290312, 0.00670095, 0.0203954, -0.0114031, -0.00670659, 0.0040097, 0.0113733, -0.00430246, 0.0272821, -0.0163177, 0.00916095, 0.0228864, -0.0291327, 0.020234, -0.0115409, -0.0229724, -0.00412672, -0.00812036, 0.0212569, -0.00117393},
 {0.00325692, 0.0105836, 0.00679045, 0.0386069, 0.0135054, 0.00788528, 0.00213104, 0.0225145, -0.00403729, -0.0133221, 0.0297337, -0.0330699, 0.0202792, 0.0147097, 0.0282799, 0.0126737, -0.0074697, -0.0311259, -0.0170952, 0.0209834, -0.0324236, 0.0261944, 0.00432505, -0.0286146, -0.026437},
 {0.00164589, -0.0130857, 0.0205497, -0.0284776, -0.0241197, 0.0207219, 0.00062453, 0.0347968, 0.0200096, -0.0398688, 0.00192675, -0.0211441, -0.0183121, 0.03011, 0.00370402, -0.0199981, -0.0152665, -0.0122101, -0.004559, -0.0318153, 0.014402, 0.0149667, -0.000801108, 0.0402898, 0.0230221},
 {0.0305915, -0.0256542, 0.00814706, 0.0395367, -0.0229891, -0.00175164, 0.0353204, 0.0216225, -0.01284, -0.0295597, 0.0273819, -0.0120032, -0.0101097, 0.0241689, 0.00467448, -0.0265457, 0.0227876, 0.0158638, -0.0263187, 0.0174617, -0.0160098, -0.0316974, -0.00995498, 0.0204634, 0.0114431},
 {-0.0217611, 0.0234169, -0.0228251, -0.0051627, -0.0037256, -0.0148003, 0.000582179, -0.0367743, -0.0117791, -0.00686419, 0.0127057, -0.034739, -0.0119102, 0.00301408, -0.00517157, -0.040422, 0.0107687, -0.00249923, 0.0188366, 0.0294768, -0.0134672, 0.00965079, -0.0269022, -0.0301176, 0.0152917},
 {0.0046212, 0.000459373, 0.0214805, -0.0142206, -0.00194522, 0.00961934, 0.0112728, 0.0281004, 0.0205892, -0.022424, 0.0231759, -0.0372089, -0.0276937, 0.0119647, 0.0094849, -0.00461227, 0.0248738, 0.0209841, -0.0100033, -0.00183161, -0.00912748, 0.00565992, -0.00326853, -0.0254007, -0.00532312},
 {0.0227278, 0.0176779, 0.0108175, -0.00583749, -0.0025167, 0.0208612, -0.0241071, -0.00766725, -0.0298313, -0.01116, 0.00530918, -0.0225715, 0.0275497, 0.0128883, 0.00684608, 0.0213384, -0.0268998, -0.000323105, 0.0345305, -0.0203928, -0.0317607, -0.0294834, -0.00674357, -0.0148745, -0.0170176},
 {0.0103929, 0.00994052, -0.0120403, 0.0309797, -0.00430727, -0.0194186, -0.0244951, 0.0141443, 0.0147358, -0.0205111, 0.0244066, 0.0105436, -0.00136495, 0.0305683, -0.019512, 0.0233932, 0.0169898, 0.00359101, -0.0063138, 0.0177644, -0.0152456, -0.0244639, -0.00129432, 0.0232634, -0.0309},
 {0.00922192, -0.0310786, -0.029111, -0.0145513, 0.00698466, 0.00802806, -0.0246441, 0.0271492, 0.0232441, 0.0271249, 0.00667366, 0.0101705, -0.0301806, 0.00380199, 0.00667992, -0.00339964, 0.00785881, -0.0231801, -0.0236967, 0.0304824, -0.0034162, 0.0331293, 0.012073, 0.0262043, -0.0236014},
 {-0.0295216, 0.0298891, 0.0101505, -0.0162956, 0.017539, 0.0317326, 0.0126009, 0.0054779, 0.0167102, 0.0242776, 0.0162451, -0.00311834, 0.0246458, -0.0280189, -0.0147409, 0.0175372, -0.0184643, -0.0189192, 0.0190399, 0.00445742, -0.0037369, -0.0289857, 0.00879635, -0.0155001, 0.0267515},
 {-0.0163004, -0.015113, -0.0176526, -0.0201169, -0.019564, -0.030341, -0.0198971, 0.0279839, -0.0231508, -0.0281471, -0.0216051, -0.00755257, -0.0181408, 0.0201191, -0.00540206, -0.0267137, -0.0224397, 0.0224069, 0.0274882, 0.00748308, 0.0332588, -0.0113817, 0.008062, 0.00753428, 0.0125139},
 {-0.0194799, -0.0121253, 0.031555, -0.0266858, 0.000309675, 0.0195562, -0.0222182, -0.0192315, -0.0407827, -0.0263198, 0.0255845, 0.012473, -0.00902461, -0.0280601, -0.0322277, -0.0180828, -0.0291768, 0.000535919, 0.0108778, -0.0118133, -0.00963183, -0.0154622, -0.0262244, -0.0371341, -0.00603777},
 {-0.017576, -0.034617, -0.0067912, -0.00922782, -0.00185696, -0.0209201, -0.0102843, -0.0102324, 0.030024, -0.0309346, 0.0221825, -0.0160366, -0.0180989, -0.0250857, 0.00937135, -0.0190286, 0.00883389, -0.0167036, -0.0288276, 0.0170036, 0.0233169, 0.0256263, 0.0302859, -0.0217518, -0.0316317},
 {0.00501076, 0.0284102, -0.0359884, -0.0500347, -0.0128755, 0.00222714, 0.0088312, -0.0227609, -0.0102177, 0.0203224, -0.0181167, 0.0573465, 0.0230789, -0.00655215, -0.0266845, -0.0341727, 0.00802265, -0.0496046, 0.0100513, 0.0181214, 0.0199329, -0.00487527, 0.0233431, 0.0249533, 0.0541003},
 {-0.0133328, -0.00303301, -0.0218852, -0.0262882, -0.0091575, -0.0141667, 0.00780409, 0.0247445, 0.0372154, -0.00438429, 0.0014088, -0.0100815, -0.00853213, 0.0125019, 0.0166359, 0.0307643, -0.008451, -0.0143028, -0.00920244, -0.014193, -0.0249142, 0.0327684, 0.00470684, 0.0401827, -0.0338843},
 {-0.0207802, 0.000947041, 0.0457986, -0.0227986, -0.0137848, -0.0115336, 0.0155868, -0.00464139, 0.0174864, 0.00835167, 0.0104684, 0.0251453, 0.0154337, -0.00496077, -0.00632526, 0.0277728, -0.0343623, 0.0299438, 0.0034149, 0.0146851, -0.00887521, -0.000568885, -0.00242851, -0.024095, -0.0438791},
 {-0.00114979, -0.0103521, 0.0234801, 0.0177581, -0.00107381, 0.022055, -0.00789487, 0.0229739, -0.0143377, 0.0220248, -0.0243999, 0.00336265, 0.0304344, -0.00339933, 0.0139022, 0.0213103, 0.0264363, -0.0232203, 0.0110029, 0.00493201, 0.0286763, 0.027883, -0.00681254, 0.0214032, 0.00692526},
 {0.00703809, 0.0111103, -0.0226242, -0.014352, 0.0297407, -0.00169143, 0.00753261, 0.0245517, -0.0165354, 0.00229698, -0.0230037, -0.00992548, 0.0117182, 0.000638625, 0.00391627, 0.0329632, -0.0146037, 0.0318597, 0.0115619, 0.0135336, -0.0301983, -0.00904125, 0.00552963, 0.0010987, -0.0225461},
 {-0.0231515, 0.0208751, -0.028271, 0.000983069, -0.00205577, -0.00335743, -0.00758104, -0.0288114, -0.0459663, -0.0196774, -0.0263554, -0.030897, 0.010493, -0.00705296, -0.0118769, -0.0338015, -0.0340919, -0.0125539, -0.0152236, 0.00192169, -0.0223437, -0.00720257, -0.0060512, -0.0166185, -0.00877626},
 {-0.0230026, -0.0201429, -0.00725043, 0.0310835, -0.0173347, 0.000856176, 0.0127239, -0.00788382, 0.0146344, 0.00119675, 0.00570274, 0.0234111, -0.00259059, 0.0152628, -0.0148344, -0.0168797, -0.00659141, -0.0279357, 0.016534, 0.0103773, 0.0324795, -0.0147043, 0.0075056, 0.0261009, -0.0340127},
 {0.0328444, 0.000967891, 0.0122895, 0.0126139, -0.0327752, 0.0100434, 0.00870822, -0.0268043, -0.0272273, -0.00511068, -0.0317734, 0.0253052, -0.00885892, -0.00401836, -0.0207675, -0.0337376, 0.00663466, 0.0151288, -0.0114475, 0.0233423, -0.0136161, 0.02171, -0.0235793, -0.00422361, 0.0337207},
 {-0.0219681, 0.00392306, 0.0219341, -0.0125759, 0.0277929, -0.0160512, 0.0124887, 0.0217351, 0.0178187, 0.0310562, -0.0180226, -0.0250905, 0.028313, -0.0178901, -0.0107346, -0.0166283, -0.0193618, 0.0167227, 0.0263351, 0.0264806, 0.000989082, -0.0224604, -0.029585, 0.0286748, -0.0111463},
 {-0.00225235, -0.0248324, -0.0138819, -0.0317383, -0.0295433, -0.0223202, -0.0114573, 0.0151738, 0.0155086, 0.00336181, -0.00753167, -0.0297473, 0.0276106, -0.0191781, 0.0282344, 0.00305884, -0.000875422, -0.00282181, -0.0336097, 0.0196309, 0.00977649, 0.00832387, -0.00206198, 0.000664318, 0.0160471},
 {-0.0255482, 0.0110501, 0.014499, -0.0299243, -0.0191127, -0.00262849, 0.0253009, 0.00307329, 0.0152726, 0.0311461, 0.00209527, 0.017359, -0.00278004, -0.00721865, -0.00668432, -0.0168981, 0.0185416, 0.020606, 0.0106333, 0.0335108, 0.0117195, 0.0208718, -0.0040196, 0.00486299, -0.0279833},
 {-0.0270545, 0.0192891, 0.00339454, -0.0141293, -0.0296594, 0.0228764, -0.0151346, 0.037803, -0.025781, 0.018944, 0.0295857, -0.0137249, -0.0121551, 0.0161199, 0.0323466, -0.00691268, -0.0136144, -0.0303244, -0.00755148, 0.0141945, 0.00276489, 0.0108932, 0.012107, -0.0276381, -0.00781376},
 {-0.0181634, 0.00980552, 0.0198776, 0.0182007, -0.0205361, -0.028258, -0.0060391, -0.00944969, 0.027262, 0.0289098, -0.00403764, -0.0269867, 0.00123295, 0.0123178, 0.0330882, 0.0234871, 0.00524988, 0.0376801, 0.017905, -0.0326131, 0.0305625, 0.0337008, -0.0242249, -0.024828, 0.0330466},
 {0.0248409, -0.0228731, -0.0264264, 0.00393425, 0.00717353, -0.0148713, 0.0293956, 0.0319075, 0.0236931, 0.0115573, 0.0262119, 0.0145925, -0.0302563, 0.0132737, -0.0290269, 0.00239514, -0.024289, -0.00573274, -0.0152612, 0.0128739, 0.0264687, -0.0113937, -0.00405589, 0.0236828, 0.00548543},
 {0.00128925, 0.00463866, -0.0164026, -0.0358504, -0.00644537, -0.00719219, -0.00374524, -0.0170177, -0.0143895, -0.0123196, -0.00663652, 0.0381682, 0.012097, 0.0147733, -0.0160348, 0.0119241, 0.048517, -0.0207839, 0.0113239, 0.007389, 0.0191729, 0.00126174, -0.0251907, -0.0252825, 0.023573},
 {-0.0247634, -0.0271363, 0.0159277, 0.0298498, -0.0359455, 0.0127742, 0.0286689, 0.0150009, -0.00599066, -0.018787, 0.0128403, -0.00856429, 0.0338442, 0.0138843, -0.000837909, -0.0210155, -0.0110978, -0.0249757, -0.0111807, -0.0204257, 0.0342027, -0.00957411, 0.00403618, 0.0248895, 0.0241268},
 {0.028978, -0.0153846, 0.0220919, -0.0128588, -0.0112398, 0.00461608, 0.0314366, -0.0125867, 0.0301492, -0.0232131, 0.0158123, 0.0101996, 0.0127569, 0.0186247, -0.0278407, 0.0356163, 0.0153927, 0.00399578, 0.00813886, -0.0222271, -0.0247669, -0.000469094, 0.0319189, 0.00247481, 0.000994962},
 {-0.02405, -0.0166046, 0.0150212, -0.0287453, 0.0102468, -0.0136009, 0.0176357, -0.0147041, 0.0182836, -0.00683833, 0.028124, 0.0298917, -0.00810825, 0.0204242, -0.0277438, 0.0178133, -0.00710007, -0.020724, -0.0250547, 0.0106588, 0.0274185, 0.0151035, 0.0329456, 0.0161711, 0.0328318},
 {0.0143292, -0.00388866, -0.00579587, -0.0262581, -0.0111131, 0.0332943, 0.0293535, 0.0262376, 0.023771, 0.0148788, 0.0133193, 0.0116637, 0.0164249, 0.0167741, -0.0243559, 0.00925191, 0.00193731, 0.0290324, -0.0104862, -0.0166839, 0.0291911, -0.000913631, 0.0230441, 0.022686, 0.00135091},
 {-0.0171473, 0.00940894, 0.00442035, -0.0228291, -0.00307084, 0.0248679, 0.00236889, 0.0160522, -0.0126988, 0.0209896, -0.031088, 0.01267, 0.0200099, -0.03155, -0.0314883, -0.038657, -0.0114597, 0.0204528, 0.0195502, 0.0324891, -0.000345539, -0.0327981, -0.0242525, -0.0021451, -0.0196938},
 {0.0308353, -0.0156827, -0.00111681, -0.0106042, 0.0175647, 0.00893018, 0.0274755, 0.0308147, 0.0112075, -0.0210884, 0.0178372, -0.0268491, 0.0237151, -0.0292215, 0.0194899, -0.013682, 0.0118195, -0.0104835, 0.0316877, 0.0166253, 0.00978109, -0.0282057, 0.000770121, -0.0282957, -0.0319944},
 {0.0200847, -0.0161776, -0.0134003, -0.0339041, 0.0123893, 0.0141, 0.000859881, 0.0122783, 0.0294117, 0.0356993, -0.0263455, -0.00489813, 0.00935766, -0.0148407, 0.00612852, -0.0256452, 0.00257356, -0.0112314, -0.0315541, -0.0250701, 0.0100686, 0.0142749, 0.00738976, 0.0216787, -0.0203099},
 {-0.0179562, 0.0111113, -0.0198913, -0.00169485, 0.0209243, 0.0257185, 0.0306307, 0.0184951, 0.0231978, 0.0351561, -0.000498273, 0.0217493, -0.00670587, -0.0326609, -0.0188405, -0.0187295, 0.013927, -0.0179508, 0.0102819, -0.00116069, -0.00379019, -0.0150549, 0.00881, 0.0265366, 0.0277896},
 {0.011322, -0.0105012, -0.0275697, -0.00118794, 0.015295, -0.0121707, 0.0104318, 0.0177276, 0.0297691, -0.0180338, 0.030241, 0.0243014, -0.0282759, 0.00651664, -0.0323796, 0.013586, -0.0101666, 0.0100935, -0.0277947, -0.0275827, -0.0213084, 0.001486, -0.0135009, 0.0115809, 0.0276695},
 {-0.0241921, 0.0056522, -0.0251987, -0.0256469, -0.0284997, 0.00611175, 0.0124756, 0.000715551, -0.0142839, -0.00542446, -0.0127133, -0.0299353, -0.0289753, 0.00687664, -0.0296025, -0.0131363, 0.0105769, -0.0246195, -0.0155273, 0.0187912, -0.000882609, -0.022987, 0.0269537, 0.0102192, 0.0167919},
 {0.0039412, 0.0250568, 0.0293523, 0.0312775, 0.0148141, -2.66187e-05, 0.0110908, 0.03303, 0.0318971, -0.0140448, 0.0336143, 0.0296334, 0.0215145, 0.00533556, -0.0174968, 0.0174002, 0.000856823, -0.0195251, 0.0331602, -0.023732, -0.00265906, -0.00393458, 0.00671606, -0.025731, 0.018753},
 {-0.0255794, -0.0254202, 0.0270556, 0.0273957, -0.026635, -0.0087419, -0.0270059, 0.0233215, -0.0218415, -0.0312878, 0.0289538, 0.0119454, -0.0209498, -0.0159837, -0.0194311, 0.00944948, 0.0132091, -0.000436726, 0.0258604, -0.00362231, -0.0238387, 0.00133782, 0.0303177, -0.0164055, -0.0121205},
 {0.0053185, 0.00650766, 0.00755187, 0.0154436, -0.0285639, -0.0323564, -0.0231649, -0.0272899, -0.0160996, 0.00459818, 0.0114025, -0.0190519, -0.0235702, 0.0322455, -0.0262932, 0.0151662, 0.0272223, -0.0191136, 0.0127381, -0.0141969, -0.0140726, -0.0147589, 0.0336664, -0.019672, -0.0217207},
 {0.0257616, -0.0310098, -0.000389869, 0.00492271, -0.0425204, 0.0187147, 0.0164399, -0.00973907, 0.0233815, 0.0270701, -0.030909, 0.00445836, 0.0186626, 0.000419482, 0.0306601, -0.00417127, -0.000486505, -0.0347218, -0.00468488, -0.0191836, -0.0175313, -0.00893384, -0.0289283, 0.0435347, 0.0181073},
 {0.019623, -0.00652894, 0.0160928, 0.00665068, -0.0018288, 0.0228946, -0.00509513, 0.035783, 0.0182758, -0.0023252, 0.0134982, -0.0101247, 0.0276823, 0.00932798, 0.00662591, 0.0308671, -0.00476233, -0.0270125, 0.000712244, 0.027862, 0.0164261, 0.0174209, -0.00336018, 0.00519855, -0.0354843},
 {-0.0257324, -0.046971, 0.0261484, 0.0397875, 0.0253196, -0.0270953, 0.00638514, 0.0270991, 0.01589, 0.00880866, 0.00906601, 0.00460001, -0.0282521, -0.0308032, 0.00984398, 0.041836, -0.0219806, 0.00354797, -0.0121314, 0.0246752, 0.0105728, 0.0292349, 0.0251347, -0.0381598, 0.00211916},
 {-0.0200426, 0.0138957, -0.00592626, 0.0300796, 0.0174065, 0.0167156, 0.00538168, -0.0245536, -0.021825, 0.024133, -0.0102564, 0.025783, -0.0176324, 0.0245907, 0.0295535, -0.0345244, 0.0133358, 0.0316055, 0.0022093, -0.019039, 0.0325601, 0.000937561, 0.00266716, -0.0232299, 0.0167562},
 {0.014857, -0.0189844, 0.0141041, 0.0285198, -0.0107073, -0.0307392, 0.00688009, 0.0335816, -0.0286678, -0.0346437, 0.0112761, -0.020944, -0.0172069, -0.00975085, -0.0203569, 0.0276616, 0.032079, 0.0152685, -0.031743, -0.0147457, 0.00388721, -0.0136348, 0.00819164, 0.0089233, 0.0306952},
 {-0.00777666, 0.0336326, -0.0332649, 0.00248256, -0.0144824, 0.00463583, 0.0162899, -0.0287361, -0.0272368, -0.00057186, 0.026112, -0.0190363, 0.0200262, 0.0256071, -0.0187174, -0.0171416, 0.0200649, -0.0029773, 0.0127666, -0.000471793, -0.0325648, -0.0192796, 0.0282603, -0.0266481, 0.00169},
 {0.00719651, -0.015871, -0.0285747, 0.0145045, 0.0231151, -0.00119385, -0.0298972, 0.0105255, -0.034883, 0.0208711, -0.011139, 0.0227309, 0.0271063, 0.0305949, -0.00408283, 0.0153939, 0.0277456, -0.0258518, -0.0315081, 0.0313724, -0.0103076, 0.0109184, -0.00666916, -0.0202005, -0.0297947},
 {0.0295593, 0.0249974, 0.0190748, 0.0115126, -0.00406119, -0.0161951, -0.00111662, 0.000835421, -0.0100688, -0.0123923, 0.0335936, 0.0308172, 0.0113834, -0.016117, 0.0276946, -0.030015, 0.00402851, -0.0193193, -0.0132768, -0.0210278, -0.0223288, -0.028867, -0.00540151, 0.0219651, 0.0167},
 {0.0238519, -0.0279571, 0.00262874, -0.013004, 0.00354673, 0.0149047, -0.00969958, -0.009, 0.0322974, 0.0306005, -0.0240511, 0.0277503, -0.0234455, 0.0257188, -0.0209458, -0.0141325, -0.0201205, 0.0025561, -0.0125416, 0.0177711, 0.0154281, -0.0131348, -0.0167942, -0.00879148, 0.0302245},
 {0.015444, -0.01345, -0.00474221, -0.0255223, -0.0203893, -0.0108021, -0.0176813, -0.0138145, -0.00878957, -0.0228787, -0.0121687, -0.00161809, 0.00944212, 0.00796039, -0.0269745, -0.0247009, 0.0104671, -0.00645757, -0.0277566, -0.00606439, 0.0169639, 0.0229966, 0.0329809, 0.00980844, -0.015501},
 {0.0242851, -0.0187176, 0.0154332, 0.0086729, 0.0289657, -0.0208322, 0.00846852, 0.00243161, -0.0211001, 0.0231308, -0.0235018, 0.0201387, -0.00671295, 0.0148534, -0.0114376, -0.0300691, 0.000152025, 0.0314781, 0.00326119, 0.01611, 0.00257328, 0.0107757, 0.0309721, 0.000137525, -0.0101029},
 {-0.0243324, 0.0187259, -0.00748432, 0.0215488, 0.0302259, -0.0289793, 0.0105074, -0.0206195, -0.0100754, 0.00974391, 0.0208232, -0.0139122, 0.0194993, -0.0310329, -0.018165, 0.00472988, -0.00590332, 0.0322056, -0.0276265, 0.001905, -0.0141461, 0.0169685, -0.00945028, 0.0095711, 0.0321642},
 {-0.00936225, -0.020805, 0.00367048, -0.0179306, -0.0136733, 0.0134869, 0.00749435, -0.0344986, -0.00271784, -0.0152539, -0.0020006, -0.0210017, 0.0228825, -0.00117774, -0.0329139, 0.0279962, 0.0318605, 0.00926353, -0.0250103, -0.0007128, 0.0126012, 0.0248412, -0.00201419, 0.0327057, 0.00281676},
 {-0.0148361, -0.0201198, -0.0154254, -0.0207243, -0.0176973, -0.0242555, -0.0121767, -0.0133432, 0.0356757, 0.0274084, 0.0269348, -0.00967442, -0.0249023, -0.0135106, 0.00333473, -0.00960513, 0.00699272, 0.00296097, 0.00675656, -0.0154252, -0.00598217, -0.0303114, 0.0195284, -0.00352239, 0.0260008},
 {-0.00645985, 0.015098, -0.0486052, -0.0495308, -0.0361666, 0.0135134, 9.83388e-05, -0.0391241, -0.0228511, 0.0123851, -0.0223237, 0.0462829, 0.00644605, 0.030143, 0.0301999, -0.0335439, 0.0376208, -0.01833, 0.0314602, -0.0212996, 0.0267727, 0.023525, -0.0066431, 0.0404815, 0.0296159},
 {0.00146956, -0.0155694, -0.00341152, -0.0230251, -0.020849, 0.0209051, -0.000250392, 0.0297504, 0.0215767, -0.0154255, -0.0309326, 0.0109097, -0.0228504, 0.0127839, 0.0154498, -0.0166844, -0.00469197, 0.00101574, -0.00548261, -0.00387796, -0.0046328, 0.0134188, 0.0148272, 0.0284064, 0.0214543},
 {-0.0311351, -0.0265008, 0.00465792, -0.00699762, 0.0255092, -0.0324839, -0.0209192, -0.00928066, 0.03465, -0.0320118, 0.0118155, -0.00818227, -0.0247646, 0.024746, 0.0176752, -0.0145162, -0.0325617, 0.0297726, 0.00310987, -0.0289668, -0.00631927, -0.0266131, -0.00315747, -0.0371585, -0.028477},
 {-0.023384, 0.0386127, -0.0221191, -0.0151084, -0.0164101, -0.0196138, -0.0310275, -0.0108637, 0.0129414, -0.0129786, 0.0119767, -0.0273708, 0.0280723, 0.00933863, 0.0148922, 0.0280476, 0.0287389, -0.0251359, 0.0317989, 0.0239393, -0.0142461, 0.0198079, -0.0195567, 0.0221452, -0.016703},
 {-0.00807114, 0.00302497, 0.0146585, -0.0162103, -0.0288691, -0.0098563, 0.00962855, 0.0158931, 0.00600648, -0.0123391, -0.0109126, -0.0127112, 0.00503151, -0.00714148, -0.0305397, 0.0215974, -0.0135362, 0.0101517, 0.00501057, -0.00314737, 0.0122162, -0.0217198, -0.0301963, -0.0139136, -0.0266194},
 {0.000305257, 0.0337567, -0.0145623, -0.0299435, 0.0157654, 0.0288828, -0.0267027, 0.011816, -0.0251356, 0.00792838, -0.0115791, 0.00400046, -0.0129501, -0.00608064, 0.0317433, -0.00963712, -0.0255036, 0.0272854, 0.0380904, 0.019094, -0.032489, 0.0291395, 0.0195092, 0.0294592, 0.0307544},
 {-0.0224068, 0.0228707, -0.023473, 0.00166147, -0.0299632, -0.00523215, 0.0321863, -0.0120248, -0.0202841, 0.0144309, -0.0158133, -0.0338117, 0.0116772, 0.00828124, -0.000149816, 0.00626972, -0.0153158, -0.0116029, -0.0260101, 0.0181534, 0.00477278, -0.00396498, -0.0255214, 0.00133185, -0.0308475},
 {-0.0154584, -0.0170745, 0.0160061, -0.00862747, 0.0113759, 0.0093996, -0.0117051, 0.032136, 0.0252499, -0.0289757, 0.00666635, 0.00990295, -0.0309717, 0.0175154, -0.0316233, 0.017222, 0.0182252, -0.000635062, -0.00442161, 0.0201691, -0.00470816, 0.0141666, -0.0195372, -0.0203277, -0.0144712},
 {0.0124344, 0.0268399, -0.0247065, 0.0223998, 0.0153756, -0.0106906, 0.0138767, 0.0260677, -0.0274655, -0.0344549, -0.0186639, 0.00721083, -0.00591311, 0.0129126, 0.00798437, 0.0170044, -0.00158864, 0.024484, 0.00685268, -0.0251871, 0.00409261, 0.0231873, 0.00408855, -0.0129212, -0.0106364},
 {-0.0134497, -0.00743575, -0.0230079, 0.035454, 0.0188202, 0.00941357, 0.0295671, 0.00256119, -0.00872085, 0.0186155, 0.00062525, 0.0297063, -0.0147979, -0.00880007, 0.0215501, -0.00632004, -0.0301812, -0.0116819, -0.0169899, 0.0127891, 0.00409005, -0.0053141, 0.0181681, -0.0174898, -0.00146099},
 {0.0114629, -0.0125818, 0.0311573, 0.0104981, -0.0130584, 0.0290012, -0.0157249, -0.00788884, -0.0165529, 0.0139562, -0.0275265, 0.0258133, -0.0208436, 0.0296397, 0.0114212, -0.0183829, 0.0052351, -0.011749, -0.0135981, 0.0100966, 0.00738543, -0.00137732, 0.000667116, -0.0281744, 0.00410019},
 {-0.0290604, 0.0349603, 0.00791028, 0.0164151, 0.0187902, -0.0195484, 0.00106305, 0.00427981, 0.0108516, 0.024875, 0.00936708, -0.00532079, -0.0229325, -0.0283543, -0.0215251, -0.0176841, 0.00275852, 0.00215277, 0.0230225, -0.00227114, -0.0222422, -0.0159765, 0.0242159, -0.01891, -0.00982057},
 {0.0101278, 0.0163421, 0.0267883, 0.0122111, -0.0221108, -0.0262703, -0.0329902, 0.0129045, 0.0107938, -0.0112019, 0.0107816, 0.0016297, -0.000655038, 0.000705999, 0.013466, -0.0317633, -0.015566, 0.0137806, -0.0186963, -0.0289932, 0.0275805, -0.0108531, -0.0249128, -0.0185093, 0.0226275},
 {-0.0013771, -0.00506017, 0.0329448, 0.028881, -0.0304293, -0.0296526, 0.0240734, 0.0185753, -0.0254881, -0.0136166, -0.0229273, -0.0273644, -0.0208836, 0.0336515, -0.000671322, 0.0287468, -0.00191928, -0.0298348, 0.0204271, 0.0329759, 0.0229094, 0.0168516, 1.77232e-06, -0.00789759, -0.00368015},
 {0.0137533, 0.0389799, -0.0231685, -0.0058334, -0.0212846, -0.0334835, 0.00568384, -0.0339792, -0.042793, 0.0247981, 0.0257232, 0.0410834, 0.0212937, 0.011634, -0.0214896, -0.0363834, 0.0105849, -0.028335, 0.0562721, 0.0175102, -0.00571376, -0.00285357, 0.0236799, 0.035893, 0.0475163},
 {0.00274823, -0.0186034, 0.0236383, -0.0196163, 0.00543728, 0.017528, -0.00440073, -0.0231353, 0.0235358, -0.0359203, -0.0316037, -0.0253387, 0.0242624, -0.00944639, -0.0262891, -0.00180949, 0.0027436, 0.00286973, 0.030742, -0.0267238, -0.0026284, -0.0303117, 0.00472207, 0.0231, -0.0111747},
 {0.0325711, 0.0112109, 0.0522923, -0.01703, -0.00269076, -0.00697163, 0.00127203, 0.0328453, 0.0168894, -0.00954917, -0.0199221, -0.0357011, 0.00342067, 0.0158733, 0.00622752, 0.0298391, 0.00214855, 0.0343927, -0.0148534, 0.0302949, 0.0286954, 0.0267454, 0.00154313, 0.0205361, -0.0056145},
 {0.0204107, -0.00794547, -0.0384359, -0.00247437, -0.0264214, -0.00951104, 0.0214242, 0.0270017, -0.0144726, 0.00876336, -0.0156569, 0.0354503, -0.00292003, -0.0128742, 0.0230137, 0.0181303, 0.0299797, -0.0154598, -0.0243988, -0.0185415, -0.00886758, 0.0313359, -0.0195672, -0.0272663, 0.0044697},
 {-0.0169549, -0.0133163, 0.01289, -0.0124257, 0.0259445, -0.0153023, 0.00770519, -0.0136399, 0.00481154, -0.0190003, -0.0318832, -0.0283979, 0.0292101, 0.0230969, 0.00652736, -0.0288921, 0.0310755, -0.0122731, -0.0135184, 0.0257155, -0.0315614, 0.0269054, -0.0073143, 0.000795028, -0.0239994},
 {-0.0333377, 0.00308942, -0.0422163, -0.0325305, 0.0305308, 0.00800361, -0.00251563, -0.0110823, -0.0169912, -0.0179527, 0.0112905, -0.0151186, 0.0153363, 0.00668849, -0.00865491, 0.0108576, 0.0189268, -0.00279252, -0.0151844, 0.00147872, 0.0112907, -0.00109379, -0.0262932, 0.0333854, -0.00648468},
 {0.0144921, -0.00812616, -0.0185762, -0.0224802, 0.0128099, 0.0304069, 0.0155191, -0.0189183, -0.0230905, -0.00902416, -0.0293668, 0.00971466, 0.0291328, -0.0274787, -0.00955997, 0.0105041, 0.0326508, 0.026605, -0.0124584, 0.0092834, -0.0255379, 0.0055809, 0.0216124, -0.0130242, 0.0223974},
 {0.0276508, -0.0213113, 0.0115998, 0.0130114, -0.0188635, 0.0100803, -0.02571, 0.0234649, 0.0241877, -0.0160125, -0.0269922, 0.0287785, -0.0100776, 0.00201021, 0.0148258, 0.0256873, 0.00745062, -0.00134991, 0.0140518, -0.0242717, -0.0255742, -0.0127637, 0.0269311, 0.0233604, -0.022957},
 {0.0319388, 0.0147424, -0.0123455, 0.0223581, -0.0190915, -0.00532345, 0.0311842, 0.0127509, 0.0164991, 0.0109809, -0.0288042, -0.00814319, 0.0230309, 9.31162e-05, -0.00143362, 0.0120885, 0.0220156, -0.0281339, 0.00960376, 0.00777978, -0.0127343, 0.0225759, 0.00475352, 0.0283151, -0.035067},
 {-0.0295904, 0.0255398, 0.00529376, 0.00597964, -0.0128215, 0.0201972, 0.0188464, 0.0294525, -0.0252788, -0.0132061, 0.0302761, -0.00593652, -0.0322972, 0.00336402, 0.00740168, 0.0331032, 0.000789103, 0.0211488, -0.0277031, -0.0181071, -0.0255392, 0.0215384, 0.013464, 0.0243014, 0.0197266},
 {0.0128385, -0.0210875, 0.0302572, 0.0251521, 0.0270698, 0.0121412, -0.0125712, -0.0164235, -0.0182392, -0.0132244, -0.0087023, 0.0327829, 0.00744059, -0.000629224, 0.00535778, 0.0241729, -0.0317076, 0.0277633, -0.0125985, 6.48684e-05, 0.0188492, -0.017653, 0.0336836, 0.0145979, -0.0191342},
 {0.0135048, -0.0159926, -0.022165, 0.0251602, -0.0236613, 0.0201916, 0.0289256, -0.00951264, -0.02645, 0.0228633, 0.0134327, 0.0115541, 0.0336787, 0.00403798, 0.0303108, -0.0168939, -0.0113828, -0.0161988, 0.0307989, 0.0262006, -0.0249003, -0.0114364, 0.0255872, 0.0188111, 0.017466},
 {0.0229241, -0.0100946, 0.0266806, 0.00260345, 0.0121991, 0.0114499, -0.0080072, 0.00984198, 0.00079334, -0.0106082, -0.00268683, -0.00639327, -0.0174954, 0.0047396, -9.10729e-06, 0.00264343, -0.0303731, -0.0286116, 0.00603651, -0.0148766, 0.0255632, -0.0182555, -0.0249107, -0.0165021, -0.00727781},
 {-0.0242376, -0.0292701, 0.0290748, 0.0185648, -0.00948887, 0.0296337, 0.0154581, -0.0266756, 0.0125826, 0.0236371, 0.0026918, -0.0120594, -9.59934e-06, 0.00136009, 0.00336807, 0.0324917, 0.0208918, 0.026846, -0.0154971, -0.00268517, 0.0074095, 0.0282587, 0.0161679, -0.0174661, 0.00944159},
 {-0.0290175, 0.0218742, -0.0772813, -0.0595071, -0.0045294, -0.009315, 0.00804512, -0.0457602, -0.0643858, 0.0696307, 0.0310189, 0.0412562, -0.0081543, -0.0212788, -0.010745, -0.0692429, -0.0134078, -0.0266546, 0.0593345, -0.0319327, -0.0205991, -0.00910675, -0.00523983, 0.00116273, 0.0124525},
 {-0.0228704, -0.0209048, 0.0317638, -0.0293295, 0.00216946, -0.0215157, -0.00980164, -0.0297044, 0.0276132, -0.0325443, -0.0255287, -0.0304608, 0.0195405, -0.00809195, 0.000656787, 0.0252733, 0.0255024, 0.00342174, 0.0012421, 0.0249998, 0.0107892, 0.0215662, -0.0168311, -0.0210623, -0.0117374},
 {-0.00141129, -0.0153996, 0.00187261, -0.0067629, 0.00737103, 0.0307543, -0.0113016, 0.0136752, 0.014921, -0.0447919, -0.028, -0.0135707, 0.0147896, -0.00435377, 0.00559117, 0.0402714, 0.0109317, -0.0303546, 0.0209876, -0.021191, -0.00507578, 0.00464203, -0.00723056, -0.0360223, -0.0294933},
 {0.000245314, -0.0142253, 0.0133698, -0.0142128, 0.0173793, 0.0234559, 0.0313374, -0.0222933, -0.0212487, -0.0147036, -0.0291719, 0.0201009, -0.0278305, -0.00412686, 0.00282017, -0.0309655, 0.000987532, -0.0270784, -0.018673, -0.0152257, -0.0149378, 0.0259583, 0.0289238, -0.02925, 0.0354866},
 {0.023346, 0.00262815, -0.00623594, -0.0124074, -0.0300592, -0.032156, 0.0221331, -0.028729, -0.0163059, -0.0280671, -0.0110476, 0.000272687, -0.0179615, 0.0230722, 0.00655125, 0.0230707, -0.00921495, 0.0251801, 0.0025384, -0.00666975, -0.00126846, 0.0310213, -0.024159, -0.0251616, -0.0326025},
 {-0.00360416, 0.0221459, -0.00946398, 0.00697736, -0.014691, -8.14955e-05, -0.0112172, 0.0280207, -0.0279252, 0.0202553, 0.00925938, -0.0268724, 0.00929952, 0.00803569, -0.0315637, -0.0263773, 0.00222464, -0.000772956, -0.030171, 0.00309436, -0.0223022, 0.0271645, -0.0269666, -0.0202129, 0.0208677},
 {-0.00238322, 0.0291375, -0.00555462, 0.0313235, 0.0335659, -0.000579946, 0.00384121, -0.00443132, 0.0126209, 0.0122832, -0.0159391, -0.0283606, 0.0284393, -0.00190524, -0.0304141, -0.030124, -0.0103754, -0.024104, -0.0339599, 0.0294036, 0.00342123, -0.0320528, -0.00600954, 0.0229773, 0.0101496},
 {0.0256119, -0.0248997, 0.0144511, 0.00389942, -0.00610379, -0.00675878, 0.00928966, -0.0178201, 0.032988, -0.03374, 0.0228312, -0.00412157, 0.0242594, -0.0134818, 0.022913, -0.020288, -0.0201543, -0.0135192, 0.0025836, 0.00731912, -0.0107611, 0.0209205, 0.00672325, -0.00274794, -0.0256699},
 {-0.0300631, 2.37758e-06, -0.0229783, 0.0226328, 0.00438186, -0.00533901, 0.0061135, -0.0226853, 0.0267263, -0.00872744, -0.0093021, -0.00323646, 0.00214064, -0.0275242, 0.0120499, 0.00384937, -0.0244049, -0.0234977, -0.0123812, -0.0266406, 0.0114994, -0.00838581, -0.00130549, -0.0138945, 0.0175356},
 {-0.0147535, 0.0164965, -0.0264128, 0.00454522, -0.0114615, -0.010782, -0.000590808, -0.00101559, 0.0330007, 0.00189973, -0.0229241, -0.0263916, 0.00339606, -0.0235665, 0.00538615, -0.0172765, -0.0147883, -0.00880043, 0.0297723, 0.0275726, -0.0215168, 0.0121017, -0.014812, 0.00996781, 0.000392644},
 {0.0142305, -0.013758, 0.00524141, -0.018727, 0.00675231, 0.0296414, 0.0183738, -0.0271074, -0.01365, 0.0111972, -0.0228599, -0.021646, 0.0108105, 0.0323746, 0.0168138, 0.00100289, -0.0128219, -0.0148196, 0.0118765, 0.0304079, 0.0289708, -0.00620467, -0.0161403, -0.0330634, 0.0253295},
 {1.63471e-05, -0.0274633, 0.0286556, 0.027929, 0.0214409, 0.0309669, -0.0276637, -0.00879607, -0.0304268, -0.0117877, 0.0161326, 0.0155351, -0.00538811, -0.00335279, -0.0161533, -0.0331657, 0.00341249, -0.0216085, 0.0230527, 0.024862, 0.0276143, 0.0134506, -0.00874949, 0.00747654, 0.0258199},
 {-0.0322475, 0.0211973, -0.0242706, 0.00158436, 0.00140073, -0.00672193, -0.0301217, -0.0304458, -0.00573066, -0.00847065, -0.0323026, 0.0187404, 0.000705347, -0.0100649, -0.0289732, 0.0124406, 0.018831, 0.0127843, 0.0165087, -0.0242035, 0.010109, 0.0194324, 0.0134774, -0.030362, -0.0144368},
 {-0.0127676, -0.0203283, 0.00611342, 0.00734415, -0.00735616, -0.0100905, 0.000797605, -0.0138566, 0.0217379, 0.0120947, 0.00877774, 0.0188157, -0.0309667, -0.0242226, -0.0141531, -0.0215225, 0.0127882, 0.0262553, -0.0299016, 0.000679666, 0.0269369, -0.0323875, -0.0114399, 0.00395619, 0.0234357},
 {-0.0324403, 0.0308748, -0.0391889, -0.0374077, -0.00218971, -0.0261079, 0.00770548, -0.018636, -0.00342157, 0.0262361, -0.0147524, -0.00614346, 0.00997152, -0.00997776, 0.0269102, 0.00278564, 0.0234067, 0.0200561, 0.00648047, -0.0198671, 0.0270036, -0.0152476, -0.0207626, -0.00333404, -0.00570206},
 {-0.00998878, -0.0169217, 0.0205614, -0.014392, -0.00321485, 0.0182268, -0.0157197, -0.0146823, 0.0223569, 0.0131291, -0.00530557, 0.00448099, -0.0134299, 0.00811502, 0.0188283, -0.0205032, 0.00189136, 0.0290073, -0.0149034, -0.023407, -0.0154676, -0.00412507, 0.0128152, -0.0237204, -0.0286795},
 {0.0268678, 0.00168584, 0.0112662, 0.0301064, 0.000886671, -0.0298443, -0.0188057, -0.0206925, 0.0153406, -0.0347722, 0.00232376, -0.0211886, -0.0035028, 0.00316015, 0.0244513, 0.02962, 0.00686675, -0.00347909, -0.0204409, 0.0267642, 0.00626808, -0.00488815, 0.029833, -0.0104441, -0.0157081},
 {0.0136969, -0.0246451, 0.0251236, -0.00880095, -0.0282856, 0.0287961, 0.0243136, -0.00622809, 0.00827536, 0.0104095, -0.0238375, -0.0090249, -0.0270996, -0.0331041, -0.00255091, -0.0184392, -0.0252125, -0.00820407, 0.0331425, -0.0139299, -0.0162607, -0.027935, 0.0235365, -0.0139314, -0.0195546},
 {-0.00434147, -0.000908581, 0.0215627, -0.0245705, -0.0201539, -0.0214307, -0.0180199, 0.0295871, -0.0168794, -0.0233477, -0.00302391, 0.0240587, 0.0190399, 0.0190551, -0.00218082, 0.00997084, -0.00776981, 0.0116605, -0.0108656, -0.0107424, 0.0296647, 0.0309899, -0.0302091, -0.0100753, 0.0219032},
 {-0.0211578, -0.02873, -0.0302997, 0.0256119, -0.0220959, 0.0274899, 0.0054118, -0.00634388, -0.00102437, 0.0178235, -0.0116648, -0.00131738, -0.0129079, -0.00815327, -0.0234712, 0.0223073, -0.0044253, 0.0167046, 0.0317673, 0.0178199, 0.0174504, -0.00245707, -0.0182109, -0.0263704, -0.000985006},
 {0.00830577, -0.0026165, -0.0228186, -0.0232851, 0.0185235, -0.0302573, 0.00481759, 0.000787664, -0.0220081, 0.00089896, 0.0264265, -0.00725753, 0.0243493, 0.0310991, 0.00395322, -0.00612911, -0.00151277, -0.00799671, -0.0297046, 0.0327013, 0.0202221, 0.0292243, 0.00880793, -0.0239218, -0.0315351},
 {-0.0262531, -0.0316363, 0.0287523, -0.0101597, -0.0129685, -0.00272267, -0.0122517, 0.0187976, -0.0329501, -0.012345, 0.00867728, -0.0128134, -0.0168473, -0.027621, -0.0161426, 0.0131353, -0.0309103, -0.000756662, -0.0247077, 0.0153786, -0.0289509, 0.0276525, -0.0208893, 0.00879249, 0.0264934},
 {-0.0132847, -0.00901291, 0.010776, -0.0168846, 0.00353003, 0.0202313, -0.00348811, 0.0280791, 0.0268131, -0.00235329, 0.0128848, 0.0305923, 0.0101756, -0.021464, -0.0317042, 0.0274644, -0.0209865, 0.0148391, 0.00366409, 0.0224583, 0.00204359, 0.00647002, 0.0337097, -0.0156981, -0.0277334},
 {0.00207874, 0.0137094, 0.0330006, -0.0153347, -0.00272259, 0.0161681, 0.0324875, -0.032545, 0.0328308, -0.0307637, 0.0161452, 0.0261388, 0.0282929, 0.00201832, -0.0121219, 0.00262327, -0.00405646, -0.0283132, 0.0138851, 0.0201886, -0.0289367, -0.0168154, 0.0148114, 0.00262584, 0.0281772},
 {0.0303558, -0.0257966, 0.0211099, -0.0268935, 0.0181918, -0.0168332, -0.0322198, 0.0339452, -0.0259595, -0.0263913, 0.0235933, 0.0113862, 0.0269577, 0.0101364, 0.0336577, -0.028728, 0.0141268, 0.0303027, 0.0146124, 0.0216139, -0.0276068, -0.0229987, 0.0249329, -0.0222487, -0.0190151},
 {-0.000673452, 0.00529377, -0.0229689, -0.00278018, 0.0323235, 0.00472614, -0.0221703, -0.0254625, -0.0121063, 0.0215725, 0.00740087, 0.0161967, 0.0309702, -0.00405277, -0.0269283, 0.0303082, 0.00942174, 0.0303011, -0.0101164, 0.0289122, 0.00404873, -0.0113836, -0.0181921, -0.00134497, 0.00202128},
 {-0.0249059, -0.00215464, 0.00959699, 0.0317078, 0.00340168, -0.0127881, -0.0154161, 0.012253, 0.020282, 0.0201122, -0.0269363, 0.0174802, 0.015491, 0.00336811, -0.0228978, -0.0179962, -0.0202096, -0.00606043, 0.0160478, -0.0101204, 0.0296363, -0.000672295, 0.0127886, -0.0209178, -0.0324191},
 {0.0235539, -0.00615161, 0.0108451, 0.0338023, 0.0135502, 0.00741554, 0.0310266, 0.00828934, 0.0115003, -0.0135988, 0.0181949, -0.000697513, 0.0282818, 0.0141314, -0.00269565, 0.0148846, -0.00607889, -0.022877, 0.0159606, -0.00471638, 0.0121227, 0.0215736, -0.00808437, -0.0249688, 0.00326502},
 {-0.0229091, 0.0532151, -0.021367, -0.0408205, 0.00932664, -0.0194796, -0.00697736, -0.0526703, -0.0474248, 0.0280812, 0.0167485, 0.0269367, 0.0220587, 0.0237641, 0.00476094, -0.025399, 0.0260781, -0.00897287, 0.0250576, 0.00719545, 0.0182966, -0.0241573, 0.0122695, 0.0377847, 0.0259832},
 {-0.0187008, -0.0336104, -0.012484, 0.0139309, 0.0318369, 0.000734623, -0.00422643, 0.0202192, 0.0316274, -0.00973571, 0.0317663, 0.0293881, -0.0147604, -0.0235074, -0.026977, 0.0170844, -0.0129451, -0.0275595, 0.00191009, -0.0186529, 0.0128154, -0.00621177, 0.0256201, -0.00150458, 0.0258245},
 {-0.0128394, 0.0247116, 0.0281546, -0.0201778, 0.0318575, -0.0163503, 0.00722771, 0.0295478, -0.0191956, -0.0392791, -0.00841509, -0.0325649, 0.00323884, 0.0260797, 0.0190607, 0.0179103, -0.0133466, -0.000121768, 0.00277243, 0.000501604, -0.0146223, 0.0153151, -0.0314438, 0.0171874, -0.0152766},
 {-0.00315218, 0.00376756, 0.00211229, 0.00999793, -0.0156705, 0.0051885, 0.0153798, 0.0198855, -0.0303575, 0.0170473, 0.00910188, -0.012994, 0.0247364, -0.0331002, 0.00555427, -0.0364974, 0.0118624, -0.00353167, -0.00455081, -0.0031808, -0.020976, 0.0245952, 0.0242081, 0.017249, -0.0266693},
 {0.0171923, 0.00969686, 0.00421938, -0.0114724, -0.0162836, 0.00952732, -0.00823656, -0.0122018, 0.0315975, -0.0147785, -0.0178893, 0.0275501, 0.0331615, 0.0244442, 0.0173761, 0.0162351, -0.0205272, 0.000844387, -0.024921, -3.55373e-05, 0.000699498, 0.0141986, 0.0068226, -0.0179945, -0.0347641},
 {0.0185602, 0.00148292, -0.00278262, 0.000605832, 0.00273352, 0.00254979, -0.00882035, -0.0178072, 0.00167145, -0.0238711, 0.0307141, 0.0155662, -0.0075314, 0.0154172, 0.0290746, 0.0190065, 0.032653, 0.0207235, -0.00712892, 0.00093411, 0.0086973, -0.0152594, 0.00872202, -0.00544024, 0.0295598},
 {-0.0186495, -0.00868895, -0.00198886, 0.00680141, -0.0179162, 0.0148572, -0.0188715, 0.0255671, -0.00260033, 0.0300006, -0.0207366, -0.0199913, -0.0207834, 0.0102137, -0.007481, 0.0126766, -0.0156335, -0.025531, 0.0310069, -0.0326671, 0.0202218, 0.0144564, 0.0168862, -0.0312977, 0.00900454},
 {0.0020212, 0.0191146, 0.030448, 0.0142102, 0.0100306, -0.00135571, 0.0175467, -0.00836714, 0.0105828, -0.0246705, -0.000728302, -0.00679816, 0.026252, 0.00872126, -0.0235579, 0.0154958, -0.0322803, 0.0295736, 0.0105671, -0.024356, -0.00402477, -0.0228081, 0.0161467, 0.0147407, -0.0148561},
 {0.0263815, -0.0164535, 0.0100407, -0.0108907, 0.00287755, -0.0322949, -0.000160275, -0.02449, -0.0190157, -0.0190962, -0.0309049, -0.00639215, 0.0148644, 0.0027281, 0.0174645, 0.0173309, -0.0128913, 0.00340486, 0.0179368, -0.0180225, -0.0275872, -0.00417432, -0.0235531, -0.0123526, 0.017443},
 {-0.0322153, 0.029084, -0.0066767, 0.00362222, -0.0106855, 0.0020588, 0.0252989, 0.0282237, 0.0201548, -0.0240528, 0.0168689, -0.00895784, 0.00676394, -0.00806087, -0.0175279, 0.0296206, 0.0282074, 0.033669, 0.00357445, -0.0053442, -0.0248901, 0.0168078, 0.0107745, -0.00819414, 0.0204995},
 {0.0168962, 0.0160374, 0.00538057, 0.0249256, -0.00673264, 0.0161703, 0.0324261, 0.0169771, 0.0129604, 0.00744625, 0.0323474, 0.0147532, -0.0201842, -0.000636515, -0.00270487, 0.00676424, 0.0275686, -0.00268655, -0.0209307, 0.0189316, 0.0323308, 0.0315661, -0.0107647, 0.0242737, -0.0323627},
 {0.0329835, 0.0322937, 0.00256374, -0.0194435, -0.0067117, 0.0141613, 0.0222786, -0.018685, -0.000606923, 0.0020493, 0.00471404, 0.0168489, -0.0289724, 0.0235372, -0.0127883, 0.00799014, 0.0269014, 0.0323464, 0.00332016, 0.00872261, -0.0174993, -0.0281671, -0.0155039, 0.0276536, 0.0182639},
 {0.0262731, -0.00419538, 0.0318157, -0.00190918, -0.00261797, -0.0208619, -0.0322219, -0.0328818, 0.0176006, -0.0149486, -0.0168252, 0.0262235, 0.0114517, 0.00201596, 0.0255865, -0.0274148, 0.0242232, 0.0235854, -0.012958, 0.00740251, 0.0242499, 0.0316685, -0.0114563, 0.0262089, 0.00117402},
 {0.0283124, 0.00141403, 0.0228526, 0.00351978, 0.00887645, 0.00878033, -0.0328481, -0.0208708, 0.0234473, -0.00210494, 0.02091, 0.0248691, -0.0255783, -0.0148053, -0.0303164, 0.0296694, -0.014191, -0.026236, -0.0182854, 0.0262969, 0.000677792, -0.0323402, 0.0289562, -0.0161999, -0.0123244},
 {0.00377592, 0.0361887, -0.0265938, -0.0297049, -0.00814839, -0.0282928, 0.000519118, -0.0532163, 0.000433206, 0.0193226, 0.0153447, 0.0156408, 0.0126167, 0.00813795, 0.0297051, -0.0175432, 0.0342471, -0.014929, 0.0553447, 0.00632821, 0.0297339, 0.020983, -0.0153528, 0.00456179, 0.035675},
 {0.00217594, 0.000257092, 0.0339227, -0.0177388, 0.0298241, 0.0148648, -0.00297387, -0.0175574, 0.0220195, -0.0319189, 0.0236732, -0.0204565, -0.012733, -0.03089, 0.00535035, 0.0325953, 0.0220973, 0.00811806, 0.00201361, 0.0244199, -0.032314, 0.00785671, -0.021516, 0.0052772, -0.0239569},
 {-0.0182571, -0.00505951, 0.0364981, 0.0304906, 0.0114518, -0.010323, 0.0365378, 0.0101784, 0.0145965, -0.00748755, 0.0103948, 0.0120931, 0.0294901, 0.00456596, 0.0130186, 0.0236762, 0.01636, 0.0227198, -0.0302101, 0.00177033, -0.0314818, 0.0125647, 0.0278228, 0.00324855, -0.00940264},
 {0.0325644, -0.0136123, -0.0351121, -0.0103455, -0.00144649, -0.0257737, 0.00743919, 0.00487993, -0.00617343, 0.0290239, 0.029984, 0.00991986, 0.0254275, -0.0216396, -0.0288101, -0.0327104, -0.00156971, -0.0244247, -0.0274691, -0.0213789, -0.0202985, 0.0272352, 0.0309438, 0.00908771, -0.00880533},
 {-0.0178244, -0.0277522, -0.0276245, 0.0252167, 0.00116709, -0.0113463, 0.0234073, 0.00492246, 0.000325365, 0.00705196, 0.0184583, 0.0249813, 0.0217123, 0.00424751, -0.00484781, -0.00957466, 0.00645899, -0.00189176, 0.0312834, 0.00461632, -0.0120979, 0.0290172, -0.00665021, -0.0233566, -0.000408965},
 {0.0333602, -0.0135511, 0.0231594, -0.00532296, -0.0072932, -0.0223449, -0.0248441, 0.0274788, 0.0159568, -0.0167496, -0.0298833, 0.00340515, -0.0176409, -0.0263786, -0.00459946, -0.0285094, -0.000360273, 0.00119741, 0.0169007, -0.0173017, 0.0100555, -0.00571495, -0.0195771, 0.0160345, 0.000399925},
 {-0.0085656, -0.0322058, -0.0270255, 0.0134871, 0.00567037, -0.0208205, -0.0100561, -0.0296884, 0.00880165, 0.0172422, 0.0149565, 0.0272047, 0.0290437, -0.0153985, 0.0315792, 0.0105091, -0.00282911, 0.0303583, 0.0270569, 0.00767142, 0.019551, 0.00779112, 0.0283207, 0.028582, 0.0115813},
 {-0.0161477, 0.0181709, -0.00735713, -0.00510957, -0.00469416, 1.67016e-05, -0.03075, 0.00203182, -0.0241788, -0.0301348, 0.0329829, 0.00863363, 0.022891, 0.0302652, 0.0316526, 0.0100503, 0.00807218, 0.0336486, -0.0199754, -9.26088e-05, 0.0330205, -0.0227853, 0.0255695, -0.00689983, 0.00447073},
 {0.0204223, 0.00951918, -0.00155552, -0.0263068, 0.0137643, 0.0330741, 0.012369, 0.0274838, -0.0282224, 0.0153315, -0.0139951, -0.0105054, 0.0337595, -0.0329131, -0.00209962, -0.0305889, -0.0277782, -0.020138, -0.0294618, -0.0138683, 0.0316851, 0.0280386, -0.0168092, 0.0164766, -0.00859833},
 {0.000756945, 0.00941102, -0.0323361, 0.0165984, -0.00592892, 0.0188984, 0.0158699, -0.0159975, 0.0122726, 0.0270635, 0.00879849, 0.016618, -0.0188346, 0.00538708, -0.0222415, 0.00735408, 0.024817, 0.0128251, 0.0317297, -0.0322734, -0.0100751, 0.00473547, -0.0303101, -0.0331454, 0.0130731},
 {0.0114807, 0.00862246, 0.0256907, -0.0274586, -0.0282255, -0.00200579, 0.0189456, 0.0116554, -0.0153162, 0.0220831, -0.00132171, -0.00681462, -0.0302948, -0.010767, -0.0107817, -0.00526529, 0.000618098, 0.010803, 0.0173819, 0.0216139, -0.0121139, 0.00739747, 0.00269597, -0.00944471, 0.0295348},
 {0.00879975, 0.0276694, -0.0209757, 0.0196365, 0.030341, -0.0275946, 0.0276736, -0.0126838, -0.00467736, 0.0323352, 0.0148353, -0.0128728, 0.0249254, -0.00874357, -1.43616e-06, 0.0322718, 0.0127259, 0.00945072, -5.51475e-05, 0.0330674, 0.0114583, 0.0309801, -0.0249132, -0.0141006, -0.0308526},
 {-0.0135033, 0.0309157, -0.0153821, -0.0281512, -0.00336519, 0.018179, 0.0248261, 0.0129116, 0.0196133, 0.00659096, 0.0249042, -0.0188838, -0.0168547, 0.0194937, -0.0275989, 0.0142062, -0.018875, 0.0101166, -0.0323201, -0.0114666, -0.0269329, -0.0180809, 0.00200719, -0.00738674, -0.0241399},
 {0.00403137, 0.0264721, -0.0317975, 0.0162249, 0.017552, -0.00739983, -0.029004, -0.0297596, 0.00452122, -0.00671369, 0.0195397, 0.0222245, 0.0316467, -0.030312, -0.00403871, 0.0018761, 0.00131721, -0.0208496, 0.0129105, 0.0289747, 0.00471241, 0.0182166, 0.00874978, 0.0040781, -0.0275588},
 {-0.0270038, 0.0162692, -0.0443835, -0.0212763, -0.010335, 0.0168762, -0.0349129, 0.00915095, 0.00360935, -0.00382853, 0.0309294, -0.0147141, 0.00463425, 0.00407959, -0.0217785, 0.00264654, -0.0236477, -0.0189313, 0.0163213, -0.0288562, -0.00928281, 0.0321683, -0.0180272, 0.0386118, 0.0211474},
 {-0.0220861, -0.00762042, -0.0300821, -0.0313709, -0.0221212, 0.0128293, 0.0339353, -0.0219792, 0.0311666, 0.0159756, -0.0120544, 0.0321389, -0.0228508, -0.0194559, 0.0336459, -0.0294861, 0.0308628, 0.00946986, -0.0151608, 0.0163479, 0.00203141, -0.00488613, 0.0128207, -0.0189104, 0.00650336},
 {-0.00553286, 0.00402369, -0.00411726, 0.0135555, 0.00441646, -0.0143979, -0.00871941, -0.0200129, -0.0212231, -0.00752722, -0.00721089, -0.0219107, 0.0260686, -0.02845, 0.0326442, 0.0349063, -0.0240267, 0.00653715, -0.00306374, -0.00576431, 0.0311381, 0.0134106, 0.0298249, 0.00847878, -0.0334911},
 {-0.029411, 0.00545766, 0.0251893, -0.016862, 0.0316038, -0.00624735, 0.00357679, 0.0174556, 0.0153162, 0.00351991, -0.0218788, -0.00900083, 0.0314883, -0.0176239, -0.00727902, 0.00964331, -0.00893174, 0.00788823, -0.0177144, 0.024374, -0.0176031, -0.0252717, -0.0189005, -0.0127074, 0.0202705},
 {0.0258986, 0.00917842, 0.0250404, -0.0201506, -0.0251919, -0.0120313, -0.00445892, 0.012421, -0.0104365, -0.0303465, -0.00381357, -0.00924422, -0.00861904, 0.0062379, 0.0315553, -0.0180597, 0.0260341, -0.0214508, 0.00753639, -0.0136979, -0.0107536, 0.00286817, -0.0154234, 0.00437106, 0.0255993},
 {0.0266359, 0.0137595, -0.0241188, -0.0227219, -0.0301087, -0.0122275, -0.00440242, -0.0110899, -0.0313101, -0.0237809, -0.0197615, 0.0342858, 0.0012232, -0.00686232, -0.018762, -0.0341757, 0.0131107, -0.0230543, -0.0130595, 0.0244387, 0.00736782, 0.015176, -0.0263166, 0.0119141, 0.0296792},
 {-0.0079154, 0.0259151, 0.0156469, -0.0175123, 0.0333009, -0.00734499, 0.00472046, 0.0153104, 0.00723604, 0.0302242, 0.0183254, 0.0232012, 0.0182595, 0.0290325, -0.0182432, 0.0123174, 0.0315088, 0.0243033, -0.0300762, 0.0278281, -0.0309565, 0.0253582, -0.00603053, -0.0211718, -0.0312989},
 {0.0236032, 0.0262193, -0.0263914, 0.00644293, -0.00867051, -0.0309478, -0.0286841, 0.0116431, -0.0180111, -0.0166422, 0.0296476, 0.0166525, -0.0282838, -0.00407536, 0.00605793, -0.00750213, -0.00882052, -0.020199, 0.022333, -0.0323538, -0.0208504, -0.00595212, 0.0262485, 0.00458885, 0.0152988},
 {-0.0179868, -0.00914973, 0.00348709, 0.0309805, 0.0319581, 0.0182647, 0.0277059, -0.025839, -0.0318824, 0.0161004, -0.00322265, 0.0151028, 0.0243175, 0.00544948, -0.0195858, -0.0173533, -0.026459, -0.0133946, -0.0212875, -0.0172686, 0.00340247, 0.0328397, 0.00540818, -0.00168012, -0.0157588},
 {0.0229865, -0.00273998, -0.016936, 0.0233952, -0.0220363, 0.00139615, 0.00174777, 0.0149423, -0.0315563, -0.0193932, -0.0309095, 0.0314203, -0.018828, 0.0148218, -0.0269615, 0.0207598, -0.0156201, 0.000733962, 0.012768, -0.0167289, 0.02831, 0.0329991, -0.00269287, -0.0298342, -0.00180256},
 {0.0209021, 0.032775, 0.0150281, -0.0159701, -0.0200903, -0.0242227, 0.0102814, -0.0199789, -0.0314261, 0.0213389, -0.0322817, -0.0101722, -0.0168196, 0.0282895, 0.0134504, 0.0318353, -0.0283325, 0.0276504, -0.00835998, 0.00949167, 0.00404633, 0.00469086, -0.0309755, 0.0275001, 0.00843828},
 {-0.0316112, 0.0236046, 0.0249702, 0.0324358, -0.0221615, 0.0296443, 0.0142111, 0.00335905, -0.0309904, -0.0317305, 0.0182109, 0.0295684, -0.0302906, 0.00809944, -0.00539876, -0.0141704, -0.0303618, 0.0222587, 0.0113798, -0.0147237, -0.0121179, 0.0235331, -0.0127886, 0.0107328, 0.0208013},
 {-0.0316692, 0.0118862, -0.0166656, 0.000793087, 0.00472237, -0.0229003, -0.0255989, 0.0224541, -0.0327267, -0.018983, 0.0323276, -3.59031e-05, -0.0323297, 0.0282702, 0.011448, 0.0270868, -0.0074118, 0.0303101, 0.0247464, 0.030304, 0.000673881, 0.0033881, -0.0249193, -0.0229003, -0.00942941},
 {0.0282688, -0.00323732, -0.0250202, 0.0147219, 0.018797, -0.00540505, 0.0106128, -0.0311605, -0.00552892, 0.0122545, 0.0134543, -0.00669447, 0.000665134, 0.0168406, -0.00470569, 0.0328826, 0.0013543, 0.00876093, 0.0331611, -0.0221997, -0.0249241, 0.02827, 0.0222265, -0.0248314, -0.00786194},
 {-0.0223533, 0.0212414, -0.00659722, 0.0167906, -0.0310484, -0.0274444, 0.0057702, -0.0242938, -0.036841, 0.0241089, -0.00972398, 0.00707026, 0.0244844, 0.0319186, -0.0139348, -0.0365812, -0.00776949, 0.00609202, -0.00129678, -0.0154649, 0.0298964, -0.00906632, 0.0156626, -0.0102905, 0.0250797},
 {-0.00600096, -0.0329612, 0.0108671, 0.000810576, 0.0317526, -0.00334025, -0.00586373, -0.0220932, -0.0188049, 0.0281334, -0.0228507, -0.0162333, 0.0175341, 0.00137318, -0.0074249, 0.0169025, -0.0296853, -0.0235513, -0.0311598, -0.0329133, 0.0208836, -0.0229537, 0.0114618, -0.00541325, 0.021953},
 {-0.0186119, 0.0212831, -0.0287357, 0.00489619, 0.0223189, -0.0117614, 0.0226721, 0.00903192, 0.0275829, 6.29338e-05, -0.0302767, -0.00712741, 0.0084376, -0.00703726, -0.0265334, 0.0174287, 0.0057854, 0.0266659, 0.0210372, -0.0101391, -0.00593644, 0.0124785, 0.00757209, 0.0235287, -0.0240991},
 {0.0298857, 0.0116095, 0.000734662, 0.0142199, 0.0208754, -0.000852967, 0.025427, 0.0126506, 0.00878767, 0.0261155, 0.0185515, 0.0332229, -0.0156327, 0.00796262, 0.000783472, -0.00117739, -0.0311708, -0.0284736, 0.0269801, 0.0169708, -0.0243213, -0.00980929, -0.0323811, -0.0315999, -0.00440757},
 {0.000189922, -0.0128673, 0.0201178, 0.0126558, 0.0238631, 0.0101679, 0.00331363, -0.0067048, 0.0309962, -0.0186274, -0.0187004, -0.021173, -0.0100149, -0.0227857, -0.0317164, -0.0284592, -0.0116051, -0.0106978, 0.0233076, -0.00442134, 0.0215623, -0.0131116, 0.0155315, 0.0273448, -0.0184257},
 {0.0213101, -0.0128001, -0.0197318, 0.0104767, 0.0110873, 0.00731941, 0.0274988, -0.00263658, 0.0304608, 0.0305405, -0.0230762, -0.0224158, -0.0202926, 0.0120299, 0.0195972, 0.0106131, -0.00578835, -0.0277315, -0.0162535, 0.00635375, -0.0148495, 0.0251618, -0.0222667, 0.00777144, -0.0253343},
 {-0.0200417, -0.0313165, 0.00746547, 0.0323462, 0.0143869, 0.0222889, 0.00528634, 0.0117843, -0.0226131, 0.0249662, 0.0149342, 0.0272983, -0.0174497, -0.03159, -0.0155332, 0.0242319, 0.0335087, 0.00410323, -0.00506984, -0.0159597, 0.0128205, -0.0331559, -0.0235456, -0.0224894, -0.0215364},
 {-0.00665373, 0.0220718, 0.0315198, 0.00860195, -0.0308511, 0.0209194, 0.0286135, 0.000845873, -0.0281684, -0.000536132, 0.0283318, 0.00786966, 0.00675032, 0.0154831, -0.0188678, 0.0059159, 0.00998671, 0.00676589, -0.0121349, 0.0323893, -0.0262369, 0.0269772, 0.00740977, -0.0304791, -0.00628516},
 {-0.00929876, 0.00642982, 0.0342457, -0.0128741, -0.0247037, 0.00880774, 0.0159512, 0.0176793, -0.00524266, 0.0162619, 0.00683505, -0.02318, -0.0140963, -0.00804178, 0.021514, 0.0113408, 0.0112921, -0.0255157, 0.0261275, 0.0224253, 0.0182055, 0.00730118, -0.0134495, 0.027336, -0.021391},
 {0.00280148, -0.0337064, 0.00444599, -0.0103034, 0.0237337, 0.0296762, 0.00912261, 0.0113616, 0.0180827, 0.0136824, -0.0255176, 0.0118919, -0.0289253, 0.0175328, -0.021575, -0.030565, -0.0122602, -0.0295706, -0.0221045, -0.0288123, 0.00271596, 0.0114013, -0.0235612, 0.00788249, 0.0104198},
 {-0.0046659, 0.0227546, -0.0308783, -0.0227909, -0.00801131, 0.00338546, -0.00321651, 0.0202348, -0.00396079, 0.0187781, -0.0302673, 0.0201248, -0.0248983, -0.00806029, -0.00877037, -0.0275371, -0.0236223, 0.0262944, -0.00419812, -0.0234923, -0.01481, 0.0120673, 0.030982, 0.0221432, 0.0294401},
 {-0.0268684, -0.0275359, -0.0188595, -0.0134521, 0.0141541, 0.0188665, 0.000776681, 0.0268282, -0.00206886, 0.00202245, -0.0322984, -0.0256715, 0.0107951, -0.0248831, -0.0128061, 0.0262297, 0.030248, -0.027595, 0.0154866, -0.0187508, 0.0289644, 0.0295564, 0.0276213, -0.0282798, 0.00197387},
 {-0.0221908, 0.0104605, 0.0163876, 0.000171704, -0.00669988, -0.0228856, -0.0214441, 0.0272102, 0.0171811, -0.0176513, 0.0208979, 0.00664332, 0.0134795, 0.00741801, 0.0235626, 0.00221594, 0.0228635, -0.0309688, 0.0232857, 0.00137456, 0.0101074, -0.028315, 0.018185, 0.0208675, -0.0196259},
 {-0.0080671, 0.0309791, 0.0323067, 0.00397539, -4.83894e-05, 0.0269296, -0.0202458, -0.0189178, 0.024935, -0.0059698, -0.0101087, 0.00470448, 0.00269582, -0.0242293, 0.00134936, -0.0323448, -0.0114504, 0.0235707, 0.0168934, -0.0215321, 0.00875369, 0.0134319, -0.00807929, -0.0180943, -0.00528641},
 {0.00308651, 0.0243043, -0.0411142, 0.0116611, 0.0173571, 0.00216329, 0.0068893, -0.0273726, -0.00297957, -0.0218588, -0.0238058, -0.0248236, 0.0035448, 0.00349871, 0.0022598, 0.0232771, -0.0124195, -0.00405711, -0.0135503, -0.00144323, 0.0225207, 0.0192432, -0.0334404, 0.0159877, 0.0123066},
 {0.0128481, 0.0053233, 0.0236159, 0.0263203, 0.0310301, 0.00674573, 0.0210043, 0.0189185, 0.0323924, -0.0195462, 0.00272743, 0.00464136, -0.0195082, 0.0310112, 0.0282711, -0.0221681, 0.0114133, -0.0228847, 0.0322116, 0.00412636, 0.0242461, -0.0189436, -0.00941652, -0.00811919, -0.00623592},
 {-0.00518531, 0.00935475, -0.00905025, -0.0132493, -0.0121655, -0.00171189, 0.0141545, -0.0228988, 0.0251141, 0.0250142, -0.00408345, -0.0285214, -0.0225504, 0.0239689, -0.00766502, -0.0187517, -0.00221508, -0.00366148, 0.014339, 0.0315982, -0.0214529, 0.031971, -0.0321761, 0.0232436, 0.00183245},
 {0.0311863, 0.0211079, -0.0229397, -0.0111581, 0.0154868, 0.0133012, -0.0290389, -0.0243058, 0.0272607, 0.00634087, 0.000365672, 0.0110118, -0.0223873, 0.0294582, 0.00416172, 0.0263726, -0.014304, 0.028074, 0.0162477, -0.0107647, -0.00949552, 0.030709, 0.0214853, 0.000487763, 0.00571996},
 {-0.0133262, 0.0137619, 0.0272497, -0.000279891, -0.0051484, 0.00611782, -0.0210644, -0.0272759, 0.000327894, -0.00367003, 0.00482955, 0.0253895, -0.00734097, 0.0297135, 0.0255414, -0.0219393, 0.0126848, -0.0309215, -0.0059618, -0.0233839, -0.0141324, 0.00246927, -0.00199469, -0.0190648, -0.0330551},
 {0.0334417, -0.0308861, -0.0323315, 0.0322379, -0.0232178, 0.0194659, -0.0174807, 0.000309223, 0.0226937, -0.0296168, -0.0170078, 0.0159318, -0.0250137, -0.00214221, 7.26603e-05, 0.0189516, -0.00852317, 0.0328949, -0.0198105, -0.0293755, -0.0222416, 0.00774554, -0.0249728, -0.0186226, 0.000248331},
 {-0.00322982, 0.0203965, -0.00297034, 0.0342435, 0.0325343, 0.0155451, 0.0233494, -0.00681952, 0.0166286, 0.03047, 0.00817228, 0.0165844, 0.00206937, -0.00668383, -0.0013822, 0.00709873, 0.0173619, 0.0283467, 0.0135076, 0.0102704, 0.027632, -0.0182975, -0.00335149, -0.00757207, 0.00351389},
 {0.0155743, 0.0157545, -0.0043068, -0.0109314, 0.00283373, 0.0135073, 0.00163631, 0.00671029, 0.018673, 0.0324908, 0.0222764, 0.0125806, -0.0248968, -0.0107708, -0.0256058, 0.0010154, -0.0102421, 0.0141987, 0.014965, -0.0167006, -0.0141181, -0.029611, -0.00605477, 0.0255048, 0.00111566},
 {0.0284179, -0.00725881, 0.0260937, 0.0207566, 0.023102, -0.0120765, 0.0152205, -0.0201675, 0.0201154, 0.00486531, -0.00865346, 0.0266822, -0.0174558, -0.0214914, 0.033632, -0.000263072, 0.0281301, -0.00464398, -3.33491e-05, 0.0305445, -0.0154721, 0.00119428, -0.0107454, 0.00793374, 0.0277585},
 {-0.0254855, 0.0325705, -0.00367349, 0.0104932, -0.0179946, -0.0127589, 0.0218876, 0.013325, -0.0271409, -0.0192447, -0.0140527, -0.0143768, -0.0329545, 0.0249641, -0.0289951, -0.0239327, -0.0230197, -0.0262037, 0.0324424, 0.0251139, -0.0296204, -0.00349863, -0.0222024, 0.0119844, -0.00588622},
 {-0.0309266, 0.00655693, 0.0216325, -0.00529105, -0.0059343, -0.00334053, -0.0139232, -0.0114017, -0.0160738, -0.0256807, -0.00668147, 0.00463235, -0.00199227, -0.00872252, -0.0249425, -0.0167419, -0.0162003, 0.0337007, 0.0300939, 0.00207817, 0.0202045, -0.015585, -0.0296262, -0.0270543, -0.0199235},
 {0.0222596, -0.0297226, -0.0019679, 0.0141471, -0.0248646, -0.0235624, -0.0201034, 0.00611486, -0.0174322, 0.0289565, 0.0296657, 0.0241881, -0.00334696, -0.0107455, 0.00604497, 0.00139539, 0.0296089, -0.0255785, -0.0135966, -0.0268605, -0.033, 0.018765, -0.0262518, -0.0269836, -0.00019955},
 {-0.00871168, 0.0173604, -0.0160829, 0.0176734, -0.018105, -0.00132696, 0.00958628, 0.0317804, 0.0256992, -0.0277459, -0.00199245, -0.0236664, 0.00607644, 0.0121371, -0.00337918, 9.75909e-05, -0.0283284, -0.00805841, 0.0186814, 0.0188893, -0.0316452, 0.0141081, 0.0228952, -0.0236356, 0.0179832},
 {0.0121206, -0.013415, 0.0127, 0.026839, 0.0289394, 0.0249139, -0.0168549, -0.000141471, -0.00885066, 0.00211797, 0.0127879, 0.0148242, -0.00134636, 0.0289635, -0.00538613, 0.0214922, 0.00406257, -0.00539718, -0.00193322, 0.0275808, -0.0323283, -0.0013665, 0.0276079, 0.0269431, -0.0255749},
 {-0.0264227, 0.0407395, 0.0108681, 0.0188451, 0.0283003, 0.0101713, -0.0386456, -0.0197026, -0.0278618, -0.00674309, -0.00828435, 0.0191327, -0.0038565, -0.0328014, -0.0233674, 0.00570562, 0.0353372, -0.0196321, -0.000140131, 0.00209671, 0.0117363, 0.0236473, -0.0280604, -0.00522625, -0.00553334},
 {0.0235696, -0.0289595, -0.0310714, 0.00870778, 0.00535158, 0.0215387, -0.0263172, -0.00746422, -0.0141759, -0.0254996, 0.0181741, 0.00536499, -0.0228986, 0.0128019, 0.0222264, -0.002071, 0.021551, 0.0249202, 0.0209587, -0.023554, -0.0296344, 0.00536441, -0.0282842, -0.00603198, 0.00680974},
 {-0.00394722, 0.0172489, -0.0048056, -0.00761296, 0.0266962, 0.00901668, 0.0151293, 0.0130277, 0.00236335, 0.0186941, -0.0109327, 0.0303181, 0.0198255, 0.0104541, -0.0325315, 0.0118918, -0.0202939, 0.014482, 0.0177186, -0.0130115, 0.0155766, -0.0230957, 0.00753991, 0.0274536, -0.0359899},
 {-0.0226568, 0.0114677, -0.00585517, 0.0146616, -0.0279636, 0.00528465, -0.00369421, -0.0268271, 0.00790809, -0.0141653, -0.00828542, 0.0230567, -0.0196591, 0.00723924, -0.0154128, 0.017153, -0.00424685, -0.000828216, -0.0179418, -0.00535266, -0.0236333, 0.000372814, 0.0255251, 0.0116476, 0.0163059},
 {-0.00187433, 0.0225491, 0.0111349, -0.0183836, -0.00631229, -0.00933906, 0.0222563, 0.00243224, -0.00171538, -0.011188, 0.0143014, -0.019734, 0.0108586, -0.0329129, 0.0261946, 0.0165064, -0.0176223, 0.0283617, -0.027032, 0.0271044, -0.00941932, 0.0226602, 0.0134933, -0.0279775, 0.0270473},
 {0.0294443, -0.0116044, -0.00242816, 0.0218108, 0.0180272, -0.0108139, 0.012381, -0.0134012, 0.0324485, 0.00442923, 0.00528483, 0.000269928, 0.00666732, 0.0140426, -0.0013069, -0.00980313, 0.0163312, 0.00262124, -0.00408564, 0.00438714, -0.00675159, 0.0265135, -0.0215975, -0.0221221, -0.026486},
 {0.00826058, -0.0287447, 0.0112288, -0.00485709, -0.00651757, -0.0268767, 0.017356, -0.0222794, -0.0136356, -0.0206702, -0.0275027, 0.00848373, 0.0337356, -0.0329204, 0.0134252, 0.0145325, -0.0149851, 0.01824, -0.0255786, -0.0300774, 0.0101252, 0.0146402, 0.0330257, -0.0122805, 0.0202821},
 {0.0297471, 0.00231426, 0.0111113, 0.020544, 0.0140709, 0.0228992, 0.0236513, 0.0066287, -0.0203872, 0.0313456, 0.0107862, -0.0130068, 0.0229106, 0.0269669, -0.0121198, 0.0238314, 0.00187405, -0.0134447, -0.0238512, -0.0314498, -0.0275856, 0.013438, 0.0208963, -0.0308718, -0.0300165},
 {-0.00589274, 0.0103615, -0.0258319, -0.0265361, 0.0290284, -0.00401247, -0.0138365, 0.00195664, -0.00756268, 0.0332985, -0.00801094, 0.0273804, -0.027558, -0.0295493, -0.0289843, -0.00638625, 0.0139941, 0.0168754, -0.00389981, -0.0219633, -0.00738766, 0.00452454, -0.00197963, 0.0235453, -0.0103028},
 {0.0034487, -0.0210996, 0.00487195, 0.0142683, 0.00600913, 0.00672841, 0.0330314, -0.0219133, 0.000961199, -0.0189833, -0.00133256, -0.0048402, 0.00203604, 0.000712297, 0.0282807, -0.0321939, 0.0127146, -0.0242302, 0.00388592, 0.023737, -0.00201085, -0.00816839, 0.0161868, -0.00127441, -0.00457286},
 {0.0195804, 0.0336186, -0.0174417, 0.0128632, -0.0309171, -0.000658202, 0.001492, 0.0310665, 0.031721, 0.0282205, 0.00541964, -0.0175713, -0.00940565, -0.0215169, -0.00540353, 0.0189192, 0.0195054, 0.024921, 0.00390401, 0.0108244, 0.0141438, -0.0108621, -0.00335747, 0.00735689, -0.0224447},
 {0.015508, 0.00537585, 0.00809619, -0.00807538, -0.0147358, 0.0316642, -0.0147017, 0.0309707, -0.00134704, 0.00673634, 0.00609248, -0.0134903, 0.0114658, 0.00338752, -0.0330127, 0.0175333, -0.0235739, -0.0235575, -0.0196248, 0.0121568, -0.0303077, -0.0115147, 0.0134748, 0.0302298, 0.0260025},
 {-0.0120679, -0.0210527, 0.00959826, 0.015716, 0.0122476, 0.000706577, 0.0305452, -0.0220059, -0.00521664, 0.0078724, 0.0269812, 0.0315424, 0.020223, -0.0262523, -0.0134856, -0.00657947, 0.0322589, 0.024947, 0.0206231, 0.0330518, 0.0222346, 0.0235548, 0.0202011, 0.0201017, -0.0211788},
 {0.0235643, -0.020142, 0.00396519, -0.0142302, 2.29904e-05, 0.0107785, -0.0147951, 0.0214072, -0.014236, -0.00599126, -0.0134655, 0.0296564, -0.00673228, 0.0188588, 0.0195262, -0.00745532, 0.0101234, 0.0303025, 0.00611297, 0.0289258, -0.0262678, 0.026251, -0.0202057, -0.00137533, 0.00798721},
 {0.0187809, -0.0189636, 0.0160205, -0.0117746, 0.0298768, 0.0216141, -0.0160931, 0.00401036, -0.0267697, -0.00819143, 0.00216629, -0.00237584, 0.00862672, -0.0254205, -0.0210901, 0.0127314, -0.0215125, 0.00114066, 0.0348152, -0.00196008, -0.00913403, 0.0220678, 0.0198373, 0.0292842, -0.0048042},
 {-0.00202369, -0.00801677, 0.0235152, 0.00262975, 0.0302924, 0.0303013, -0.00473477, 0.0241355, -0.00273873, -0.0309072, -0.0208794, 0.0303162, -0.0222222, 0.0033721, -0.0114477, -0.0195703, 0.0229158, 0.016161, 0.0290047, 0.0329867, 0.00403684, 0.0248987, 0.0208771, -0.0222204, -0.00335859},
 {-0.0248667, -0.0245476, -0.0258403, 0.00867471, 0.00917334, -0.022757, -0.00457321, 0.00501383, -0.00518753, -0.0171313, 0.00906548, -0.0165797, -0.0320985, -0.0252354, 0.0194025, 0.0334306, 0.0269871, -0.0193352, -0.0345884, -0.0252591, -0.0154111, -0.0250697, -0.013357, -0.031222, 0.0297044},
 {0.0258323, 0.0267417, 0.0328778, 0.0123589, -0.0326044, -0.0135583, 0.015225, -0.0135197, 0.0291305, -0.0233833, -0.00624833, -0.0113149, 0.0126678, -0.0149997, -0.00396712, -0.0270455, -0.0231438, 0.0261397, 0.0280686, 0.00142004, 0.0275563, 0.000415072, -0.00207221, 0.00621871, -0.0248481},
 {-0.000558293, -0.0143175, -0.0214115, 0.0290287, -0.0302501, -0.0323052, 0.0258078, -0.0173809, 0.0189861, -0.0229511, 0.0209248, -0.0290572, 0.0296711, 0.010171, 0.0161395, -0.0268086, 0.012049, 0.0208922, -0.000860989, 0.0142876, 9.16841e-06, -0.00690198, 0.0148398, 0.0194988, 0.0159358},
 {0.0031722, 0.0185529, -0.00420756, 0.000538094, 0.00732022, 0.0080468, 0.0077105, -0.0264412, 0.00241788, -0.0201011, 0.0160844, -0.0321028, -0.0243068, -0.0115565, 0.00811094, -0.0217739, -0.0321888, 0.00331174, 0.00839817, 0.00376283, -1.66613e-05, -0.028701, -0.00879172, -0.0181228, 0.00501572},
 {0.00152207, 0.0198439, -0.0239094, 0.0110644, -0.0133665, -0.00535041, -0.0306066, -0.0224406, 0.0340625, -0.0143861, 0.0243224, 0.0199564, -0.00398757, -0.0032881, -0.0215839, 0.0245193, 0.0301487, 0.0168652, 0.00433225, 0.0231306, 0.0316735, -0.014317, 0.0202292, 0.00533652, 0.0151682},
 {0.0183252, -0.00106327, 0.0319818, 0.0286713, 0.0290593, -0.00670221, 0.0084038, -0.0230281, 0.0098844, -0.00637811, 0.0317188, -0.0198112, 0.00879443, -0.0268853, 0.0134421, -0.0111648, 0.0288002, 0.0330387, 0.0299085, -0.0300908, 0.0283054, 0.00729909, -0.00537168, -0.0189067, -0.0244962},
 {-0.0186757, -0.0239572, -0.0287131, 0.0224912, -0.025491, -0.0329662, 0.0333562, 0.03202, 0.0299676, -0.0210861, -0.0275342, -0.0197768, 0.0310372, 0.0189537, -0.0303365, 0.020462, 0.00457177, -0.0161175, 0.00971954, 0.0137237, 0.0134857, -0.00292665, -0.00468169, 0.013409, 0.0272855},
 {0.00481918, -0.0116908, -0.026129, 0.00349571, 0.00140404, -0.00941047, -0.00450871, 0.0264414, 0.00425569, 0.0234817, -0.00331984, 0.00928269, 0.00474913, 0.027669, -0.00136679, -0.00726471, -0.0202897, 0.0310129, 0.022689, 0.00420283, 0.0134775, -0.00148815, -0.0195099, 0.0134327, 0.0301084},
 {0.00945497, 0.00938187, 0.0181873, -0.0329763, -0.0276045, -0.0309755, -0.0161181, -0.010753, -0.0282831, 0.00403626, 0.00337536, -0.0296487, 0.0229085, 0.0215733, -5.59998e-06, -0.0329796, 0.00942029, -0.0107757, 0.0228552, -0.0255698, -0.0329987, -0.0330609, -0.0329914, 0.0114407, -0.00343038},
 {0.00403621, 0.00272822, -0.0169065, 0.0275972, 0.0222097, 0.00336585, 0.00941331, 0.0302343, -0.0236529, 0.024952, -0.0195382, 0.0202246, -0.0154893, 0.0296347, -0.0329942, -0.0188887, 0.0330167, -0.0127987, 0.0101294, -0.00339328, 0.00134512, -0.00943852, -0.0262651, 0.00606073, -0.0127693},
 {-0.0127731, 0.00931419, -0.0100071, -0.0206905, 0.0209002, 0.0316633, -0.00800202, 0.00154651, -0.00730376, -0.0176693, 0.0127998, -0.000746282, 0.0148155, -0.0188642, 0.010102, -0.00125958, -0.0188991, 0.0033689, 0.0167311, -0.0107733, 0.00607108, -0.00938803, 0.0107676, -0.0134782, 0.00807726},
 {0.00738326, -0.00934513, -0.0162097, -0.0108222, -0.0107913, 0.00134612, 0.00803953, -0.0189734, 0.0214595, -0.0242016, -0.0121373, 0.0290078, -0.0101124, -0.0182017, 0.010782, 0.0120762, 0.0134911, 0.0161523, 0.031734, -0.0135325, -0.0134683, 0.0202584, -0.0101106, 0.0161729, -0.0221549},
 {-0.00283445, 0.00499485, -0.0079386, 0.0278907, -0.0324135, 0.0153277, 0.0208115, 0.0177067, 0.00117271, -0.0163103, 0.00275705, -0.0279799, 0.0135761, 0.00442714, -0.0145103, -0.0149531, -0.0172409, 0.022718, 0.0241351, 0.00429753, 0.0289228, -0.0175798, -0.0197964, 0.0206933, 0.034839},
 {0.00270239, -0.0154446, 0.0302841, -0.000780924, 0.0249109, 0.0202042, 0.0303105, -0.00684777, 0.0140929, 0.0317281, 0.0208798, 0.0303392, -0.0175058, -0.022215, -0.0330001, -0.0195542, 0.0229044, 0.0215464, -0.0289105, -0.00605219, 0.0289574, 0.0147963, 0.0222281, -0.00134277, 0.0276028},
 {-0.00960372, 0.00404375, -0.00358113, -9.72497e-05, -0.0328023, -0.00465889, -0.00182297, -0.0301855, -0.0241261, -0.00171066, 0.0338725, 0.0309355, 0.0197209, 0.0037065, 0.0174071, -0.0270882, -0.0130391, 0.00541953, 0.0165619, 0.00394535, -0.0302958, -0.00494645, 0.0169422, 0.00391164, -0.02863},
 {0.00371073, 0.0052904, 0.0238736, -0.0316183, -0.00688723, -0.00811709, -0.0228197, 0.0261472, 0.00671809, 0.0287138, -0.00821623, -0.0155741, 0.0167105, -0.028501, 0.0135361, 0.0211255, 0.0143329, 0.0107417, 0.0330915, 0.0198124, 0.0127884, -0.00749513, 0.0248532, 0.000771092, -0.0127802},
 {0.028986, -0.00942215, -0.0161621, -0.0155572, 0.00471545, 0.0289611, -0.0295889, -0.0209287, 0.0161384, -0.0080286, 0.0148261, -0.0228885, -0.00739631, -0.0114254, -0.00269977, 0.0195291, -0.0228997, 0.00740423, -0.0195299, 0.0182123, -0.00202016, -0.0290161, 0.00876363, 0.000670745, 0.0147613},
 {0.00992939, -0.00927487, -0.028411, 0.0315811, 0.0241853, 0.0201839, -0.0177994, 0.00862581, 0.00720437, 0.0316836, -0.00613013, 0.000200789, -0.00141323, 0.0315313, -0.0262287, -0.0149577, 0.0249865, -0.0148223, -0.00445727, 0.0274137, 0.0195272, -0.0286415, 0.0262249, -0.0322872, -0.0151476},
 {0.0323987, -0.00214231, -0.00261446, 0.0317831, -0.0248846, 0.00135512, 0.0162962, -0.0260916, -0.0180463, -0.0175952, -0.0134389, 0.0328762, -0.0248884, -0.0289071, 0.00941271, 0.0236607, 0.0248767, -0.0215444, 0.0058939, -0.00462815, 0.0168374, -0.00686985, -0.0242289, 0.00401852, 0.0274529},
 {0.0263914, 0.017296, 0.0196771, -0.0226263, -0.00397841, 0.0256043, -0.0327668, 0.0104271, -0.00578654, 0.00588155, 0.00274593, 0.0118811, 0.0310266, 0.0216334, -0.0249431, 0.0203713, 0.030231, -0.0215364, 0.0185482, -0.0200538, -0.0235675, 0.00246772, 0.013492, -0.0141817, -0.0164312},
 {-0.0254521, -0.0109033, -0.00393424, -0.0261885, 0.00139569, -0.022208, -0.0112134, 0.00147037, -0.000501114, -0.0303431, 0.0148712, -0.00286339, 0.00813462, -0.00192416, -0.00676281, 0.00348645, 0.00735044, 0.0148216, -0.000890177, -0.0119633, -0.00336515, -0.00631519, 0.000704373, -0.0121535, -0.0029705},
 {-0.02749, -0.0128976, -0.000592606, 0.00943661, -0.00804369, 0.00742119, 0.0217504, 0.00273596, -0.0214153, -0.0276081, -0.0309291, -0.00147364, -0.0316054, -0.00934408, 0.0289333, 0.000764219, -0.007455, -0.0201988, 0.0294732, -0.0288167, -0.00471256, 0.00314636, 0.0067632, -0.0148389, -0.00966053},
 {-0.015492, 0.00471561, -0.00203539, -0.00813803, -0.0276187, -0.0168361, 0.0269292, 0.0282345, 0.010739, -0.0302674, 0.0107734, 0.0236059, 0.0282833, 0.000673481, 0.00606149, -0.00540381, 0.00202463, 0.0114452, 0.00137958, 0.0195268, 0.0309778, -0.0228952, -0.026262, 0.00337118, 0.0161711},
 {-0.0323158, 0.0242481, -0.0188588, -0.0283104, -0.0282854, -0.00538618, -0.0208625, -0.00472335, 0.010747, -0.00671169, -0.0269348, -0.00806834, 0.0316557, 0.0255998, -0.0249194, -0.0296346, 0.000674501, 0.018853, -0.00201926, 0.0289643, 0.0282844, -0.0141654, 0.0127986, -0.0168377, -0.0276337},
 {0.0302935, -0.00411095, 2.27528e-05, 0.02504, 0.0316561, 0.0336705, -0.00674174, -0.0173658, 0.00341346, -0.00615016, 0.0154844, -0.0155169, -0.00673845, -0.0249261, 0.0276129, 0.0188844, 0.0154794, 0.0262665, 0.024189, -0.00809273, 0.0289582, 0.0168567, -0.0269419, 0.0329937, 0.023578},
 {0.0161433, -0.0026245, 0.0316107, 0.0173949, -0.0330138, 0.0175074, 0.014775, -0.0236938, -0.0162517, -0.0100208, 0.0222151, -0.0100321, -0.024924, -0.00809153, 0.0242474, 0.0127476, 0.0215692, 0.0121163, -0.0106889, 0.0134439, 0.0336712, -0.0208467, -0.00606255, -0.000664008, 0.026308},
 {-0.0226767, -0.0186031, -0.010185, -0.0184449, 0.0212046, 0.024788, 0.0196526, 0.0153377, 0.0239673, 0.00205189, -0.0226641, 0.0287074, 0.00359617, -0.00957279, 0.00899133, 0.0220524, 0.028025, -0.0188629, 0.00159384, 0.0102012, -0.00675084, -0.0153616, -0.033266, 0.00160172, 0.00500198},
 {-0.00608445, -0.0316322, 0.0262482, -0.0249225, 0.0020131, 0.0148129, -0.031691, -0.0289749, 0.0161427, -0.0141415, -0.000682647, 0.00406351, 0.0289484, -0.0303217, 0.0255954, -0.0289753, 0.00606955, -0.0195297, 0.0262972, 0.0201771, 0.0202027, -0.0221785, -0.0289632, 0.0235755, 0.007456},
 {-0.00638748, -0.0265491, -0.0118888, 0.0135494, 0.00684066, -0.0033274, 0.0207871, -0.00984765, -0.00509507, 0.0201934, -0.0274752, 0.0326609, -0.0315147, 0.0157409, 0.012049, -0.02129, -0.0183102, 0.00067553, -0.0132859, -0.0285738, -0.0175042, -0.00470178, -0.0207941, 0.00126842, 0.0134316},
 {-0.00290797, -0.013966, 0.0180389, -0.00207015, -0.0229624, 0.00738323, 0.0225361, -0.00150368, 0.0307975, 0.0208824, 0.0234865, -0.0105665, -0.0142266, -0.0297867, -0.0309331, 0.0274503, 0.00748653, -0.0282855, 0.0299341, -0.000237134, 0.0316483, 0.000408358, -0.0269882, 0.00947652, -0.0110096},
 {2.29496e-05, 0.00940926, -0.0148002, 0.0269427, 0.00943508, 0.00808384, 0.0249557, 0.00405739, -0.0134494, 0.00942747, -0.0121129, -0.0155113, 0.0121309, -0.000656771, -0.00404541, -0.0195125, -0.0249255, -0.0161624, -0.00137933, -0.0262386, 0.0141425, 0.0289141, -0.0302992, 0.0302995, 0.0147686},
 {0.0241039, -0.0160476, 0.0295373, -0.0236027, 0.0242009, 0.026248, -0.024479, -0.0108772, -0.00281157, -0.0188523, 0.00802657, 0.031114, -0.0229519, 0.0039391, 0.0242729, -0.0209812, 0.0276622, -0.00673517, -0.0173117, 0.00725307, 0.00269169, 0.0123882, -0.016869, -0.0168043, -0.00914177},
 {-0.0107229, -0.00947087, 0.0188911, 0.00135899, -0.00335122, -0.00268778, 0.0276985, 0.0249551, 0.0303484, -0.0235716, 0.013489, -0.0101522, 0.0316719, -0.000635629, -0.0316623, 0.0141811, -0.016855, -0.0141419, -0.00950171, 0.0141997, 0.00673512, 0.0194305, -0.00604856, 0.0114367, -0.0256971},
 {0.00210371, 0.0248486, 0.0330543, -0.00469465, 0.00743333, 0.0289672, -0.00120643, -0.0107139, -0.00801094, -0.02896, 0.0168684, -0.00210147, -0.0107421, 0.0216105, 0.0282668, -0.0282218, 0.0100709, 0.0309784, 0.0032492, 0.018275, 0.00673558, 0.0227379, -0.00671454, -0.0309968, 0.00454321},
 {-0.0187424, -0.00884827, -0.0241672, -0.0154625, 0.00878953, 0.0303176, 0.0028855, 0.013552, 0.0135647, 0.0316483, -0.0127508, -0.0250278, 0.0236151, 0.0270201, -0.0215738, -0.0275256, 0.0188144, 0.031652, -0.020364, 0.0324508, 0.022225, 0.0078642, 0.0121488, -0.0249428, -0.0224566},
 {0.0196053, 0.000611172, 0.018907, -0.00267613, 0.0283074, 0.0141508, 0.00888213, 0.00948347, 0.0229605, 0.0215479, -0.0120922, 0.00127318, 0.0209063, -0.0282292, 0.00671846, 0.0249738, 0.0094003, 0.0141426, 0.0248101, 0.0148994, -0.0127941, 0.0321807, -0.00200232, 0.0302875, 0.0240886},
 {-0.0235863, -0.0154757, -0.00337804, 0.0148118, 0.0181779, -0.0228986, -0.0108022, -0.0208883, -0.0181963, 0.0309784, -0.00943439, 0.031667, 0.0121155, -0.0229086, 0.0148189, -0.0249292, -0.0302987, -0.00606099, -0.00401773, -0.0134866, -0.0215502, -0.0100707, -0.00337102, 0.00741143, -0.00602777},
 {0.0134511, -0.0323105, -0.0323367, 0.0222193, 0.00538208, -0.015491, -0.0161921, 0.0195168, -0.0222382, 0.0309785, -0.0114553, -0.0100844, -0.0101085, -0.0323378, 0.0188599, -0.0242569, -0.00403413, 0.0222233, 0.0168608, 0.0188367, 0.02357, 0.0195632, 0.00807705, 3.99791e-06, -0.0181466},
 {-0.0047041, 0.00672618, -0.0161558, -0.00201799, -0.0329954, -0.024916, -0.0195129, -0.00403333, 0.00539586, -0.0168361, 0.0195334, -0.026947, 0.00606484, -0.0121146, 0.0329963, -0.0329909, 0.0175057, 0.0249171, 0.0282703, -0.032314, -0.0181826, -0.0208954, -0.0222211, -0.0262662, 0.0336514},
 {-0.0161562, -0.00673956, -0.0323206, -0.0101001, -0.00336523, 0.0296319, 0.00674505, -0.0121172, -0.0222181, -0.0107751, -0.0249147, -0.0175154, -0.0188537, 0.0255952, 0.0242424, 0.0309827, 0.00336484, 0.0296311, -0.00674333, 0.0282912, 9.30879e-08, -0.00809332, -0.0303031, 0.0282829, -0.010788},
 {-0.0141525, -0.0271683, 0.0179445, -0.0131111, -0.00378321, -0.0223789, 0.00848948, 0.0131487, 0.00289642, 0.0182207, 0.010244, -0.0249431, -0.00928999, 0.0306659, 0.00634604, 0.0218796, 0.0341706, -0.0141503, -0.0216504, 0.0200477, 0.0208566, 0.0275041, -0.0238927, 0.0225303, 0.0182693},
 {0.017484, 0.00742867, 0.0235532, 0.0329925, 0.0175016, 0.0121189, -0.0222661, -0.00136547, -0.0114698, -0.00740709, 0.00941818, 0.0054122, -0.0296411, -0.0141606, 0.0168412, 0.0147965, 0.00337651, 0.0269373, 0.00340312, 0.014114, 0.0202027, 0.00139531, -0.000679474, 0.0202087, 0.00880669},
 {0.0225744, 0.0111597, 0.0204388, 0.0216316, -0.00730019, 0.0162026, -0.00546973, -0.0219664, -0.000377461, -0.02358, 0.0122591, 0.0158208, 0.00215879, -0.0233153, -0.0290314, 0.0103646, 0.0328694, 0.0296332, 0.0122987, -0.0124067, -0.0026886, 0.0235745, -0.0194463, 0.0187768, 0.0127495},
 {-0.0318885, 0.00490904, -0.029117, -0.0323799, 0.0329258, 0.00805406, 0.0211507, -0.00623449, -0.00895455, -0.00672772, -0.00817397, 0.013026, -0.0270309, 0.0314792, 0.00341699, -0.00219803, 0.00143405, -0.0329996, 0.0218853, -0.0137312, 0.0215464, -0.0177308, 0.0235139, 0.0283378, -0.0170236},
 {4.10222e-05, -0.00340089, 0.0249446, 0.00674388, 0.00203287, 0.0323295, -0.0288887, -0.015459, -0.0107404, -0.0282854, 0.0175253, 0.027571, -0.0228806, -0.0154592, 0.0107664, 0.0215806, -0.0047291, -0.0121216, 0.00128885, -0.00197491, 0.0094287, -0.0128734, 0.0195393, 0.0228876, -0.0276948},
 {0.00191468, 0.0256773, 0.0140712, -0.0182072, -0.0303369, 0.00874257, -0.0264418, -0.00950537, -0.0196186, 0.0282872, 0.0208352, 0.0263667, 0.019488, 0.00127018, 0.0303267, -0.0142213, -0.00332835, 0.030304, -0.0193803, -0.0176261, 0.0107734, -0.00855335, -0.00675943, 0.0316752, 0.0285006},
 {-0.00933171, 0.0154098, -0.0194649, 0.00473646, 0.00609045, 0.0175203, -0.00724546, 0.0142127, -0.0302234, 0.0175067, 0.0162001, 0.0214562, -0.0134307, 0.0243137, 0.00940788, -0.0100293, 0.0134333, 0.0202036, 0.00255738, -0.0261573, 0.0296326, -0.00826494, 2.29114e-05, 0.0053657, 0.0139447},
 {-0.0275215, 0.0241702, 0.0216099, 0.0148363, -0.00805384, 0.0114586, 0.0169863, -0.0154236, -0.0120465, -0.00134937, 0.0289926, 0.0248302, -0.0201678, -0.00936316, -0.0316701, 0.0270043, -0.00407346, 0.0195301, 0.0288313, 0.0203019, 0.00202162, -0.0122922, 0.0141633, 0.00806104, -0.00691745},
 {-0.0275176, -0.0330749, -0.0315888, 0.0336933, -0.0242151, -0.0174987, 0.00891176, -0.00195201, 0.00815984, -0.020879, -0.0167994, -0.0229875, -0.00131007, 0.0162302, -0.0215694, -0.00329725, -0.0020546, 0.00538803, -0.00417258, 0.00818447, 0.0121232, -0.0298089, -0.0309559, 0.0188352, -0.0298222},
 {0.0243037, 0.00735839, -0.00400026, -0.0121079, 0.0303229, 0.0168427, 0.0108761, -0.0316076, -0.0107243, 0.0228952, 0.025614, 0.00600244, 0.0155127, -0.00332353, -0.0269499, -0.030933, 0.0174873, 0.0161627, 0.00328218, 0.0128617, -0.0329974, 0.020762, 0.0262782, -0.00270732, -0.0196527},
 {0.0175032, 0.0208815, 0.014138, -0.0316528, -0.000675335, 0.0175086, 0.026927, -0.0229012, 0.0121166, -0.00471388, -2.42714e-06, 0.0303105, -0.0309804, 0.0121173, 0.0316527, -0.00135152, -0.0033649, 0.0249171, 0.0168446, 0.0269306, -0.0127954, -0.0127835, -0.010103, 0.0134701, 0.00337987},
 {-0.026982, 0.0323615, -0.00205029, 0.00470367, -1.36857e-05, -0.0208816, 0.0228217, -0.00137955, -0.0195672, -0.0282831, -0.0202204, -0.0302612, -0.00944568, 0.0134363, 0.0175186, -0.00744123, 0.0148319, 0.0121216, 0.0148787, -0.0249665, -0.0134694, -0.0133836, 0.0174988, -0.0100915, 0.0202945},
 {0.00806295, -0.00469901, -0.0114607, 0.0154848, -0.020882, -0.0269395, -0.00474485, -0.00405399, 0.0302892, 0.0316519, -0.0296382, -0.00200249, 0.00538027, -0.0309913, -0.0303008, 0.0316378, -0.00740107, 0.0114483, -0.00940223, -0.0256107, -0.0215502, -0.0194948, -0.0195339, -0.0255865, -0.00871718},
 {0.0228553, -0.0309439, -0.0128232, 0.0242341, 0.0141294, -0.0175141, -0.00411063, 0.0208461, -0.026299, -0.0228957, -0.0262802, -0.0215095, 0.00739139, 0.00535727, -0.0282756, 0.00535633, -0.0228816, 0.0168357, 0.0310368, -0.0283302, 0.00201969, 0.00479331, 0.00201043, -0.0107656, -0.0167507},
 {0.00325746, 0.0335224, -0.0151206, -0.0043796, 0.00292071, 0.0267704, -0.019962, -0.0104942, 0.0317705, 0.0337124, -0.000569844, -0.0107043, -0.00124797, -0.00375129, 0.0225293, -0.028029, -0.0149535, -0.0303133, -0.0154491, -0.0312433, 0.0275895, -0.0288751, 0.0333257, 0.0286136, -0.00240368},
 {-2.65691e-05, 0.000695281, 0.0174915, -0.00606708, -0.0181908, -0.0255936, -0.0296758, -0.0249365, 0.00603854, 0.0235709, 0.00874431, 0.0121477, -0.0168463, -0.0121411, -0.0175038, 0.0134488, -0.0127855, -0.0255906, -0.0302671, 0.0242143, -0.0161628, 0.00207094, 0.0323187, 0.0181887, -0.0248627},
 {0.00769659, 0.0145781, -0.0307841, 0.0189233, -0.0221349, 0.0229298, -0.0143293, -0.00652296, 0.0244871, 0.0235622, -0.0147026, -0.0137497, 0.00146079, -0.0119121, -0.0256511, 0.00560392, 0.00999539, 0.0141438, -0.0078163, -0.0306584, -0.00807698, 0.0284073, -0.0160939, -0.013534, -0.0329164},
 {-0.0304432, 0.0290717, -0.00480719, -0.0188884, 0.0134262, -0.0148314, -0.0190897, 0.0153875, 0.00998465, 0.014146, -0.0216041, -0.0301697, -0.031706, -0.0122226, -0.0289286, -0.0162663, 0.0310289, 0.0107742, -0.0112522, 0.0173559, 0.0255885, 0.0305689, 0.0282514, 0.0188875, 0.0191402},
 {-0.00397955, -0.00476425, 0.00340819, 0.012136, 0.0168545, -0.00133987, 0.00818403, -0.0174647, -0.0188048, -0.0289594, -0.0127714, 0.00330774, -0.0302805, 0.0202475, -0.00944088, 0.00273951, 0.00738535, -0.00875433, -0.02433, -0.0134011, -0.0242427, -0.0223397, 0.0175238, 0.0215362, -0.0082063},
 {-0.025002, 0.0148854, 0.0235132, 0.0013271, -0.0101275, 0.0100918, -0.000143073, -0.00612308, -0.00209192, -0.00134449, -0.016869, 0.0236528, -0.000706947, 0.0241819, -0.00132903, 0.0012832, 0.00676557, -0.0289581, -0.0106548, -0.0229908, -0.0276121, 0.0102634, 0.00873449, 0.0323439, -0.00319313},
 {-0.0167317, -0.0108607, -0.0228268, -0.0269132, 0.0310099, 0.000685392, 0.000175589, -0.00867837, -0.0194418, -0.0080841, -0.024203, -0.0283857, -0.0208354, -0.0201273, 0.0302828, 0.0223014, -0.0195679, -0.0195291, -0.00890212, 0.0102169, 1.52505e-06, -0.0230955, -0.0141174, -0.0242672, 0.00517389},
 {0.0330534, -0.0175546, 0.0114855, -0.00537464, 0.0033841, -0.0235639, 0.0101945, 0.0215903, -0.00668781, 0.0242422, 0.01147, -0.00880837, -0.0134469, -0.0107348, 0.00941653, -0.0100602, 0.00671406, 0.00606123, 0.0207984, -0.0214889, 0.0222242, 0.0133635, -0.00133375, 0.0323125, 0.0261509},
 {-0.00466077, -0.0316951, 0.0323606, -0.0127829, 0.0256068, 0.0222294, 0.0074975, -0.00467506, 0.0202479, -0.00673583, 0.00406144, 0.00533564, 0.0229178, 0.00744649, 0.0201919, 0.0316913, -0.00473361, -0.0215497, -0.00950343, -0.0228379, 0.018857, -0.0135702, -0.00537483, 0.0215379, -0.0189653},
 {-0.0168065, 0.0188321, 0.0202228, 0.0154958, 0.0208854, 0.00875802, -0.0127457, -0.0275894, 0.0249419, 0.0202023, -0.0188447, 0.0107464, -0.0114368, -0.0262425, -0.000679616, 0.0336937, -0.0249278, 0.00336734, -0.0155306, -0.025558, 0.00942854, 0.0147595, -0.0168289, 0.0100949, -6.02911e-05},
 {0.00941985, 0.012802, -0.0067399, -0.00134879, -0.00943059, 0.000672488, -0.0202169, 0.0201971, 0.0013399, 0.0222236, 0.0235671, 0.0188642, -0.0235735, 0.0262579, 0.0121235, -0.0222295, 0.00673738, 0.00202027, 0.0141538, 0.0215408, 0.00134675, 0.00338295, 0.0282824, 0.018858, 0.0181997},
 {0.00534713, -0.00266055, 0.0302775, -0.0134781, 0.0168236, 0.0249125, -0.0330661, -0.0202325, -0.00407461, 0.0242448, -0.0256063, -0.0329592, 0.00335126, -0.00945743, -0.0195212, 0.00737754, -0.0127805, 0.0175091, 0.0141992, 0.0127506, -5.90469e-07, 0.00411754, 0.0235607, 0.0107841, 0.0297138},
 {-0.00403897, 0.022222, 0.00471516, 0.00875503, -0.00538699, 0.0282845, -0.0262612, -0.0208753, 0.0181841, 0.0269374, 0.0276114, -0.00808279, 0.0026944, 0.0188574, -0.0188565, -0.00875342, 0.0114478, -0.00404061, 0.00134453, -0.0215482, 0.0228968, -0.0228999, -0.0202027, -0.0188565, -0.00135027},
 {-0.0208919, 1.27169e-05, -0.0256009, -0.0134723, 0.00605619, 0.0107732, -2.60417e-05, -0.0155003, -0.0262769, -0.0316511, 0.032319, -0.0168209, 0.00605483, -0.0316628, 0.0262672, 0.0329868, -0.00403495, 0.0242436, -0.0235484, -0.0148327, -0.0316517, -0.0013174, 0.0141385, 0.00471753, -0.0215183},
 {0.00538748, 0.0101015, 0.0329983, -0.0282843, 0.0329983, 0.0188562, -0.0289577, -0.0329983, 0.0228968, 0.0276108, 0.0215499, 0.0141421, -0.0303046, -0.0249171, -0.0276108, 0.0161624, 0.0141421, -0.0121218, -0.00134687, 0.0195296, -0.0282843, 0.0168359, 0.0329983, -0.00538748, 0.0208765},
 {0.030978, -0.00942809, -0.00336717, 0.00202031, -0.0127953, 0.0296311, -0.0269374, 0.0208765, -0.0101015, 0.026264, 0.0329983, -0.0222234, 0.00942809, 0.0161624, -0.0020203, 0.0222234, -0.0141421, -0.0141421, -0.0161624, -0.0195296, -0.0114484, -0.0161624, 0.0222234, -0.0168359, 0.0249171},
 {-0.0020203, 0.00202031, -0.00808122, 0.00471405, -0.0222234, 0.0168359, -0.00808122, -0.00269374, -0.00471404, -0.0161624, -0.000673436, 0.0323249, 0.00269374, -0.00808122, 0.0242437, 0.0222234, 0.0141421, 0.00471405, 0.00606092, 0.00606092, 0.0276108, -0.0296311, 0.030978, -0.0323249, -0.0289577},
 {0.00740778, 0.0195296, 0.0141421, 0.0215499, -0.00471404, -0.0235702, -0.00538748, 0.0329983, -0.00134687, -0.0316514, 0.0296311, 0.00673435, 0.0188562, -0.0188562, -0.0249171, -0.0148156, -0.00673435, 0.0276108, 0.00606092, 0.0121218, -0.00875466, -0.0181827, -0.026264, 0.0141421, -0.00538748},
 {0.00740778, 0.0242437, -0.0235702, 0.00942809, -0.00336717, -0.0161624, 0.0235702, 0.0323249, -0.0222234, -0.00134687, -0.0127953, -0.00269374, -0.0323249, 0.00808122, -0.0235702, -0.0195296, -0.0316514, 0.0269374, 0.000673436, 0.026264, 0.0148156, 0.026264, -0.0195296, -0.00875466, -0.0148156},
 {0.0202031, -0.0208765, -0.00875466, -0.0289577, -0.0168359, 0.0208765, -0.00673435, 0.0228968, -0.0215499, -0.0141421, -0.0329983, 0.00740778, 0.0195296, -0.0141421, 0.0336718, -0.0255905, -0.0188562, -0.0242437, -0.00134687, -0.00336717, 0.0215499, 0.0323249, 0.0215499, 0.00808122, 0.0121218},
 {0.0215499, -0.00942809, -0.0235702, -0.0228968, -0.0222234, -0.0101015, -0.0114484, -0.000673436, -0.0255905, 0.0323249, 0.00336717, -0.0235702, -0.00134687, -0.0127953, 0.0255905, 0.0303046, -0.0228968, -0.0020203, -0.026264, 0.00673435, -0.030978, -0.0289577, 0.00404061, 0.00942809, 0.0255905},
 {-0.00471404, 0.0296311, 0.0127953, -0.010775, -0.0235702, 0.0208765, 0.0101015, -0.015489, 0.0181827, 0.00134687, -0.0188562, -0.00134687, 0.0208765, 0.0175093, -0.00336717, -0.0276108, 0.0282843, 0.0101015, 0.0323249, 0.00740778, 0.00538748, 0.0121218, 0.0289577, 0.00606092, -0.0181827},
 {0.026264, -0.0296311, -0.0148156, -0.0181827, -0.0148156, -0.00740778, 0.0303046, 0.00269374, 0.00875466, 0.0181827, -0.000673436, 0.0276108, 0.0101015, -0.0202031, -0.0141421, -0.0161624, -0.0161624, 0.0175093, -0.00538748, -0.00538748, 0.0228968, 0.0242437, -0.0127953, -0.0289577, -0.00740778},
 {0.00740778, 0.0134687, 0.026264, 0.00538748, 0.0195296, -0.0121218, -0.0303046, 0.0276108, -0.0249171, 0.0255905, 0.000673436, 0.010775, -0.0296311, -0.0020203, -0.0101015, 0.00336717, -0.0228968, -0.0114484, -0.00606092, -0.0134687, -0.0202031, 0.0289577, 0.0202031, 0.00538748, -0.0161624},
 {-0.0249171, -0.0269374, 0, -0.0329983, -0.0255905, -0.0121218, -0.0303046, -0.0235702, 0.00875466, 0.026264, -0.0175093, 0.0134687, 0.0195296, 0.0215499, 0.00134687, -0.0208765, 0.00404061, 0.026264, -0.0303046, -0.00336717, -0.0282843, 0.0289577, 0.00606092, -0.00808122, -0.0228968},
 {0.0181827, 0.0296311, -0.00471404, 0.0127953, 0.00538748, 0.0195296, -0.0121218, 0.0228968, -0.0020203, -0.030978, 0.00606092, -0.0114484, -0.00942809, -0.0134687, -0.00942809, -0.00269374, 0.0336718, 0.026264, -0.00673435, -0.0202031, -0.00538748, -0.0134687, -0.0316514, 0.00538748, 0.0222234},
 {-0.000673436, 0.030978, -0.00269374, -0.0148156, -0.0289577, 0.00606092, 0.0208765, -0.00404061, 0.0222234, -0.0303046, 0.010775, 0.010775, -0.0127953, -0.0161624, -0.00538748, 0.00202031, -0.0329983, -0.0161624, -0.0195296, 0.0276108, 0.0188562, -0.0161624, 0, -0.0202031, 0.00404061},
 {-0.0296311, 0.00942809, -0.0020203, 0.0168359, -0.0276108, 0.0114484, 0.0181827, 0.0168359, -0.0276108, 0.0228968, 0.00875466, -0.00538748, -0.0235702, 0.0148156, 0.0148156, -0.0141421, 0.0329983, -0.0242437, -0.0215499, -0.0323249, -0.0255905, 0.0269374, 0.0282843, 0.0289577, 0.0188562},
 {0.0249171, -0.0181827, 0.0114484, 0.0195296, 0.0181827, 0.0168359, 0.0336718, -0.00336717, 0.0141421, 0.026264, -0.0175093, -0.030978, 0.010775, -0.00404061, 0.0255905, -0.0329983, 0.00134687, 0.00269374, -0.0323249, -0.0235702, -0.00606092, -0.00471404, -0.0329983, 0.0202031, -0.0235702},
 {0.0336718, 0.0202031, 0.0181827, 0.0202031, 0.0269374, -0.0228968, 0.0282843, 0.0121218, 0.000673436, -0.015489, 0.0168359, 0.00336717, 0.00606092, 0.00606092, 0.0323249, -0.00673435, -0.000673436, -0.0195296, -0.00875466, -0.00808122, -0.0255905, -0.00134687, -0.00740778, -0.0282843, -0.0282843},
 {-0.0235702, -0.0148156, 0.030978, 0.00606092, -0.00875466, 0.00740778, 0.0296311, 0.030978, -0.0188562, 0.00336717, -0.0141421, 0.00336717, -0.0168359, 0.0323249, -0.030978, -0.0114484, -0.00538748, 0.00471405, 0.00673435, 0.015489, -0.0121218, 0.0127953, -0.015489, -0.0181827, 0.0336718},
 {-0.00673435, 0.0269374, 0.0249171, -0.00740778, 0.00606092, -0.00404061, 0.010775, 0.0202031, -0.00471404, 0.0235702, 0.0141421, -0.00875466, -0.0114484, 0.0323249, -0.0208765, -0.0303046, -0.000673436, -0.0020203, -0.0127953, 0.0148156, -0.0168359, 0.00740778, -0.0255905, -0.0141421, -0.0208765},
 {0.00538748, -0.0269374, -0.0134687, 0.0323249, -0.00336717, 0.0114484, -0.0323249, -0.00740778, 0.0101015, -0.00942809, -0.0127953, 0.00875466, 0.00673435, -0.0148156, -0.00269374, 0.00404061, 0.0127953, 0.0127953, 0.00808122, -0.0329983, 0.0255905, 0.0168359, -0.00269374, -0.00740778, -0.0168359},
 {0.0323249, -0.0276108, -0.0276108, -0.0255905, -0.0020203, 0.00336717, 0.0336718, 0.0101015, 0.0235702, -0.0255905, 0.0242437, 0.00404061, 0.00740778, 0.00538748, -0.00942809, -0.0289577, -0.0255905, 0.00404061, -0.0269374, 0.030978, 0.0276108, 0.00808122, -0.010775, 0.00808122, 0.00740778},
 {0.00404061, -0.0161624, -0.00942809, -0.0188562, -0.0269374, -0.0222234, 0.0249171, 0.0134687, 0.00269374, -0.0289577, -0.00740778, 0.0208765, 0.00942809, -0.026264, -0.0101015, -0.0296311, 0.0228968, -0.0289577, 0.0222234, 0.00134687, 0.0228968, -0.0276108, 0.0329983, 0.0303046, -0.0235702},
 {-0.0188562, 0.0282843, 0.0228968, -0.000673436, -0.0329983, 0.0303046, -0.0181827, 0.0148156, 0.0323249, 0.00134687, -0.00538748, -0.0296311, 0.00740778, -0.0323249, 0.0134687, -0.0127953, -0.0134687, 0.0303046, 0.0222234, 0.0175093, 0.0242437, -0.0195296, -0.0148156, -0.026264, -0.0282843},
 {0.0121218, -0.0208765, -0.0329983, -0.00875466, -0.00606092, 0.00134687, -0.00269374, 0.0316514, 0.0282843, -0.0114484, -0.00606092, -0.00404061, -0.015489, -0.00471404, 0.0175093, -0.0235702, 0.0228968, -0.0303046, -0.0235702, -0.0114484, -0.0249171, 0.015489, 0.00538748, -0.00808122, 0.00673435},
 {-0.015489, 0.0101015, 0.00471405, -0.0276108, -0.00740778, -0.000673436, -0.0296311, 0.0181827, 0.0289577, -0.0175093, -0.00134687, 0.0127953, 0.0276108, -0.00875466, 0.0228968, 0.0134687, 0.0303046, 0.0101015, 0.00134687, 0.030978, -0.0323249, 0.0195296, 0.00202031, 0.0276108, -0.0121218},
 {-0.0249171, -0.00134687, -0.0323249, 0.0195296, -0.00269374, -0.0316514, 0.00538748, 0.0195296, 0.00471405, 0.0114484, 0.0336718, 0.0316514, 0.0303046, 0.00202031, -0.010775, 0.0235702, -0.0161624, 0.0188562, 0.00875466, 0.0101015, 0.0269374, 0.0127953, -0.0202031, 0.0235702, -0.00269374},
 {0.00673435, -0.0148156, -0.0235702, -0.000673436, -0.0329983, -0.00673435, 0.0316514, -0.0276108, -0.015489, -0.00471404, -0.0249171, 0.0255905, -0.0242437, -0.00269374, -0.00875466, -0.00134687, 0.030978, 0.00808122, 0.030978, 0.026264, 0.0255905, 0.0208765, 0.0148156, 0.0269374, -0.0215499},
 {-0.00471404, 0.0101015, -0.0215499, -0.0235702, 0.0121218, -0.0282843, -0.0168359, 0.00606092, 0.0276108, 0.00202031, 0.00404061, -0.0121218, -0.0161624, 0.0101015, -0.0175093, 0.0141421, -0.0269374, -0.0269374, -0.0235702, -0.00808122, -0.0242437, -0.0175093, -0.0208765, -0.00875466, -0.00538748},
 {0.00673435, -0.0235702, -0.0296311, 0.0175093, -0.0235702, 0.00404061, 0.00875466, -0.00269374, -0.0141421, -0.0303046, -0.0242437, -0.0148156, 0.0289577, 0.00471405, 0.00269374, 0.0249171, 0.0289577, -0.0289577, 0.030978, -0.030978, -0.0101015, -0.0282843, -0.0255905, 0.0215499, -0.0181827},
 {-0.0168359, 0.0181827, -0.015489, 0.00202031, 0.0336718, -0.00808122, -0.0255905, -0.0114484, -0.0181827, -0.00404061, -0.0188562, 0.0329983, -0.0303046, 0.026264, 0.0121218, 0.0181827, -0.00875466, 0.030978, -0.0228968, -0.00875466, -0.0127953, -0.0228968, -0.0114484, 0.00875466, 0.0222234},
 {-0.0121218, -0.0282843, 0.0228968, 0.00538748, -0.00269374, 0.0134687, -0.00942809, -0.0168359, 0.0188562, -0.00875466, 0.0329983, -0.0148156, -0.0323249, 0.0323249, -0.026264, 0.0336718, -0.0181827, -0.0168359, 0, -0.0148156, -0.0316514, -0.0134687, 0, 0.0228968, 0.0114484},
 {-0.0127953, 0.0161624, 0, 0.0101015, 0.00538748, 0.0329983, -0.0329983, -0.026264, -0.00471404, 0.026264, -0.0020203, 0.0148156, -0.0020203, 0.0242437, 0.0127953, -0.0175093, 0.0202031, -0.0195296, 0.0168359, 0.0316514, -0.0249171, -0.0127953, 0.0329983, 0.00673435, 0.0208765},
 {0.0329983, 0.0289577, -0.0208765, 0.0127953, 0.0329983, -0.00875466, 0.000673436, 0.0127953, -0.0114484, 0.0323249, -0.0175093, -0.00740778, -0.0141421, -0.026264, 0.0296311, 0.0188562, -0.00875466, -0.0161624, -0.00606092, -0.0276108, 0.0269374, 0.00404061, 0.0141421, -0.0316514, -0.0101015},
 {0.0323249, 0.00673435, -0.0296311, -0.0303046, 0.00202031, 0.0168359, 0.00606092, -0.0323249, 0.00134687, -0.0134687, -0.0222234, -0.00740778, 0.0121218, -0.030978, 0.0215499, -0.0175093, 0.0235702, -0.0121218, 0.00808122, -0.00740778, 0.0168359, -0.0161624, 0.0329983, 0.0121218, 0.0121218},
 {0.0202031, -0.0303046, -0.0195296, -0.0020203, -0.00336717, -0.0168359, -0.010775, 0.0296311, 0.000673436, -0.0249171, -0.0175093, -0.0249171, -0.010775, -0.0121218, 0.0208765, -0.0242437, 0.0323249, 0.0235702, 0.0148156, 0.00606092, -0.0242437, 0.0148156, 0.026264, -0.0188562, -0.0269374},
 {0.0255905, -0.00808122, -0.0202031, -0.00269374, 0.0195296, -0.00538748, -0.00336717, 0.00808122, 0.0114484, 0.0242437, 0.015489, -0.0255905, -0.00808122, 0.0336718, 0.0215499, 0.0175093, 0.0228968, 0.0228968, -0.0255905, 0.00134687, -0.00336717, 0, -0.0202031, -0.0148156, -0.0323249},
 {0.0195296, 0.026264, -0.0249171, -0.0188562, 0.030978, 0.0188562, -0.010775, 0.0303046, -0.0020203, 0.0336718, -0.0134687, -0.0255905, 0.0161624, 0.0134687, 0.0296311, 0.0329983, -0.0168359, -0.0316514, -0.0222234, -0.0175093, 0.00134687, 0.0303046, -0.0101015, -0.0303046, -0.00134687},
 {-0.0282843, -0.0161624, -0.00875466, -0.00269374, 0.0329983, 0.0114484, 0.00202031, 0.0228968, -0.015489, 0.0323249, -0.00336717, -0.00942809, 0.00538748, 0.0222234, -0.00134687, 0.010775, 0.0249171, -0.0276108, 0.0255905, 0.010775, 0.0235702, -0.0134687, 0.00942809, 0.0255905, -0.000673436},
 {-0.00875466, 0.030978, 0.0202031, 0.00404061, -0.0148156, -0.0296311, 0.0134687, -0.0114484, 0.0168359, 0.000673436, -0.0316514, -0.000673436, 0.0255905, -0.0161624, 0.0282843, -0.0208765, -0.0127953, -0.0020203, 0.0114484, 0.0228968, -0.0296311, 0.0161624, 0.0235702, 0.0188562, 0.0296311},
 {-0.0316514, -0.0276108, -0.00269374, 0.0127953, -0.0249171, 0.0329983, -0.0127953, -0.0329983, -0.0269374, 0.0134687, 0.0249171, 0.00673435, 0.0296311, 0.0269374, -0.0222234, -0.0215499, -0.0242437, 0.0296311, -0.00942809, 0.0336718, 0.0235702, 0.015489, -0.0215499, 0.00134687, 0.00336717},
 {0.0282843, -0.00740778, -0.00336717, 0.00740778, 0.0168359, 0.0289577, -0.0303046, 0.00606092, 0, -0.0235702, 0.00808122, 0.0168359, 0.0336718, -0.00673435, -0.015489, -0.00269374, 0.0323249, 0.0296311, 0.00538748, 0.0202031, -0.0168359, 0.0323249, 0.00134687, -0.00673435, 0.0323249},
 {-0.000673436, -0.0235702, 0.0202031, -0.0020203, -0.0127953, -0.0222234, 0.0134687, 0.010775, 0.00269374, -0.0329983, -0.0228968, 0.0289577, 0.010775, -0.0235702, 0.0329983, -0.000673436, 0.0269374, 0.0242437, -0.0175093, -0.026264, -0.0148156, -0.0228968, -0.0316514, -0.00336717, -0.00269374},
 {-0.0215499, -0.00808122, 0.0175093, -0.00673435, -0.00269374, -0.00740778, -0.0175093, -0.0249171, -0.0195296, -0.026264, -0.00875466, -0.00875466, 0.0127953, 0.00134687, 0.0329983, -0.0235702, 0.010775, -0.0141421, 0.000673436, -0.0296311, -0.00740778, 0.010775, 0.030978, 0.0249171, -0.0141421},
 {-0.0114484, 0.0161624, -0.00875466, -0.0249171, 0.0127953, -0.0127953, 0.0296311, 0.0316514, -0.0195296, -0.00740778, 0, -0.00942809, 0.0127953, -0.0114484, -0.00471404, -0.0195296, 0.00404061, 0.00404061, -0.00471404, 0.00673435, 0.00808122, 0.0323249, 0.0188562, -0.00134687, -0.0101015},
 {0.026264, 0.0222234, -0.00606092, -0.0228968, -0.0202031, -0.0303046, -0.0235702, 0.0228968, -0.0276108, -0.026264, -0.00404061, 0.00942809, -0.0235702, 0.015489, 0.0134687, -0.00942809, -0.0020203, -0.0329983, -0.00471404, 0.00471405, 0.0329983, 0.0222234, -0.0195296, -0.0195296, 0.0329983},
 {-0.0175093, 0.00336717, -0.00740778, 0.00538748, -0.0141421, 0.0222234, 0.00942809, -0.00606092, 0.00538748, -0.00740778, 0.0303046, 0.026264, -0.00538748, 0.00336717, 0.0329983, 0.0316514, 0.0228968, -0.0121218, -0.0127953, 0.0127953, -0.00538748, -0.0188562, -0.0148156, -0.0323249, 0.00606092},
 {0.0303046, 0.0168359, -0.0181827, -0.0181827, 0.0255905, 0.0282843, -0.0303046, -0.0195296, 0.0121218, 0.0242437, 0.0127953, 0.0202031, -0.0323249, -0.00404061, 0.0242437, 0.0289577, -0.030978, 0.0296311, 0.0249171, 0.0208765, 0.0282843, -0.0168359, -0.0121218, -0.0114484, -0.0168359},
 {-0.030978, 0.0269374, 0.010775, -0.0114484, -0.0141421, -0.00269374, -0.0101015, 0.0303046, -0.0020203, 0.00538748, 0.00471405, -0.0134687, 0.0228968, 0.00673435, 0.00808122, -0.0202031, -0.0276108, -0.0269374, 0.0276108, 0.0208765, 0.0101015, 0.0296311, -0.0121218, 0.0242437, -0.0282843},
 {-0.000673436, 0.0255905, 0.0249171, 0.0121218, 0.0215499, -0.0242437, -0.00471404, 0.0127953, -0.0276108, -0.00134687, 0.00606092, -0.0289577, -0.0161624, 0.0228968, -0.0242437, 0.0134687, -0.026264, -0.0195296, 0.026264, -0.0222234, 0.00673435, -0.00269374, 0.0276108, -0.030978, -0.00404061},
 {0.015489, 0.00942809, 0.0323249, -0.0101015, -0.0148156, -0.00269374, 0.0101015, 0.00808122, -0.0181827, 0.0127953, 0.0161624, -0.0255905, 0.0195296, -0.0235702, 0.0127953, 0.0175093, 0.00134687, 0.0323249, 0.026264, 0.0228968, -0.00336717, -0.026264, 0.0329983, 0.0255905, 0.0208765},
 {-0.0249171, -0.00606092, -0.0269374, 0.0269374, 0.0188562, 0.0222234, 0.0188562, -0.0276108, 0.0195296, 0.030978, -0.0161624, 0.0188562, -0.0127953, 0.00740778, 0.0228968, -0.010775, 0.0228968, -0.026264, 0.0316514, 0.0134687, 0.00336717, 0.00875466, -0.0222234, 0.010775, 0.0175093},
 {0.0242437, 0.00134687, 0.0329983, -0.0316514, -0.0121218, -0.015489, -0.00740778, -0.00404061, 0.0181827, 0.0148156, -0.00942809, 0.0168359, -0.0175093, -0.015489, 0.00202031, -0.00404061, -0.0215499, 0.0181827, -0.0141421, 0.0195296, -0.00471404, 0.0249171, 0.030978, -0.0222234, -0.0249171},
 {-0.0181827, -0.00134687, -0.0289577, -0.0282843, 0.00404061, 0.0242437, -0.000673436, 0.0276108, -0.0282843, -0.0121218, -0.0168359, -0.00538748, -0.026264, 0.0202031, -0.00538748, 0.030978, 0.0249171, -0.00134687, 0.0222234, -0.00404061, -0.0134687, 0.0323249, 0.0323249, -0.0114484, 0},
 {-0.00336717, -0.00606092, 0.0208765, 0.0101015, -0.000673436, 0.0235702, -0.015489, 0.010775, -0.000673436, -0.0329983, -0.0323249, -0.00740778, 0.0208765, 0.0188562, -0.00606092, 0.0235702, 0.0181827, -0.0161624, -0.0228968, -0.0134687, -0.0195296, 0.0114484, 0.000673436, 0.0168359, -0.0289577},
 {0.0329983, 0.00404061, 0.0249171, -0.0282843, -0.0249171, -0.00404061, -0.00336717, 0.0121218, 0.0222234, 0.0255905, -0.0134687, -0.0242437, 0.0249171, -0.0228968, -0.0303046, -0.00471404, -0.00740778, 0.00808122, -0.0161624, 0.0282843, 0.0175093, 0.010775, 0, -0.0269374, 0.0101015},
 {0.0323249, 0.0141421, -0.00673435, -0.0228968, 0.0168359, -0.0188562, 0.00269374, -0.0121218, -0.0215499, -0.0141421, 0.0228968, 0.0289577, 0.0141421, 0.0121218, -0.00471404, 0.0121218, 0.00336717, -0.00538748, 0.0282843, -0.00538748, 0.00740778, 0.00606092, -0.010775, -0.0222234, -0.0114484},
 {-0.0195296, -0.0148156, -0.0269374, -0.00404061, -0.00942809, -0.00269374, 0.0249171, 0.0249171, -0.00875466, -0.00269374, -0.00673435, -0.0114484, 0.0336718, 0.00336717, 0.00673435, 0.0175093, -0.0228968, -0.0195296, -0.0181827, 0.0181827, -0.00538748, 0.00471405, -0.0114484, -0.0215499, 0.0215499},
 {-0.0255905, -0.0127953, 0.0101015, -0.0141421, 0.00740778, -0.0303046, 0.026264, -0.00404061, -0.0101015, -0.0249171, 0.0276108, 0.0215499, -0.0222234, -0.00134687, 0.0249171, -0.010775, 0.0141421, 0.0161624, -0.00875466, -0.0161624, 0.0303046, 0.00808122, -0.00538748, -0.0195296, 0.0289577},
 {0.010775, -0.0202031, 0.0222234, 0.0121218, 0.0127953, -0.0296311, 0.0269374, -0.0269374, 0.00134687, 0.0121218, -0.00740778, 0.0269374, -0.0114484, -0.0195296, -0.0134687, -0.0175093, 0.00538748, 0.0323249, 0, 0.0181827, 0.0161624, -0.0127953, -0.0222234, -0.0121218, 0.0188562},
 {0.00538748, -0.015489, 0.0228968, 0.0195296, 0.0188562, -0.00538748, -0.0148156, 0.0181827, 0.0208765, -0.00404061, -0.00673435, -0.0316514, 0.0215499, 0.0121218, -0.0175093, 0.00134687, -0.0195296, 0.0336718, 0.00336717, -0.0114484, -0.0127953, -0.0121218, 0.0195296, -0.0269374, 0.00673435},
 {0.00404061, -0.0202031, 0.030978, -0.0202031, -0.0148156, -0.00336717, 0.026264, 0.0127953, 0.0276108, 0.00404061, 0.0276108, 0, -0.0289577, 0.0208765, 0.000673436, -0.0161624, 0.010775, 0.0195296, 0.030978, 0.0276108, 0.015489, -0.0121218, -0.0228968, -0.00942809, 0.0323249},
 {0.0215499, -0.0329983, -0.0316514, 0.00202031, 0.0316514, -0.00404061, -0.00606092, 0.00202031, 0.0222234, 0.010775, -0.0127953, 0, -0.00808122, -0.0175093, 0.0329983, 0.0329983, 0.0195296, 0.00875466, -0.0289577, 0.0269374, 0.0121218, -0.015489, -0.0249171, -0.0282843, 0.0215499},
 {0.0134687, 0.0242437, 0.0215499, 0.0188562, 0.0242437, 0, 0.00269374, 0.00538748, 0.0188562, 0.0148156, -0.0316514, -0.0168359, -0.00606092, -0.0168359, -0.0202031, 0.026264, 0.0249171, -0.0222234, -0.0215499, 0.0101015, -0.00942809, 0.0134687, 0.0249171, -0.0303046, -0.0020203},
 {0.0249171, 0.0148156, 0.0188562, -0.0121218, 0.0127953, 0.00673435, -0.0215499, -0.00673435, -0.0249171, -0.0175093, -0.0255905, 0.0255905, -0.00336717, 0.030978, 0.0296311, -0.000673436, -0.0228968, -0.00538748, 0.0181827, -0.00404061, 0.0148156, 0.026264, 0.00336717, 0.0222234, 0.0282843},
 {0.030978, 0.0127953, 0, -0.0195296, 0.00673435, -0.00538748, 0.00404061, 0.0208765, 0.0202031, -0.0202031, 0.0316514, 0.0222234, -0.015489, 0.00134687, 0.0114484, -0.010775, -0.0242437, -0.00471404, 0.0188562, -0.0228968, -0.0296311, 0.00673435, 0.0329983, -0.000673436, -0.0303046},
 {0.0269374, 0.0148156, 0.0208765, -0.0195296, -0.00471404, -0.0215499, -0.00404061, 0.0168359, -0.000673436, -0.00808122, -0.00875466, 0.010775, 0.00875466, -0.0222234, 0.0249171, 0.0168359, 0.015489, -0.0215499, 0.00471405, 0.0141421, 0.0175093, -0.0296311, -0.0148156, 0.0127953, -0.00673435},
 {-0.0296311, 0.00404061, 0.0215499, -0.00538748, -0.0215499, -0.0249171, -0.0141421, 0.026264, -0.00673435, 0.0127953, 0.0101015, -0.0296311, -0.00471404, -0.00875466, -0.030978, 0.00606092, -0.0101015, 0.026264, 0.0228968, 0.0114484, -0.0127953, 0.00808122, -0.015489, -0.0168359, -0.0249171},
 {-0.0114484, 0.00471405, 0.0303046, -0.00673435, -0.0249171, -0.0303046, -0.030978, -0.0202031, 0.0249171, -0.0195296, -0.0121218, -0.000673436, -0.0222234, -0.00336717, 0.0188562, 0.0255905, -0.0148156, -0.0148156, 0.0101015, -0.0134687, -0.00606092, 0.0134687, -0.0289577, -0.030978, -0.0208765},
 {-0.0269374, 0.0134687, 0.0303046, -0.0020203, 0.0208765, -0.0175093, 0.0148156, -0.0282843, 0.0141421, 0.0296311, -0.030978, -0.0141421, -0.0329983, -0.00269374, -0.0249171, 0.00875466, 0.0114484, 0.00808122, 0.0202031, -0.030978, 0.0269374, -0.00404061, -0.0269374, -0.0208765, 0.0222234},
 {0.0175093, 0.0195296, -0.0148156, 0.0188562, 0.0148156, 0.0289577, 0.00673435, -0.0208765, 0.00269374, -0.00808122, 0.0249171, -0.000673436, -0.00404061, 0.0228968, -0.0168359, -0.00269374, -0.0181827, -0.00404061, -0.0101015, -0.0329983, -0.0114484, -0.0323249, -0.00404061, 0.00269374, 0.0235702},
 {0.0114484, -0.00134687, -0.0208765, -0.0255905, 0.00673435, 0.0276108, -0.0148156, 0.0101015, -0.0101015, -0.000673436, 0.0255905, -0.0181827, 0.00134687, 0.0222234, 0.000673436, -0.00336717, 0.0296311, -0.000673436, -0.0101015, -0.00134687, -0.0329983, 0, -0.0121218, -0.00673435, 0.0195296},
 {-0.0168359, 0.0188562, -0.0127953, 0.0161624, -0.0235702, -0.0208765, 0.0316514, 0, -0.010775, -0.0329983, -0.0114484, -0.030978, 0.0181827, 0.026264, 0.0208765, 0.0195296, -0.0148156, -0.00673435, -0.0222234, 0.0242437, -0.0329983, -0.00404061, -0.0161624, -0.0020203, 0.00471405},
 {0.010775, 0.00740778, 0.0195296, -0.00404061, 0.0195296, 0.0101015, -0.030978, 0.00404061, -0.0175093, -0.030978, -0.00471404, 0.00808122, 0.0323249, -0.0329983, 0.00942809, 0.0202031, 0.0134687, -0.0303046, -0.0101015, -0.0269374, -0.00673435, -0.026264, 0.030978, -0.0181827, -0.0134687},
 {-0.0148156, -0.00269374, 0.0329983, 0.0148156, 0.0101015, -0.0188562, -0.0161624, -0.00538748, 0.0228968, 0.0101015, 0.0329983, 0.0114484, -0.00808122, -0.0141421, 0.00606092, -0.0141421, 0.0228968, -0.0127953, -0.0148156, -0.0282843, 0.0303046, 0.0296311, 0.0181827, -0.00606092, 0.00942809},
 {-0.0141421, -0.0114484, -0.0242437, -0.010775, -0.0289577, 0.0195296, -0.0276108, 0.00808122, 0.00606092, -0.0323249, 0.0242437, 0.0255905, -0.0249171, -0.0329983, 0.00808122, 0.0195296, -0.0303046, -0.0168359, 0.0222234, -0.0020203, -0.0134687, 0.00471405, 0.00808122, -0.0195296, 0},
 {0.030978, 0.0121218, 0.0255905, 0.00269374, 0.0127953, -0.00336717, 0.0296311, -0.0161624, -0.015489, -0.0222234, -0.0249171, 0.0181827, -0.0215499, -0.0121218, 0.00471405, -0.00134687, -0.0249171, -0.0329983, -0.0161624, 0.026264, 0.010775, 0.015489, 0.0181827, 0.0181827, -0.0316514},
 {-0.00673435, 0.0235702, -0.0276108, 0.0323249, 0.00673435, 0.0188562, -0.026264, 0.00336717, 0.0101015, 0.015489, -0.0195296, -0.00942809, 0.0161624, 0.00875466, 0.0235702, -0.00673435, 0.00606092, -0.0188562, -0.0242437, 0.0181827, 0.0249171, 0.0141421, -0.0316514, -0.00471404, 0.0208765},
 {0.0269374, 0.0323249, -0.0316514, 0.0121218, -0.0255905, -0.010775, 0.0148156, 0.015489, -0.00538748, 0.00269374, -0.0101015, 0.0282843, -0.000673436, -0.0242437, -0.00134687, -0.0228968, 0.00808122, 0.0175093, -0.0323249, -0.026264, 0.00740778, 0.0195296, -0.0329983, -0.00471404, 0.0101015},
 {0.00538748, 0.00808122, -0.00942809, 0.00875466, -0.0134687, -0.0202031, -0.0175093, -0.0181827, -0.0202031, 0.00808122, 0.00673435, 0.0242437, -0.00740778, -0.0255905, 0.0148156, 0.010775, -0.0215499, 0.0222234, -0.0242437, 0.030978, 0.00202031, -0.0127953, 0.0303046, -0.000673436, -0.030978},
 {-0.0215499, -0.0175093, -0.00336717, -0.00808122, 0.0222234, -0.0202031, -0.0020203, 0.00875466, 0.0269374, -0.0255905, 0.0242437, 0.0222234, -0.0141421, -0.0195296, -0.00471404, 0.0329983, 0.0222234, -0.026264, -0.00471404, -0.030978, 0.00471405, 0.00808122, -0.010775, -0.0296311, -0.0175093},
 {-0.0249171, 0.0168359, -0.0101015, 0.0175093, -0.00673435, 0.0148156, 0.0134687, -0.0208765, -0.0323249, 0.0101015, -0.0161624, -0.0323249, 0, -0.0276108, -0.0127953, -0.0141421, -0.00740778, -0.0020203, 0.0276108, 0.00942809, -0.0329983, -0.000673436, -0.0114484, 0.00471405, 0.0289577},
 {0.0316514, -0.0202031, 0.0276108, 0.00942809, 0.0228968, -0.0242437, -0.00336717, 0.0101015, 0.0195296, 0.00202031, 0.00336717, 0.0249171, 0.030978, 0.010775, 0.00471405, -0.0202031, 0.0127953, 0.0148156, -0.0101015, 0.0175093, -0.0202031, 0.0296311, -0.00404061, -0.0181827, -0.0168359},
 {-0.0148156, -0.0235702, -0.0175093, -0.0282843, 0.0316514, 0.00942809, 0.0242437, -0.0168359, 0.0202031, -0.00404061, 0.00202031, -0.015489, 0.026264, -0.0269374, 0.0202031, -0.0303046, -0.00606092, -0.00875466, -0.0168359, -0.00740778, -0.0269374, -0.0255905, 0.010775, 0.00404061, -0.0141421},
 {0.0101015, -0.0269374, 0.0202031, -0.026264, -0.0114484, 0.0222234, -0.0255905, 0.010775, 0.0249171, 0.000673436, 0.030978, 0.0249171, -0.0269374, -0.0208765, 0.0175093, 0.00808122, 0.00808122, 0.0336718, -0.0148156, -0.0303046, -0.0148156, 0.0228968, 0.0134687, 0.0242437, -0.0168359},
 {-0.0282843, -0.0188562, 0.00269374, -0.0269374, 0.0208765, -0.00471404, -0.010775, 0.0228968, -0.0276108, 0.0134687, 0.0148156, 0.0276108, -0.0188562, 0.026264, 0.0269374, 0.0235702, -0.0148156, 0.000673436, -0.0228968, 0.0296311, -0.0316514, 0.00942809, 0.0168359, 0.0255905, -0.0228968},
 {0.010775, 0.0296311, 0.00336717, 0.0161624, -0.0289577, -0.0289577, 0.0161624, -0.0235702, 0.0242437, 0.00673435, -0.0276108, 0.0222234, -0.0168359, 0.010775, -0.00875466, 0.0235702, -0.0148156, 0.0161624, -0.0188562, 0.0134687, 0.0127953, -0.00740778, -0.0242437, -0.0134687, 0.0276108},
 {0.0323249, -0.0323249, -0.030978, -0.00538748, 0.0148156, 0.00404061, -0.0134687, -0.0175093, 0.0127953, -0.0215499, -0.0101015, 0.00134687, 0.0141421, 0.0269374, 0.0316514, -0.0188562, -0.0296311, 0.00202031, 0.0276108, -0.0195296, 0.0195296, -0.0249171, 0.0276108, -0.0181827, 0.0276108},
 {-0.0329983, -0.0228968, 0.0188562, -0.0121218, -0.0121218, -0.0121218, 0.0282843, 0, -0.0276108, 0, -0.00808122, 0.0168359, -0.00942809, 0.00740778, -0.0303046, -0.0148156, 0.0202031, -0.0222234, -0.010775, -0.0181827, 0.00336717, -0.0282843, 0.0303046, 0.00808122, 0.0276108},
 {0.0269374, -0.0134687, 0.00336717, 0.0329983, 0.00606092, 0.00606092, -0.0316514, 0.010775, -0.0329983, 0.015489, 0.0127953, 0.0215499, -0.00808122, -0.00404061, -0.0276108, -0.0282843, -0.030978, -0.0282843, -0.026264, 0.026264, 0.0303046, 0.0228968, 0.026264, -0.015489, -0.00269374},
 {0.0175093, 0.00538748, -0.0195296, -0.010775, 0.0242437, -0.00538748, -0.0235702, -0.0276108, -0.00740778, -0.0255905, 0.0114484, 0.00202031, 0.0282843, -0.0127953, -0.00875466, 0.00808122, -0.00538748, -0.0114484, -0.000673436, 0.0101015, 0.030978, 0.0114484, -0.0188562, -0.030978, -0.00740778},
 {-0.000673436, 0.0222234, 0.0276108, -0.0181827, -0.0202031, 0.00134687, -0.00740778, -0.0134687, 0.0188562, 0.0208765, 0.0228968, -0.0289577, -0.000673436, -0.0101015, 0.030978, -0.0148156, 0.0303046, -0.0235702, -0.0148156, 0.030978, 0.00740778, -0.00606092, -0.0141421, -0.0255905, -0.0242437},
 {0.0202031, -0.0269374, -0.00471404, -0.0222234, -0.0289577, 0.00336717, 0.00942809, -0.0289577, -0.0208765, -0.0127953, 0.00673435, 0.00336717, -0.0121218, 0.0336718, -0.00538748, 0.0127953, 0.00134687, 0.0121218, -0.0181827, -0.0289577, -0.00740778, -0.00942809, 0.0195296, -0.0181827, -0.0242437},
 {-0.0282843, -0.0195296, 0.0222234, -0.00336717, 0.0101015, -0.0101015, 0, 0.00538748, -0.010775, 0.0242437, 0.0175093, 0.0289577, -0.0296311, 0.00336717, 0.0101015, -0.0020203, 0.030978, -0.0249171, -0.00740778, 0.010775, -0.0276108, -0.0296311, 0.00202031, 0.0161624, -0.0255905},
 {0.0168359, -0.0114484, 0.0168359, 0.0181827, 0.0127953, -0.0249171, -0.0101015, -0.00606092, -0.0222234, -0.0296311, 0.0175093, 0.0282843, 0.026264, -0.0020203, -0.0289577, 0, -0.0323249, -0.00808122, 0.00336717, 0.0134687, -0.0202031, -0.0249171, 0.00404061, -0.0242437, -0.0289577},
 {-0.0282843, 0.00740778, -0.0020203, -0.00269374, 0.00740778, 0.0208765, -0.00740778, -0.0303046, 0.0101015, 0.010775, 0.000673436, -0.0289577, -0.0316514, -0.00808122, 0.0249171, -0.00336717, 0.00808122, -0.00538748, 0.0181827, -0.0329983, 0.00202031, -0.0269374, 0.0148156, -0.00134687, 0.00269374},
 {-0.0269374, 0.00404061, -0.0249171, -0.0289577, -0.00269374, 0.0148156, -0.0168359, -0.0208765, 0.0336718, 0.00202031, -0.026264, 0.0202031, 0.00808122, -0.00269374, -0.0188562, 0.00269374, 0.00942809, 0.010775, -0.0296311, -0.00538748, 0.0141421, 0.00740778, -0.0181827, -0.015489, 0.0289577},
 {-0.00538748, 0.0242437, 0.0329983, -0.0249171, -0.0228968, -0.015489, 0.0316514, 0.00606092, -0.0020203, 0.0228968, -0.00740778, 0.0127953, -0.00942809, -0.0208765, 0.00606092, 0.0127953, 0.0235702, -0.0101015, 0.00471405, 0.0148156, 0.0181827, -0.0296311, -0.0269374, 0.0121218, 0.0282843},
 {0.00202031, 0.0329983, 0.0249171, -0.0316514, 0.00134687, -0.00942809, 0.00740778, 0.0181827, 0.0242437, 0.00471405, -0.0323249, 0.010775, 0.00740778, -0.0134687, 0.00336717, 0.0249171, 0.0336718, 0.0276108, -0.00336717, -0.0255905, 0.00875466, -0.0215499, 0.0168359, -0.00606092, -0.00942809},
 {-0.00404061, -0.00134687, -0.00471404, -0.0188562, -0.0161624, 0.0255905, 0.0161624, 0.00875466, 0.00606092, 0.0235702, -0.0242437, -0.0323249, -0.0269374, -0.0276108, 0.0269374, 0.0168359, -0.00740778, 0.0215499, -0.00606092, -0.030978, 0.0175093, -0.0134687, -0.0282843, 0.0195296, 0.0101015},
 {-0.00875466, 0.0249171, -0.026264, -0.0255905, -0.00606092, -0.0316514, 0.0101015, -0.015489, 0.0329983, -0.0020203, -0.00875466, -0.0289577, -0.0323249, 0.00202031, 0.00538748, 0.0296311, 0.000673436, 0.0215499, 0.00269374, 0.0316514, 0.000673436, -0.0175093, -0.0195296, -0.000673436, 0.0121218},
 {-0.0323249, -0.0121218, -0.00134687, 0.0161624, -0.0249171, -0.0020203, 0.0316514, -0.0249171, 0.0269374, -0.00538748, -0.0303046, -0.0020203, -0.0269374, 0.0303046, -0.0249171, 0.0316514, -0.00336717, 0.0316514, 0.0323249, -0.0175093, 0.00471405, -0.0148156, 0.026264, 0.0141421, -0.0121218},
 {-0.0208765, 0.0134687, 0.0127953, -0.010775, 0.0195296, -0.015489, 0.0269374, -0.0148156, 0.030978, 0.00808122, 0.0242437, 0.0222234, 0.00134687, -0.0249171, 0.0289577, 0.00471405, 0.010775, 0.0228968, -0.0249171, 0.0249171, 0.015489, 0.00673435, 0.0276108, 0.0208765, 0.0121218},
 {0.0276108, 0.0101015, 0.0161624, 0.00269374, 0.0114484, 0.0269374, 0.0289577, 0.0195296, 0.0181827, -0.0134687, 0.0276108, 0.0276108, 0.0215499, -0.0255905, 0.00538748, 0.0114484, -0.0242437, 0.0134687, -0.030978, -0.0101015, -0.026264, -0.00875466, -0.0188562, -0.0235702, -0.0228968},
 {-0.0202031, 0.00673435, -0.0269374, 0.0296311, 0.0134687, 0.0296311, -0.0202031, 0.0188562, -0.0323249, -0.0134687, -0.0215499, -0.0181827, 0.0195296, -0.00404061, -0.0101015, 0.015489, 0.0222234, -0.00471404, -0.000673436, 0.0208765, 0.0215499, -0.00336717, -0.0289577, 0.0235702, 0.0329983},
 {0.0202031, 0.0235702, 0.0141421, -0.0329983, 0.0255905, -0.0141421, 0.0195296, -0.0195296, -0.0161624, -0.0121218, 0.00673435, 0.015489, -0.0222234, 0.0303046, -0.0114484, 0.026264, 0.0215499, 0.0101015, -0.0235702, 0.0195296, -0.0235702, 0.0289577, 0.000673436, -0.0020203, 0.010775},
 {-0.00740778, 0.0101015, 0.015489, -0.00673435, 0.0127953, -0.0148156, 0.00336717, -0.0020203, -0.00471404, -0.00336717, 0.0269374, 0.0161624, 0.00808122, -0.0289577, 0.0148156, -0.00808122, -0.0202031, -0.0181827, -0.030978, 0.00269374, -0.0101015, 0.0195296, 0.00471405, 0.00942809, -0.0114484},
 {0.00471405, -0.0249171, 0.00269374, 0.00202031, 0.0269374, 0.00269374, -0.010775, -0.0276108, -0.0175093, -0.00942809, 0.0134687, 0.00471405, 0.0121218, -0.0208765, 0.015489, -0.030978, -0.026264, 0.0235702, 0.0255905, 0.0101015, 0.0202031, -0.0329983, 0.030978, -0.0168359, 0.0269374},
 {0.0188562, -0.00404061, -0.026264, 0.0323249, 0.0101015, -0.00538748, -0.00134687, -0.0255905, -0.0255905, -0.0242437, 0.0215499, -0.00875466, 0.0235702, 0.0269374, 0, 0.0175093, 0.0316514, -0.00740778, 0.0114484, -0.0316514, -0.0020203, 0.0121218, 0.0114484, 0.0202031, 0.0181827},
 {0.0336718, 0.0242437, -0.00404061, 0.0215499, 0.00808122, 0, -0.0195296, 0.00942809, 0.00404061, -0.0228968, 0.0195296, 0.0282843, 0, -0.0255905, 0.0134687, 0.00606092, -0.0114484, -0.0296311, 0.0202031, -0.0181827, 0.015489, -0.00538748, -0.0175093, -0.015489, 0.0296311},
 {-0.0235702, -0.0161624, -0.000673436, -0.0289577, -0.00404061, -0.0282843, -0.00673435, 0.0141421, -0.00336717, -0.00269374, -0.0208765, -0.0269374, 0.0235702, 0.0235702, -0.0249171, 0.0242437, 0.026264, 0.00875466, -0.0269374, -0.0215499, 0.0303046, 0.0329983, 0.0289577, -0.0282843, 0.0208765},
 {-0.0208765, -0.00740778, 0.0181827, -0.0195296, 0.00134687, 0.0141421, -0.0148156, 0.010775, -0.00942809, -0.0316514, -0.00134687, 0.030978, 0.0195296, 0.0188562, 0.0208765, 0.00269374, -0.00404061, 0.026264, 0.0316514, -0.00471404, 0.0168359, 0.0323249, 0.0296311, 0.0215499, 0.0316514},
 {0.00875466, -0.0235702, -0.010775, -0.0303046, -0.00471404, -0.00471404, 0.0222234, -0.0114484, -0.0215499, -0.000673436, -0.00673435, 0.0134687, -0.000673436, -0.000673436, 0.0161624, -0.0323249, -0.0202031, -0.00606092, 0.0269374, -0.0175093, 0.0202031, 0.00808122, -0.0329983, -0.0121218, -0.0249171},
 {0.0316514, 0.0255905, -0.0276108, 0.0228968, -0.0235702, -0.026264, -0.0181827, -0.0296311, -0.00606092, 0.0202031, 0.0228968, 0.00538748, -0.0249171, 0.0168359, -0.00471404, 0.00471405, 0.00269374, 0.0255905, -0.0215499, -0.0242437, -0.0114484, 0, -0.0316514, -0.0255905, -0.0228968},
 {0.0228968, 0.0188562, -0.0323249, -0.0181827, 0.0181827, -0.0148156, 0.0202031, -0.0188562, -0.00673435, 0.0235702, -0.00673435, 0.0269374, -0.0316514, 0.00269374, -0.0114484, 0.0269374, 0.0282843, -0.026264, 0.0242437, -0.010775, -0.0228968, -0.0141421, 0.0188562, -0.00875466, 0.0303046},
 {-0.010775, 0.0168359, 0.0208765, 0.00134687, -0.010775, -0.00538748, 0.0215499, 0.00942809, 0, -0.0195296, -0.0161624, 0.0208765, -0.00269374, 0.0249171, 0.0329983, 0.0175093, 0.0121218, 0.0316514, -0.0323249, -0.0168359, 0.0336718, -0.0323249, -0.0134687, 0.0296311, 0.0255905},
 {0.010775, -0.00606092, -0.0114484, -0.0316514, 0.0303046, 0.0188562, 0.0242437, 0.00606092, -0.00269374, 0.026264, -0.0276108, -0.0269374, -0.00875466, -0.0188562, -0.00336717, -0.0222234, 0.0195296, 0.00875466, -0.0242437, -0.0222234, -0.0101015, -0.0134687, -0.00808122, -0.0235702, 0.0101015},
 {-0.030978, -0.0228968, -0.00740778, -0.0303046, 0.0282843, -0.00134687, -0.0141421, 0.0323249, 0.00269374, -0.00606092, 0.0127953, -0.030978, -0.0228968, 0.0276108, -0.00942809, 0.00404061, 0.0215499, 0.00404061, -0.0296311, 0.015489, -0.0121218, 0.0134687, -0.0161624, -0.0282843, -0.0175093},
 {0.0242437, 0.00269374, -0.00538748, -0.0181827, 0.00269374, 0.00808122, 0.0235702, 0.00942809, 0.026264, -0.0168359, -0.0255905, 0.00606092, 0.0282843, 0.000673436, -0.0175093, 0.0208765, -0.0329983, -0.00269374, -0.0148156, 0.0181827, -0.0148156, 0.0303046, 0.0296311, 0.0323249, 0.0228968},
 {0.0336718, 0.0228968, -0.0175093, 0.0269374, 0.0114484, -0.00875466, -0.0181827, -0.0148156, -0.0208765, -0.0175093, -0.010775, -0.0242437, 0.00404061, 0.0249171, 0.00269374, 0.00134687, 0.000673436, 0.0296311, 0.0175093, -0.0289577, -0.0181827, -0.000673436, 0.0329983, 0.0235702, -0.0208765},
 {0.0222234, -0.00942809, -0.00336717, -0.00740778, -0.0235702, 0, 0.0235702, -0.0168359, -0.0195296, -0.00336717, -0.00740778, -0.0188562, 0.0329983, 0.0282843, 0.0141421, -0.0208765, 0.0181827, -0.0195296, -0.0282843, -0.0255905, -0.000673436, 0.00606092, -0.0222234, -0.0175093, 0.0121218},
 {0.0228968, 0.00134687, 0.000673436, 0.0249171, 0.0175093, -0.00134687, 0.0255905, -0.0181827, -0.015489, 0.0336718, -0.0181827, -0.0215499, -0.000673436, -0.0195296, 0.015489, 0, 0.00740778, -0.0134687, 0.000673436, 0.0175093, 0.0208765, -0.0296311, -0.00740778, -0.0175093, -0.0188562},
 {-0.0121218, -0.0202031, 0.0121218, 0.000673436, 0.0235702, 0.0303046, 0.00202031, 0.00269374, 0.0296311, -0.0296311, -0.000673436, 0.00202031, -0.00471404, 0.00606092, -0.0127953, -0.0168359, 0.00808122, -0.0161624, -0.0276108, 0.0255905, -0.0282843, -0.0175093, 0.0323249, 0.0101015, -0.00808122},
 {-0.0296311, -0.0296311, 0.0114484, 0.0296311, -0.00808122, 0.0175093, 0.0222234, 0.0228968, -0.010775, 0.0188562, 0.00336717, 0.00942809, 0.0289577, 0.0222234, 0.0276108, 0.0175093, -0.0235702, 0.0282843, -0.00740778, 0.00269374, -0.0161624, 0.0249171, -0.0255905, -0.0255905, 0.0336718},
 {-0.0188562, 0.0329983, -0.0303046, 0.00606092, -0.010775, -0.00942809, -0.0303046, -0.0303046, 0.0148156, -0.00606092, -0.0202031, 0.010775, -0.00606092, -0.00942809, -0.0296311, 0.0255905, 0.00606092, 0.0336718, 0.0114484, -0.0127953, -0.0202031, 0.0202031, -0.0114484, 0.00942809, 0.0215499},
 {0.00471405, -0.0323249, 0.000673436, 0.00740778, -0.00538748, 0.0175093, -0.00673435, -0.0168359, 0.0242437, -0.0296311, 0.0175093, 0.0323249, 0.0228968, -0.0181827, -0.00134687, 0.00471405, -0.0114484, 0.0175093, -0.0235702, 0.0121218, 0.030978, -0.0303046, -0.00269374, 0.000673436, 0.00606092},
 {-0.0134687, -0.030978, -0.0188562, 0.00875466, 0.0121218, 0.0188562, 0.015489, -0.0188562, 0.0114484, -0.00875466, 0.0269374, 0.00942809, -0.0127953, 0.026264, -0.00808122, -0.0303046, -0.00606092, 0.0141421, -0.0181827, -0.00269374, 0.0336718, -0.00740778, -0.00740778, -0.0020203, 0.0269374},
 {-0.00942809, 0.0175093, -0.015489, 0.0181827, 0.00606092, -0.0101015, 0.015489, -0.0316514, -0.0161624, 0.0161624, -0.030978, 0.0195296, 0.0114484, -0.0296311, -0.00538748, 0.0255905, -0.00740778, -0.030978, 0.00404061, -0.026264, 0.0228968, -0.00269374, -0.0329983, -0.010775, 0.00538748},
 {0.0148156, -0.0296311, -0.0114484, -0.0161624, -0.00606092, -0.0208765, -0.0101015, -0.0296311, 0.00740778, 0.0242437, -0.00673435, -0.0168359, 0.0168359, 0.0235702, -0.0323249, 0.0161624, -0.0242437, 0.0188562, -0.0121218, 0.0255905, 0.015489, 0.00808122, 0.0303046, 0.0289577, -0.000673436},
 {-0.0269374, -0.0255905, 0.00942809, -0.0255905, 0.026264, 0.00538748, -0.0127953, -0.0296311, -0.0323249, -0.030978, 0.0323249, 0.00875466, 0.000673436, 0.0215499, -0.00673435, 0.0168359, 0.0323249, -0.0121218, 0, -0.0020203, -0.00471404, -0.0228968, -0.0127953, 0.00269374, -0.0175093},
 {-0.0148156, -0.030978, -0.0329983, -0.00269374, -0.0215499, 0.0195296, 0.0269374, -0.0188562, -0.0222234, 0.0114484, -0.0235702, -0.0202031, 0.010775, -0.0101015, -0.0269374, 0, 0.0303046, 0.0255905, 0.0202031, 0.0249171, -0.0228968, 0.00471405, -0.00808122, 0.0181827, 0.0168359},
 {0.0188562, 0.0336718, 0.0141421, 0.00740778, 0.0303046, 0.0282843, 0.0168359, 0.0134687, 0.0121218, -0.0303046, 0.0235702, -0.015489, -0.0020203, -0.0323249, 0.0329983, -0.000673436, -0.00404061, -0.00606092, -0.0249171, -0.00875466, 0, 0.0289577, 0.0235702, -0.00269374, -0.0188562},
 {0.0276108, 0.00336717, 0.0161624, -0.0127953, -0.0188562, 0.0188562, 0.00808122, 0.0282843, -0.0289577, 0.030978, 0.0175093, 0.0242437, 0.0289577, 0.0127953, 0.0289577, -0.0235702, -0.0161624, 0.0222234, 0.0215499, -0.0127953, 0.030978, -0.0329983, -0.0202031, -0.00336717, -0.0148156},
 {0.0134687, -0.015489, 0.0269374, 0.0316514, -0.0303046, -0.00269374, 0.0249171, 0.0175093, 0.00942809, -0.0329983, 0.0101015, -0.0242437, -0.0282843, -0.0195296, 0.0235702, -0.010775, -0.0242437, -0.00134687, 0.0175093, -0.00134687, 0.015489, 0.0269374, -0.0296311, 0.0323249, -0.0269374},
 {-0.0282843, -0.0181827, -0.0228968, 0.0168359, 0.00740778, 0.00404061, -0.0316514, 0.0276108, -0.0316514, 0.0188562, 0.0249171, -0.0161624, -0.00673435, -0.00404061, -0.0242437, 0.0296311, -0.0148156, -0.0228968, 0.0101015, 0.0222234, 0.0235702, -0.0249171, -0.0323249, -0.0175093, 0.00606092},
 {0.0188562, -0.0175093, 0.00336717, -0.0329983, -0.0235702, 0.0303046, -0.0228968, 0.0329983, -0.030978, 0.0282843, -0.0316514, 0.0161624, -0.0316514, -0.0235702, 0.015489, 0.00538748, -0.0276108, -0.000673436, -0.0168359, -0.0296311, -0.0323249, -0.0329983, 0.0303046, 0.0175093, -0.0141421},
 {-0.0316514, 0.0114484, -0.00606092, 0.00740778, 0.0127953, -0.0134687, -0.0020203, -0.0148156, 0.00471405, -0.0249171, -0.00808122, 0.0249171, -0.0249171, 0.0202031, 0.0303046, 0.0134687, -0.00740778, -0.0181827, 0.00673435, 0.0249171, -0.0235702, 0.0208765, 0.00202031, -0.0242437, -0.0282843},
 {-0.00875466, 0.0127953, 0.0127953, -0.00538748, 0.0161624, -0.00673435, -0.0114484, 0.010775, -0.0282843, 0, -0.00134687, 0.00673435, 0.0188562, 0.00538748, -0.0202031, 0.0121218, -0.00673435, 0.0127953, 0.00740778, -0.0282843, 0.0195296, -0.0148156, 0.0303046, -0.00875466, 0.00808122},
 {0.00202031, -0.0208765, -0.00808122, -0.0215499, -0.0020203, -0.0101015, 0.0276108, 0.0188562, -0.0148156, 0.0329983, 0.030978, -0.0235702, -0.0127953, 0, 0.0188562, 0.0249171, 0.00134687, -0.0168359, -0.0296311, 0.015489, -0.0195296, 0.0228968, -0.0181827, -0.00673435, -0.015489},
 {0.0202031, 0.0336718, -0.0020203, -0.0228968, 0.0215499, -0.000673436, -0.00808122, 0.0195296, 0.0134687, -0.0181827, -0.000673436, 0.030978, -0.00404061, -0.0134687, -0.0323249, 0.000673436, -0.0255905, 0.0141421, 0.00875466, -0.00740778, 0.0242437, -0.00808122, -0.0296311, -0.010775, 0.00606092},
 {-0.0141421, -0.00875466, 0.0208765, -0.0202031, -0.0215499, -0.00336717, 0.030978, 0, 0.0228968, -0.0329983, -0.00875466, 0.015489, 0.0121218, -0.010775, 0.0255905, 0.00134687, 0.0121218, 0.0242437, 0.00875466, 0.0329983, -0.00606092, -0.000673436, 0.00942809, 0.00202031, -0.010775},
 {-0.00269374, -0.026264, -0.0303046, -0.0181827, -0.0255905, 0.0228968, -0.0269374, 0.0101015, 0.00336717, -0.0188562, -0.00336717, 0.00606092, 0.0303046, -0.0249171, 0.00538748, 0.00740778, 0.0121218, -0.0181827, 0.0148156, -0.0215499, 0.0141421, -0.0249171, 0.0101015, -0.0161624, -0.0276108},
 {0.0188562, 0.0329983, 0.0249171, -0.0269374, -0.0127953, 0.0282843, 0.015489, -0.00740778, 0.0101015, 0.00875466, 0.0276108, 0.0303046, 0.0255905, 0.0269374, 0.00740778, 0.00942809, 0.00202031, 0.00673435, 0.0276108, 0.0195296, -0.00808122, 0.0134687, -0.0282843, -0.0316514, 0.0242437},
 {0.0134687, -0.0134687, -0.0329983, 0.00673435, -0.0303046, 0.0208765, 0.00808122, -0.0296311, -0.0296311, 0.0215499, -0.010775, -0.0020203, 0.0289577, -0.0195296, -0.0289577, -0.000673436, -0.0148156, 0.030978, 0.010775, 0.00606092, 0.00269374, -0.0148156, -0.00740778, -0.00471404, -0.0101015},
 {0.00875466, 0.0141421, 0.0195296, -0.0202031, 0.0282843, -0.00336717, -0.0181827, -0.0134687, 0.030978, -0.0208765, -0.0249171, -0.0181827, -0.0228968, 0.0316514, 0.00269374, 0.0249171, -0.0222234, -0.0202031, 0.00471405, 0.0249171, 0.00673435, 0.0303046, 0.0195296, 0.00404061, -0.0121218},
 {-0.00740778, 0.0249171, 0.0161624, 0.00202031, 0.010775, 0.00875466, -0.0188562, 0.0215499, -0.0101015, 0.030978, 0.0255905, -0.0289577, -0.00740778, 0.0188562, -0.00673435, 0.00673435, 0.0222234, -0.0222234, -0.0161624, 0.00269374, 0.00336717, -0.0303046, 0, 0.0202031, 0.026264},
 {0.00673435, 0.0114484, 0.0242437, -0.00538748, -0.0168359, -0.0282843, 0.0188562, 0.0269374, -0.00538748, 0.0127953, 0.0188562, 0.030978, 0.0215499, 0.00740778, -0.0121218, -0.00942809, 0.0222234, 0.000673436, -0.00740778, 0.00471405, 0.0289577, -0.00740778, -0.00740778, -0.0235702, -0.0276108},
 {-0.00336717, 0.0249171, -0.00808122, 0.015489, -0.0289577, -0.030978, -0.00404061, 0, 0.0134687, -0.00404061, -0.0276108, 0.0161624, 0.00336717, -0.00875466, -0.0175093, 0.0289577, -0.0276108, -0.0101015, -0.0114484, 0.0168359, 0.00875466, -0.0323249, -0.0228968, -0.015489, 0.026264},
 {-0.0215499, 0.0222234, 0.0134687, -0.00471404, 0.0215499, 0.0303046, 0.00606092, -0.0282843, 0.0276108, -0.0296311, -0.0222234, -0.00269374, -0.0161624, 0.0336718, -0.0323249, -0.030978, 0.00202031, -0.0303046, 0.0222234, 0.0181827, -0.0121218, -0.0255905, 0.0175093, -0.0276108, 0.00471405},
 {0.0222234, -0.0329983, -0.00942809, -0.0188562, 0.00875466, 0.0303046, 0.00942809, -0.0202031, -0.0269374, 0.00673435, -0.0222234, -0.00269374, 0.0222234, -0.0235702, 0.0303046, -0.0215499, -0.0289577, 0.00942809, -0.0148156, -0.0282843, 0.0269374, -0.0101015, 0.00673435, -0.026264, -0.00538748},
 {-0.0269374, 0.00740778, 0.0242437, 0.0222234, 0.0188562, -0.0222234, -0.0195296, -0.010775, -0.0282843, 0.0255905, -0.0181827, -0.00134687, 0.00875466, -0.00942809, -0.0323249, -0.00538748, 0.00740778, 0.0289577, 0.0168359, 0.0141421, 0.00336717, -0.010775, 0.0289577, -0.0222234, -0.0329983},
 {-0.0161624, 0.0148156, 0.030978, -0.0296311, -0.0316514, 0.00202031, 0.00606092, -0.0148156, 0.0127953, -0.00808122, -0.010775, -0.0134687, 0.0188562, -0.00538748, 0.0121218, 0.0121218, -0.015489, -0.0114484, 0.0336718, 0.0222234, -0.0228968, 0.0249171, 0.0282843, 0.00202031, 0.026264},
 {-0.015489, 0.0329983, -0.0202031, 0.0249171, 0.0222234, -0.0114484, -0.015489, 0.0303046, 0.0323249, 0.0276108, 0.00740778, 0.0195296, 0.026264, -0.0141421, -0.0269374, 0.030978, -0.00404061, -0.0329983, -0.0303046, 0.0242437, -0.0181827, -0.00808122, -0.00336717, 0.00606092, -0.026264},
 {-0.00606092, 0.0114484, -0.00134687, -0.0141421, 0.0148156, 0.0134687, -0.0202031, 0.0114484, -0.0289577, 0.00808122, 0.0114484, -0.00875466, 0.00808122, -0.00134687, 0.0242437, 0.0296311, 0.0255905, -0.0296311, 0, -0.0020203, 0.000673436, -0.0269374, 0.0175093, -0.0148156, -0.0208765},
 {0, -0.00606092, -0.0175093, -0.0181827, -0.000673436, -0.0276108, -0.0249171, 0.0249171, 0.00134687, -0.026264, 0.0208765, -0.015489, 0.0208765, -0.0020203, -0.0242437, -0.00134687, 0.00942809, 0.0148156, 0.0188562, -0.0289577, -0.00134687, 0.0282843, 0.0235702, 0.0195296, 0},
 {-0.00740778, 0.0329983, 0.0228968, -0.00875466, -0.0134687, 0.0121218, -0.0289577, 0.00740778, 0.00471405, -0.0202031, 0.010775, 0.0188562, 0.015489, -0.0114484, -0.0141421, 0.0228968, 0.00673435, 0.0296311, 0.0242437, -0.00471404, -0.0134687, -0.0303046, 0.030978, 0.0168359, 0.0282843},
 {-0.0249171, -0.0222234, 0.00471405, 0.0141421, 0.00269374, -0.0202031, 0.00202031, 0.030978, -0.0127953, -0.00606092, 0.0255905, 0.0181827, 0.010775, 0.0215499, 0.0114484, -0.00875466, -0.0235702, -0.0101015, -0.010775, -0.0228968, -0.0228968, 0.0195296, 0.0228968, 0.0188562, -0.00942809},
 {-0.015489, 0.0303046, -0.0276108, -0.00336717, 0.00202031, 0.00538748, 0.0168359, -0.00538748, 0.0114484, -0.010775, 0.00538748, -0.0329983, 0.00740778, -0.0255905, -0.0329983, 0.0228968, -0.0020203, 0.00740778, 0.00673435, 0.026264, 0.00875466, -0.0114484, 0.0215499, -0.00942809, -0.0289577},
 {-0.026264, 0.00673435, -0.010775, 0.030978, -0.0316514, 0.0242437, -0.026264, 0.00942809, 0.0222234, -0.030978, 0.00404061, 0.000673436, 0.0316514, 0.0228968, -0.00808122, 0.00606092, 0.0161624, -0.00471404, 0.00942809, 0.010775, 0.0235702, 0.00134687, -0.00404061, -0.0255905, 0.0168359},
 {0.0175093, 0.0141421, -0.0255905, 0.0195296, -0.0175093, -0.026264, -0.00942809, -0.0316514, 0.026264, -0.0188562, -0.00134687, -0.0329983, -0.0215499, -0.0148156, 0.00875466, -0.0255905, 0.0188562, 0.0114484, 0.0188562, 0.00134687, 0.0316514, -0.015489, 0.0114484, 0.0134687, 0.00740778},
 {0.00134687, 0.0222234, -0.0249171, -0.0329983, 0.0188562, -0.0020203, 0.00202031, 0.0242437, -0.0134687, -0.0323249, -0.0255905, -0.0255905, 0.0282843, 0.026264, 0.000673436, -0.0235702, 0, 0.0289577, 0.0161624, 0, -0.0249171, -0.0276108, -0.0175093, 0.0323249, 0.0329983},
 {-0.00740778, -0.0323249, -0.0101015, -0.00942809, 0.026264, 0.0276108, 0.0255905, -0.0269374, -0.0020203, 0.00538748, -0.0249171, -0.00269374, 0.0202031, 0.00471405, -0.0222234, 0.0148156, -0.00740778, 0.00740778, -0.00336717, -0.0329983, 0.0181827, 0.0175093, -0.0114484, 0.0303046, 0.0249171},
 {-0.0242437, -0.0168359, -0.0255905, 0.0127953, -0.00606092, -0.00606092, -0.0127953, -0.00134687, 0, -0.0195296, 0.0269374, 0.0161624, 0.00942809, 0, -0.00606092, -0.0175093, 0.0289577, -0.0101015, 0.0202031, 0.0134687, -0.00336717, -0.0141421, -0.00538748, -0.0228968, 0.0249171},
 {-0.0269374, -0.00269374, 0.00606092, 0.0134687, 0.0323249, 0.00740778, 0.0323249, -0.00134687, 0.0282843, -0.0127953, 0.015489, -0.00673435, 0, 0.030978, -0.0161624, 0.0323249, -0.00336717, -0.0228968, -0.030978, -0.0296311, 0.0141421, 0.00808122, 0.0121218, 0.0175093, 0.0127953},
 {-0.00875466, -0.0148156, 0.00404061, 0.0195296, -0.0255905, -0.0235702, -0.0114484, 0.000673436, -0.00606092, 0.00942809, 0.0134687, -0.0296311, -0.0175093, 0.00740778, 0.0208765, -0.015489, -0.030978, -0.00134687, 0.0141421, 0.0175093, -0.0269374, 0.00808122, 0.0134687, 0.0282843, -0.00269374},
 {-0.010775, -0.0316514, 0.00336717, -0.00471404, -0.0228968, 0.0134687, -0.0235702, 0.0282843, -0.0195296, 0.0127953, 0.015489, 0.00269374, 0.0269374, 0.0289577, 0.0202031, 0.0188562, 0.0235702, -0.00875466, 0.00538748, -0.015489, 0.00875466, 0.00673435, 0.0101015, -0.0316514, -0.0202031},
 {0.0101015, -0.010775, 0.0255905, 0.0276108, -0.0303046, 0.00538748, 0.0215499, -0.0208765, 0.0235702, -0.0276108, 0.00471405, 0.0235702, -0.00875466, 0.0269374, 0.0316514, -0.0208765, 0.00808122, 0.0303046, -0.00942809, -0.0269374, -0.00875466, 0.0127953, 0.00606092, 0, -0.00269374},
 {0.00740778, -0.0114484, 0.00942809, 0.00202031, 0.00336717, -0.0161624, -0.0208765, -0.0141421, 0.0316514, -0.0276108, -0.0202031, -0.0121218, -0.00942809, 0.0127953, -0.026264, -0.0242437, -0.0228968, -0.0168359, -0.0161624, -0.00740778, -0.0249171, -0.0202031, -0.010775, -0.030978, -0.0235702},
 {-0.00538748, 0.030978, 0.00134687, 0.0276108, -0.00875466, 0.0336718, -0.0195296, -0.00673435, 0.0222234, -0.0289577, 0.0276108, 0.0168359, -0.0228968, 0.0101015, 0.000673436, 0.00673435, 0.00336717, -0.00808122, 0, 0.0336718, -0.00673435, -0.0255905, 0.0175093, 0.00134687, 0.015489},
 {0.0148156, -0.0121218, -0.0249171, 0.0303046, -0.00269374, -0.0195296, 0.0249171, -0.0235702, 0.0276108, 0.0208765, 0.0282843, -0.00606092, -0.0101015, 0.0127953, 0.000673436, -0.0168359, -0.0215499, -0.0282843, 0.0222234, 0.00202031, -0.0208765, -0.0215499, -0.026264, 0.0134687, -0.0148156},
 {-0.0249171, -0.026264, -0.00673435, 0.0316514, 0.00673435, -0.00471404, -0.0316514, 0.0168359, 0.0303046, -0.00606092, -0.0188562, 0.0168359, 0.0134687, 0.00404061, -0.0269374, -0.0202031, -0.0255905, 0.0235702, -0.0175093, 0.0336718, 0.015489, 0.0121218, 0.0296311, 0.0242437, 0.00202031},
 {-0.0134687, -0.0235702, -0.0323249, -0.0269374, -0.0208765, -0.0316514, 0.00336717, 0.0188562, -0.00134687, 0.0148156, 0.0161624, -0.0134687, -0.0168359, -0.00673435, 0.0269374, -0.0323249, 0.00740778, 0.0276108, 0.0303046, -0.0289577, 0.00875466, 0.00606092, -0.0181827, -0.0181827, -0.0282843},
 {-0.0249171, -0.0282843, 0.0141421, -0.0188562, -0.0323249, -0.0303046, 0.0175093, 0.0276108, -0.015489, -0.0195296, -0.00942809, -0.0255905, 0.0255905, 0.0235702, 0.0188562, 0.0255905, 0.0168359, -0.0249171, 0.00134687, -0.00404061, -0.00808122, 0.0242437, -0.0289577, -0.00134687, -0.0323249},
 {-0.0235702, 0.0303046, -0.0127953, 0.0134687, 0.0121218, 0.0303046, 0.0114484, 0.0296311, 0.0141421, 0.00471405, 0.0175093, -0.0242437, 0.00875466, 0.00269374, 0.0181827, -0.00404061, 0.0296311, -0.00471404, -0.0208765, 0.00673435, -0.00942809, 0.0148156, 0.0127953, 0.0235702, 0},
 {0.0282843, -0.00740778, -0.0181827, -0.0276108, -0.00471404, -0.00336717, 0.00134687, -0.0195296, 0.00875466, 0.0114484, -0.00808122, 0.030978, -0.0127953, -0.0303046, 0.00202031, 0.0127953, 0.0235702, -0.010775, -0.00471404, 0.0249171, 0.0121218, 0.00202031, -0.015489, 0.015489, -0.0255905},
 {-0.0202031, 0.0228968, -0.00404061, -0.0101015, 0.0323249, -0.00673435, 0.0181827, 0.0255905, 0.0255905, 0.0134687, 0.0188562, -0.00673435, -0.0289577, 0.0249171, -0.00740778, 0.0134687, 0.00808122, -0.00404061, 0.0336718, -0.0255905, -0.0282843, 0.0316514, 0.0175093, -0.0148156, 0.0269374},
 {-0.0316514, 0.0249171, -0.0255905, -0.0316514, -0.0020203, -0.0303046, -0.00404061, 0.0148156, 0.0329983, -0.00942809, 0.0303046, -0.0020203, 0.0276108, 0.0168359, -0.00471404, 0.00336717, -0.030978, 0.0188562, 0.00875466, 0.00808122, 0.00606092, 0.0114484, -0.0141421, -0.0303046, 0.0161624},
 {0.0249171, -0.0127953, 0.0276108, -0.0303046, 0.00808122, 0.010775, 0.0114484, 0.0336718, 0.0282843, 0.0255905, 0.00875466, -0.0269374, 0.015489, 0.0269374, 0.0255905, -0.0127953, -0.00538748, -0.0303046, 0.00942809, 0.0276108, -0.00942809, 0.0134687, -0.00471404, 0.030978, 0.0242437},
 {-0.00875466, 0.0202031, -0.0329983, -0.00134687, -0.0141421, 0.0101015, -0.0121218, 0.026264, -0.00336717, 0.026264, -0.0255905, -0.00134687, -0.00404061, -0.00606092, -0.0316514, 0.030978, 0.0242437, -0.0323249, -0.0020203, 0.0121218, 0, 0.0336718, 0.0269374, 0, -0.0141421},
 {-0.00336717, -0.0289577, -0.00471404, 0.0282843, -0.0114484, 0.0276108, -0.0235702, 0, -0.010775, 0.0282843, -0.0296311, 0.0215499, -0.0329983, 0.0141421, 0.0175093, 0.030978, -0.0323249, -0.00269374, -0.015489, -0.0242437, 0.00404061, -0.0329983, 0.0228968, 0.0161624, -0.00471404},
 {-0.0282843, 0.00538748, -0.0202031, -0.0127953, -0.0329983, -0.0222234, 0.0222234, -0.0222234, -0.00336717, -0.00336717, -0.0269374, 0.00404061, 0.0222234, -0.00134687, -0.015489, 0.0242437, 0.00875466, 0.0316514, 0.0303046, 0.015489, 0.0336718, 0.026264, -0.0175093, -0.0175093, -0.0222234},
 {0.0296311, 0.00606092, -0.0161624, -0.030978, 0.0208765, -0.0235702, 0.00875466, -0.0114484, 0.0276108, -0.00336717, -0.0255905, 0.0161624, 0.00404061, -0.0121218, -0.010775, -0.0323249, -0.026264, 0.0181827, 0.00606092, -0.0175093, 0.0276108, -0.0114484, -0.0242437, 0.00538748, 0.0168359},
 {-0.00538748, 0.0329983, -0.0127953, -0.0121218, -0.0249171, -0.0228968, 0.0141421, -0.00875466, -0.0255905, 0, 0.0101015, -0.026264, 0.0148156, -0.0020203, 0.00471405, -0.0148156, -0.0276108, -0.0296311, 0.0289577, -0.0222234, -0.00134687, -0.0202031, 0.00269374, 0.0282843, 0.00942809},
 {-0.0188562, 0.0208765, -0.00673435, -0.015489, -0.0181827, -0.00538748, -0.000673436, -0.00538748, 0.0336718, 0.0148156, -0.0101015, 0.0202031, 0.00202031, 0.00606092, -0.0329983, -0.0228968, 0.0148156, -0.026264, 0.00942809, 0.0127953, -0.0188562, 0.0127953, -0.0222234, -0.00673435, -0.00538748},
 {0.0114484, -0.00471404, -0.00875466, -0.0175093, 0.0188562, -0.0175093, -0.0181827, -0.0228968, 0.000673436, -0.00538748, 0.030978, 0.0296311, 0.00673435, 0.0289577, 0.0249171, 0.0208765, 0.00134687, 0.0336718, -0.0127953, 0.00875466, -0.0127953, -0.030978, 0.0296311, -0.00875466, -0.0215499},
 {0.0202031, 0.0296311, -0.0316514, 0.00202031, 0.0215499, -0.0222234, 0.0323249, 0.0141421, -0.0296311, -0.0161624, 0.00134687, -0.0255905, -0.0020203, 0.0296311, 0.0336718, -0.0121218, -0.00471404, -0.0195296, -0.0276108, 0.0282843, 0.00740778, -0.0228968, 0.0168359, -0.0175093, 0.0296311},
 {0.0215499, -0.0249171, -0.00538748, 0.0282843, -0.0101015, -0.0127953, 0.0296311, 0.0161624, -0.0121218, 0.0222234, -0.00336717, 0.00134687, -0.00538748, -0.0249171, -0.0329983, -0.0188562, -0.010775, -0.0282843, 0.00471405, 0.0242437, 0.00336717, 0.0296311, 0.0215499, -0.0215499, 0.026264},
 {0.00942809, 0.00404061, 0.00808122, -0.0276108, -0.0276108, -0.00269374, 0.0276108, -0.0235702, 0.0242437, 0.0329983, -0.0276108, 0.00202031, -0.0168359, -0.0141421, 0.0336718, 0.0114484, -0.0303046, -0.0175093, 0.0276108, 0.0329983, 0.0249171, -0.0181827, -0.00471404, -0.0134687, -0.00404061},
 {-0.0215499, 0.0228968, 0.00808122, -0.00606092, 0.00673435, -0.0181827, -0.00538748, 0.00471405, -0.000673436, 0.0188562, 0.00471405, 0.0323249, 0.0121218, -0.0296311, 0.0255905, 0.00269374, 0.00134687, -0.0255905, -0.0269374, 0.0195296, -0.0303046, 0.0242437, 0.00740778, -0.026264, -0.0215499},
 {0.0276108, -0.00942809, 0.00942809, 0.0228968, 0.0202031, 0.00538748, 0.0303046, -0.00471404, 0.0188562, -0.0282843, 0.0276108, 0.0215499, -0.0148156, 0.026264, 0.0215499, -0.00808122, -0.0101015, 0.0336718, 0.0175093, -0.0296311, -0.0148156, -0.0161624, -0.00875466, -0.0242437, 0.0336718},
 {0.0161624, -0.0276108, 0.00202031, 0.0323249, -0.00673435, -0.0134687, -0.0161624, -0.0148156, 0.00740778, -0.000673436, -0.030978, -0.0235702, 0.0114484, -0.0141421, -0.00471404, -0.00606092, -0.0222234, -0.0134687, 0.00538748, 0.00134687, 0.0316514, -0.0296311, 0.00202031, -0.0296311, 0.0282843},
 {0.0228968, 0.00471405, 0.0114484, 0.00740778, -0.0242437, -0.000673436, -0.026264, -0.0127953, 0.00606092, -0.00336717, 0.0188562, -0.0269374, 0.0242437, 0.0269374, 0.00740778, -0.010775, 0.0222234, -0.00740778, 0.0255905, -0.0242437, 0.0222234, -0.00404061, 0.00673435, 0.00606092, -0.0141421},
 {0.0215499, -0.0249171, 0.00673435, 0.0114484, -0.0282843, -0.0148156, 0.000673436, -0.0121218, -0.0269374, 0.0175093, -0.0289577, -0.0168359, -0.0168359, -0.0235702, -0.0329983, -0.0121218, 0.00134687, -0.0329983, -0.0228968, 0.00269374, 0.015489, 0.0249171, 0.00942809, 0.00134687, -0.0114484},
 {0.0141421, -0.015489, 0.0208765, 0.0175093, -0.0269374, -0.00740778, 0.0222234, 0.0276108, -0.00336717, -0.00875466, 0.015489, 0.0121218, -0.0228968, 0.0188562, 0.0289577, -0.00538748, 0, -0.0168359, -0.0161624, 0.000673436, 0.0134687, -0.00808122, 0.0255905, 0.0336718, 0.0276108},
 {0.0249171, 0.0269374, 0.0188562, 0.015489, -0.0134687, -0.00808122, -0.00538748, 0, -0.0175093, 0.0127953, -0.0323249, 0.00942809, 0.0161624, 0.0148156, 0.0215499, -0.00404061, -0.0235702, 0.0188562, 0.0303046, -0.0148156, -0.00942809, 0.0303046, -0.00942809, -0.030978, -0.0215499},
 {-0.0195296, -0.0228968, -0.00269374, 0.00471405, -0.00134687, -0.030978, 0.0188562, -0.0289577, -0.00942809, 0.0282843, -0.0020203, -0.0235702, -0.00875466, 0.0235702, -0.00134687, 0.00673435, -0.0127953, -0.000673436, 0.00740778, -0.0020203, 0.0282843, 0.0228968, 0.0148156, 0.015489, 0.0168359},
 {0.00538748, -0.0316514, 0.0208765, 0.00808122, -0.0249171, -0.0168359, -0.0276108, 0.0296311, -0.00942809, 0.0228968, 0.0188562, 0.015489, -0.00538748, 0.0141421, 0.0235702, 0.0329983, 0, -0.00875466, 0.00404061, -0.00740778, -0.030978, 0.0168359, 0.0134687, 0.0228968, 0.0148156},
 {-0.0181827, -0.0228968, 0.0148156, -0.0249171, -0.0141421, -0.00471404, 0.0276108, 0.0276108, -0.0276108, -0.026264, 0.00202031, 0.0134687, -0.0329983, -0.000673436, 0, -0.00875466, 0.00134687, -0.0228968, 0.0188562, 0.0141421, -0.00740778, 0.00269374, -0.0101015, -0.0269374, 0.0289577},
 {-0.0141421, -0.0161624, 0.0336718, 0.0148156, 0.0181827, -0.0222234, 0.0269374, -0.0316514, 0.0303046, 0.0148156, -0.00336717, -0.00808122, 0.000673436, 0.00740778, 0.0114484, 0.0282843, 0.0296311, 0.00471405, -0.0134687, -0.0222234, 0.0289577, -0.00606092, 0.0202031, 0.0329983, -0.015489},
 {0.00942809, 0.030978, 0.0101015, 0.00202031, -0.0141421, -0.00269374, -0.030978, 0.0336718, 0.00875466, -0.00740778, -0.0282843, 0.00538748, 0.0168359, -0.00808122, -0.0208765, 0.00134687, 0.00202031, -0.0202031, 0.0255905, 0.0195296, 0.00673435, -0.00134687, -0.0101015, -0.00134687, -0.00875466},
 {0.00336717, 0.0148156, -0.0127953, 0.0208765, -0.00673435, -0.015489, 0.0303046, 0.00538748, 0.00538748, 0.0303046, 0.00875466, -0.00269374, 0.0181827, -0.0161624, -0.00269374, -0.010775, -0.0121218, 0.0249171, 0.0208765, 0.0215499, 0.0134687, -0.0181827, -0.0121218, 0.0101015, 0.0101015},
 {0.00336717, 0.00471405, 0.0323249, 0.0303046, -0.0282843, -0.0188562, -0.0222234, 0.0141421, -0.00606092, -0.0202031, 0.0114484, -0.0020203, -0.00942809, -0.0168359, 0.0195296, -0.0215499, -0.0161624, -0.00606092, 0.0316514, -0.0303046, -0.0127953, 0, -0.00875466, 0.0188562, -0.00134687},
 {0.00538748, -0.0303046, -0.0114484, -0.00673435, -0.00740778, -0.00336717, 0.0296311, -0.00404061, 0.0282843, 0.0222234, 0.00269374, -0.00740778, -0.0222234, -0.0181827, 0.00336717, -0.0222234, -0.00538748, 0.0134687, -0.0269374, 0.00606092, -0.0222234, 0.0249171, 0.00471405, 0.015489, 0.0114484},
 {0.0276108, -0.00942809, 0.000673436, 0.0316514, -0.0148156, 0.0168359, 0.0121218, -0.0121218, -0.0222234, -0.00673435, 0.00471405, 0.0242437, 0.00740778, -0.0222234, -0.0316514, -0.0323249, 0.000673436, -0.0323249, 0.00875466, 0.0303046, 0.026264, 0.00875466, 0.0114484, 0.0296311, -0.0101015},
 {-0.0323249, 0.0323249, -0.0202031, -0.0101015, 0.030978, -0.00606092, -0.00538748, 0.00269374, -0.00740778, 0.00606092, -0.0255905, 0.0329983, 0.00740778, -0.00673435, 0.010775, 0.00404061, -0.0316514, -0.0329983, 0.0181827, 0.0114484, 0.0195296, -0.030978, 0.0296311, 0.0296311, 0.00336717},
 {-0.0181827, -0.00336717, -0.00740778, -0.0323249, -0.00942809, -0.00606092, -0.0114484, 0, 0.0127953, -0.0168359, -0.0323249, 0, -0.026264, -0.00404061, 0.0276108, -0.0020203, 0.0222234, 0.0121218, -0.00606092, -0.00471404, 0.0282843, 0.00202031, -0.0329983, -0.015489, 0.015489},
 {0.0168359, -0.00875466, 0.0235702, -0.0161624, 0.0161624, 0.00875466, -0.00875466, 0.00336717, -0.000673436, 0.00336717, -0.00269374, 0.0215499, -0.0242437, -0.0168359, 0, -0.00875466, 0.00336717, -0.0181827, 0.0255905, -0.00134687, 0.0242437, -0.0208765, 0.00606092, -0.026264, -0.0134687},
 {0.0289577, 0.00942809, 0.00471405, 0.000673436, -0.026264, 0.0228968, 0.0276108, -0.00740778, 0.00808122, -0.0195296, -0.0134687, 0.0276108, -0.00471404, 0.0276108, 0.00336717, 0.00404061, 0.0141421, -0.0289577, 0.0168359, 0.00606092, -0.00538748, 0.026264, -0.0222234, 0.0222234, -0.0276108},
 {-0.0303046, 0.0202031, 0.00404061, 0.00404061, 0.00134687, -0.00875466, -0.0269374, 0.00740778, -0.00471404, -0.0329983, 0.00606092, -0.00673435, -0.00875466, 0.0168359, 0.015489, -0.0329983, -0.026264, 0.00606092, 0.0255905, 0.0141421, -0.0215499, 0.00875466, -0.0296311, 0.0168359, -0.0202031},
 {0.0101015, -0.0208765, 0.0148156, -0.0175093, -0.0276108, -0.0235702, 0.00673435, 0.0188562, 0.0228968, -0.010775, 0.0242437, 0.00942809, 0.0329983, -0.00471404, 0.00269374, 0.00740778, -0.0222234, 0.00538748, 0.0289577, 0.0148156, 0.0316514, 0.0235702, -0.00134687, 0.0329983, 0.00673435},
 {0.0181827, 0.0242437, 0.00740778, -0.0303046, 0.0161624, 0.0249171, -0.0316514, 0.0208765, -0.00404061, -0.00875466, -0.00538748, -0.0323249, -0.00740778, 0.0296311, 0.00471405, 0.0161624, -0.0249171, -0.0168359, -0.00740778, 0.0329983, -0.00606092, 0.00808122, -0.0148156, -0.0282843, 0.00740778},
 {0.0242437, -0.0175093, 0.0303046, -0.010775, -0.00269374, -0.0175093, 0.0255905, -0.026264, -0.0208765, 0.0235702, -0.0276108, -0.0323249, 0.015489, 0.0114484, 0.0255905, 0.00740778, 0.0202031, -0.0323249, 0.026264, 0.0289577, -0.0316514, -0.0168359, -0.0127953, -0.00740778, -0.0195296},
 {-0.0140403, -0.00783005, -0.00967124, -0.00448539, -0.0190653, 0.0357519, -0.024199, 0.0290523, -0.0121605, 0.0281787, 0.0190067, -0.00166738, -0.0144056, 0.0222977, -0.0180035, -0.0143538, 0.0209875, -0.00635749, 0.00349071, -0.00988625, 0.00619208, 0.0325016, -0.0195873, -0.0191201, 0.0118394}
};

float weightHO[26][4] = {
 {-0.060506, -0.125623, -0.166253, -0.289218},
 {-0.545329, 0.459, -0.600768, 0.309169},
 {0.343115, -0.506159, -0.415292, 0.398125},
 {0.174227, -0.271064, -0.535624, 0.172532},
 {0.13589, 0.303881, -0.592401, -0.155395},
 {0.156974, 0.104888, -0.059159, -0.0706384},
 {0.193414, -0.0254164, 0.0349152, -0.676623},
 {0.453125, -0.468312, -0.23812, 0.0510776},
 {0.269635, -0.643548, 0.389042, -0.119115},
 {-0.270753, 0.366143, 0.286235, -0.456698},
 {-0.0589285, -0.111589, -0.122973, -0.274178},
 {-0.508197, -0.349893, 0.344555, 0.15637},
 {0.142769, -0.154439, -0.0494215, -0.12457},
 {-0.217247, -0.105877, -0.119732, -0.397882},
 {-0.291134, 0.0751175, -0.153951, -0.0999514},
 {0.45906, -0.323084, -0.351951, 0.232273},
 {-0.118073, -0.201015, 0.171871, 0.315625},
 {0.240428, 0.413946, -0.49302, -0.453601},
 {-0.293672, 0.220206, -0.232055, 0.160162},
 {-0.00887961, -0.044401, 0.219329, -0.545824},
 {-0.0557888, -0.239728, -0.166371, 0.472629},
 {-0.043448, 0.146116, 0.143038, 0.161581},
 {0.13149, 0.152317, 0.156542, -0.125692},
 {-0.572537, -0.59049, 0.40722, 0.309383},
 {-0.696251, 0.126242, 0.217441, 0.205697},
 {0.114413, 0.151358, 0.0435614, 0.0831526}
};
# 4 "neuralNetworkSynth.cpp" 2
# 1 "./neuralNetworkSynth.h" 1



# 1 "./neuralNetworkConstants.h" 1
# 5 "./neuralNetworkSynth.h" 2

void feedForward(float pattern[882 /* = INPUT_ROWS*INPUT_COLS*/]);
int guessClassification();
int classifySound(double input[63][14]);
# 5 "neuralNetworkSynth.cpp" 2

float input[882 /* = INPUT_ROWS*INPUT_COLS*/+1];
float hidden[25 +1];
float output[4];

void feedForward(float pattern[882 /* = INPUT_ROWS*INPUT_COLS*/]) {_ssdm_SpecArrayDimSize(pattern,882);
  // enter pattern value into input neurons
  for (int j = 0; j < 882 /* = INPUT_ROWS*INPUT_COLS*/; j++){
    //outfile << "input[" << j << "] = " << pattern[j] << "\n";
    input[j] = pattern[j];
  }

  // enter values from the input layer to the hidden neurons
  for (int j = 0; j < 25; j++) {
    hidden[j] = 0;
    // sum the inputs times the weights between them and the hidden neurons
    // and then enter them into an activation function: 1/(1+exp(-x))
    for (int k = 0; k < 882 /* = INPUT_ROWS*INPUT_COLS*/+1; k++)
      hidden[j] += input[k] * weightIH[k][j];
    hidden[j] = 1/(1+exp(-1*(hidden[j])));
  }

  // enter value generated in the hidden layer to the output neurons
  for (int j = 0; j < 4; j++) {
    output[j] = 0;
    // sum the hidden values times the weights between them and the output neurons
    // and then enter them into an activation function: 1/(1+exp(-x))
    for (int k = 0; k < 25 +1; k++)
      output[j] += hidden[k] * weightHO[k][j];
    output[j] = 1/(1+exp(-1*(output[j])));
  }
}

int guessClassification() {
  float max = 0;
  int guess;
  for (int j = 0; j < 4; j++) {
    if (output[j] > max) {
      guess = j;
      max = output[j];
    }
  }
  return guess;
}

int classifySound(double input[63][14]) {_ssdm_SpecArrayDimSize(input,63);
  int guess;
  float flatInput[882 /* = INPUT_ROWS*INPUT_COLS*/];
  for (int i = 0; i < 63; i++) {
    for (int j = 0; j < 14; j++) {
      flatInput[i*14 + j] = (float)(input[i][j]);
    }
  }

  feedForward(flatInput);
  return guessClassification();
}
