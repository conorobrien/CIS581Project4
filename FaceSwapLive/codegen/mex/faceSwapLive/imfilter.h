/*
 * imfilter.h
 *
 * Code generation for function 'imfilter'
 *
 */

#ifndef __IMFILTER_H__
#define __IMFILTER_H__

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
extern void b_imfilter(const emlrtStack *sp, const emxArray_real_T *varargin_1,
  emxArray_real_T *b);
extern void eml_li_find(const emlrtStack *sp, int32_T y_data[], int32_T y_size[1]);
extern int32_T eml_ndims_varsized(const int32_T sz[3]);
extern void imfilter(const emlrtStack *sp, const emxArray_real_T *varargin_1,
                     emxArray_real_T *b);

#endif

/* End of code generation (imfilter.h) */
