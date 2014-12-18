/*
 * featSelectLive.h
 *
 * Code generation for function 'featSelectLive'
 *
 */

#ifndef __FEATSELECTLIVE_H__
#define __FEATSELECTLIVE_H__

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
extern void featSelectLive(const emlrtStack *sp, const emxArray_real_T
  *noseBoxes, const emxArray_real_T *mouthBoxes, const emxArray_real_T
  *lEyeBoxes, const emxArray_real_T *rEyeBoxes, real_T bestPoints_data[],
  int32_T bestPoints_size[2]);

#endif

/* End of code generation (featSelectLive.h) */
