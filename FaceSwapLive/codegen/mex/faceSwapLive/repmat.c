/*
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "repmat.h"
#include "faceSwapLive_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "faceSwapLive_mexutil.h"
#include "faceSwapLive_data.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtMCInfo l_emlrtMCI = { 51, 13, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo m_emlrtMCI = { 50, 23, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo n_emlrtMCI = { 57, 5, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo o_emlrtMCI = { 56, 15, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo bb_emlrtMCI = { 42, 9, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo cb_emlrtMCI = { 41, 19, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRTEInfo fc_emlrtRTEI = { 1, 14, "repmat",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtDCInfo l_emlrtDCI = { 15, 14, "repmat",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elmat/repmat.m", 4 };

static emlrtRSInfo kj_emlrtRSI = { 56, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo lj_emlrtRSI = { 41, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo rj_emlrtRSI = { 50, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo yj_emlrtRSI = { 57, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo dk_emlrtRSI = { 42, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo fk_emlrtRSI = { 51, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

/* Function Declarations */
static void b_eml_assert_valid_size_arg(const emlrtStack *sp, const real_T
  varargin_1[3]);

/* Function Definitions */
static void b_eml_assert_valid_size_arg(const emlrtStack *sp, const real_T
  varargin_1[3])
{
  int32_T i;
  int32_T exitg2;
  boolean_T p;
  boolean_T guard1 = false;
  int32_T exitg1;
  const mxArray *y;
  static const int32_T iv123[2] = { 1, 57 };

  const mxArray *m37;
  char_T cv179[57];
  static const char_T cv180[57] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 's', 's', 'e', 'r', 't',
    '_', 'v', 'a', 'l', 'i', 'd', '_', 's', 'i', 'z', 'e', '_', 'a', 'r', 'g',
    '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'S', 'i', 'z', 'e', 'V', 'e', 'c',
    't', 'o', 'r' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T n;
  const mxArray *d_y;
  static const int32_T iv124[2] = { 1, 21 };

  char_T cv181[21];
  static const char_T cv182[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  i = 0;
  do {
    exitg2 = 0;
    if (i < 3) {
      if ((varargin_1[i] != varargin_1[i]) || muDoubleScalarIsInf(varargin_1[i]))
      {
        p = false;
        exitg2 = 1;
      } else {
        i++;
      }
    } else {
      p = true;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  guard1 = false;
  if (p) {
    i = 0;
    do {
      exitg1 = 0;
      if (i < 3) {
        if ((-2.147483648E+9 > varargin_1[i]) || (2.147483647E+9 < varargin_1[i]))
        {
          p = false;
          exitg1 = 1;
        } else {
          i++;
        }
      } else {
        p = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    if (p) {
      p = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    p = false;
  }

  if (p) {
  } else {
    y = NULL;
    m37 = emlrtCreateCharArray(2, iv123);
    for (i = 0; i < 57; i++) {
      cv179[i] = cv180[i];
    }

    emlrtInitCharArrayR2013a(sp, 57, m37, cv179);
    emlrtAssign(&y, m37);
    b_y = NULL;
    m37 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m37) = MIN_int32_T;
    emlrtAssign(&b_y, m37);
    c_y = NULL;
    m37 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m37) = MAX_int32_T;
    emlrtAssign(&c_y, m37);
    st.site = &lj_emlrtRSI;
    b_st.site = &dk_emlrtRSI;
    error(&st, c_message(&b_st, y, b_y, c_y, &bb_emlrtMCI), &cb_emlrtMCI);
  }

  n = 1.0;
  for (i = 0; i < 3; i++) {
    n *= varargin_1[i];
  }

  if (2.147483647E+9 >= n) {
  } else {
    d_y = NULL;
    m37 = emlrtCreateCharArray(2, iv124);
    for (i = 0; i < 21; i++) {
      cv181[i] = cv182[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m37, cv181);
    emlrtAssign(&d_y, m37);
    st.site = &kj_emlrtRSI;
    b_st.site = &yj_emlrtRSI;
    error(&st, b_message(&b_st, d_y, &n_emlrtMCI), &o_emlrtMCI);
  }
}

void b_repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T varargin_1,
              real_T varargin_2, emxArray_real_T *b)
{
  boolean_T p;
  boolean_T guard2 = false;
  const mxArray *y;
  static const int32_T iv53[2] = { 1, 28 };

  const mxArray *m17;
  char_T cv75[28];
  int32_T i;
  static const char_T cv76[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  boolean_T guard1 = false;
  const mxArray *d_y;
  static const int32_T iv54[2] = { 1, 28 };

  const mxArray *e_y;
  const mxArray *f_y;
  real_T b_varargin_2;
  real_T b_varargin_1;
  const mxArray *g_y;
  static const int32_T iv55[2] = { 1, 21 };

  char_T cv77[21];
  static const char_T cv78[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T outsize_idx_1;
  const mxArray *h_y;
  static const int32_T iv56[2] = { 1, 15 };

  char_T cv79[15];
  static const char_T cv80[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  boolean_T b2;
  int32_T ibtile;
  boolean_T b3;
  int32_T jcol;
  int32_T ibmat;
  boolean_T b4;
  int32_T itilerow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  if ((varargin_1 != muDoubleScalarFloor(varargin_1)) || muDoubleScalarIsInf
      (varargin_1)) {
    p = false;
  } else {
    p = true;
  }

  guard2 = false;
  if (p) {
    if ((-2.147483648E+9 > varargin_1) || (2.147483647E+9 < varargin_1)) {
      p = false;
    } else {
      p = true;
    }

    if (p) {
      p = true;
    } else {
      guard2 = true;
    }
  } else {
    guard2 = true;
  }

  if (guard2) {
    p = false;
  }

  if (p) {
  } else {
    y = NULL;
    m17 = emlrtCreateCharArray(2, iv53);
    for (i = 0; i < 28; i++) {
      cv75[i] = cv76[i];
    }

    emlrtInitCharArrayR2013a(&st, 28, m17, cv75);
    emlrtAssign(&y, m17);
    b_y = NULL;
    m17 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m17) = MIN_int32_T;
    emlrtAssign(&b_y, m17);
    c_y = NULL;
    m17 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m17) = MAX_int32_T;
    emlrtAssign(&c_y, m17);
    b_st.site = &rj_emlrtRSI;
    c_st.site = &fk_emlrtRSI;
    error(&b_st, c_message(&c_st, y, b_y, c_y, &l_emlrtMCI), &m_emlrtMCI);
  }

  if ((varargin_2 != muDoubleScalarFloor(varargin_2)) || muDoubleScalarIsInf
      (varargin_2)) {
    p = false;
  } else {
    p = true;
  }

  guard1 = false;
  if (p) {
    if ((-2.147483648E+9 > varargin_2) || (2.147483647E+9 < varargin_2)) {
      p = false;
    } else {
      p = true;
    }

    if (p) {
      p = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    p = false;
  }

  if (p) {
  } else {
    d_y = NULL;
    m17 = emlrtCreateCharArray(2, iv54);
    for (i = 0; i < 28; i++) {
      cv75[i] = cv76[i];
    }

    emlrtInitCharArrayR2013a(&st, 28, m17, cv75);
    emlrtAssign(&d_y, m17);
    e_y = NULL;
    m17 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m17) = MIN_int32_T;
    emlrtAssign(&e_y, m17);
    f_y = NULL;
    m17 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m17) = MAX_int32_T;
    emlrtAssign(&f_y, m17);
    b_st.site = &rj_emlrtRSI;
    c_st.site = &fk_emlrtRSI;
    error(&b_st, c_message(&c_st, d_y, e_y, f_y, &l_emlrtMCI), &m_emlrtMCI);
  }

  if (varargin_2 <= 0.0) {
    b_varargin_2 = 0.0;
  } else {
    if (varargin_1 <= 0.0) {
      b_varargin_1 = 0.0;
    } else {
      b_varargin_1 = varargin_1;
    }

    b_varargin_2 = b_varargin_1 * varargin_2;
  }

  if (2.147483647E+9 >= b_varargin_2) {
  } else {
    g_y = NULL;
    m17 = emlrtCreateCharArray(2, iv55);
    for (i = 0; i < 21; i++) {
      cv77[i] = cv78[i];
    }

    emlrtInitCharArrayR2013a(&st, 21, m17, cv77);
    emlrtAssign(&g_y, m17);
    b_st.site = &kj_emlrtRSI;
    c_st.site = &yj_emlrtRSI;
    error(&b_st, b_message(&c_st, g_y, &n_emlrtMCI), &o_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(varargin_1, &l_emlrtDCI, sp);
  outsize_idx_1 = a->size[1] * (int32_T)varargin_2;
  if (outsize_idx_1 == (real_T)a->size[1] * (real_T)(int32_T)varargin_2) {
  } else {
    h_y = NULL;
    m17 = emlrtCreateCharArray(2, iv56);
    for (i = 0; i < 15; i++) {
      cv79[i] = cv80[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m17, cv79);
    emlrtAssign(&h_y, m17);
    st.site = &hj_emlrtRSI;
    error(&st, h_y, &k_emlrtMCI);
  }

  i = b->size[0] * b->size[1];
  b->size[0] = (int32_T)varargin_1;
  b->size[1] = outsize_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)b, i, (int32_T)sizeof(real_T),
                    &jb_emlrtRTEI);
  if (((int32_T)varargin_1 == 0) || (outsize_idx_1 == 0)) {
  } else {
    i = a->size[1];
    st.site = &kc_emlrtRSI;
    if (1 > (int32_T)varargin_2) {
      b2 = false;
    } else {
      b2 = ((int32_T)varargin_2 > 2147483646);
    }

    if (b2) {
      b_st.site = &rb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (outsize_idx_1 = 1; outsize_idx_1 <= (int32_T)varargin_2; outsize_idx_1
         ++) {
      ibtile = (outsize_idx_1 - 1) * ((int32_T)varargin_1 * i) - 1;
      st.site = &ic_emlrtRSI;
      if (1 > i) {
        b3 = false;
      } else {
        b3 = (i > 2147483646);
      }

      if (b3) {
        b_st.site = &rb_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (jcol = 0; jcol + 1 <= i; jcol++) {
        ibmat = ibtile + jcol * (int32_T)varargin_1;
        st.site = &jc_emlrtRSI;
        if (1 > (int32_T)varargin_1) {
          b4 = false;
        } else {
          b4 = ((int32_T)varargin_1 > 2147483646);
        }

        if (b4) {
          b_st.site = &rb_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }

        for (itilerow = 1; itilerow <= (int32_T)varargin_1; itilerow++) {
          b->data[ibmat + itilerow] = a->data[jcol];
        }
      }
    }
  }
}

void c_repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T varargin_2,
              emxArray_real_T *b)
{
  boolean_T p;
  boolean_T guard1 = false;
  const mxArray *y;
  static const int32_T iv57[2] = { 1, 28 };

  const mxArray *m18;
  char_T cv81[28];
  int32_T i;
  static const char_T cv82[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T b_varargin_2;
  const mxArray *d_y;
  static const int32_T iv58[2] = { 1, 21 };

  char_T cv83[21];
  static const char_T cv84[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T outsize_idx_1;
  const mxArray *e_y;
  static const int32_T iv59[2] = { 1, 15 };

  char_T cv85[15];
  static const char_T cv86[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  boolean_T b5;
  int32_T ibtile;
  boolean_T b6;
  int32_T jcol;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  if ((varargin_2 != muDoubleScalarFloor(varargin_2)) || muDoubleScalarIsInf
      (varargin_2)) {
    p = false;
  } else {
    p = true;
  }

  guard1 = false;
  if (p) {
    if ((-2.147483648E+9 > varargin_2) || (2.147483647E+9 < varargin_2)) {
      p = false;
    } else {
      p = true;
    }

    if (p) {
      p = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    p = false;
  }

  if (p) {
  } else {
    y = NULL;
    m18 = emlrtCreateCharArray(2, iv57);
    for (i = 0; i < 28; i++) {
      cv81[i] = cv82[i];
    }

    emlrtInitCharArrayR2013a(&st, 28, m18, cv81);
    emlrtAssign(&y, m18);
    b_y = NULL;
    m18 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m18) = MIN_int32_T;
    emlrtAssign(&b_y, m18);
    c_y = NULL;
    m18 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m18) = MAX_int32_T;
    emlrtAssign(&c_y, m18);
    b_st.site = &rj_emlrtRSI;
    c_st.site = &fk_emlrtRSI;
    error(&b_st, c_message(&c_st, y, b_y, c_y, &l_emlrtMCI), &m_emlrtMCI);
  }

  if (varargin_2 <= 0.0) {
    b_varargin_2 = 0.0;
  } else {
    b_varargin_2 = varargin_2;
  }

  if (2.147483647E+9 >= b_varargin_2) {
  } else {
    d_y = NULL;
    m18 = emlrtCreateCharArray(2, iv58);
    for (i = 0; i < 21; i++) {
      cv83[i] = cv84[i];
    }

    emlrtInitCharArrayR2013a(&st, 21, m18, cv83);
    emlrtAssign(&d_y, m18);
    b_st.site = &kj_emlrtRSI;
    c_st.site = &yj_emlrtRSI;
    error(&b_st, b_message(&c_st, d_y, &n_emlrtMCI), &o_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(varargin_2, &l_emlrtDCI, sp);
  outsize_idx_1 = a->size[1] * (int32_T)varargin_2;
  if (outsize_idx_1 == (real_T)a->size[1] * (real_T)(int32_T)varargin_2) {
  } else {
    e_y = NULL;
    m18 = emlrtCreateCharArray(2, iv59);
    for (i = 0; i < 15; i++) {
      cv85[i] = cv86[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m18, cv85);
    emlrtAssign(&e_y, m18);
    st.site = &hj_emlrtRSI;
    error(&st, e_y, &k_emlrtMCI);
  }

  i = b->size[0] * b->size[1];
  b->size[0] = 1;
  b->size[1] = outsize_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)b, i, (int32_T)sizeof(real_T),
                    &jb_emlrtRTEI);
  if (outsize_idx_1 == 0) {
  } else {
    i = a->size[1];
    st.site = &kc_emlrtRSI;
    if (1 > (int32_T)varargin_2) {
      b5 = false;
    } else {
      b5 = ((int32_T)varargin_2 > 2147483646);
    }

    if (b5) {
      b_st.site = &rb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (outsize_idx_1 = 1; outsize_idx_1 <= (int32_T)varargin_2; outsize_idx_1
         ++) {
      ibtile = (outsize_idx_1 - 1) * i;
      st.site = &ic_emlrtRSI;
      if (1 > i) {
        b6 = false;
      } else {
        b6 = (i > 2147483646);
      }

      if (b6) {
        b_st.site = &rb_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (jcol = 1; jcol <= i; jcol++) {
        b->data[(ibtile + jcol) - 1] = a->data[jcol - 1];
      }
    }
  }
}

void d_repmat(const emlrtStack *sp, const real_T varargin_1[3], emxArray_real_T *
              b)
{
  const mxArray *y;
  static const int32_T iv121[2] = { 1, 15 };

  const mxArray *m36;
  char_T cv177[15];
  int32_T i;
  static const char_T cv178[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  const mxArray *b_y;
  static const int32_T iv122[2] = { 1, 15 };

  int32_T loop_ub;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hc_emlrtRSI;
  b_eml_assert_valid_size_arg(&st, varargin_1);
  if ((int16_T)(int32_T)varargin_1[0] == (int32_T)varargin_1[0]) {
  } else {
    y = NULL;
    m36 = emlrtCreateCharArray(2, iv121);
    for (i = 0; i < 15; i++) {
      cv177[i] = cv178[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m36, cv177);
    emlrtAssign(&y, m36);
    st.site = &hj_emlrtRSI;
    error(&st, y, &k_emlrtMCI);
  }

  if ((int16_T)(int32_T)varargin_1[1] == (int32_T)varargin_1[1]) {
  } else {
    b_y = NULL;
    m36 = emlrtCreateCharArray(2, iv122);
    for (i = 0; i < 15; i++) {
      cv177[i] = cv178[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m36, cv177);
    emlrtAssign(&b_y, m36);
    st.site = &hj_emlrtRSI;
    error(&st, b_y, &k_emlrtMCI);
  }

  i = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = (int32_T)varargin_1[0];
  emxEnsureCapacity(sp, (emxArray__common *)b, i, (int32_T)sizeof(real_T),
                    &fc_emlrtRTEI);
  i = b->size[0] * b->size[1] * b->size[2];
  b->size[1] = (int32_T)varargin_1[1];
  b->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)b, i, (int32_T)sizeof(real_T),
                    &fc_emlrtRTEI);
  loop_ub = (int32_T)varargin_1[0] * (int32_T)varargin_1[1] * 3;
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = 0.0;
  }
}

void e_repmat(const emlrtStack *sp, const real_T varargin_1[2],
              emxArray_boolean_T *b)
{
  const mxArray *y;
  static const int32_T iv130[2] = { 1, 15 };

  const mxArray *m40;
  char_T cv185[15];
  int32_T i;
  static const char_T cv186[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  const mxArray *b_y;
  static const int32_T iv131[2] = { 1, 15 };

  int32_T loop_ub;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hc_emlrtRSI;
  eml_assert_valid_size_arg(&st, varargin_1);
  if ((int16_T)(int32_T)varargin_1[0] == (int32_T)varargin_1[0]) {
  } else {
    y = NULL;
    m40 = emlrtCreateCharArray(2, iv130);
    for (i = 0; i < 15; i++) {
      cv185[i] = cv186[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m40, cv185);
    emlrtAssign(&y, m40);
    st.site = &hj_emlrtRSI;
    error(&st, y, &k_emlrtMCI);
  }

  if ((int16_T)(int32_T)varargin_1[1] == (int32_T)varargin_1[1]) {
  } else {
    b_y = NULL;
    m40 = emlrtCreateCharArray(2, iv131);
    for (i = 0; i < 15; i++) {
      cv185[i] = cv186[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m40, cv185);
    emlrtAssign(&b_y, m40);
    st.site = &hj_emlrtRSI;
    error(&st, b_y, &k_emlrtMCI);
  }

  i = b->size[0] * b->size[1];
  b->size[0] = (int32_T)varargin_1[0];
  emxEnsureCapacity(sp, (emxArray__common *)b, i, (int32_T)sizeof(boolean_T),
                    &fc_emlrtRTEI);
  i = b->size[0] * b->size[1];
  b->size[1] = (int32_T)varargin_1[1];
  emxEnsureCapacity(sp, (emxArray__common *)b, i, (int32_T)sizeof(boolean_T),
                    &fc_emlrtRTEI);
  loop_ub = (int32_T)varargin_1[0] * (int32_T)varargin_1[1];
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = false;
  }
}

void eml_assert_valid_size_arg(const emlrtStack *sp, const real_T varargin_1[2])
{
  int32_T i;
  int32_T exitg2;
  boolean_T p;
  boolean_T guard1 = false;
  int32_T exitg1;
  const mxArray *y;
  static const int32_T iv96[2] = { 1, 57 };

  const mxArray *m26;
  char_T cv137[57];
  static const char_T cv138[57] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 's', 's', 'e', 'r', 't',
    '_', 'v', 'a', 'l', 'i', 'd', '_', 's', 'i', 'z', 'e', '_', 'a', 'r', 'g',
    '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'S', 'i', 'z', 'e', 'V', 'e', 'c',
    't', 'o', 'r' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T n;
  const mxArray *d_y;
  static const int32_T iv97[2] = { 1, 21 };

  char_T cv139[21];
  static const char_T cv140[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  i = 0;
  do {
    exitg2 = 0;
    if (i < 2) {
      if ((varargin_1[i] != varargin_1[i]) || muDoubleScalarIsInf(varargin_1[i]))
      {
        p = false;
        exitg2 = 1;
      } else {
        i++;
      }
    } else {
      p = true;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  guard1 = false;
  if (p) {
    i = 0;
    do {
      exitg1 = 0;
      if (i < 2) {
        if ((-2.147483648E+9 > varargin_1[i]) || (2.147483647E+9 < varargin_1[i]))
        {
          p = false;
          exitg1 = 1;
        } else {
          i++;
        }
      } else {
        p = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    if (p) {
      p = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    p = false;
  }

  if (p) {
  } else {
    y = NULL;
    m26 = emlrtCreateCharArray(2, iv96);
    for (i = 0; i < 57; i++) {
      cv137[i] = cv138[i];
    }

    emlrtInitCharArrayR2013a(sp, 57, m26, cv137);
    emlrtAssign(&y, m26);
    b_y = NULL;
    m26 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m26) = MIN_int32_T;
    emlrtAssign(&b_y, m26);
    c_y = NULL;
    m26 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m26) = MAX_int32_T;
    emlrtAssign(&c_y, m26);
    st.site = &lj_emlrtRSI;
    b_st.site = &dk_emlrtRSI;
    error(&st, c_message(&b_st, y, b_y, c_y, &bb_emlrtMCI), &cb_emlrtMCI);
  }

  n = 1.0;
  for (i = 0; i < 2; i++) {
    if (varargin_1[i] <= 0.0) {
      n = 0.0;
    } else {
      n *= varargin_1[i];
    }
  }

  if (2.147483647E+9 >= n) {
  } else {
    d_y = NULL;
    m26 = emlrtCreateCharArray(2, iv97);
    for (i = 0; i < 21; i++) {
      cv139[i] = cv140[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m26, cv139);
    emlrtAssign(&d_y, m26);
    st.site = &kj_emlrtRSI;
    b_st.site = &yj_emlrtRSI;
    error(&st, b_message(&b_st, d_y, &n_emlrtMCI), &o_emlrtMCI);
  }
}

void repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T varargin_1,
            emxArray_real_T *b)
{
  boolean_T overflow;
  boolean_T guard1 = false;
  const mxArray *y;
  static const int32_T iv50[2] = { 1, 28 };

  const mxArray *m16;
  char_T cv69[28];
  int32_T i;
  static const char_T cv70[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T b_varargin_1;
  const mxArray *d_y;
  static const int32_T iv51[2] = { 1, 21 };

  char_T cv71[21];
  static const char_T cv72[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  const mxArray *e_y;
  static const int32_T iv52[2] = { 1, 15 };

  char_T cv73[15];
  static const char_T cv74[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  int32_T ibmat;
  boolean_T b1;
  int32_T itilerow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  if ((varargin_1 != muDoubleScalarFloor(varargin_1)) || muDoubleScalarIsInf
      (varargin_1)) {
    overflow = false;
  } else {
    overflow = true;
  }

  guard1 = false;
  if (overflow) {
    if ((-2.147483648E+9 > varargin_1) || (2.147483647E+9 < varargin_1)) {
      overflow = false;
    } else {
      overflow = true;
    }

    if (overflow) {
      overflow = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    overflow = false;
  }

  if (overflow) {
  } else {
    y = NULL;
    m16 = emlrtCreateCharArray(2, iv50);
    for (i = 0; i < 28; i++) {
      cv69[i] = cv70[i];
    }

    emlrtInitCharArrayR2013a(&st, 28, m16, cv69);
    emlrtAssign(&y, m16);
    b_y = NULL;
    m16 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m16) = MIN_int32_T;
    emlrtAssign(&b_y, m16);
    c_y = NULL;
    m16 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m16) = MAX_int32_T;
    emlrtAssign(&c_y, m16);
    b_st.site = &rj_emlrtRSI;
    c_st.site = &fk_emlrtRSI;
    error(&b_st, c_message(&c_st, y, b_y, c_y, &l_emlrtMCI), &m_emlrtMCI);
  }

  if (varargin_1 <= 0.0) {
    b_varargin_1 = 0.0;
  } else {
    b_varargin_1 = varargin_1;
  }

  if (2.147483647E+9 >= b_varargin_1) {
  } else {
    d_y = NULL;
    m16 = emlrtCreateCharArray(2, iv51);
    for (i = 0; i < 21; i++) {
      cv71[i] = cv72[i];
    }

    emlrtInitCharArrayR2013a(&st, 21, m16, cv71);
    emlrtAssign(&d_y, m16);
    b_st.site = &kj_emlrtRSI;
    c_st.site = &yj_emlrtRSI;
    error(&b_st, b_message(&c_st, d_y, &n_emlrtMCI), &o_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(varargin_1, &l_emlrtDCI, sp);
  i = a->size[1];
  if (i == a->size[1]) {
  } else {
    e_y = NULL;
    m16 = emlrtCreateCharArray(2, iv52);
    for (i = 0; i < 15; i++) {
      cv73[i] = cv74[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m16, cv73);
    emlrtAssign(&e_y, m16);
    st.site = &hj_emlrtRSI;
    error(&st, e_y, &k_emlrtMCI);
  }

  i = b->size[0] * b->size[1];
  b->size[0] = (int32_T)varargin_1;
  b->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b, i, (int32_T)sizeof(real_T),
                    &jb_emlrtRTEI);
  i = a->size[1];
  if (((int32_T)varargin_1 == 0) || (i == 0)) {
  } else {
    st.site = &ic_emlrtRSI;
    if (1 > a->size[1]) {
      overflow = false;
    } else {
      overflow = (a->size[1] > 2147483646);
    }

    if (overflow) {
      b_st.site = &rb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (i = 0; i + 1 <= a->size[1]; i++) {
      ibmat = i * (int32_T)varargin_1;
      st.site = &jc_emlrtRSI;
      if (1 > (int32_T)varargin_1) {
        b1 = false;
      } else {
        b1 = ((int32_T)varargin_1 > 2147483646);
      }

      if (b1) {
        b_st.site = &rb_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (itilerow = 1; itilerow <= (int32_T)varargin_1; itilerow++) {
        b->data[(ibmat + itilerow) - 1] = a->data[i];
      }
    }
  }
}

/* End of code generation (repmat.c) */
