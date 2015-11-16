//==========================================================================
//digitrec.cpp
//==========================================================================
// @brief: A k-nearest-neighbor implementation for digit recognition (k=1)

#include "digitrec.h"

//----------------------------------------------------------
// Top function
//----------------------------------------------------------

void dut(
    hls::stream<bit32_t> &strm_in,
    hls::stream<bit32_t> &strm_out
)
{
  digit in_digit;
  bit32_t out_digit;
  // ------------------------------------------------------
  // Input processing
  // ------------------------------------------------------
  // Read the two input 32-bit words (low word first)
  bit32_t input_lo = strm_in.read();
  bit32_t input_hi = strm_in.read();

  // Convert input raw bits to fixed-point representation via bit slicing
  in_digit(31, 0) = input_lo;
  in_digit(in_digit.length()-1, 32) = input_hi;

  // Call Digit Recognition
  out_digit = (bit32_t) digitrec(in_digit);
  
  // Write Output
  strm_out.write( out_digit );

}

//----------------------------------------------------------
// Digitrec
//----------------------------------------------------------
// @param[in] : input - the testing instance
// @return : the recognized digit (0~9)

bit4_t digitrec( digit input ) 
{
  #include "training_data.h"

  // This array stores K minimum distances per training set
  bit6_t knn_set[10][K_CONST];

  // Initialize the knn set
  for ( int i = 0; i < 10; ++i )
    for ( int k = 0; k < K_CONST; ++k )
      // Note that the max distance is 49
      knn_set[i][k] = 50; 

  L1800: for ( int i = 0; i < TRAINING_SIZE; ++i ) {
    L10: for ( int j = 0; j < 10; j++ ) {
      // Read a new instance from the training set
      digit training_instance = training_data[j][i];
      // Update the KNN set
      update_knn( input, training_instance, knn_set[j] );
    }
  } 

  // Compute the final output
  return knn_vote( knn_set ); 
}


//-----------------------------------------------------------------------
// update_knn function
//-----------------------------------------------------------------------
// Given the test instance and a (new) training instance, this
// function maintains/updates an array of K minimum
// distances per training set.

// @param[in] : test_inst - the testing instance
// @param[in] : train_inst - the training instance
// @param[in/out] : min_distances[K_CONST] - the array that stores the current
//                  K_CONST minimum distance values per training set

void update_knn( digit test_inst, digit train_inst, bit6_t min_distances[K_CONST] )
{
  // Compute the difference using XOR
  digit diff = test_inst ^ train_inst;

  bit6_t dist = 0;
  // Count the number of set bits
  for ( int i = 0; i < 49; ++i ) { 
    dist += diff[i];
  }

  // for the current digit, find the maximum of the current nearest neighbors
  bit6_t maxIdx = 0;
  bit6_t maxVal = 0;
  for (int i = 0; i < K_CONST; i++) {
    if (min_distances[i] > maxVal) {
      maxIdx = i;
      maxVal = min_distances[i];
    }
  }

  // if the current value is less than the max, replace the max with this
  if (dist < maxVal) {
    min_distances[maxIdx] = dist;
  }

}


//-----------------------------------------------------------------------
// knn_vote function
//-----------------------------------------------------------------------
// Given 10xK minimum distance values, this function 
// finds the actual K nearest neighbors and determines the
// final output based on the most common digit represented by 
// these nearest neighbors (i.e., a vote among KNNs). 
//
// @param[in] : knn_set - 10xK_CONST min distance values
// @return : the recognized digit
// 

bit4_t knn_vote( bit6_t knn_set[10][K_CONST] )
{
  bit4_t minDigits[K_CONST];            // An array to hold the digits corresponding to minimal distance
  bit6_t minDist[K_CONST];              // An array to hold the minimum distances
  bit6_t maxIdx = 0;                    // A value to hold the index of the maximum distance in minDist
  bit6_t maxVal = 50;                   // A value to hold the maximum distance in minDist
  bit4_t bitTally[10] = {0,0,0,0,0,0,0,0,0,0};  // A tally array for all digits
  
  //Initialize minimum Distance array
  for (int i = 0; i < K_CONST; i++) { 
    minDist[i] = 50;
  }

  // Process through knn_set, replacing the maximum value if a lesser one is found
  for (int i = 0; i < 10; i++) {                    // for each digit set
    for (int j = 0; j < K_CONST; j++) {             // for k values in digit set
      if (knn_set[i][j] < maxVal) {                 // if value is less than max
        minDigits[maxIdx] = i;                      // set the digit to this value
        minDist[maxIdx] = knn_set[i][j];            // set distance value to this
                  
        // Find new max value and index so we know what to replace
        maxVal =knn_set[i][j];
        for (int k = 0; k < K_CONST; k++) {
          if (minDist[k] >= maxVal) {
            maxVal = minDist[k];
            maxIdx = k;
          }
        }
      }
    }
  }

  // Process through minDigits, tally up bits
  // For example, if 9 is in minDigits, bitTally[9]
  //     will be incremented
  for (int i = 0; i < K_CONST; i++) {
    bitTally[minDigits[i]]++;
  }
    
  // Find the maximum tally and output the voting result
  bit4_t bestGuess = 0;                         // The highest tallied number
  bit4_t bestTally = 0;                         // The highest tally
  bit4_t tiedArray[10] = {0,0,0,0,0,0,0,0,0,0}; // Keep track of tied digits with a flag
  bit4_t numTies = 0;                           // Keep track of number of ties
  bit4_t startDigit = 0;                        // Keep track of lowest-indexed tie digit

  // Loop through digits, find the best tally
  // If there are ties, set the flag, and add to numTies
  for (int i = 0; i < 10; i++) {
    // If there are no ties, clear out numTies, and set as bestGuess
    if (bitTally[i] > bestTally) {
      bestGuess = i;                      // Best guess is this digit
      bestTally = bitTally[i];            // Set the best tally to this tally
      numTies = 0;                        // Zero out number of ties for now
      startDigit = i;                     // Lowest-indexed tie is this
      tiedArray[i] = 1;                   // Flag the digit for future ties

    // Otherwise, increment numTies and set tied digits flag
    } else if (bitTally[i] == bestTally) {
      tiedArray[i] = 1;                   // set the tie flag for this digit
      numTies++;                          // add one to number of ties
    }    
  }
    
  // Handle ties
  // If there's no ties, just return the best guess
  if (numTies == 0) {
      return bestGuess;
  } else {

    // If there are ties, use the sum of the digit's 
    // best values to break the tie.
    bit4_t minDigit = 10;
    bit6_t minSumDist = 50;

    // for each digit, check if the tie flag is set and 
    // it's after the earliest digit with that count
    for (int i = 0; i < 10; i++) {
      if ((tiedArray[i] == 1) && (i >= startDigit)) {
    
        // if valid digit, sum all values of knn_set for this digit
        bit6_t sum = 0;
        for (int j = 0; j < K_CONST; j++) {
          sum += knn_set[i][j];
        }

        // if this is the lowest sum, set it as such
        if (sum < minSumDist) {
          minSumDist = sum;
          minDigit = i;
        }
      }
    }
  return minDigit;
  }
}
