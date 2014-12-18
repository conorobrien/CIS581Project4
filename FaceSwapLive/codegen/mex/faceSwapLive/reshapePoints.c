/*
 * reshapePoints.c
 *
 * Code generation for function 'reshapePoints'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "reshapePoints.h"
#include "pyramidBlendLive.h"
#include "faceSwapLive_mexutil.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtBCInfo t_emlrtBCI = { -1, -1, 2, 12, "points", "reshapePoints",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/reshapePoints.m",
  0 };

static emlrtECInfo n_emlrtECI = { -1, 2, 12, "reshapePoints",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/reshapePoints.m"
};

static emlrtBCInfo u_emlrtBCI = { -1, -1, 2, 29, "points", "reshapePoints",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/reshapePoints.m",
  0 };

static emlrtECInfo o_emlrtECI = { -1, 2, 29, "reshapePoints",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/reshapePoints.m"
};

static emlrtECInfo p_emlrtECI = { 1, 2, 11, "reshapePoints",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/reshapePoints.m"
};

/* Function Definitions */
void reshapePoints(const emlrtStack *sp, const real_T points_data[], const
                   int32_T points_size[2], real_T b_points_data[], int32_T
                   b_points_size[2])
{
  int32_T i16;
  int32_T i17;
  int32_T loop_ub;
  int32_T tmp_size[2];
  int32_T tmp_data[10];
  int32_T i18;
  int32_T b_tmp_size[2];
  int32_T b_tmp_data[10];
  real_T c_points_data[10];
  real_T c_tmp_data[10];
  real_T d_tmp_data[10];
  i16 = points_size[0] * points_size[1];
  if (1 > i16) {
    i17 = 1;
    i16 = -1;
  } else {
    loop_ub = points_size[0] * points_size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, loop_ub, &t_emlrtBCI, sp);
    i17 = 2;
    i16 = emlrtDynamicBoundsCheckFastR2012b(i16, 1, loop_ub, &t_emlrtBCI, sp) -
      1;
  }

  tmp_size[0] = 1;
  tmp_size[1] = div_s32_floor(sp, i16, i17) + 1;
  loop_ub = div_s32_floor(sp, i16, i17);
  for (i16 = 0; i16 <= loop_ub; i16++) {
    tmp_data[i16] = 1 + i17 * i16;
  }

  emlrtMatrixMatrixIndexCheckR2012b(points_size, 2, tmp_size, 2, &n_emlrtECI, sp);
  i16 = points_size[0] * points_size[1];
  if (2 > i16) {
    i17 = 1;
    i18 = 1;
    i16 = 0;
  } else {
    loop_ub = points_size[0] * points_size[1];
    emlrtDynamicBoundsCheckFastR2012b(2, 1, loop_ub, &u_emlrtBCI, sp);
    i17 = 2;
    i18 = 2;
    i16 = emlrtDynamicBoundsCheckFastR2012b(i16, 1, loop_ub, &u_emlrtBCI, sp);
  }

  b_tmp_size[0] = 1;
  b_tmp_size[1] = div_s32_floor(sp, i16 - i17, i18) + 1;
  loop_ub = div_s32_floor(sp, i16 - i17, i18);
  for (i16 = 0; i16 <= loop_ub; i16++) {
    b_tmp_data[i16] = i17 + i18 * i16;
  }

  emlrtMatrixMatrixIndexCheckR2012b(points_size, 2, b_tmp_size, 2, &o_emlrtECI,
    sp);
  loop_ub = tmp_size[1];
  for (i16 = 0; i16 < loop_ub; i16++) {
    c_points_data[i16] = points_data[tmp_data[i16] - 1];
  }

  loop_ub = tmp_size[1];
  for (i16 = 0; i16 < loop_ub; i16++) {
    c_tmp_data[i16] = c_points_data[i16];
  }

  loop_ub = b_tmp_size[1];
  for (i16 = 0; i16 < loop_ub; i16++) {
    c_points_data[i16] = points_data[b_tmp_data[i16] - 1];
  }

  loop_ub = b_tmp_size[1];
  for (i16 = 0; i16 < loop_ub; i16++) {
    d_tmp_data[i16] = c_points_data[i16];
  }

  emlrtDimSizeEqCheckFastR2012b(tmp_size[1], b_tmp_size[1], &p_emlrtECI, sp);
  b_points_size[0] = tmp_size[1];
  b_points_size[1] = 2;
  loop_ub = tmp_size[1];
  for (i16 = 0; i16 < loop_ub; i16++) {
    b_points_data[i16] = c_tmp_data[i16];
  }

  loop_ub = b_tmp_size[1];
  for (i16 = 0; i16 < loop_ub; i16++) {
    b_points_data[i16 + b_points_size[0]] = d_tmp_data[i16];
  }
}

/* End of code generation (reshapePoints.c) */
