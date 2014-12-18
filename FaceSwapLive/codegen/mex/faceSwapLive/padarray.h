/*
 * padarray.h
 *
 * Code generation for function 'padarray'
 *
 */

#ifndef __PADARRAY_H__
#define __PADARRAY_H__

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
extern void b_padarray(const emlrtStack *sp, const real_T varargin_1[11025],
  emxArray_real_T *b);
extern void c_padarray(const emlrtStack *sp, const emxArray_real_T *varargin_1,
  const real_T varargin_2[3], emxArray_real_T *b);
extern void d_padarray(const emlrtStack *sp, const emxArray_real_T *varargin_1,
  const real_T varargin_2[3], emxArray_real_T *b);
extern void e_padarray(const emlrtStack *sp, const emxArray_boolean_T
  *varargin_1, const real_T varargin_2[2], emxArray_boolean_T *b);
extern void padarray(const emlrtStack *sp, const real_T varargin_1[11025],
                     emxArray_real_T *b);

#endif

/* End of code generation (padarray.h) */
