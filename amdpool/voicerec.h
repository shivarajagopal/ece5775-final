//===========================================================================
// digitrec.h
//===========================================================================
// @brief: This header file defines the interface for the core functions.

#ifndef DIGITREC_H
#define DIGITREC_H

#include<hls_stream.h>

#include "typedefs.h"
#include "training_data.h"

// The K_CONST value: number of nearest neighbors
#define K_CONST 3

// Top function for synthesis
void dut(
    hls::stream<bit32_t> &strm_in,
    hls::stream<bit32_t> &strm_out
);

// Top function for digit recognition
bit4_t digitrec( digit input );

// Given the testing instance and a (new) training instance,
// this function is expected to maintain/update an array of
// K minimum distances per training set
void update_knn( digit test_inst, digit train_inst, bit6_t min_distances[K_CONST] );

// Among 10xK minimum distance values, this function finds 
// the actual K nearest neighbors and determine the final 
// output based on the most common digit represented by these
// nearest neighbors (i.e., a vote among KNNs). 
bit4_t knn_vote( bit6_t min_distances[10][K_CONST] );

#endif
