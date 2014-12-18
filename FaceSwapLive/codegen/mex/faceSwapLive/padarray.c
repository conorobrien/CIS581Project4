/*
 * padarray.c
 *
 * Code generation for function 'padarray'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "padarray.h"
#include "faceSwapLive_emxutil.h"
#include "repmat.h"
#include "mod.h"
#include "validateattributes.h"
#include "imfilter.h"
#include "faceSwapLive_mexutil.h"
#include "faceSwapLive_data.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRSInfo ri_emlrtRSI = { 34, "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m" };

static emlrtRSInfo si_emlrtRSI = { 21, "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m" };

static emlrtRSInfo ti_emlrtRSI = { 6, "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m" };

static emlrtRSInfo ui_emlrtRSI = { 321, "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m" };

static emlrtRSInfo vi_emlrtRSI = { 432, "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m" };

static emlrtRSInfo wi_emlrtRSI = { 476, "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m" };

static emlrtRSInfo xi_emlrtRSI = { 462, "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m" };

static emlrtRSInfo ej_emlrtRSI = { 23, "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m" };

static emlrtMCInfo c_emlrtMCI = { 405, 5, "colon",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtMCInfo d_emlrtMCI = { 404, 15, "colon",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRTEInfo tb_emlrtRTEI = { 213, 9, "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m" };

static emlrtRTEInfo cc_emlrtRTEI = { 1, 14, "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m" };

static emlrtRTEInfo dc_emlrtRTEI = { 37, 9, "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m" };

static emlrtRTEInfo ec_emlrtRTEI = { 462, 5, "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m" };

static emlrtRTEInfo hc_emlrtRTEI = { 46, 9, "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m" };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 478, 14, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtECInfo fb_emlrtECI = { -1, 478, 9, "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m" };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 41, 23, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 41, 25, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 41, 27, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 41, 34, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 41, 39, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 41, 44, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 41, 49, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtBCInfo sb_emlrtBCI = { 1, 3, 41, 55, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 41, 60, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 476, 18, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtDCInfo w_emlrtDCI = { 476, 18, "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 1 };

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 461, 9, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 478, 30, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 41, 62, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 41, 55, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 49, 19, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 49, 21, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 49, 28, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 49, 33, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 49, 38, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 49, 43, "", "padarray",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/padarray.m", 0 };

static emlrtRSInfo ij_emlrtRSI = { 404, "colon",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo xj_emlrtRSI = { 405, "colon",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/ops/colon.m" };

/* Function Definitions */
void b_padarray(const emlrtStack *sp, const real_T varargin_1[11025],
                emxArray_real_T *b)
{
  int32_T j;
  int32_T i;
  for (j = 0; j < 2; j++) {
    i = b->size[0] * b->size[1];
    b->size[j] = 111;
    emxEnsureCapacity(sp, (emxArray__common *)b, i, (int32_T)sizeof(real_T),
                      &tb_emlrtRTEI);
  }

  for (j = 0; j < 3; j++) {
    for (i = 0; i < 111; i++) {
      b->data[i + b->size[0] * j] = 0.0;
    }
  }

  for (j = 0; j < 3; j++) {
    for (i = 0; i < 111; i++) {
      b->data[i + b->size[0] * (j + 108)] = 0.0;
    }
  }

  for (j = 0; j < 105; j++) {
    for (i = 0; i < 3; i++) {
      b->data[i + b->size[0] * (j + 3)] = 0.0;
    }
  }

  for (j = 0; j < 105; j++) {
    for (i = 0; i < 3; i++) {
      b->data[(i + b->size[0] * (j + 3)) + 108] = 0.0;
    }
  }

  for (j = 0; j < 105; j++) {
    for (i = 0; i < 105; i++) {
      b->data[(i + b->size[0] * (j + 3)) + 3] = varargin_1[i + 105 * j];
    }
  }
}

void c_padarray(const emlrtStack *sp, const emxArray_real_T *varargin_1, const
                real_T varargin_2[3], emxArray_real_T *b)
{
  real_T sizeA[3];
  int32_T i26;
  emxArray_real_T *r22;
  real_T b_sizeA[3];
  int32_T cdiff;
  int16_T varSizeA[3];
  int32_T sizeB[3];
  int32_T c_sizeA[3];
  int16_T sizeIdxDir[3];
  static const int8_T y[3] = { 4, 4, 0 };

  int32_T mtmp;
  int32_T idxA_data[1293];
  emxArray_uint32_T *dimNums;
  emxArray_real_T *b_y;
  int32_T k;
  int32_T ndbl;
  int32_T apnd;
  int32_T b_k;
  real_T d;
  uint32_T u2;
  real_T anew;
  real_T b_apnd;
  boolean_T n_too_large;
  real_T b_ndbl;
  real_T b_cdiff;
  real_T absa;
  real_T absb;
  const mxArray *c_y;
  static const int32_T iv115[2] = { 1, 21 };

  const mxArray *m34;
  char_T cv167[21];
  int32_T i;
  static const char_T cv168[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  real_T y_data[431];
  int32_T y_size[2];
  int32_T tmp_size[2];
  real_T tmp_data[431];
  int32_T i27;
  int32_T i28;
  uint32_T idxDir_data[431];
  int32_T b_tmp_data[431];
  int32_T iv116[1];
  int32_T b_idxDir_data[431];
  int32_T i29;
  int32_T i30;
  int32_T i31;
  int32_T i32;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &f_st;
  h_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &ti_emlrtRSI;
  b_st.site = &ui_emlrtRSI;
  c_validateattributes(&b_st, varargin_2);
  if ((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0)) {
    for (i26 = 0; i26 < 3; i26++) {
      sizeA[i26] = (real_T)varargin_1->size[i26] + 2.0 * varargin_2[i26];
    }

    b_emxInit_real_T(sp, &r22, 3, &cc_emlrtRTEI, true);
    b_sizeA[0] = sizeA[0];
    b_sizeA[1] = sizeA[1];
    b_sizeA[2] = 3.0;
    st.site = &si_emlrtRSI;
    d_repmat(&st, b_sizeA, r22);
    i26 = b->size[0] * b->size[1] * b->size[2];
    b->size[0] = r22->size[0];
    b->size[1] = r22->size[1];
    b->size[2] = 3;
    emxEnsureCapacity(sp, (emxArray__common *)b, i26, (int32_T)sizeof(real_T),
                      &cc_emlrtRTEI);
    cdiff = r22->size[0] * r22->size[1] * r22->size[2];
    for (i26 = 0; i26 < cdiff; i26++) {
      b->data[i26] = r22->data[i26];
    }

    emxFree_real_T(&r22);
  } else {
    for (i26 = 0; i26 < 3; i26++) {
      sizeA[i26] = varargin_1->size[i26];
    }

    for (i26 = 0; i26 < 3; i26++) {
      varSizeA[i26] = (int16_T)varargin_1->size[i26];
    }

    st.site = &ri_emlrtRSI;
    b_st.site = &vi_emlrtRSI;
    c_sizeA[0] = (int32_T)sizeA[0];
    c_sizeA[1] = (int32_T)sizeA[1];
    c_sizeA[2] = 3;
    for (i26 = 0; i26 < 3; i26++) {
      sizeIdxDir[i26] = (int16_T)((real_T)y[i26] + (real_T)c_sizeA[i26]);
    }

    mtmp = sizeIdxDir[0];
    for (cdiff = 1; cdiff + 1 < 4; cdiff++) {
      if (sizeIdxDir[cdiff] > mtmp) {
        mtmp = sizeIdxDir[cdiff];
      }
    }

    emxInit_uint32_T(&b_st, &dimNums, 2, &ec_emlrtRTEI, true);
    emxInit_real_T(&b_st, &b_y, 2, &cc_emlrtRTEI, true);
    for (k = 0; k < 3; k++) {
      c_st.site = &xi_emlrtRSI;
      d_st.site = &nb_emlrtRSI;
      e_st.site = &ob_emlrtRSI;
      ndbl = (int32_T)muDoubleScalarFloor((sizeA[k] - 1.0) + 0.5);
      apnd = ndbl + 1;
      cdiff = (ndbl - varSizeA[k]) + 1;
      if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)varSizeA[k])
      {
        ndbl++;
        apnd = varSizeA[k];
      } else if (cdiff > 0) {
        apnd = ndbl;
      } else {
        ndbl++;
      }

      f_st.site = &pb_emlrtRSI;
      i26 = b_y->size[0] * b_y->size[1];
      b_y->size[0] = 1;
      b_y->size[1] = ndbl;
      emxEnsureCapacity(&e_st, (emxArray__common *)b_y, i26, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      if (ndbl > 0) {
        b_y->data[0] = 1.0;
        if (ndbl > 1) {
          b_y->data[ndbl - 1] = apnd;
          i26 = ndbl - 1;
          i26 += (i26 < 0);
          if (i26 >= 0) {
            cdiff = (int32_T)((uint32_T)i26 >> 1);
          } else {
            cdiff = (int32_T)~(~(uint32_T)i26 >> 1);
          }

          f_st.site = &qb_emlrtRSI;
          for (b_k = 1; b_k < cdiff; b_k++) {
            b_y->data[b_k] = 1.0 + (real_T)b_k;
            b_y->data[(ndbl - b_k) - 1] = apnd - b_k;
          }

          if (cdiff << 1 == ndbl - 1) {
            b_y->data[cdiff] = (1.0 + (real_T)apnd) / 2.0;
          } else {
            b_y->data[cdiff] = 1.0 + (real_T)cdiff;
            b_y->data[cdiff + 1] = apnd - cdiff;
          }
        }
      }

      i26 = dimNums->size[0] * dimNums->size[1];
      dimNums->size[0] = 1;
      dimNums->size[1] = b_y->size[1];
      emxEnsureCapacity(&b_st, (emxArray__common *)dimNums, i26, (int32_T)sizeof
                        (uint32_T), &cc_emlrtRTEI);
      cdiff = b_y->size[0] * b_y->size[1];
      for (i26 = 0; i26 < cdiff; i26++) {
        d = muDoubleScalarRound(b_y->data[i26]);
        if (d < 4.294967296E+9) {
          if (d >= 0.0) {
            u2 = (uint32_T)d;
          } else {
            u2 = 0U;
          }
        } else if (d >= 4.294967296E+9) {
          u2 = MAX_uint32_T;
        } else {
          u2 = 0U;
        }

        dimNums->data[i26] = u2;
      }

      c_st.site = &wi_emlrtRSI;
      d = ((real_T)varSizeA[k] + varargin_2[k]) - 1.0;
      d_st.site = &nb_emlrtRSI;
      e_st.site = &ob_emlrtRSI;
      if (muDoubleScalarIsNaN(-varargin_2[k]) || muDoubleScalarIsNaN(d)) {
        ndbl = 0;
        anew = rtNaN;
        b_apnd = d;
        n_too_large = false;
      } else if (d < -varargin_2[k]) {
        ndbl = -1;
        anew = -varargin_2[k];
        b_apnd = d;
        n_too_large = false;
      } else if (muDoubleScalarIsInf(-varargin_2[k]) || muDoubleScalarIsInf(d))
      {
        ndbl = 0;
        anew = rtNaN;
        b_apnd = d;
        n_too_large = !(-varargin_2[k] == d);
      } else {
        anew = -varargin_2[k];
        b_ndbl = muDoubleScalarFloor((d - (-varargin_2[k])) + 0.5);
        b_apnd = -varargin_2[k] + b_ndbl;
        b_cdiff = b_apnd - d;
        absa = muDoubleScalarAbs(-varargin_2[k]);
        absb = muDoubleScalarAbs(d);
        if (muDoubleScalarAbs(b_cdiff) < 4.4408920985006262E-16 *
            muDoubleScalarMax(absa, absb)) {
          b_ndbl++;
          b_apnd = d;
        } else if (b_cdiff > 0.0) {
          b_apnd = -varargin_2[k] + (b_ndbl - 1.0);
        } else {
          b_ndbl++;
        }

        n_too_large = false;
        if (b_ndbl >= 0.0) {
          ndbl = (int32_T)b_ndbl - 1;
        } else {
          ndbl = -1;
        }
      }

      f_st.site = &pb_emlrtRSI;
      if (!n_too_large) {
      } else {
        c_y = NULL;
        m34 = emlrtCreateCharArray(2, iv115);
        for (i = 0; i < 21; i++) {
          cv167[i] = cv168[i];
        }

        emlrtInitCharArrayR2013a(&f_st, 21, m34, cv167);
        emlrtAssign(&c_y, m34);
        g_st.site = &ij_emlrtRSI;
        h_st.site = &xj_emlrtRSI;
        error(&g_st, b_message(&h_st, c_y, &c_emlrtMCI), &d_emlrtMCI);
      }

      y_size[0] = 1;
      y_size[1] = ndbl + 1;
      if (ndbl + 1 > 0) {
        y_data[0] = anew;
        if (ndbl + 1 > 1) {
          y_data[ndbl] = b_apnd;
          i26 = ndbl + (ndbl < 0);
          if (i26 >= 0) {
            cdiff = (int32_T)((uint32_T)i26 >> 1);
          } else {
            cdiff = (int32_T)~(~(uint32_T)i26 >> 1);
          }

          f_st.site = &qb_emlrtRSI;
          for (b_k = 1; b_k < cdiff; b_k++) {
            y_data[b_k] = anew + (real_T)b_k;
            y_data[ndbl - b_k] = b_apnd - (real_T)b_k;
          }

          if (cdiff << 1 == ndbl) {
            y_data[cdiff] = (anew + b_apnd) / 2.0;
          } else {
            y_data[cdiff] = anew + (real_T)cdiff;
            y_data[cdiff + 1] = b_apnd - (real_T)cdiff;
          }
        }
      }

      b_mod(y_data, y_size, varSizeA[k], tmp_data, tmp_size);
      b_k = tmp_size[1];
      cdiff = tmp_size[0] * tmp_size[1];
      for (i26 = 0; i26 < cdiff; i26++) {
        i27 = dimNums->size[1];
        d = tmp_data[i26] + 1.0;
        i28 = (int32_T)emlrtIntegerCheckFastR2012b(d, &w_emlrtDCI, &b_st);
        idxDir_data[i26] = dimNums->data[emlrtDynamicBoundsCheckFastR2012b(i28,
          1, i27, &ub_emlrtBCI, &b_st) - 1];
      }

      b_mod(y_data, y_size, sizeA[k], tmp_data, tmp_size);
      sizeIdxDir[k] = (int16_T)tmp_size[1];
      if (1 > sizeIdxDir[k]) {
        cdiff = 0;
      } else {
        i26 = sizeIdxDir[k];
        cdiff = emlrtDynamicBoundsCheckFastR2012b(i26, 1, mtmp, &kb_emlrtBCI,
          &b_st);
      }

      for (i26 = 0; i26 < cdiff; i26++) {
        b_tmp_data[i26] = i26;
      }

      b_mod(y_data, y_size, sizeA[k], tmp_data, tmp_size);
      iv116[0] = cdiff;
      emlrtSubAssignSizeCheckR2012b(iv116, 1, tmp_size, 2, &fb_emlrtECI, &b_st);
      for (i26 = 0; i26 < b_k; i26++) {
        b_idxDir_data[i26] = (int32_T)idxDir_data[i26];
      }

      for (i26 = 0; i26 < cdiff; i26++) {
        idxA_data[b_tmp_data[i26] + mtmp * k] = b_idxDir_data[i26];
      }

      sizeB[k] = (int32_T)((real_T)varSizeA[k] + 2.0 * varargin_2[k]);
    }

    emxFree_real_T(&b_y);
    emxFree_uint32_T(&dimNums);
    i26 = b->size[0] * b->size[1] * b->size[2];
    b->size[0] = sizeB[0];
    b->size[1] = sizeB[1];
    b->size[2] = sizeB[2];
    emxEnsureCapacity(sp, (emxArray__common *)b, i26, (int32_T)sizeof(real_T),
                      &dc_emlrtRTEI);
    for (k = 1; k - 1 < sizeB[2]; k++) {
      i26 = b->size[1];
      for (cdiff = 1; cdiff - 1 < i26; cdiff++) {
        i27 = b->size[0];
        for (i = 1; i - 1 < i27; i++) {
          i28 = b->size[0];
          b_k = b->size[1];
          ndbl = b->size[2];
          apnd = varargin_1->size[0];
          i29 = idxA_data[emlrtDynamicBoundsCheckFastR2012b(i, 1, mtmp,
            &pb_emlrtBCI, sp) - 1];
          i30 = varargin_1->size[1];
          i31 = idxA_data[(emlrtDynamicBoundsCheckFastR2012b(cdiff, 1, mtmp,
            &rb_emlrtBCI, sp) + mtmp) - 1];
          i32 = idxA_data[(emlrtDynamicBoundsCheckFastR2012b(k, 1, mtmp,
            &tb_emlrtBCI, sp) + (mtmp << 1)) - 1];
          b->data[((emlrtDynamicBoundsCheckFastR2012b(i, 1, i28, &lb_emlrtBCI,
                     sp) + b->size[0] * (emlrtDynamicBoundsCheckFastR2012b(cdiff,
                      1, b_k, &mb_emlrtBCI, sp) - 1)) + b->size[0] * b->size[1] *
                   (emlrtDynamicBoundsCheckFastR2012b(k, 1, ndbl, &nb_emlrtBCI,
                     sp) - 1)) - 1] = varargin_1->data
            [((emlrtDynamicBoundsCheckFastR2012b(i29, 1, apnd, &ob_emlrtBCI, sp)
               + varargin_1->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i31, 1,
                 i30, &qb_emlrtBCI, sp) - 1)) + varargin_1->size[0] *
              varargin_1->size[1] * (emlrtDynamicBoundsCheckFastR2012b(i32, 1, 3,
                &sb_emlrtBCI, sp) - 1)) - 1];
        }
      }
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void d_padarray(const emlrtStack *sp, const emxArray_real_T *varargin_1, const
                real_T varargin_2[3], emxArray_real_T *b)
{
  real_T sizeA[3];
  int32_T i33;
  emxArray_real_T *r23;
  real_T b_sizeA[3];
  int32_T loop_ub;
  int32_T i34;
  int32_T varSizeA_data[3];
  int32_T b_loop_ub;
  int32_T sizeA_data[4];
  int32_T cdiff;
  int32_T c_sizeA[3];
  static const int8_T y[3] = { 4, 4, 0 };

  int32_T mtmp;
  int32_T idxA_data[1293];
  int32_T idxA_size_idx_1;
  int16_T d_sizeA[2];
  int16_T b_varargin_1[2];
  int16_T sizeIdxDir[3];
  emxArray_uint32_T *dimNums;
  emxArray_real_T *b_y;
  int32_T k;
  int32_T ndbl;
  int32_T apnd;
  real_T d;
  uint32_T u3;
  real_T anew;
  real_T b_apnd;
  boolean_T n_too_large;
  real_T b_ndbl;
  real_T b_cdiff;
  real_T absa;
  real_T absb;
  const mxArray *c_y;
  static const int32_T iv126[2] = { 1, 21 };

  const mxArray *m39;
  char_T cv183[21];
  int32_T i;
  static const char_T cv184[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  real_T y_data[431];
  int32_T y_size[2];
  int32_T tmp_size[2];
  real_T tmp_data[431];
  int32_T i35;
  uint32_T idxDir_data[431];
  int32_T b_tmp_data[431];
  int32_T iv127[1];
  int32_T b_idxDir_data[431];
  int32_T i36;
  int32_T i37;
  int32_T i38;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &f_st;
  h_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &ti_emlrtRSI;
  b_st.site = &ui_emlrtRSI;
  c_validateattributes(&b_st, varargin_2);
  if ((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0)) {
    for (i33 = 0; i33 < 3; i33++) {
      sizeA[i33] = (real_T)varargin_1->size[i33] + 2.0 * varargin_2[i33];
    }

    b_emxInit_real_T(sp, &r23, 3, &cc_emlrtRTEI, true);
    b_sizeA[0] = sizeA[0];
    b_sizeA[1] = sizeA[1];
    b_sizeA[2] = 3.0;
    st.site = &si_emlrtRSI;
    d_repmat(&st, b_sizeA, r23);
    i33 = b->size[0] * b->size[1] * b->size[2];
    b->size[0] = r23->size[0];
    b->size[1] = r23->size[1];
    b->size[2] = 3;
    emxEnsureCapacity(sp, (emxArray__common *)b, i33, (int32_T)sizeof(real_T),
                      &cc_emlrtRTEI);
    loop_ub = r23->size[0] * r23->size[1] * r23->size[2];
    for (i33 = 0; i33 < loop_ub; i33++) {
      b->data[i33] = r23->data[i33];
    }

    emxFree_real_T(&r23);
  } else {
    i33 = eml_ndims_varsized(*(int32_T (*)[3])varargin_1->size);
    loop_ub = eml_ndims_varsized(*(int32_T (*)[3])varargin_1->size);
    for (i34 = 0; i34 < loop_ub; i34++) {
      varSizeA_data[i34] = varargin_1->size[i34];
    }

    st.site = &ri_emlrtRSI;
    b_loop_ub = eml_ndims_varsized(*(int32_T (*)[3])varargin_1->size);
    for (i34 = 0; i34 < b_loop_ub; i34++) {
      sizeA_data[i34] = varargin_1->size[i34];
    }

    if (3 > loop_ub) {
      cdiff = 3 - i33;
      b_loop_ub = loop_ub + cdiff;
      for (i33 = 0; i33 < loop_ub; i33++) {
        sizeA_data[i33] = varSizeA_data[i33];
      }

      for (i33 = 0; i33 < cdiff; i33++) {
        sizeA_data[i33 + loop_ub] = 1;
      }
    }

    b_st.site = &vi_emlrtRSI;
    if (b_loop_ub == 3) {
      c_sizeA[0] = sizeA_data[0];
      c_sizeA[1] = sizeA_data[1];
      c_sizeA[2] = sizeA_data[2];
      for (i33 = 0; i33 < 3; i33++) {
        sizeA[i33] = (real_T)y[i33] + (real_T)c_sizeA[i33];
      }

      mtmp = (int32_T)sizeA[0];
      for (cdiff = 1; cdiff + 1 < 4; cdiff++) {
        if ((int32_T)sizeA[cdiff] > mtmp) {
          mtmp = (int32_T)sizeA[cdiff];
        }
      }

      idxA_size_idx_1 = 3;
    } else {
      d_sizeA[0] = (int16_T)sizeA_data[0];
      d_sizeA[1] = (int16_T)sizeA_data[1];
      for (i33 = 0; i33 < 2; i33++) {
        b_varargin_1[i33] = (int16_T)(4 + d_sizeA[i33]);
      }

      mtmp = b_varargin_1[0];
      if (b_varargin_1[1] > b_varargin_1[0]) {
        mtmp = b_varargin_1[1];
      }

      idxA_size_idx_1 = 2;
    }

    emxInit_uint32_T(&b_st, &dimNums, 2, &ec_emlrtRTEI, true);
    emxInit_real_T(&b_st, &b_y, 2, &cc_emlrtRTEI, true);
    for (k = 0; k < 3; k++) {
      i33 = 1 + k;
      emlrtDynamicBoundsCheckFastR2012b(i33, 1, b_loop_ub, &vb_emlrtBCI, &b_st);
      c_st.site = &xi_emlrtRSI;
      d_st.site = &nb_emlrtRSI;
      e_st.site = &ob_emlrtRSI;
      ndbl = (int32_T)muDoubleScalarFloor(((real_T)sizeA_data[k] - 1.0) + 0.5);
      apnd = ndbl + 1;
      cdiff = (ndbl - sizeA_data[k]) + 1;
      if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)
          sizeA_data[k]) {
        ndbl++;
        apnd = sizeA_data[k];
      } else if (cdiff > 0) {
        apnd = ndbl;
      } else {
        ndbl++;
      }

      f_st.site = &pb_emlrtRSI;
      i33 = b_y->size[0] * b_y->size[1];
      b_y->size[0] = 1;
      b_y->size[1] = ndbl;
      emxEnsureCapacity(&e_st, (emxArray__common *)b_y, i33, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      if (ndbl > 0) {
        b_y->data[0] = 1.0;
        if (ndbl > 1) {
          b_y->data[ndbl - 1] = apnd;
          i33 = ndbl - 1;
          i33 += (i33 < 0);
          if (i33 >= 0) {
            cdiff = (int32_T)((uint32_T)i33 >> 1);
          } else {
            cdiff = (int32_T)~(~(uint32_T)i33 >> 1);
          }

          f_st.site = &qb_emlrtRSI;
          for (loop_ub = 1; loop_ub < cdiff; loop_ub++) {
            b_y->data[loop_ub] = 1.0 + (real_T)loop_ub;
            b_y->data[(ndbl - loop_ub) - 1] = apnd - loop_ub;
          }

          if (cdiff << 1 == ndbl - 1) {
            b_y->data[cdiff] = (1.0 + (real_T)apnd) / 2.0;
          } else {
            b_y->data[cdiff] = 1.0 + (real_T)cdiff;
            b_y->data[cdiff + 1] = apnd - cdiff;
          }
        }
      }

      i33 = dimNums->size[0] * dimNums->size[1];
      dimNums->size[0] = 1;
      dimNums->size[1] = b_y->size[1];
      emxEnsureCapacity(&b_st, (emxArray__common *)dimNums, i33, (int32_T)sizeof
                        (uint32_T), &cc_emlrtRTEI);
      loop_ub = b_y->size[0] * b_y->size[1];
      for (i33 = 0; i33 < loop_ub; i33++) {
        d = muDoubleScalarRound(b_y->data[i33]);
        if (d < 4.294967296E+9) {
          if (d >= 0.0) {
            u3 = (uint32_T)d;
          } else {
            u3 = 0U;
          }
        } else if (d >= 4.294967296E+9) {
          u3 = MAX_uint32_T;
        } else {
          u3 = 0U;
        }

        dimNums->data[i33] = u3;
      }

      c_st.site = &wi_emlrtRSI;
      d = ((real_T)sizeA_data[k] + varargin_2[k]) - 1.0;
      d_st.site = &nb_emlrtRSI;
      e_st.site = &ob_emlrtRSI;
      if (muDoubleScalarIsNaN(-varargin_2[k]) || muDoubleScalarIsNaN(d)) {
        ndbl = 0;
        anew = rtNaN;
        b_apnd = d;
        n_too_large = false;
      } else if (d < -varargin_2[k]) {
        ndbl = -1;
        anew = -varargin_2[k];
        b_apnd = d;
        n_too_large = false;
      } else if (muDoubleScalarIsInf(-varargin_2[k]) || muDoubleScalarIsInf(d))
      {
        ndbl = 0;
        anew = rtNaN;
        b_apnd = d;
        n_too_large = !(-varargin_2[k] == d);
      } else {
        anew = -varargin_2[k];
        b_ndbl = muDoubleScalarFloor((d - (-varargin_2[k])) + 0.5);
        b_apnd = -varargin_2[k] + b_ndbl;
        b_cdiff = b_apnd - d;
        absa = muDoubleScalarAbs(-varargin_2[k]);
        absb = muDoubleScalarAbs(d);
        if (muDoubleScalarAbs(b_cdiff) < 4.4408920985006262E-16 *
            muDoubleScalarMax(absa, absb)) {
          b_ndbl++;
          b_apnd = d;
        } else if (b_cdiff > 0.0) {
          b_apnd = -varargin_2[k] + (b_ndbl - 1.0);
        } else {
          b_ndbl++;
        }

        n_too_large = false;
        if (b_ndbl >= 0.0) {
          ndbl = (int32_T)b_ndbl - 1;
        } else {
          ndbl = -1;
        }
      }

      f_st.site = &pb_emlrtRSI;
      if (!n_too_large) {
      } else {
        c_y = NULL;
        m39 = emlrtCreateCharArray(2, iv126);
        for (i = 0; i < 21; i++) {
          cv183[i] = cv184[i];
        }

        emlrtInitCharArrayR2013a(&f_st, 21, m39, cv183);
        emlrtAssign(&c_y, m39);
        g_st.site = &ij_emlrtRSI;
        h_st.site = &xj_emlrtRSI;
        error(&g_st, b_message(&h_st, c_y, &c_emlrtMCI), &d_emlrtMCI);
      }

      y_size[0] = 1;
      y_size[1] = ndbl + 1;
      if (ndbl + 1 > 0) {
        y_data[0] = anew;
        if (ndbl + 1 > 1) {
          y_data[ndbl] = b_apnd;
          i33 = ndbl + (ndbl < 0);
          if (i33 >= 0) {
            cdiff = (int32_T)((uint32_T)i33 >> 1);
          } else {
            cdiff = (int32_T)~(~(uint32_T)i33 >> 1);
          }

          f_st.site = &qb_emlrtRSI;
          for (loop_ub = 1; loop_ub < cdiff; loop_ub++) {
            y_data[loop_ub] = anew + (real_T)loop_ub;
            y_data[ndbl - loop_ub] = b_apnd - (real_T)loop_ub;
          }

          if (cdiff << 1 == ndbl) {
            y_data[cdiff] = (anew + b_apnd) / 2.0;
          } else {
            y_data[cdiff] = anew + (real_T)cdiff;
            y_data[cdiff + 1] = b_apnd - (real_T)cdiff;
          }
        }
      }

      b_mod(y_data, y_size, sizeA_data[k], tmp_data, tmp_size);
      cdiff = tmp_size[1];
      loop_ub = tmp_size[0] * tmp_size[1];
      for (i33 = 0; i33 < loop_ub; i33++) {
        i34 = dimNums->size[1];
        d = tmp_data[i33] + 1.0;
        i35 = (int32_T)emlrtIntegerCheckFastR2012b(d, &w_emlrtDCI, &b_st);
        idxDir_data[i33] = dimNums->data[emlrtDynamicBoundsCheckFastR2012b(i35,
          1, i34, &ub_emlrtBCI, &b_st) - 1];
      }

      b_mod(y_data, y_size, sizeA_data[k], tmp_data, tmp_size);
      sizeIdxDir[k] = (int16_T)tmp_size[1];
      if (1 > sizeIdxDir[k]) {
        loop_ub = 0;
      } else {
        i33 = sizeIdxDir[k];
        loop_ub = emlrtDynamicBoundsCheckFastR2012b(i33, 1, mtmp, &kb_emlrtBCI,
          &b_st);
      }

      for (i33 = 0; i33 < loop_ub; i33++) {
        b_tmp_data[i33] = i33;
      }

      i33 = 1 + k;
      emlrtDynamicBoundsCheckFastR2012b(i33, 1, idxA_size_idx_1, &wb_emlrtBCI,
        &b_st);
      b_mod(y_data, y_size, sizeA_data[k], tmp_data, tmp_size);
      iv127[0] = loop_ub;
      emlrtSubAssignSizeCheckR2012b(iv127, 1, tmp_size, 2, &fb_emlrtECI, &b_st);
      for (i33 = 0; i33 < cdiff; i33++) {
        b_idxDir_data[i33] = (int32_T)idxDir_data[i33];
      }

      for (i33 = 0; i33 < loop_ub; i33++) {
        idxA_data[b_tmp_data[i33] + mtmp * k] = b_idxDir_data[i33];
      }

      varSizeA_data[k] = (int32_T)((real_T)sizeA_data[k] + 2.0 * varargin_2[k]);
    }

    emxFree_real_T(&b_y);
    emxFree_uint32_T(&dimNums);
    i33 = b->size[0] * b->size[1] * b->size[2];
    b->size[0] = varSizeA_data[0];
    b->size[1] = varSizeA_data[1];
    b->size[2] = varSizeA_data[2];
    emxEnsureCapacity(sp, (emxArray__common *)b, i33, (int32_T)sizeof(real_T),
                      &dc_emlrtRTEI);
    for (k = 1; k - 1 < varSizeA_data[2]; k++) {
      i33 = b->size[1];
      for (cdiff = 1; cdiff - 1 < i33; cdiff++) {
        i34 = b->size[0];
        for (i = 1; i - 1 < i34; i++) {
          emlrtDynamicBoundsCheckFastR2012b(3, 1, idxA_size_idx_1, &xb_emlrtBCI,
            sp);
          i35 = b->size[0];
          loop_ub = b->size[1];
          ndbl = b->size[2];
          apnd = varargin_1->size[0];
          b_loop_ub = idxA_data[emlrtDynamicBoundsCheckFastR2012b(i, 1, mtmp,
            &pb_emlrtBCI, sp) - 1];
          i36 = varargin_1->size[1];
          i37 = idxA_data[(emlrtDynamicBoundsCheckFastR2012b(cdiff, 1, mtmp,
            &rb_emlrtBCI, sp) + mtmp) - 1];
          i38 = idxA_data[(emlrtDynamicBoundsCheckFastR2012b(k, 1, mtmp,
            &tb_emlrtBCI, sp) + (mtmp << 1)) - 1];
          b->data[((emlrtDynamicBoundsCheckFastR2012b(i, 1, i35, &lb_emlrtBCI,
                     sp) + b->size[0] * (emlrtDynamicBoundsCheckFastR2012b(cdiff,
                      1, loop_ub, &mb_emlrtBCI, sp) - 1)) + b->size[0] * b->
                   size[1] * (emlrtDynamicBoundsCheckFastR2012b(k, 1, ndbl,
                     &nb_emlrtBCI, sp) - 1)) - 1] = varargin_1->data
            [((emlrtDynamicBoundsCheckFastR2012b(b_loop_ub, 1, apnd,
                &ob_emlrtBCI, sp) + varargin_1->size[0] *
               (emlrtDynamicBoundsCheckFastR2012b(i37, 1, i36, &qb_emlrtBCI, sp)
                - 1)) + varargin_1->size[0] * varargin_1->size[1] *
              (emlrtDynamicBoundsCheckFastR2012b(i38, 1, 3, &yb_emlrtBCI, sp) -
               1)) - 1];
        }
      }
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void e_padarray(const emlrtStack *sp, const emxArray_boolean_T *varargin_1,
                const real_T varargin_2[2], emxArray_boolean_T *b)
{
  real_T sizeA[2];
  int32_T i42;
  emxArray_boolean_T *r28;
  real_T b_sizeA[2];
  int32_T cdiff;
  int16_T varSizeA[2];
  int16_T sizeB[2];
  int16_T sizeIdxDir[2];
  int16_T b_varargin_1[2];
  int32_T mtmp;
  int32_T idxA_data[862];
  emxArray_uint32_T *dimNums;
  emxArray_real_T *y;
  int32_T k;
  int32_T ndbl;
  int32_T apnd;
  int32_T i;
  real_T d5;
  uint32_T u4;
  real_T y_data[431];
  int32_T y_size[2];
  int32_T tmp_size[2];
  real_T tmp_data[431];
  int32_T i43;
  int32_T i44;
  uint32_T idxDir_data[431];
  int16_T b_tmp_data[431];
  int32_T iv129[1];
  int32_T b_idxDir_data[431];
  int32_T i45;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &ti_emlrtRSI;
  b_st.site = &ui_emlrtRSI;
  d_validateattributes();
  if ((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0)) {
    for (i42 = 0; i42 < 2; i42++) {
      sizeA[i42] = (real_T)varargin_1->size[i42] + 2.0 * varargin_2[i42];
    }

    emxInit_boolean_T(sp, &r28, 2, &cc_emlrtRTEI, true);
    b_sizeA[0] = sizeA[0];
    b_sizeA[1] = sizeA[1];
    st.site = &ej_emlrtRSI;
    e_repmat(&st, b_sizeA, r28);
    i42 = b->size[0] * b->size[1];
    b->size[0] = r28->size[0];
    b->size[1] = r28->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b, i42, (int32_T)sizeof(boolean_T),
                      &cc_emlrtRTEI);
    cdiff = r28->size[0] * r28->size[1];
    for (i42 = 0; i42 < cdiff; i42++) {
      b->data[i42] = r28->data[i42];
    }

    emxFree_boolean_T(&r28);
  } else {
    for (i42 = 0; i42 < 2; i42++) {
      sizeA[i42] = varargin_1->size[i42];
    }

    for (i42 = 0; i42 < 2; i42++) {
      varSizeA[i42] = (int16_T)varargin_1->size[i42];
    }

    st.site = &ri_emlrtRSI;
    b_st.site = &vi_emlrtRSI;
    sizeIdxDir[0] = (int16_T)sizeA[0];
    sizeIdxDir[1] = (int16_T)sizeA[1];
    for (i42 = 0; i42 < 2; i42++) {
      b_varargin_1[i42] = (int16_T)(4 + sizeIdxDir[i42]);
    }

    mtmp = b_varargin_1[0];
    if (b_varargin_1[1] > b_varargin_1[0]) {
      mtmp = b_varargin_1[1];
    }

    emxInit_uint32_T(&b_st, &dimNums, 2, &ec_emlrtRTEI, true);
    emxInit_real_T(&b_st, &y, 2, &cc_emlrtRTEI, true);
    for (k = 0; k < 2; k++) {
      c_st.site = &xi_emlrtRSI;
      d_st.site = &nb_emlrtRSI;
      e_st.site = &ob_emlrtRSI;
      ndbl = (int32_T)muDoubleScalarFloor((sizeA[k] - 1.0) + 0.5);
      apnd = ndbl + 1;
      cdiff = (ndbl - varSizeA[k]) + 1;
      if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)varSizeA[k])
      {
        ndbl++;
        apnd = varSizeA[k];
      } else if (cdiff > 0) {
        apnd = ndbl;
      } else {
        ndbl++;
      }

      i42 = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = ndbl;
      emxEnsureCapacity(&e_st, (emxArray__common *)y, i42, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      if (ndbl > 0) {
        y->data[0] = 1.0;
        if (ndbl > 1) {
          y->data[ndbl - 1] = apnd;
          i42 = ndbl - 1;
          i42 += (i42 < 0);
          if (i42 >= 0) {
            cdiff = (int32_T)((uint32_T)i42 >> 1);
          } else {
            cdiff = (int32_T)~(~(uint32_T)i42 >> 1);
          }

          for (i = 1; i < cdiff; i++) {
            y->data[i] = 1.0 + (real_T)i;
            y->data[(ndbl - i) - 1] = apnd - i;
          }

          if (cdiff << 1 == ndbl - 1) {
            y->data[cdiff] = (1.0 + (real_T)apnd) / 2.0;
          } else {
            y->data[cdiff] = 1.0 + (real_T)cdiff;
            y->data[cdiff + 1] = apnd - cdiff;
          }
        }
      }

      i42 = dimNums->size[0] * dimNums->size[1];
      dimNums->size[0] = 1;
      dimNums->size[1] = y->size[1];
      emxEnsureCapacity(&b_st, (emxArray__common *)dimNums, i42, (int32_T)sizeof
                        (uint32_T), &cc_emlrtRTEI);
      cdiff = y->size[0] * y->size[1];
      for (i42 = 0; i42 < cdiff; i42++) {
        d5 = muDoubleScalarRound(y->data[i42]);
        if (d5 < 4.294967296E+9) {
          if (d5 >= 0.0) {
            u4 = (uint32_T)d5;
          } else {
            u4 = 0U;
          }
        } else if (d5 >= 4.294967296E+9) {
          u4 = MAX_uint32_T;
        } else {
          u4 = 0U;
        }

        dimNums->data[i42] = u4;
      }

      c_st.site = &wi_emlrtRSI;
      d_st.site = &nb_emlrtRSI;
      e_st.site = &ob_emlrtRSI;
      ndbl = (int32_T)muDoubleScalarFloor(((((real_T)varSizeA[k] + 2.0) - 1.0) -
        -2.0) + 0.5) - 3;
      apnd = ndbl + 1;
      cdiff = ndbl - (int32_T)sizeA[k];
      if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)((int32_T)
           sizeA[k] + 1)) {
        ndbl++;
        apnd = (int32_T)sizeA[k] + 1;
      } else if (cdiff > 0) {
        apnd = ndbl;
      } else {
        ndbl++;
      }

      y_size[0] = 1;
      y_size[1] = ndbl + 3;
      y_data[0] = -2.0;
      y_data[ndbl + 2] = apnd;
      i42 = ndbl + 2;
      i42 += (i42 < 0);
      if (i42 >= 0) {
        cdiff = (int32_T)((uint32_T)i42 >> 1);
      } else {
        cdiff = (int32_T)~(~(uint32_T)i42 >> 1);
      }

      for (i = 1; i < cdiff; i++) {
        y_data[i] = -2.0 + (real_T)i;
        y_data[(ndbl - i) + 2] = apnd - i;
      }

      if (cdiff << 1 == ndbl + 2) {
        y_data[cdiff] = (-2.0 + (real_T)apnd) / 2.0;
      } else {
        y_data[cdiff] = -2.0 + (real_T)cdiff;
        y_data[cdiff + 1] = apnd - cdiff;
      }

      b_mod(y_data, y_size, varSizeA[k], tmp_data, tmp_size);
      i = tmp_size[1];
      cdiff = tmp_size[0] * tmp_size[1];
      for (i42 = 0; i42 < cdiff; i42++) {
        i43 = dimNums->size[1];
        d5 = tmp_data[i42] + 1.0;
        i44 = (int32_T)emlrtIntegerCheckFastR2012b(d5, &w_emlrtDCI, &b_st);
        idxDir_data[i42] = dimNums->data[emlrtDynamicBoundsCheckFastR2012b(i44,
          1, i43, &ub_emlrtBCI, &b_st) - 1];
      }

      b_mod(y_data, y_size, sizeA[k], tmp_data, tmp_size);
      sizeIdxDir[k] = (int16_T)tmp_size[1];
      i42 = sizeIdxDir[k];
      emlrtDynamicBoundsCheckFastR2012b(i42, 1, mtmp, &kb_emlrtBCI, &b_st);
      cdiff = sizeIdxDir[k];
      for (i42 = 0; i42 < cdiff; i42++) {
        b_tmp_data[i42] = (int16_T)i42;
      }

      b_mod(y_data, y_size, sizeA[k], tmp_data, tmp_size);
      iv129[0] = sizeIdxDir[k];
      emlrtSubAssignSizeCheckR2012b(iv129, 1, tmp_size, 2, &fb_emlrtECI, &b_st);
      for (i42 = 0; i42 < i; i42++) {
        b_idxDir_data[i42] = (int32_T)idxDir_data[i42];
      }

      cdiff = sizeIdxDir[k];
      for (i42 = 0; i42 < cdiff; i42++) {
        idxA_data[b_tmp_data[i42] + mtmp * k] = b_idxDir_data[i42];
      }

      sizeB[k] = (int16_T)(varSizeA[k] + 4);
    }

    emxFree_real_T(&y);
    emxFree_uint32_T(&dimNums);
    i42 = b->size[0] * b->size[1];
    b->size[0] = sizeB[0];
    b->size[1] = sizeB[1];
    emxEnsureCapacity(sp, (emxArray__common *)b, i42, (int32_T)sizeof(boolean_T),
                      &hc_emlrtRTEI);
    for (cdiff = 1; cdiff - 1 < sizeB[1]; cdiff++) {
      i42 = b->size[0];
      for (i = 1; i - 1 < i42; i++) {
        i43 = b->size[0];
        i44 = b->size[1];
        ndbl = varargin_1->size[0];
        apnd = idxA_data[emlrtDynamicBoundsCheckFastR2012b(i, 1, mtmp,
          &dc_emlrtBCI, sp) - 1];
        k = varargin_1->size[1];
        i45 = idxA_data[(emlrtDynamicBoundsCheckFastR2012b(cdiff, 1, mtmp,
          &fc_emlrtBCI, sp) + mtmp) - 1];
        b->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1, i43, &ac_emlrtBCI, sp)
                 + b->size[0] * (emlrtDynamicBoundsCheckFastR2012b(cdiff, 1, i44,
                   &bc_emlrtBCI, sp) - 1)) - 1] = varargin_1->data
          [(emlrtDynamicBoundsCheckFastR2012b(apnd, 1, ndbl, &cc_emlrtBCI, sp) +
            varargin_1->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i45, 1, k,
              &ec_emlrtBCI, sp) - 1)) - 1];
      }
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void padarray(const emlrtStack *sp, const real_T varargin_1[11025],
              emxArray_real_T *b)
{
  int32_T j;
  int32_T i;
  for (j = 0; j < 2; j++) {
    i = b->size[0] * b->size[1];
    b->size[j] = 111;
    emxEnsureCapacity(sp, (emxArray__common *)b, i, (int32_T)sizeof(real_T),
                      &tb_emlrtRTEI);
  }

  for (j = 0; j < 3; j++) {
    for (i = 0; i < 111; i++) {
      b->data[i + b->size[0] * j] = 0.0;
    }
  }

  for (j = 0; j < 3; j++) {
    for (i = 0; i < 111; i++) {
      b->data[i + b->size[0] * (j + 108)] = 0.0;
    }
  }

  for (j = 0; j < 105; j++) {
    for (i = 0; i < 3; i++) {
      b->data[i + b->size[0] * (j + 3)] = 0.0;
    }
  }

  for (j = 0; j < 105; j++) {
    for (i = 0; i < 3; i++) {
      b->data[(i + b->size[0] * (j + 3)) + 108] = 0.0;
    }
  }

  for (j = 0; j < 105; j++) {
    for (i = 0; i < 105; i++) {
      b->data[(i + b->size[0] * (j + 3)) + 3] = varargin_1[i + 105 * j];
    }
  }
}

/* End of code generation (padarray.c) */
