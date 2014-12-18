/*
 * boxCenter.h
 *
 * Code generation for function 'boxCenter'
 *
 */

#ifndef __BOXCENTER_H__
#define __BOXCENTER_H__

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
extern void boxCenter(const emlrtStack *sp, const emxArray_real_T *box,
                      emxArray_real_T *center);

#endif

/* End of code generation (boxCenter.h) */
