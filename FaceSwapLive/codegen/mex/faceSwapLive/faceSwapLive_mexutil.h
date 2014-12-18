/*
 * faceSwapLive_mexutil.h
 *
 * Code generation for function 'faceSwapLive_mexutil'
 *
 */

#ifndef __FACESWAPLIVE_MEXUTIL_H__
#define __FACESWAPLIVE_MEXUTIL_H__

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
extern void b_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);
extern const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
extern const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
extern void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *d_sprintf,
  const char_T *identifier, char_T y[14]);
extern const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
extern const mxArray *c_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
extern void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
extern int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);
extern void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
extern void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);
extern const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);

#endif

/* End of code generation (faceSwapLive_mexutil.h) */
