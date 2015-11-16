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

float filter_coefficients[20] = 
{
// Scaled for floating point

    0.005215491862785155, -0.0017001336344526702, 0.005215491862785155, 1.9992971668280997, -0.9992973695085173,// b0, b1, b2, a1, a2
    0.015625, -0.02437224075728725, 0.015625, 1.9997093064879747, -0.9997097877836774,// b0, b1, b2, a1, a2
    64, -127.9999962937383, 64.00000000000001, 0.8304352310742761, -0.26019362660662,// b0, b1, b2, a1, a2
    32, -63.99998921392848, 31.999999999999996, 1.5101728467314859, -0.7964750822913285// b0, b1, b2, a1, a2

};

float filter_impulseInput[63] = 
{
  1.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000,
  0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000,
  0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000,
  0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000,
  0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000,
  0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000,
  0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000,
  0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000
};

float filter_impulseOutput[63] = 
{
  0.16689574, 0.07573961, 0.21041861, 0.17845753, 0.14367934, 0.12996129, 0.11660818, 0.08700795,
  0.04132504, -0.00843744, -0.04779115, -0.06694495, -0.06383935, -0.04349052, -0.01507754, 0.01164851,
  0.02935930, 0.03479606, 0.02888648, 0.01562630, 0.00030710, -0.01226536, -0.01904968, -0.01928090,
  -0.01422620, -0.00640839, 0.00137204, 0.00689525, 0.00903947, 0.00787864, 0.00441790, 0.00011631,
  -0.00362330, -0.00584451, -0.00622027, -0.00501846, -0.00290409, -0.00066809, 0.00102474, 0.00180044,
  0.00162372, 0.00073916, -0.00045578, -0.00155569, -0.00226484, -0.00245961, -0.00218877, -0.00162449,
  -0.00098791, -0.00047584, -0.00020943, -0.00021480, -0.00043496, -0.00076302, -0.00108296, -0.00130468,
  -0.00138457, -0.00132846, -0.00117997, -0.00100026, -0.00084701, -0.00075855, -0.00074690
};

float filter_noiseInput[127] = 
{
  1.00000000, 1.00000000, 1.00000000, 1.00000000, 1.00000000, 1.00000000, 1.00000000, -1.00000000,
  -1.00000000, -1.00000000, -1.00000000, 1.00000000, 1.00000000, 1.00000000, -1.00000000, 1.00000000,
  1.00000000, 1.00000000, 1.00000000, -1.00000000, -1.00000000, 1.00000000, -1.00000000, 1.00000000,
  1.00000000, -1.00000000, -1.00000000, 1.00000000, -1.00000000, -1.00000000, 1.00000000, -1.00000000,
  -1.00000000, -1.00000000, -1.00000000, -1.00000000, -1.00000000, 1.00000000, -1.00000000, -1.00000000,
  -1.00000000, 1.00000000, -1.00000000, -1.00000000, 1.00000000, 1.00000000, -1.00000000, -1.00000000,
  -1.00000000, 1.00000000, -1.00000000, 1.00000000, 1.00000000, 1.00000000, -1.00000000, 1.00000000,
  -1.00000000, 1.00000000, 1.00000000, -1.00000000, 1.00000000, 1.00000000, -1.00000000, -1.00000000,
  -1.00000000, -1.00000000, -1.00000000, 1.00000000, 1.00000000, -1.00000000, -1.00000000, 1.00000000,
  1.00000000, -1.00000000, 1.00000000, -1.00000000, 1.00000000, -1.00000000, -1.00000000, 1.00000000,
  1.00000000, 1.00000000, -1.00000000, -1.00000000, 1.00000000, 1.00000000, 1.00000000, 1.00000000,
  -1.00000000, 1.00000000, 1.00000000, -1.00000000, 1.00000000, -1.00000000, -1.00000000, -1.00000000,
  -1.00000000, 1.00000000, -1.00000000, 1.00000000, -1.00000000, 1.00000000, -1.00000000, 1.00000000,
  1.00000000, 1.00000000, 1.00000000, 1.00000000, -1.00000000, 1.00000000, -1.00000000, -1.00000000,
  1.00000000, -1.00000000, 1.00000000, -1.00000000, -1.00000000, -1.00000000, 1.00000000, 1.00000000,
  -1.00000000, 1.00000000, 1.00000000, 1.00000000, -1.00000000, -1.00000000, -1.00000000
};

float filter_noiseOutput[127] = 
{
  0.16689574, 0.24263535, 0.45305396, 0.63151149, 0.77519083, 0.90515212, 1.02176030, 0.77497678,
  0.66482260, 0.23554794, -0.16915828, -0.18967042, -0.36195313, -0.21782279, -0.38379265, 0.01487671,
  0.05167547, 0.47919234, 0.88554101, 0.80514069, 0.75078095, 0.64524310, 0.02114500, 0.23078257,
  -0.03367489, -0.30543073, -0.31424161, -0.19898299, -0.47427697, -0.20454594, 0.05259236, -0.28256189,
  -0.18637540, -0.43903745, -0.69534289, -0.87453874, -0.98791057, -0.72315210, -0.94076559, -0.67679068,
  -0.72090797, -0.42067011, -0.59015247, -0.31432885, -0.08508571, -0.09259049, -0.14413789, -0.06298935,
  -0.31295678, -0.17467072, -0.47472633, 0.02434982, -0.01381841, 0.20017260, 0.07983268, 0.45759803,
  0.05210114, 0.48990111, 0.44347006, 0.28512280, 0.56700165, 0.31959625, 0.06551521, 0.03831733,
  -0.26108723, -0.48576846, -0.62982634, -0.42395249, -0.41371830, -0.46688783, -0.36815113, -0.21586553,
  -0.14567884, -0.04836732, 0.49102419, 0.10392114, 0.47057726, 0.00663722, -0.01505207, 0.00523880,
  -0.12808596, 0.08984088, -0.02977807, 0.00568176, 0.11856443, 0.12963939, 0.46049046, 0.69108143,
  0.45477687, 0.67884353, 0.45638502, 0.25468122, 0.58142391, 0.06412036, 0.02899715, -0.27314075,
  -0.54829885, -0.42420212, -0.77266124, -0.30121894, -0.63574934, -0.13607728, -0.38942464, 0.17773539,
  0.25542482, 0.55762156, 0.77191308, 0.87355510, 0.58489083, 0.80114840, 0.23580888, 0.18470461,
  0.19148351, -0.31503057, 0.01421685, -0.45803473, -0.42825955, -0.61679140, -0.39523415, -0.27553644,
  -0.20835982, 0.27865938, 0.21024639, 0.43823074, 0.33171597, 0.34632375, 0.04348003
};

float filter_multiSineInput[126] = 
{
  0.43085087, 0.59048525, 0.70308583, 0.76104849, 0.76322950, 0.71465498, 0.62543877, 0.50908471,
  0.38043477, 0.25357084, 0.13997833, 0.04723401, -0.02160487, -0.06784521, -0.09629260, -0.11384419,
  -0.12779337, -0.14414477, -0.16623500, -0.19390394, -0.22337025, -0.24784774, -0.25881350, -0.24772573,
  -0.20790583, -0.13626081, -0.03453442, 0.09016044, 0.22567024, 0.35599970, 0.46325195, 0.53005643,
  0.54214237, 0.49067541, 0.37399295, 0.19844673, -0.02181840, -0.26617155, -0.50975327, -0.72640632,
  -0.89189779, -0.98699907, -1.00000000, -0.92830473, -0.77887943, -0.56747896, -0.31674780, -0.05344669,
  0.19482321, 0.40295920, 0.55131412, 0.62788449, 0.62945489, 0.56157296, 0.43739498, 0.27559818,
  0.09768124, -0.07494953, -0.22369410, -0.33490264, -0.40117591, -0.42168348, -0.40151133, -0.35019536,
  -0.27971298, -0.20227678, -0.12828996, -0.06478373, -0.01456823, 0.02379449, 0.05522338, 0.08671537,
  0.12556624, 0.17753453, 0.24527454, 0.32731883, 0.41780064, 0.50698533, 0.58254816, 0.63141273,
  0.64187018, 0.60564812, 0.51959823, 0.38672218, 0.21635038, 0.02341121, -0.17313751, -0.35251854,
  -0.49469387, -0.58292534, -0.60598558, -0.55971426, -0.44770345, -0.28101526, -0.07696643, 0.14285990,
  0.35511389, 0.53736531, 0.67063363, 0.74144863, 0.74319852, 0.67662410, 0.54943315, 0.37512427,
  0.17120628, -0.04293300, -0.24822532, -0.42791458, -0.56911633, -0.66379026, -0.70906102, -0.70691288,
  -0.66336379, -0.58728267, -0.48904377, -0.37921270, -0.26743113, -0.16161897, -0.06755244, 0.01118638,
  0.07294777, 0.11754000, 0.14566177, 0.15836055, 0.15661569, 0.14111150
};

float filter_multiSineOutput[126] = 
{
  0.07190717, 0.13118195, 0.25272419, 0.38140487, 0.50024452, 0.60352377, 0.68292315, 0.72597907,
  0.72092490, 0.66242556, 0.55490590, 0.41235683, 0.25509393, 0.10483585, -0.02027235, -0.10931152,
  -0.16010260, -0.17844773, -0.17556330, -0.16455390, -0.15688699, -0.15968826, -0.17436810, -0.19671670,
  -0.21826960, -0.22851419, -0.21740956, -0.17771604, -0.10674167, -0.00726584, 0.11244348, 0.23946975,
  0.35779736, 0.45035633, 0.50130827, 0.49829919, 0.43440295, 0.30949836, 0.13086880, -0.08711040,
  -0.32422635, -0.55653068, -0.75906809, -0.90890280, -0.98804660, -0.98588015, -0.90071048, -0.74021697,
  -0.52069092, -0.26514627, -0.00054361, 0.24550014, 0.44806864, 0.58791350, 0.65363522, 0.64279698,
  0.56184663, 0.42489262, 0.25153944, 0.06411415, -0.11530983, -0.26767203, -0.37909481, -0.44219126,
  -0.45637456, -0.42718361, -0.36478385, -0.28191771, -0.19164993, -0.10526911, -0.03066768, 0.02856519,
  0.07322515, 0.10777239, 0.13896288, 0.17408766, 0.21913698, 0.27721520, 0.34748885, 0.42486139,
  0.50044881, 0.56279817, 0.59966827, 0.60009655, 0.55642402, 0.46594865, 0.33192785, 0.16374414,
  -0.02382852, -0.21218641, -0.38108965, -0.51119515, -0.58658177, -0.59691677, -0.53895912, -0.41718525,
  -0.24344337, -0.03567527, 0.18412921, 0.39247784, 0.56709117, 0.68943957, 0.74678536, 0.73348616,
  0.65141956, 0.50950795, 0.32244011, 0.10878519, -0.11123671, -0.31803330, -0.49468597, -0.62852894,
  -0.71210490, -0.74343326, -0.72562181, -0.66593593, -0.57450043, -0.46284016, -0.34246626, -0.22368508,
  -0.11475590, -0.02145889, 0.05293205, 0.10733575, 0.14231737, 0.15943837
};

float filter_overflowInput[63] = 
{
  -1.00000000, -1.00000000, -1.00000000, -1.00000000, -1.00000000, -1.00000000, -1.00000000, -1.00000000,
  -1.00000000, -1.00000000, -1.00000000, -1.00000000, -1.00000000, -1.00000000, -1.00000000, -1.00000000,
  -1.00000000, -1.00000000, -1.00000000, -1.00000000, -1.00000000, 1.00000000, 1.00000000, 1.00000000,
  1.00000000, -1.00000000, -1.00000000, -1.00000000, -1.00000000, -1.00000000, -1.00000000, 1.00000000,
  1.00000000, 1.00000000, 1.00000000, 1.00000000, 1.00000000, -1.00000000, -1.00000000, -1.00000000,
  -1.00000000, -1.00000000, 1.00000000, 1.00000000, 1.00000000, 1.00000000, 1.00000000, 1.00000000,
  -1.00000000, -1.00000000, -1.00000000, -1.00000000, -1.00000000, -1.00000000, 1.00000000, 1.00000000,
  1.00000000, 1.00000000, 1.00000000, 1.00000000, 1.00000000, 1.00000000, 1.00000000
};

float filter_overflowOutput[63] = 
{
  -0.16689574, -0.24263535, -0.45305396, -0.63151149, -0.77519083, -0.90515212, -1.02176030, -1.10876826,
  -1.15009329, -1.14165586, -1.09386471, -1.02691976, -0.96308041, -0.91958990, -0.90451235, -0.91616086,
  -0.94552016, -0.98031622, -1.00920269, -1.02482899, -1.02513609, -0.67907925, -0.50855035, -0.06843222,
  0.30270905, 0.26268463, 0.36975596, 0.17523985, -0.01669879, -0.22928602, -0.51050138, -0.50562488,
  -0.65842816, -0.44207520, -0.14904602, 0.20875833, 0.62877191, 0.71526219, 0.89334728, 0.64128773,
  0.27382963, -0.16795489, -0.32164294, -0.62537542, -0.53308469, -0.31558179, 0.02585149, 0.48254289,
  0.63879002, 0.89378554, 0.70261551, 0.36590138, -0.07799024, -0.59318321, -0.75480406, -0.97051881,
  -0.71544111, -0.31345740, 0.17805620, 0.71312940, 1.20060131, 1.53995323, 1.66998342
};


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



