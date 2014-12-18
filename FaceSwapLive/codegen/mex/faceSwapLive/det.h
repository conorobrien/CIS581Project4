/*
 * det.h
 *
 * Code generation for function 'det'
 *
 */

#ifndef __DET_H__
#define __DET_H__

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
extern real_T det(const emlrtStack *sp, const real_T x[9]);

#ifdef __WATCOMC__

#pragma aux det value [8087];

#endif
#endif

/* End of code generation (det.h) */
