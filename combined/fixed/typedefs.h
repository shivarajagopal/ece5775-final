//===========================================================================
// typedefs.h
//===========================================================================
// @brief: This header defines the shorthand of several ap_uint data types.

#ifndef TYPEDEFS_H
#define TYPEDEFS_H

#include "ap_int.h"
#include "ap_fixed.h"

typedef ap_fixed<10,2> sound_t;
typedef ap_uint<32> bit32_t;
typedef ap_uint<64> bit64_t;

#endif
