//===========================================================================
// digitrec.h
//===========================================================================
// @brief: This header file defines the interface for the core functions.

#ifndef VOICEREC_H
#define VOICEREC_H

#define NUM_BANKS 26
#define NP 256
#define STRIDE NP/2
#define NUMRESULTS 63
#define ORIGSIZE 16000
#define SOUNDSIZE 8000

void processChunk( int sp, float *ret, float *inSound );

void preprocessSound(float *inSound, int inSize, float *outSound, int outSize);

int voicerec(float *inSound);
#endif
