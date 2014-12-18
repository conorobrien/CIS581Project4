/*
 * meshgrid.c
 *
 * Code generation for function 'meshgrid'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "meshgrid.h"
#include "faceSwapLive_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "repmat.h"
#include "faceSwapLive_mexutil.h"
#include "faceSwapLive_data.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRSInfo nh_emlrtRSI = { 17, "meshgrid",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elmat/meshgrid.m" };

static emlrtRSInfo oh_emlrtRSI = { 18, "meshgrid",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elmat/meshgrid.m" };

static emlrtRSInfo ph_emlrtRSI = { 47, "repmat",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRTEInfo nb_emlrtRTEI = { 1, 23, "meshgrid",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elmat/meshgrid.m" };

/* Function Definitions */
void meshgrid(const emlrtStack *sp, const emxArray_real_T *x, const
              emxArray_real_T *y, emxArray_real_T *xx, emxArray_real_T *yy)
{
  emxArray_real_T *a;
  int32_T ntilerows;
  int32_T i;
  real_T varargin_1[2];
  const mxArray *b_y;
  static const int32_T iv92[2] = { 1, 15 };

  const mxArray *m25;
  char_T cv135[15];
  static const char_T cv136[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  const mxArray *c_y;
  static const int32_T iv93[2] = { 1, 15 };

  int32_T jcol;
  int32_T ibmat;
  int32_T itilerow;
  const mxArray *d_y;
  static const int32_T iv94[2] = { 1, 15 };

  const mxArray *e_y;
  static const int32_T iv95[2] = { 1, 15 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &a, 2, &nb_emlrtRTEI, true);
  if ((x->size[1] == 0) || (y->size[1] == 0)) {
    ntilerows = xx->size[0] * xx->size[1];
    xx->size[0] = 0;
    xx->size[1] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)xx, ntilerows, (int32_T)sizeof
                      (real_T), &nb_emlrtRTEI);
    ntilerows = yy->size[0] * yy->size[1];
    yy->size[0] = 0;
    yy->size[1] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)yy, ntilerows, (int32_T)sizeof
                      (real_T), &nb_emlrtRTEI);
  } else {
    st.site = &nh_emlrtRSI;
    i = x->size[1];
    ntilerows = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = i;
    emxEnsureCapacity(&st, (emxArray__common *)a, ntilerows, (int32_T)sizeof
                      (real_T), &nb_emlrtRTEI);
    for (ntilerows = 0; ntilerows < i; ntilerows++) {
      a->data[a->size[0] * ntilerows] = x->data[ntilerows];
    }

    varargin_1[0] = y->size[1];
    varargin_1[1] = 1.0;
    b_st.site = &hc_emlrtRSI;
    eml_assert_valid_size_arg(&b_st, varargin_1);
    if (varargin_1[0] == varargin_1[0]) {
    } else {
      b_y = NULL;
      m25 = emlrtCreateCharArray(2, iv92);
      for (i = 0; i < 15; i++) {
        cv135[i] = cv136[i];
      }

      emlrtInitCharArrayR2013a(&st, 15, m25, cv135);
      emlrtAssign(&b_y, m25);
      b_st.site = &hj_emlrtRSI;
      error(&b_st, b_y, &k_emlrtMCI);
    }

    i = a->size[1];
    if (i == a->size[1]) {
    } else {
      c_y = NULL;
      m25 = emlrtCreateCharArray(2, iv93);
      for (i = 0; i < 15; i++) {
        cv135[i] = cv136[i];
      }

      emlrtInitCharArrayR2013a(&st, 15, m25, cv135);
      emlrtAssign(&c_y, m25);
      b_st.site = &hj_emlrtRSI;
      error(&b_st, c_y, &k_emlrtMCI);
    }

    ntilerows = xx->size[0] * xx->size[1];
    xx->size[0] = (int32_T)varargin_1[0];
    xx->size[1] = a->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)xx, ntilerows, (int32_T)sizeof
                      (real_T), &jb_emlrtRTEI);
    i = a->size[1];
    ntilerows = (int32_T)varargin_1[0];
    b_st.site = &kc_emlrtRSI;
    b_st.site = &ic_emlrtRSI;
    if (i > 2147483646) {
      c_st.site = &rb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (jcol = 0; jcol + 1 <= i; jcol++) {
      ibmat = jcol * ntilerows;
      b_st.site = &jc_emlrtRSI;
      if (ntilerows > 2147483646) {
        c_st.site = &rb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (itilerow = 1; itilerow <= ntilerows; itilerow++) {
        xx->data[(ibmat + itilerow) - 1] = a->data[jcol];
      }
    }

    st.site = &oh_emlrtRSI;
    varargin_1[0] = 1.0;
    varargin_1[1] = x->size[1];
    b_st.site = &hc_emlrtRSI;
    eml_assert_valid_size_arg(&b_st, varargin_1);
    ibmat = y->size[1];
    i = y->size[1];
    if (ibmat == i) {
    } else {
      d_y = NULL;
      m25 = emlrtCreateCharArray(2, iv94);
      for (i = 0; i < 15; i++) {
        cv135[i] = cv136[i];
      }

      emlrtInitCharArrayR2013a(&st, 15, m25, cv135);
      emlrtAssign(&d_y, m25);
      b_st.site = &hj_emlrtRSI;
      error(&b_st, d_y, &k_emlrtMCI);
    }

    if (varargin_1[1] == varargin_1[1]) {
    } else {
      e_y = NULL;
      m25 = emlrtCreateCharArray(2, iv95);
      for (i = 0; i < 15; i++) {
        cv135[i] = cv136[i];
      }

      emlrtInitCharArrayR2013a(&st, 15, m25, cv135);
      emlrtAssign(&e_y, m25);
      b_st.site = &hj_emlrtRSI;
      error(&b_st, e_y, &k_emlrtMCI);
    }

    ibmat = y->size[1];
    ntilerows = yy->size[0] * yy->size[1];
    yy->size[0] = ibmat;
    yy->size[1] = (int32_T)varargin_1[1];
    emxEnsureCapacity(&st, (emxArray__common *)yy, ntilerows, (int32_T)sizeof
                      (real_T), &jb_emlrtRTEI);
    ibmat = y->size[1];
    b_st.site = &kc_emlrtRSI;
    if (varargin_1[1] > 2.147483646E+9) {
      c_st.site = &rb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (i = 1; i <= (int32_T)varargin_1[1]; i++) {
      ntilerows = (i - 1) * ibmat;
      b_st.site = &jc_emlrtRSI;
      b_st.site = &ph_emlrtRSI;
      if (ibmat > 2147483646) {
        c_st.site = &rb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (jcol = 1; jcol <= ibmat; jcol++) {
        yy->data[(ntilerows + jcol) - 1] = y->data[jcol - 1];
      }
    }
  }

  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (meshgrid.c) */
