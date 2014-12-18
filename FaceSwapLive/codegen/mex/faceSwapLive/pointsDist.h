/*
 * pointsDist.h
 *
 * Code generation for function 'pointsDist'
 *
 */

#ifndef __POINTSDIST_H__
#define __POINTSDIST_H__

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
extern void pointsDist(const emlrtStack *sp, const real_T points[10], real_T
  dists[16]);

#endif

/* End of code generation (pointsDist.h) */
