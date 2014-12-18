/*
 * rgb2gray.c
 *
 * Code generation for function 'rgb2gray'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "rgb2gray.h"
#include "faceSwapLive_emxutil.h"
#include "inv.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRSInfo sb_emlrtRSI = { 25, "rgb2gray",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/specfun/rgb2gray.m" };

static emlrtRTEInfo p_emlrtRTEI = { 46, 7, "rgb2gray",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/specfun/rgb2gray.m" };

static emlrtRTEInfo kc_emlrtRTEI = { 49, 12, "rgb2gray",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/specfun/rgb2gray.m" };

/* Function Definitions */
void rgb2gray(const emlrtStack *sp, const emxArray_uint8_T *X, emxArray_uint8_T *
              I)
{
  uint32_T origSize[3];
  int32_T i;
  real_T T[9];
  static const real_T dv2[9] = { 1.0, 1.0, 1.0, 0.956, -0.272, -1.106, 0.621,
    -0.647, 1.703 };

  real_T sizeI;
  real_T y;
  int32_T k;
  uint8_T u1;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 3; i++) {
    origSize[i] = (uint32_T)X->size[i];
  }

  st.site = &sb_emlrtRSI;
  inv(&st, dv2, T);
  i = I->size[0] * I->size[1];
  I->size[0] = (int32_T)origSize[0];
  I->size[1] = (int32_T)origSize[1];
  emxEnsureCapacity(sp, (emxArray__common *)I, i, (int32_T)sizeof(uint8_T),
                    &p_emlrtRTEI);
  sizeI = (real_T)(X->size[0] * X->size[1] * 3) / 3.0;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, sizeI, mxDOUBLE_CLASS, (int32_T)sizeI,
    &kc_emlrtRTEI, sp);
  for (i = 0; i < (int32_T)sizeI; i++) {
    origSize[0] = X->data[i];
    origSize[1] = X->data[(int32_T)((1.0 + (real_T)i) + sizeI) - 1];
    origSize[2] = X->data[(int32_T)((1.0 + (real_T)i) + 2.0 * sizeI) - 1];
    y = 0.0;
    for (k = 0; k < 3; k++) {
      y += (real_T)origSize[k] * T[3 * k];
    }

    y = muDoubleScalarRound(y);
    if (y < 256.0) {
      if (y >= 0.0) {
        u1 = (uint8_T)y;
      } else {
        u1 = 0;
      }
    } else if (y >= 256.0) {
      u1 = MAX_uint8_T;
    } else {
      u1 = 0;
    }

    I->data[i] = u1;
  }
}

/* End of code generation (rgb2gray.c) */
