/*
 * faceSwapLive_data.c
 *
 * Code generation for function 'faceSwapLive_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "faceSwapLive_data.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
emlrtRSInfo cb_emlrtRSI = { 1, "SystemCore",
  "/Applications/MATLAB_R2014b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtRSInfo kb_emlrtRSI = { 1, "Nondirect",
  "/Applications/MATLAB_R2014b.app/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"
};

emlrtRSInfo nb_emlrtRSI = { 21, "colon",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo ob_emlrtRSI = { 79, "colon",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo pb_emlrtRSI = { 283, "colon",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo qb_emlrtRSI = { 291, "colon",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo rb_emlrtRSI = { 20, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo hc_emlrtRSI = { 12, "repmat",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elmat/repmat.m" };

emlrtRSInfo ic_emlrtRSI = { 42, "repmat",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elmat/repmat.m" };

emlrtRSInfo jc_emlrtRSI = { 45, "repmat",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elmat/repmat.m" };

emlrtRSInfo kc_emlrtRSI = { 40, "repmat",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elmat/repmat.m" };

emlrtRSInfo qc_emlrtRSI = { 75, "bsxfun",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elmat/bsxfun.m" };

emlrtRSInfo rc_emlrtRSI = { 77, "bsxfun",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elmat/bsxfun.m" };

emlrtRSInfo sc_emlrtRSI = { 87, "bsxfun",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elmat/bsxfun.m" };

emlrtRSInfo tc_emlrtRSI = { 13, "sum",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtRSInfo uc_emlrtRSI = { 46, "sumprod",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/datafun/private/sumprod.m"
};

emlrtRSInfo gd_emlrtRSI = { 34, "mean",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtRSInfo wd_emlrtRSI = { 36, "combine_vector_elements",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"
};

emlrtRSInfo de_emlrtRSI = { 329, "eml_matlab_zsvdc",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

emlrtRSInfo ee_emlrtRSI = { 348, "eml_matlab_zsvdc",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

emlrtRSInfo fe_emlrtRSI = { 346, "eml_matlab_zsvdc",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

emlrtRSInfo ge_emlrtRSI = { 400, "eml_matlab_zsvdc",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

emlrtRSInfo he_emlrtRSI = { 387, "eml_matlab_zsvdc",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

emlrtRSInfo ie_emlrtRSI = { 384, "eml_matlab_zsvdc",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

emlrtRSInfo le_emlrtRSI = { 116, "eml_matlab_zsvdc",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

emlrtRSInfo oe_emlrtRSI = { 78, "eml_matlab_zsvdc",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

emlrtRSInfo qe_emlrtRSI = { 19, "eml_xnrm2",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/blas/eml_xnrm2.m"
};

emlrtRSInfo re_emlrtRSI = { 1, "xnrm2",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/+blas/xnrm2.p"
};

emlrtRSInfo se_emlrtRSI = { 1, "xnrm2",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/+refblas/xnrm2.p"
};

emlrtRSInfo te_emlrtRSI = { 1, "scaleVectorByRecip",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/scaleVectorByRecip.p"
};

emlrtRSInfo cf_emlrtRSI = { 18, "eml_xrotg",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/blas/eml_xrotg.m"
};

emlrtRSInfo df_emlrtRSI = { 1, "xrotg",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/+blas/xrotg.p"
};

emlrtRSInfo ef_emlrtRSI = { 1, "mldivide",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/ops/mldivide.p" };

emlrtRSInfo rf_emlrtRSI = { 20, "eml_ixamax",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/blas/eml_ixamax.m"
};

emlrtRSInfo sf_emlrtRSI = { 1, "ixamax",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/+blas/ixamax.p"
};

emlrtRSInfo tf_emlrtRSI = { 1, "ixamax",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/+refblas/ixamax.p"
};

emlrtRSInfo lg_emlrtRSI = { 1, "xger",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/+blas/xger.p"
};

emlrtRSInfo mg_emlrtRSI = { 1, "xger",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/+refblas/xger.p"
};

emlrtRSInfo ng_emlrtRSI = { 1, "xgerx",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/+refblas/xgerx.p"
};

emlrtRSInfo pi_emlrtRSI = { 127, "imfilter",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imfilter.m" };

emlrtRSInfo qi_emlrtRSI = { 30, "imfilter",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imfilter.m" };

emlrtRSInfo yi_emlrtRSI = { 376, "imfilter",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imfilter.m" };

emlrtRSInfo aj_emlrtRSI = { 390, "imfilter",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imfilter.m" };

emlrtRSInfo bj_emlrtRSI = { 502, "imfilter",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imfilter.m" };

emlrtRSInfo cj_emlrtRSI = { 717, "imfilter",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imfilter.m" };

emlrtRSInfo dj_emlrtRSI = { 728, "imfilter",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imfilter.m" };

emlrtRSInfo fj_emlrtRSI = { 528, "imfilter",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imfilter.m" };

emlrtMCInfo i_emlrtMCI = { 29, 23, "eml_flt2str",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_flt2str.m" };

emlrtMCInfo j_emlrtMCI = { 29, 15, "eml_flt2str",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_flt2str.m" };

emlrtMCInfo k_emlrtMCI = { 24, 5, "repmat",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elmat/repmat.m" };

emlrtMCInfo t_emlrtMCI = { 162, 28, "validateattributes",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"
};

emlrtMCInfo u_emlrtMCI = { 15, 19, "errorIf",
  "/Applications/MATLAB_R2014b.app/toolbox/shared/coder/coder/+coder/+internal/errorIf.m"
};

emlrtMCInfo w_emlrtMCI = { 28, 19, "assert",
  "/Applications/MATLAB_R2014b.app/toolbox/shared/coder/coder/+coder/+internal/assert.m"
};

emlrtMCInfo x_emlrtMCI = { 171, 28, "validateattributes",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"
};

emlrtMCInfo ab_emlrtMCI = { 138, 28, "validateattributes",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"
};

emlrtMCInfo hb_emlrtMCI = { 14, 5, "eml_li_find",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

emlrtRTEInfo emlrtRTEI = { 284, 1, "colon",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRTEInfo jb_emlrtRTEI = { 30, 1, "repmat",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elmat/repmat.m" };

emlrtRTEInfo vb_emlrtRTEI = { 523, 5, "imfilter",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imfilter.m" };

emlrtRTEInfo ac_emlrtRTEI = { 8, 2, "imfilter",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imfilter.m" };

emlrtDCInfo emlrtDCI = { 20, 34, "eml_li_find",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_li_find.m", 4
};

faceSwapLiveStackData *faceSwapLiveStackDataLocal;
emlrtRSInfo hj_emlrtRSI = { 24, "repmat",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elmat/repmat.m" };

emlrtRSInfo jj_emlrtRSI = { 14, "eml_li_find",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

emlrtRSInfo mj_emlrtRSI = { 15, "errorIf",
  "/Applications/MATLAB_R2014b.app/toolbox/shared/coder/coder/+coder/+internal/errorIf.m"
};

emlrtRSInfo pj_emlrtRSI = { 28, "assert",
  "/Applications/MATLAB_R2014b.app/toolbox/shared/coder/coder/+coder/+internal/assert.m"
};

emlrtRSInfo gk_emlrtRSI = { 138, "validateattributes",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"
};

emlrtRSInfo hk_emlrtRSI = { 171, "validateattributes",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"
};

emlrtRSInfo ik_emlrtRSI = { 162, "validateattributes",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"
};

emlrtRSInfo kk_emlrtRSI = { 29, "eml_flt2str",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_flt2str.m" };

/* End of code generation (faceSwapLive_data.c) */
