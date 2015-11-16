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

// Begin header file, filter.h

#ifndef FILTER_H_ // Include guards
#define FILTER_H_


typedef struct
{
  float state[16];
  float output;
} filterType;

typedef struct
{
  float *pInput;
  float *pOutput;
  float *pState;
  float *pCoefficients;
  short count;
} filter_executionState;


static const int filter_numStages = 4;
static const int filter_coefficientLength = 20;
extern float filter_coefficients[20];
extern float filter_impulseInput[63];
extern float filter_impulseOutput[63];
extern float filter_noiseInput[127];
extern float filter_noiseOutput[127];
extern float filter_multiSineInput[126];
extern float filter_multiSineOutput[126];
extern float filter_overflowInput[63];
extern float filter_overflowOutput[63];
extern float filter_testOutput[127];
extern void filter_destroy( filterType *pObject );
extern void filter_reset( filterType * pThis );
extern void filter_init( filterType * pThis );
extern filterType *filter_create( void );

#define filter_writeInput( pThis, input )  \
	filter_filterBlock( pThis, &input, &pThis->output, 1 );

#define filter_readOutput( pThis )  \
	pThis->output

 int filter_filterBlock( filterType * pThis, float * pInput, float * pOutput, unsigned int count );
#define filter_outputToFloat( output )  \
	(output)

#define filter_inputFromFloat( input )  \
	(input)

 void filter_filterBiquad( filter_executionState * pExecState );
 void filter_runTests(  void  );
 void filter_compareResult( float * pInput, float * pReference, int count, float maxThreshold, float msThreshold );
 int filter_filterInChunks( filterType * pThis, float * pInput, float * pOutput, int length );
	

#include <stdlib.h> // For malloc/free
#include <string.h> // For memset





#endif // FILTER_H_
	
