/*
 * mldivide.h
 *
 * Code generation for function 'mldivide'
 *
 */

#ifndef __MLDIVIDE_H__
#define __MLDIVIDE_H__

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
extern real_T eml_xnrm2(const emlrtStack *sp, int32_T n, const real_T x[80],
  int32_T ix0);

#ifdef __WATCOMC__

#pragma aux eml_xnrm2 value [8087];

#endif

extern void mldivide(const emlrtStack *sp, const real_T A[80], const real_T B[10],
                     real_T Y[8]);

#endif

/* End of code generation (mldivide.h) */
