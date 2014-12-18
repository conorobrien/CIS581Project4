/*
 * rgb2gray.h
 *
 * Code generation for function 'rgb2gray'
 *
 */

#ifndef __RGB2GRAY_H__
#define __RGB2GRAY_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "faceSwapLive_types.h"

/* Function Declarations */
extern void rgb2gray(const emlrtStack *sp, const emxArray_uint8_T *X,
                     emxArray_uint8_T *I);

#endif

/* End of code generation (rgb2gray.h) */
