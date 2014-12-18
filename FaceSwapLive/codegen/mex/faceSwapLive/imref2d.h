/*
 * imref2d.h
 *
 * Code generation for function 'imref2d'
 *
 */

#ifndef __IMREF2D_H__
#define __IMREF2D_H__

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
extern void imref2d_imref2d(const emlrtStack *sp, const real_T imageSizeIn[3],
  real_T obj_XWorldLimits[2], real_T obj_YWorldLimits[2], real_T obj_ImageSize[2],
  real_T *obj_PixelExtentInWorldX, real_T *obj_PixelExtentInWorldY);
extern void imref2d_intrinsicToWorld(const emlrtStack *sp, const emxArray_real_T
  *xIntrinsic, const emxArray_real_T *yIntrinsic, emxArray_real_T *xw,
  emxArray_real_T *yw);
extern void imref2d_worldToIntrinsic(const emlrtStack *sp, const emxArray_real_T
  *xWorld, const emxArray_real_T *yWorld, emxArray_real_T *xi, emxArray_real_T
  *yi);

#endif

/* End of code generation (imref2d.h) */
