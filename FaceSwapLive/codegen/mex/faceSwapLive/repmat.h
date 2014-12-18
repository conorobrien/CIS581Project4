/*
 * repmat.h
 *
 * Code generation for function 'repmat'
 *
 */

#ifndef __REPMAT_H__
#define __REPMAT_H__

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
extern void b_repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T
                     varargin_1, real_T varargin_2, emxArray_real_T *b);
extern void c_repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T
                     varargin_2, emxArray_real_T *b);
extern void d_repmat(const emlrtStack *sp, const real_T varargin_1[3],
                     emxArray_real_T *b);
extern void e_repmat(const emlrtStack *sp, const real_T varargin_1[2],
                     emxArray_boolean_T *b);
extern void eml_assert_valid_size_arg(const emlrtStack *sp, const real_T
  varargin_1[2]);
extern void repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T
                   varargin_1, emxArray_real_T *b);

#endif

/* End of code generation (repmat.h) */
