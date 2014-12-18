/*
 * projective2d.h
 *
 * Code generation for function 'projective2d'
 *
 */

#ifndef __PROJECTIVE2D_H__
#define __PROJECTIVE2D_H__

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
extern void c_projective2d_transformPointsI(const emlrtStack *sp, const real_T
  self_T[9], const emxArray_real_T *varargin_1, const emxArray_real_T
  *varargin_2, emxArray_real_T *varargout_1, emxArray_real_T *varargout_2);

#endif

/* End of code generation (projective2d.h) */
