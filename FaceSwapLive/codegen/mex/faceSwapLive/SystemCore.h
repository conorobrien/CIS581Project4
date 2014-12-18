/*
 * SystemCore.h
 *
 * Code generation for function 'SystemCore'
 *
 */

#ifndef __SYSTEMCORE_H__
#define __SYSTEMCORE_H__

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
extern void SystemCore_step(faceSwapLiveStackData *SD, const emlrtStack *sp,
  vision_CascadeObjectDetector_10 *obj, const uint8_T varargin_1[307440],
  emxArray_real_T *varargout_1);
extern void b_SystemCore_step(const emlrtStack *sp,
  vision_CascadeObjectDetector_11 *obj, const uint8_T varargin_1_data[], const
  int32_T varargin_1_size[2], emxArray_real_T *varargout_1);
extern void c_SystemCore_step(const emlrtStack *sp,
  vision_CascadeObjectDetector_12 *obj, const uint8_T varargin_1_data[], const
  int32_T varargin_1_size[2], emxArray_real_T *varargout_1);
extern void d_SystemCore_step(const emlrtStack *sp,
  vision_CascadeObjectDetector_13 *obj, const uint8_T varargin_1_data[], const
  int32_T varargin_1_size[2], emxArray_real_T *varargout_1);
extern void e_SystemCore_step(const emlrtStack *sp,
  vision_CascadeObjectDetector_14 *obj, const uint8_T varargin_1_data[], const
  int32_T varargin_1_size[2], emxArray_real_T *varargout_1);

#endif

/* End of code generation (SystemCore.h) */
