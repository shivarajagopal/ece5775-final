//==========================================================================
//digitrec.cpp
//==========================================================================
// @brief: A k-nearest-neighbor implementation for digit recognition (k=1)


/******************************* SOURCE LICENSE *********************************
Copyright (c) 2013 MicroModeler.

A non-exclusive, nontransferable, perpetual, royalty-free license is granted to the Licensee to 
use the following Information for academic, non-profit, or government-sponsored research purposes.
Use of the following Information under this License is restricted to NON-COMMERCIAL PURPOSES ONLY.
Commercial use of the following Information requires a separately executed written license agreement.

This Information is distributed WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

******************************* END OF LICENSE *********************************/

// A commercial license for MicroModeler DSP can be obtained at http://www.micromodeler.com/launch.jsp

#include "filter.h"

#include <stdlib.h> // For malloc/free
#include <string.h> // For memset
#include <stdio.h>    // For test case I/Os


void filter_destroy( filterType *pObject )
{
  free( pObject );
}

 void filter_reset( filterType * pThis )
{
  memset( &pThis->state, 0, sizeof( pThis->state ) ); // Reset state to 0
  pThis->output = 0;                  // Reset output

}

 void filter_init( filterType * pThis )
{
  filter_reset( pThis );

}
filterType *filter_create( void )
{
  filterType *result = (filterType *)malloc( sizeof( filterType ) );  // Allocate memory for the object
  filter_init( result );                      // Initialize it
  return result;                                // Return the result
}

 int filter_filterBlock( filterType * pThis, float * pInput, float * pOutput, unsigned int count )
{
  filter_executionState executionState;          // The executionState structure holds call data, minimizing stack reads and writes 
  if( ! count ) return 0;                         // If there are no input samples, return immediately
  executionState.pInput = pInput;                 // Pointers to the input and output buffers that each call to filterBiquad() will use
  executionState.pOutput = pOutput;               // - pInput and pOutput can be equal, allowing reuse of the same memory.
  executionState.count = count;                   // The number of samples to be processed
  executionState.pState = pThis->state;                   // Pointer to the biquad's internal state and coefficients. 
  executionState.pCoefficients = filter_coefficients;    // Each call to filterBiquad() will advance pState and pCoefficients to the next biquad

  // The 1st call to filter1_filterBiquad() reads from the caller supplied input buffer and writes to the output buffer.
  // The remaining calls to filterBiquad() recycle the same output buffer, so that multiple intermediate buffers are not required.

  filter_filterBiquad( &executionState );   // Run biquad #0
  executionState.pInput = executionState.pOutput;         // The remaining biquads will now re-use the same output buffer.

  filter_filterBiquad( &executionState );   // Run biquad #1

  filter_filterBiquad( &executionState );   // Run biquad #2

  filter_filterBiquad( &executionState );   // Run biquad #3

  // At this point, the caller-supplied output buffer will contain the filtered samples and the input buffer will contain the unmodified input samples.  
  return count;   // Return the number of samples processed, the same as the number of input samples

}

 void filter_filterBiquad( filter_executionState * pExecState )
{
  // Read state variables
  float w0, x0;
  float w1 = pExecState->pState[0];
  float w2 = pExecState->pState[1];

  // Read coefficients into work registers
  float b0 = *(pExecState->pCoefficients++);
  float b1 = *(pExecState->pCoefficients++);
  float b2 = *(pExecState->pCoefficients++);
  float a1 = *(pExecState->pCoefficients++);
  float a2 = *(pExecState->pCoefficients++);

  // Read source and target pointers
  float *pInput  = pExecState->pInput;
  float *pOutput = pExecState->pOutput;
  short count = pExecState->count;
  float accumulator;

  // Loop for all samples in the input buffer
  while( count-- )
  {
    // Read input sample
    x0 = *(pInput++);
  
    // Run feedback part of filter
    accumulator  = w2 * a2;
    accumulator += w1 * a1;
    accumulator += x0 ;

    w0 = accumulator ;
  
    // Run feedforward part of filter
    accumulator  = w0 * b0;
    accumulator += w1 * b1;
    accumulator += w2 * b2;

    w2 = w1;    // Shuffle history buffer
    w1 = w0;

    // Write output
    *(pOutput++) = accumulator ;
  }

  // Write state variables
  *(pExecState->pState++) = w1;
  *(pExecState->pState++) = w2;

}



 void filter_compareResult( float * pInput, float * pReference, int count, float maxThreshold, float msThreshold )
{
  float ms = 0, mx = 0, actual, delta;
  printf( "int  float expected  delta\n" );
  while( count-- )
  {
    actual = filter_outputToFloat( *pInput );
    delta =  actual - *pReference;
    printf( "%li  %f  %f  %f\n", (long)*(pInput), actual, *pReference, delta );
    ++pInput;
    ++pReference;

    ms += delta * delta;
    if( delta > mx ) mx = delta;
    if( -delta > mx ) mx = -delta;
  }

  printf( "Maximum Error: %f. Threshold = %f. Ratio = %f, %s\n",      mx, maxThreshold,   mx / maxThreshold, mx < maxThreshold  ? "PASS" : "FAIL" );
  printf( "Mean Squared Error: %f. Threshold = %f. Ratio = %f, %s\n",     ms, msThreshold,  ms / msThreshold,  ms < msThreshold   ? "PASS" : "FAIL" );

}

 int filter_filterInChunks( filterType * pThis, float * pInput, float * pOutput, int length )
{
  int processedLength = 0;
  unsigned int chunkLength, outLength;
  static long random = 0x6428734; // Use pseudo-random number generator to split input into small random length chunks.
  while( length > 0 )
  {
    chunkLength = random & 0xf;                     // Choose random chunkLength from 0 - 15
    if( chunkLength > length ) chunkLength = length;          // Limit chunk length to the number of remaining samples
    outLength = filter_filterBlock( pThis,  pInput, pOutput, chunkLength );   // Filter the block and determine the number of returned samples
    pOutput += outLength;                       // Update the output pointer
    processedLength += outLength;                   // Update the total number of samples output
    pInput += chunkLength;                        // Update the input pointer
    length -= chunkLength;                        // Update the number of samples remaining
    random = random + 0x834f4527;                   // Cycle the simple random number generator
  }
  return processedLength;                         // Return the number of samples processed

}



