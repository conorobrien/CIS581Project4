/*
 * boxCenter.c
 *
 * Code generation for function 'boxCenter'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "boxCenter.h"
#include "faceSwapLive_emxutil.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRTEInfo ib_emlrtRTEI = { 1, 19, "boxCenter",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/boxCenter.m"
};

static emlrtECInfo m_emlrtECI = { 2, 2, 11, "boxCenter",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/boxCenter.m"
};

/* Function Definitions */
void boxCenter(const emlrtStack *sp, const emxArray_real_T *box, emxArray_real_T
               *center)
{
  emxArray_real_T *r7;
  int32_T loop_ub;
  int32_T i12;
  int32_T i13;
  emxArray_real_T *b_box;
  int32_T c_box[2];
  int32_T iv49[2];
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &r7, 2, &ib_emlrtRTEI, true);
  loop_ub = box->size[0];
  i12 = r7->size[0] * r7->size[1];
  r7->size[0] = loop_ub;
  r7->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)r7, i12, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  for (i12 = 0; i12 < 2; i12++) {
    for (i13 = 0; i13 < loop_ub; i13++) {
      r7->data[i13 + r7->size[0] * i12] = box->data[i13 + box->size[0] * (2 +
        i12)] / 2.0;
    }
  }

  emxInit_real_T(sp, &b_box, 2, &ib_emlrtRTEI, true);
  loop_ub = box->size[0];
  i12 = b_box->size[0] * b_box->size[1];
  b_box->size[0] = loop_ub;
  b_box->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)b_box, i12, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  for (i12 = 0; i12 < 2; i12++) {
    for (i13 = 0; i13 < loop_ub; i13++) {
      b_box->data[i13 + b_box->size[0] * i12] = box->data[i13 + box->size[0] *
        i12];
    }
  }

  for (i12 = 0; i12 < 2; i12++) {
    c_box[i12] = b_box->size[i12];
  }

  emxFree_real_T(&b_box);
  for (i12 = 0; i12 < 2; i12++) {
    iv49[i12] = r7->size[i12];
  }

  emlrtSizeEqCheck2DFastR2012b(c_box, iv49, &m_emlrtECI, sp);
  loop_ub = box->size[0];
  i12 = center->size[0] * center->size[1];
  center->size[0] = loop_ub;
  center->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)center, i12, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  for (i12 = 0; i12 < 2; i12++) {
    for (i13 = 0; i13 < loop_ub; i13++) {
      center->data[i13 + center->size[0] * i12] = box->data[i13 + box->size[0] *
        i12] + r7->data[i13 + r7->size[0] * i12];
    }
  }

  emxFree_real_T(&r7);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (boxCenter.c) */
