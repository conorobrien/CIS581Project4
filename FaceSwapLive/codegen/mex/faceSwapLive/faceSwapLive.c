/*
 * faceSwapLive.c
 *
 * Code generation for function 'faceSwapLive'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwgrayto8.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray__common
#define struct_emxArray__common

struct emxArray__common
{
  void *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray__common*/

#ifndef typedef_emxArray__common
#define typedef_emxArray__common

typedef struct emxArray__common emxArray__common;

#endif                                 /*typedef_emxArray__common*/

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_boolean_T*/

#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T

typedef struct emxArray_boolean_T emxArray_boolean_T;

#endif                                 /*typedef_emxArray_boolean_T*/

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T

typedef struct emxArray_int32_T emxArray_int32_T;

#endif                                 /*typedef_emxArray_int32_T*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef struct_emxArray_uint32_T
#define struct_emxArray_uint32_T

struct emxArray_uint32_T
{
  uint32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_uint32_T*/

#ifndef typedef_emxArray_uint32_T
#define typedef_emxArray_uint32_T

typedef struct emxArray_uint32_T emxArray_uint32_T;

#endif                                 /*typedef_emxArray_uint32_T*/

#ifndef typedef_projective2d
#define typedef_projective2d

typedef struct {
  real_T Dimensionality;
  real_T T[9];
} projective2d;

#endif                                 /*typedef_projective2d*/

#ifndef struct_vision_ColorSpaceConverter_0
#define struct_vision_ColorSpaceConverter_0

struct vision_ColorSpaceConverter_0
{
  boolean_T S0_isInitialized;
  boolean_T S1_isReleased;
  uint16_T P0_COEFF_RTP[3];
};

#endif                                 /*struct_vision_ColorSpaceConverter_0*/

#ifndef typedef_vision_ColorSpaceConverter_0
#define typedef_vision_ColorSpaceConverter_0

typedef struct vision_ColorSpaceConverter_0 vision_ColorSpaceConverter_0;

#endif                                 /*typedef_vision_ColorSpaceConverter_0*/

#ifndef typedef_c_visioncodegen_ColorSpaceConve
#define typedef_c_visioncodegen_ColorSpaceConve

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  boolean_T isInitialized;
  boolean_T isReleased;
  vision_ColorSpaceConverter_0 cSFunObject;
} c_visioncodegen_ColorSpaceConve;

#endif                                 /*typedef_c_visioncodegen_ColorSpaceConve*/

#ifndef typedef_vision_CascadeObjectDetector_10
#define typedef_vision_CascadeObjectDetector_10

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  boolean_T isInitialized;
  boolean_T isReleased;
  boolean_T TunablePropsChanged;
  uint32_T inputVarSize1[8];
  real_T ScaleFactor;
  real_T MergeThreshold;
  void * pCascadeClassifier;
  c_visioncodegen_ColorSpaceConve pColorSpaceConverterCG;
} vision_CascadeObjectDetector_10;

#endif                                 /*typedef_vision_CascadeObjectDetector_10*/

#ifndef struct_vision_ColorSpaceConverter_1
#define struct_vision_ColorSpaceConverter_1

struct vision_ColorSpaceConverter_1
{
  boolean_T SystemObjectStructType;
};

#endif                                 /*struct_vision_ColorSpaceConverter_1*/

#ifndef typedef_vision_ColorSpaceConverter_1
#define typedef_vision_ColorSpaceConverter_1

typedef struct vision_ColorSpaceConverter_1 vision_ColorSpaceConverter_1;

#endif                                 /*typedef_vision_ColorSpaceConverter_1*/

#ifndef typedef_d_visioncodegen_ColorSpaceConve
#define typedef_d_visioncodegen_ColorSpaceConve

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  vision_ColorSpaceConverter_1 cSFunObject;
} d_visioncodegen_ColorSpaceConve;

#endif                                 /*typedef_d_visioncodegen_ColorSpaceConve*/

#ifndef typedef_vision_CascadeObjectDetector_11
#define typedef_vision_CascadeObjectDetector_11

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  boolean_T isInitialized;
  boolean_T isReleased;
  boolean_T TunablePropsChanged;
  uint32_T inputVarSize1[8];
  real_T ScaleFactor;
  real_T MergeThreshold;
  void * pCascadeClassifier;
  d_visioncodegen_ColorSpaceConve pColorSpaceConverterCG;
} vision_CascadeObjectDetector_11;

#endif                                 /*typedef_vision_CascadeObjectDetector_11*/

#ifndef struct_vision_ColorSpaceConverter_2
#define struct_vision_ColorSpaceConverter_2

struct vision_ColorSpaceConverter_2
{
  boolean_T SystemObjectStructType;
};

#endif                                 /*struct_vision_ColorSpaceConverter_2*/

#ifndef typedef_vision_ColorSpaceConverter_2
#define typedef_vision_ColorSpaceConverter_2

typedef struct vision_ColorSpaceConverter_2 vision_ColorSpaceConverter_2;

#endif                                 /*typedef_vision_ColorSpaceConverter_2*/

#ifndef typedef_e_visioncodegen_ColorSpaceConve
#define typedef_e_visioncodegen_ColorSpaceConve

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  vision_ColorSpaceConverter_2 cSFunObject;
} e_visioncodegen_ColorSpaceConve;

#endif                                 /*typedef_e_visioncodegen_ColorSpaceConve*/

#ifndef typedef_vision_CascadeObjectDetector_12
#define typedef_vision_CascadeObjectDetector_12

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  boolean_T isInitialized;
  boolean_T isReleased;
  boolean_T TunablePropsChanged;
  uint32_T inputVarSize1[8];
  real_T ScaleFactor;
  real_T MergeThreshold;
  void * pCascadeClassifier;
  e_visioncodegen_ColorSpaceConve pColorSpaceConverterCG;
} vision_CascadeObjectDetector_12;

#endif                                 /*typedef_vision_CascadeObjectDetector_12*/

#ifndef struct_vision_ColorSpaceConverter_3
#define struct_vision_ColorSpaceConverter_3

struct vision_ColorSpaceConverter_3
{
  boolean_T SystemObjectStructType;
};

#endif                                 /*struct_vision_ColorSpaceConverter_3*/

#ifndef typedef_vision_ColorSpaceConverter_3
#define typedef_vision_ColorSpaceConverter_3

typedef struct vision_ColorSpaceConverter_3 vision_ColorSpaceConverter_3;

#endif                                 /*typedef_vision_ColorSpaceConverter_3*/

#ifndef typedef_f_visioncodegen_ColorSpaceConve
#define typedef_f_visioncodegen_ColorSpaceConve

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  vision_ColorSpaceConverter_3 cSFunObject;
} f_visioncodegen_ColorSpaceConve;

#endif                                 /*typedef_f_visioncodegen_ColorSpaceConve*/

#ifndef typedef_vision_CascadeObjectDetector_13
#define typedef_vision_CascadeObjectDetector_13

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  boolean_T isInitialized;
  boolean_T isReleased;
  boolean_T TunablePropsChanged;
  uint32_T inputVarSize1[8];
  real_T ScaleFactor;
  real_T MergeThreshold;
  void * pCascadeClassifier;
  f_visioncodegen_ColorSpaceConve pColorSpaceConverterCG;
} vision_CascadeObjectDetector_13;

#endif                                 /*typedef_vision_CascadeObjectDetector_13*/

#ifndef struct_vision_ColorSpaceConverter_4
#define struct_vision_ColorSpaceConverter_4

struct vision_ColorSpaceConverter_4
{
  boolean_T SystemObjectStructType;
};

#endif                                 /*struct_vision_ColorSpaceConverter_4*/

#ifndef typedef_vision_ColorSpaceConverter_4
#define typedef_vision_ColorSpaceConverter_4

typedef struct vision_ColorSpaceConverter_4 vision_ColorSpaceConverter_4;

#endif                                 /*typedef_vision_ColorSpaceConverter_4*/

#ifndef typedef_g_visioncodegen_ColorSpaceConve
#define typedef_g_visioncodegen_ColorSpaceConve

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  vision_ColorSpaceConverter_4 cSFunObject;
} g_visioncodegen_ColorSpaceConve;

#endif                                 /*typedef_g_visioncodegen_ColorSpaceConve*/

#ifndef typedef_vision_CascadeObjectDetector_14
#define typedef_vision_CascadeObjectDetector_14

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  boolean_T isInitialized;
  boolean_T isReleased;
  boolean_T TunablePropsChanged;
  uint32_T inputVarSize1[8];
  real_T ScaleFactor;
  real_T MergeThreshold;
  void * pCascadeClassifier;
  g_visioncodegen_ColorSpaceConve pColorSpaceConverterCG;
} vision_CascadeObjectDetector_14;

#endif                                 /*typedef_vision_CascadeObjectDetector_14*/

/* Variable Definitions */
static const volatile char_T *emlrtBreakCheckR2012bFlagVar;
static vision_CascadeObjectDetector_10 faceDetector;
static boolean_T faceDetector_not_empty;
static vision_CascadeObjectDetector_11 rEyeDetector;
static vision_CascadeObjectDetector_12 lEyeDetector;
static vision_CascadeObjectDetector_13 mouthDetector;
static vision_CascadeObjectDetector_14 noseDetector;
static emlrtMCInfo emlrtMCI = { 13, 9, "isdeployed",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/general/isdeployed.m"
};

faceSwapLiveStackData *faceSwapLiveStackDataLocal;

/* Function Declarations */
static void SystemCore_step(faceSwapLiveStackData *SD,
  vision_CascadeObjectDetector_10 *obj, const real_T varargin_1[307440],
  emxArray_real_T *varargout_1);
static void b_SystemCore_step(faceSwapLiveStackData *SD,
  vision_CascadeObjectDetector_11 *obj, const emxArray_real_T *varargin_1,
  emxArray_real_T *varargout_1);
static void b_bsxfun(const real_T a[1215], const boolean_T b[405], real_T c[1215]);
static void b_eml_xaxpy(int32_T n, real_T a, const real_T x[80], int32_T ix0,
  real_T y[10], int32_T iy0);
static real_T b_eml_xnrm2(int32_T n, const real_T x[8], int32_T ix0);
static boolean_T b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static void b_emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions,
  boolean_T doPush);
static void b_imfilter(const real_T varargin_1[307440], real_T b[307440]);
static void b_mod(const real_T x_data[], const int32_T x_size[2], real_T y,
                  real_T r_data[], int32_T r_size[2]);
static void b_padarray(const real_T varargin_1[11025], emxArray_real_T *b);
static void b_remapPointsAndResample(faceSwapLiveStackData *SD, const boolean_T
  inputImage[11025], const real_T tform_T[9], const real_T outputRef_ImageSize[2],
  emxArray_real_T *outputImage);
static void b_repmat(const emxArray_real_T *a, real_T varargin_1, real_T
                     varargin_2, emxArray_real_T *b);
static void b_sqrt(real_T x[4]);
static void bsxfun(const real_T a[8], const real_T b[2], real_T c[8]);
static vision_CascadeObjectDetector_10 *c_CascadeObjectDetector_Cascade
  (vision_CascadeObjectDetector_10 *obj);
static void c_SystemCore_step(faceSwapLiveStackData *SD,
  vision_CascadeObjectDetector_12 *obj, const emxArray_real_T *varargin_1,
  emxArray_real_T *varargout_1);
static void c_bsxfun(const real_T a[4860], const boolean_T b[1620], real_T c
                     [4860]);
static void c_eml_xaxpy(int32_T n, real_T a, const real_T x[10], int32_T ix0,
  real_T y[80], int32_T iy0);
static real_T c_eml_xnrm2(int32_T n, const real_T x[80], int32_T ix0);
static real_T (*c_emlrt_marshallIn(const mxArray *targetImage, const char_T
  *identifier))[307440];
static void c_emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions,
  boolean_T doPush);
static void c_imfilter(const boolean_T varargin_1[102480], boolean_T b[102480]);
static void c_padarray(const real_T varargin_1[307440], emxArray_real_T *b);
static void c_projective2d_transformPointsI(const real_T self_T[9], const
  emxArray_real_T *varargin_1, const emxArray_real_T *varargin_2,
  emxArray_real_T *varargout_1, emxArray_real_T *varargout_2);
static void c_repmat(const emxArray_real_T *a, real_T varargin_2,
                     emxArray_real_T *b);
static void c_sqrt(real_T *x);
static vision_CascadeObjectDetector_12 *d_CascadeObjectDetector_Cascade
  (vision_CascadeObjectDetector_12 *obj);
static void d_SystemCore_step(faceSwapLiveStackData *SD,
  vision_CascadeObjectDetector_13 *obj, const emxArray_real_T *varargin_1,
  emxArray_real_T *varargout_1);
static void d_bsxfun(const real_T a[19260], const boolean_T b[6420], real_T c
                     [19260]);
static real_T (*d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId))[307440];
static void d_imfilter(const boolean_T varargin_1[102480], boolean_T b[102480]);
static void d_padarray(const boolean_T varargin_1[102480], emxArray_boolean_T *b);
static int32_T div_s32_floor(int32_T numerator, int32_T denominator);
static vision_CascadeObjectDetector_11 *e_CascadeObjectDetector_Cascade
  (vision_CascadeObjectDetector_11 *obj);
static void e_SystemCore_step(faceSwapLiveStackData *SD,
  vision_CascadeObjectDetector_14 *obj, const emxArray_real_T *varargin_1,
  emxArray_real_T *varargout_1);
static void e_bsxfun(const real_T a[77040], const boolean_T b[25680], real_T c
                     [77040]);
static real_T (*e_emlrt_marshallIn(const mxArray *swapImage, const char_T
  *identifier))[33075];
static void e_imfilter(const real_T varargin_1[77040], real_T b[77040]);
static void e_padarray(const real_T varargin_1[77040], emxArray_real_T *b);
static void eml_li_find(int32_T y_data[], int32_T y_size[1]);
static void eml_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[80], int32_T
                      iy0);
static real_T eml_xdotc(int32_T n, const real_T x[80], int32_T ix0, const real_T
  y[80], int32_T iy0);
static void eml_xgesvd(const real_T A[80], real_T S[8]);
static real_T eml_xnrm2(int32_T n, const real_T x[80], int32_T ix0);
static void eml_xrotg(real_T *a, real_T *b, real_T *c, real_T *s);
static boolean_T emlrt_marshallIn(const mxArray *b_feval, const char_T
  *identifier);
static const mxArray *emlrt_marshallOut(const real_T u[307440]);
static void emxEnsureCapacity(emxArray__common *emxArray, int32_T oldNumel,
  int32_T elementSize);
static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);
static void emxFree_int32_T(emxArray_int32_T **pEmxArray);
static void emxFree_real_T(emxArray_real_T **pEmxArray);
static void emxFree_uint32_T(emxArray_uint32_T **pEmxArray);
static void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int32_T
  numDimensions, boolean_T doPush);
static void emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T numDimensions,
  boolean_T doPush);
static void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions,
  boolean_T doPush);
static void emxInit_uint32_T(emxArray_uint32_T **pEmxArray, int32_T
  numDimensions, boolean_T doPush);
static vision_CascadeObjectDetector_13 *f_CascadeObjectDetector_Cascade
  (vision_CascadeObjectDetector_13 *obj);
static void f_bsxfun(const real_T a[307440], const boolean_T b[102480], real_T
                     c[307440]);
static real_T (*f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId))[33075];
static void f_imfilter(const real_T varargin_1[77040], real_T b[77040]);
static void f_padarray(const boolean_T varargin_1[25680], boolean_T b_data[],
  int32_T b_size[2]);
static void faceSwapLive_once(void);
static const mxArray *feval(const mxArray *b, emlrtMCInfo *location);
static void fitgeotrans(const real_T fixedPoints_data[], const int32_T
  fixedPoints_size[2], projective2d *tform);
static vision_CascadeObjectDetector_14 *g_CascadeObjectDetector_Cascade
  (vision_CascadeObjectDetector_14 *obj);
static boolean_T (*g_emlrt_marshallIn(const mxArray *swapMask, const char_T
  *identifier))[11025];
static void g_imfilter(faceSwapLiveStackData *SD, const boolean_T varargin_1
  [25680], boolean_T b[25680]);
static void g_padarray(const real_T varargin_1[19260], emxArray_real_T *b);
static boolean_T (*h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId))[11025];
static void h_imfilter(faceSwapLiveStackData *SD, const boolean_T varargin_1
  [25680], boolean_T b[25680]);
static void h_padarray(const boolean_T varargin_1[6420], boolean_T b_data[],
  int32_T b_size[2]);
static boolean_T i_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static void i_imfilter(const real_T varargin_1[19260], real_T b[19260]);
static void i_padarray(const real_T varargin_1[4860], emxArray_real_T *b);
static void imfilter(const real_T varargin_1[307440], real_T b[307440]);
static void imref2d_imref2d(const real_T imageSizeIn[3], real_T
  obj_XWorldLimits[2], real_T obj_YWorldLimits[2], real_T obj_ImageSize[2],
  real_T *obj_PixelExtentInWorldX, real_T *obj_PixelExtentInWorldY);
static void imref2d_intrinsicToWorld(const emxArray_real_T *xIntrinsic, const
  emxArray_real_T *yIntrinsic, emxArray_real_T *xw, emxArray_real_T *yw);
static void imref2d_worldToIntrinsic(const emxArray_real_T *xWorld, const
  emxArray_real_T *yWorld, emxArray_real_T *xi, emxArray_real_T *yi);
static void inv(const real_T x[9], real_T y[9]);
static real_T (*j_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier *
  msgId))[307440];
static void j_imfilter(const real_T varargin_1[19260], real_T b[19260]);
static void j_padarray(const boolean_T varargin_1[1620], boolean_T b_data[],
  int32_T b_size[2]);
static real_T (*k_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier *
  msgId))[33075];
static void k_imfilter(const boolean_T varargin_1[6420], boolean_T b[6420]);
static boolean_T (*l_emlrt_marshallIn(const mxArray *src, const
  emlrtMsgIdentifier *msgId))[11025];
static void l_imfilter(const boolean_T varargin_1[6420], boolean_T b[6420]);
static void m_imfilter(const real_T varargin_1[4860], real_T b[4860]);
static void meshgrid(const emxArray_real_T *x, const emxArray_real_T *y,
                     emxArray_real_T *xx, emxArray_real_T *yy);
static void mldivide(const real_T A[80], const real_T B[10], real_T Y[8]);
static void n_imfilter(const real_T varargin_1[4860], real_T b[4860]);
static void normalizeControlPoints(const real_T pts_data[], const int32_T
  pts_size[2], real_T ptsNorm_data[], int32_T ptsNorm_size[2], real_T
  normMatrixInv[9]);
static void o_imfilter(const boolean_T varargin_1[1620], boolean_T b[1620]);
static void p_imfilter(const boolean_T varargin_1[1620], boolean_T b[1620]);
static void padarray(const real_T varargin_1[11025], emxArray_real_T *b);
static void projective2d_set_T(projective2d *self, const real_T T[9]);
static void rdivide(const emxArray_real_T *x, const emxArray_real_T *y,
                    emxArray_real_T *z);
static void remapPointsAndResample(const real_T inputImage[33075], const real_T
  tform_T[9], const real_T outputRef_ImageSize[2], emxArray_real_T *outputImage);
static void repmat(const emxArray_real_T *a, real_T varargin_1, emxArray_real_T *
                   b);
static void rgb2gray(const emxArray_real_T *X, emxArray_real_T *I);
static void sum(const real_T x[8], real_T y[4]);

/* Function Definitions */
static void SystemCore_step(faceSwapLiveStackData *SD,
  vision_CascadeObjectDetector_10 *obj, const real_T varargin_1[307440],
  emxArray_real_T *varargout_1)
{
  vision_CascadeObjectDetector_10 *b_obj;
  int32_T i2;
  static const int16_T inputSize[8] = { 240, 427, 3, 1, 1, 1, 1, 1 };

  c_visioncodegen_ColorSpaceConve *c_obj;
  int32_T i;
  static const uint16_T uv0[3] = { 19595U, 38470U, 7471U };

  boolean_T exitg1;
  static const int16_T iv16[8] = { 240, 427, 3, 1, 1, 1, 1, 1 };

  vision_ColorSpaceConverter_0 *d_obj;
  uint32_T MergeThreshold;
  void * ptrObj;
  real_T ScaleFactor;
  int32_T MinSize_[2];
  int32_T MaxSize_[2];
  void * ptrDetectedObj;
  emxArray_int32_T *bboxes_;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  if (!obj->isInitialized) {
    b_obj = obj;
    b_obj->isInitialized = true;
    for (i2 = 0; i2 < 8; i2++) {
      b_obj->inputVarSize1[i2] = (uint32_T)inputSize[i2];
    }

    c_obj = &b_obj->pColorSpaceConverterCG;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->pColorSpaceConverterCG.isInitialized = false;
    b_obj->pColorSpaceConverterCG.isReleased = false;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;

    /* System object Constructor function: vision.ColorSpaceConverter */
    c_obj->cSFunObject.S0_isInitialized = false;
    c_obj->cSFunObject.S1_isReleased = false;
    for (i = 0; i < 3; i++) {
      c_obj->cSFunObject.P0_COEFF_RTP[i] = uv0[i];
    }

    b_obj->TunablePropsChanged = false;
  }

  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = false;
  }

  b_obj = obj;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv16[i]) {
      for (i2 = 0; i2 < 8; i2++) {
        b_obj->inputVarSize1[i2] = (uint32_T)inputSize[i2];
      }

      exitg1 = true;
    } else {
      i++;
    }
  }

  b_obj = obj;
  grayto8_double(varargin_1, SD->u1.f7.Iu8, 307440.0);
  if (!b_obj->pColorSpaceConverterCG.isInitialized) {
    b_obj->pColorSpaceConverterCG.isInitialized = true;
  }

  d_obj = &b_obj->pColorSpaceConverterCG.cSFunObject;

  /* System object Outputs function: vision.ColorSpaceConverter */
  for (i = 0; i < 102480; i++) {
    MergeThreshold = ((uint32_T)SD->u1.f7.Iu8[i] * d_obj->P0_COEFF_RTP[0U] +
                      (uint32_T)SD->u1.f7.Iu8[102480 + i] * d_obj->P0_COEFF_RTP
                      [1U]) + (uint32_T)SD->u1.f7.Iu8[204960 + i] *
      d_obj->P0_COEFF_RTP[2U];
    MergeThreshold = (MergeThreshold + 32768U) >> 16;
    SD->u1.f7.Iu8_gray[i] = (uint8_T)MergeThreshold;
  }

  ptrObj = b_obj->pCascadeClassifier;
  ScaleFactor = b_obj->ScaleFactor;
  MergeThreshold = (uint32_T)muDoubleScalarRound(b_obj->MergeThreshold);
  for (i2 = 0; i2 < 2; i2++) {
    MinSize_[i2] = 0;
    MaxSize_[i2] = 0;
  }

  ptrDetectedObj = NULL;
  for (i2 = 0; i2 < 240; i2++) {
    for (i = 0; i < 427; i++) {
      SD->u1.f7.b_Iu8_gray[i + 427 * i2] = SD->u1.f7.Iu8_gray[i2 + 240 * i];
    }
  }

  emxInit_int32_T(&bboxes_, 2, true);
  i = cascadeClassifier_detectMultiScale(ptrObj, &ptrDetectedObj,
    SD->u1.f7.b_Iu8_gray, 240, 427, ScaleFactor, MergeThreshold, MinSize_,
    MaxSize_);
  i2 = bboxes_->size[0] * bboxes_->size[1];
  bboxes_->size[0] = i;
  bboxes_->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)bboxes_, i2, (int32_T)sizeof(int32_T));
  cascadeClassifier_assignOutputDeleteBbox(ptrDetectedObj, &bboxes_->data[0]);
  i2 = varargout_1->size[0] * varargout_1->size[1];
  varargout_1->size[0] = bboxes_->size[0];
  varargout_1->size[1] = bboxes_->size[1];
  emxEnsureCapacity((emxArray__common *)varargout_1, i2, (int32_T)sizeof(real_T));
  i = bboxes_->size[0] * bboxes_->size[1];
  for (i2 = 0; i2 < i; i2++) {
    varargout_1->data[i2] = bboxes_->data[i2];
  }

  emxFree_int32_T(&bboxes_);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void b_SystemCore_step(faceSwapLiveStackData *SD,
  vision_CascadeObjectDetector_11 *obj, const emxArray_real_T *varargin_1,
  emxArray_real_T *varargout_1)
{
  vision_CascadeObjectDetector_11 *b_obj;
  int32_T i3;
  uint8_T inputSize[8];
  int32_T num_bboxes;
  boolean_T exitg1;
  int32_T Iu8_size[2];
  int32_T loop_ub;
  int32_T i4;
  void * ptrObj;
  real_T ScaleFactor;
  uint32_T MergeThreshold;
  int32_T MinSize_[2];
  int32_T MaxSize_[2];
  void * ptrDetectedObj;
  emxArray_int32_T *bboxes_;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  if (!obj->isInitialized) {
    b_obj = obj;
    b_obj->isInitialized = true;
    for (i3 = 0; i3 < 2; i3++) {
      b_obj->inputVarSize1[i3] = (uint32_T)varargin_1->size[i3];
    }

    for (i3 = 0; i3 < 6; i3++) {
      b_obj->inputVarSize1[i3 + 2] = 1U;
    }

    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->TunablePropsChanged = false;
  }

  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = false;
  }

  b_obj = obj;
  for (i3 = 0; i3 < 2; i3++) {
    inputSize[i3] = (uint8_T)varargin_1->size[i3];
  }

  for (i3 = 0; i3 < 6; i3++) {
    inputSize[i3 + 2] = 1;
  }

  num_bboxes = 0;
  exitg1 = false;
  while ((!exitg1) && (num_bboxes < 8)) {
    if (b_obj->inputVarSize1[num_bboxes] != inputSize[num_bboxes]) {
      for (i3 = 0; i3 < 8; i3++) {
        b_obj->inputVarSize1[i3] = inputSize[i3];
      }

      exitg1 = true;
    } else {
      num_bboxes++;
    }
  }

  b_obj = obj;
  for (i3 = 0; i3 < 2; i3++) {
    Iu8_size[i3] = varargin_1->size[i3];
  }

  grayto8_double(&varargin_1->data[0], &SD->u1.f6.Iu8_data[0], (real_T)
                 (varargin_1->size[0] * varargin_1->size[1]));
  num_bboxes = Iu8_size[0];
  for (i3 = 0; i3 < num_bboxes; i3++) {
    loop_ub = Iu8_size[1];
    for (i4 = 0; i4 < loop_ub; i4++) {
      SD->u1.f6.Iu8_grayT_data[i4 + Iu8_size[1] * i3] = SD->u1.f6.Iu8_data[i3 +
        Iu8_size[0] * i4];
    }
  }

  ptrObj = b_obj->pCascadeClassifier;
  ScaleFactor = b_obj->ScaleFactor;
  MergeThreshold = (uint32_T)muDoubleScalarRound(b_obj->MergeThreshold);
  for (i3 = 0; i3 < 2; i3++) {
    MinSize_[i3] = 0;
    MaxSize_[i3] = 0;
  }

  ptrDetectedObj = NULL;
  num_bboxes = Iu8_size[1] * Iu8_size[0];
  for (i3 = 0; i3 < num_bboxes; i3++) {
    SD->u1.f6.Iu8_data[i3] = SD->u1.f6.Iu8_grayT_data[i3];
  }

  emxInit_int32_T(&bboxes_, 2, true);
  num_bboxes = cascadeClassifier_detectMultiScale(ptrObj, &ptrDetectedObj,
    &SD->u1.f6.Iu8_data[0], Iu8_size[0], Iu8_size[1], ScaleFactor,
    MergeThreshold, MinSize_, MaxSize_);
  i3 = bboxes_->size[0] * bboxes_->size[1];
  bboxes_->size[0] = num_bboxes;
  bboxes_->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)bboxes_, i3, (int32_T)sizeof(int32_T));
  cascadeClassifier_assignOutputDeleteBbox(ptrDetectedObj, &bboxes_->data[0]);
  i3 = varargout_1->size[0] * varargout_1->size[1];
  varargout_1->size[0] = bboxes_->size[0];
  varargout_1->size[1] = bboxes_->size[1];
  emxEnsureCapacity((emxArray__common *)varargout_1, i3, (int32_T)sizeof(real_T));
  num_bboxes = bboxes_->size[0] * bboxes_->size[1];
  for (i3 = 0; i3 < num_bboxes; i3++) {
    varargout_1->data[i3] = bboxes_->data[i3];
  }

  emxFree_int32_T(&bboxes_);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void b_bsxfun(const real_T a[1215], const boolean_T b[405], real_T c[1215])
{
  int32_T asub[2];
  int32_T bsub[2];
  int32_T i;
  int32_T bk;
  int32_T ck;
  real_T cv[15];
  int32_T k;
  for (i = 0; i < 2; i++) {
    asub[i] = 1;
    bsub[i] = 1;
  }

  i = 0;
  bk = 0;
  for (ck = 0; ck < 1202; ck += 15) {
    for (k = 0; k < 15; k++) {
      cv[k] = a[i + k] * (real_T)b[bk + k];
    }

    memcpy(&c[ck], &cv[0], 15U * sizeof(real_T));
    if (asub[0] < 27) {
      i += 15;
      bk += 15;
      bsub[0]++;
      asub[0]++;
    } else if (bsub[0] < 27) {
      bk += 15;
      bsub[0]++;
    } else {
      asub[0] = 1;
      bsub[0] = 1;
      if (asub[1] < 3) {
        i += 15;
        bk -= 390;
        asub[1]++;
      } else {
        asub[1] = 1;
      }
    }
  }
}

static void b_eml_xaxpy(int32_T n, real_T a, const real_T x[80], int32_T ix0,
  real_T y[10], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (a == 0.0) {
  } else {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix];
      ix++;
      iy++;
    }
  }
}

static real_T b_eml_xnrm2(int32_T n, const real_T x[8], int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  int32_T k;
  real_T absxk;
  real_T t;
  y = 0.0;
  scale = 2.2250738585072014E-308;
  kend = (ix0 + n) - 1;
  for (k = ix0; k <= kend; k++) {
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = 1.0 + y * t * t;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static boolean_T b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  boolean_T y;
  y = i_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void b_emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions,
  boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void b_imfilter(const real_T varargin_1[307440], real_T b[307440])
{
  emxArray_real_T *a;
  int32_T tmp_size[1];
  int32_T tmp_data[25];
  int32_T loop_ub;
  int32_T i20;
  static const real_T dv11[25] = { 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.09375, 0.375, 0.5625, 0.375, 0.09375,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.015625, 0.0625, 0.09375, 0.0625,
    0.015625 };

  real_T nonzero_h_data[25];
  boolean_T densityFlag;
  boolean_T tooBig;
  real_T padSize[3];
  real_T connDims[2];
  static const real_T h[25] = { 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.09375, 0.375, 0.5625, 0.375, 0.09375,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.015625, 0.0625, 0.09375, 0.0625,
    0.015625 };

  static const real_T outSize[3] = { 240.0, 427.0, 3.0 };

  boolean_T conn[25];
  static const real_T start[3] = { 2.0, 2.0, 0.0 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  b_emxInit_real_T(&a, 3, true);
  c_padarray(varargin_1, a);
  eml_li_find(tmp_data, tmp_size);
  loop_ub = tmp_size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    nonzero_h_data[i20] = dv11[tmp_data[i20] - 1];
  }

  densityFlag = false;
  if ((real_T)tmp_size[0] / 25.0 > 0.05) {
    densityFlag = true;
  }

  tooBig = true;
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    tooBig = false;
  }

  if (densityFlag && (!tooBig)) {
    densityFlag = true;
  } else {
    densityFlag = false;
  }

  if (densityFlag) {
    for (i20 = 0; i20 < 3; i20++) {
      padSize[i20] = a->size[i20];
    }

    for (i20 = 0; i20 < 2; i20++) {
      connDims[i20] = 5.0;
    }

    ippfilter_real64(&a->data[0], b, outSize, 3.0, padSize, h, connDims, true,
                     false);
  } else {
    for (i20 = 0; i20 < 3; i20++) {
      padSize[i20] = a->size[i20];
    }

    for (i20 = 0; i20 < 25; i20++) {
      conn[i20] = true;
    }

    for (i20 = 0; i20 < 2; i20++) {
      connDims[i20] = 5.0;
    }

    imfilter_real64(&a->data[0], b, 3.0, outSize, 3.0, padSize, &nonzero_h_data
                    [0], (real_T)tmp_size[0], conn, 2.0, connDims, start, 3.0,
                    true, true);
  }

  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void b_mod(const real_T x_data[], const int32_T x_size[2], real_T y,
                  real_T r_data[], int32_T r_size[2])
{
  int16_T iv19[2];
  int32_T k;
  real_T r;
  for (k = 0; k < 2; k++) {
    iv19[k] = (int16_T)x_size[k];
  }

  r_size[0] = 1;
  r_size[1] = iv19[1];
  for (k = 0; k < iv19[1]; k++) {
    if (y == muDoubleScalarFloor(y)) {
      r = x_data[k] - muDoubleScalarFloor(x_data[k] / y) * y;
    } else {
      r = x_data[k] / y;
      if (muDoubleScalarAbs(r - muDoubleScalarRound(r)) <=
          2.2204460492503131E-16 * muDoubleScalarAbs(r)) {
        r = 0.0;
      } else {
        r = (r - muDoubleScalarFloor(r)) * y;
      }
    }

    r_data[k] = r;
  }
}

static void b_padarray(const real_T varargin_1[11025], emxArray_real_T *b)
{
  int32_T j;
  int32_T i;
  for (j = 0; j < 2; j++) {
    i = b->size[0] * b->size[1];
    b->size[j] = 111;
    emxEnsureCapacity((emxArray__common *)b, i, (int32_T)sizeof(real_T));
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

static void b_remapPointsAndResample(faceSwapLiveStackData *SD, const boolean_T
  inputImage[11025], const real_T tform_T[9], const real_T outputRef_ImageSize[2],
  emxArray_real_T *outputImage)
{
  int32_T n;
  real_T apnd;
  real_T ndbl;
  real_T cdiff;
  emxArray_real_T *y;
  int32_T k;
  int32_T nm1d2;
  emxArray_real_T *b_y;
  emxArray_real_T *dstXIntrinsic;
  emxArray_real_T *dstYIntrinsic;
  emxArray_real_T *dstXWorld;
  emxArray_real_T *dstYWorld;
  emxArray_real_T *srcXWorld;
  emxArray_real_T *srcYWorld;
  emxArray_real_T *b_inputImage;
  real_T c_inputImage[2];
  real_T b_outputImage[2];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  if (outputRef_ImageSize[1] < 1.0) {
    n = -1;
    apnd = outputRef_ImageSize[1];
  } else {
    ndbl = muDoubleScalarFloor((outputRef_ImageSize[1] - 1.0) + 0.5);
    apnd = 1.0 + ndbl;
    cdiff = (1.0 + ndbl) - outputRef_ImageSize[1];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * outputRef_ImageSize
        [1]) {
      ndbl++;
      apnd = outputRef_ImageSize[1];
    } else if (cdiff > 0.0) {
      apnd = 1.0 + (ndbl - 1.0);
    } else {
      ndbl++;
    }

    n = (int32_T)ndbl - 1;
  }

  emxInit_real_T(&y, 2, true);
  k = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = n + 1;
  emxEnsureCapacity((emxArray__common *)y, k, (int32_T)sizeof(real_T));
  if (n + 1 > 0) {
    y->data[0] = 1.0;
    if (n + 1 > 1) {
      y->data[n] = apnd;
      k = n + (n < 0);
      if (k >= 0) {
        nm1d2 = (int32_T)((uint32_T)k >> 1);
      } else {
        nm1d2 = (int32_T)~(~(uint32_T)k >> 1);
      }

      for (k = 1; k < nm1d2; k++) {
        y->data[k] = 1.0 + (real_T)k;
        y->data[n - k] = apnd - (real_T)k;
      }

      if (nm1d2 << 1 == n) {
        y->data[nm1d2] = (1.0 + apnd) / 2.0;
      } else {
        y->data[nm1d2] = 1.0 + (real_T)nm1d2;
        y->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
      }
    }
  }

  if (outputRef_ImageSize[0] < 1.0) {
    n = -1;
    apnd = outputRef_ImageSize[0];
  } else {
    ndbl = muDoubleScalarFloor((outputRef_ImageSize[0] - 1.0) + 0.5);
    apnd = 1.0 + ndbl;
    cdiff = (1.0 + ndbl) - outputRef_ImageSize[0];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * outputRef_ImageSize
        [0]) {
      ndbl++;
      apnd = outputRef_ImageSize[0];
    } else if (cdiff > 0.0) {
      apnd = 1.0 + (ndbl - 1.0);
    } else {
      ndbl++;
    }

    n = (int32_T)ndbl - 1;
  }

  emxInit_real_T(&b_y, 2, true);
  k = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = n + 1;
  emxEnsureCapacity((emxArray__common *)b_y, k, (int32_T)sizeof(real_T));
  if (n + 1 > 0) {
    b_y->data[0] = 1.0;
    if (n + 1 > 1) {
      b_y->data[n] = apnd;
      k = n + (n < 0);
      if (k >= 0) {
        nm1d2 = (int32_T)((uint32_T)k >> 1);
      } else {
        nm1d2 = (int32_T)~(~(uint32_T)k >> 1);
      }

      for (k = 1; k < nm1d2; k++) {
        b_y->data[k] = 1.0 + (real_T)k;
        b_y->data[n - k] = apnd - (real_T)k;
      }

      if (nm1d2 << 1 == n) {
        b_y->data[nm1d2] = (1.0 + apnd) / 2.0;
      } else {
        b_y->data[nm1d2] = 1.0 + (real_T)nm1d2;
        b_y->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
      }
    }
  }

  emxInit_real_T(&dstXIntrinsic, 2, true);
  emxInit_real_T(&dstYIntrinsic, 2, true);
  emxInit_real_T(&dstXWorld, 2, true);
  emxInit_real_T(&dstYWorld, 2, true);
  emxInit_real_T(&srcXWorld, 2, true);
  emxInit_real_T(&srcYWorld, 2, true);
  meshgrid(y, b_y, dstXIntrinsic, dstYIntrinsic);
  imref2d_intrinsicToWorld(dstXIntrinsic, dstYIntrinsic, dstXWorld, dstYWorld);
  c_projective2d_transformPointsI(tform_T, dstXWorld, dstYWorld, srcXWorld,
    srcYWorld);
  imref2d_worldToIntrinsic(srcXWorld, srcYWorld, dstXIntrinsic, dstYIntrinsic);
  emxFree_real_T(&b_y);
  emxFree_real_T(&y);
  emxFree_real_T(&srcYWorld);
  emxFree_real_T(&srcXWorld);
  emxFree_real_T(&dstYWorld);
  emxFree_real_T(&dstXWorld);
  for (k = 0; k < 11025; k++) {
    SD->u1.f2.inputImage[k] = inputImage[k];
  }

  emxInit_real_T(&b_inputImage, 2, true);
  b_padarray(SD->u1.f2.inputImage, b_inputImage);
  k = dstXIntrinsic->size[0] * dstXIntrinsic->size[1];
  emxEnsureCapacity((emxArray__common *)dstXIntrinsic, k, (int32_T)sizeof(real_T));
  nm1d2 = dstXIntrinsic->size[0];
  k = dstXIntrinsic->size[1];
  nm1d2 *= k;
  for (k = 0; k < nm1d2; k++) {
    dstXIntrinsic->data[k] = (dstXIntrinsic->data[k] + 3.0) - 1.0;
  }

  k = outputImage->size[0] * outputImage->size[1];
  outputImage->size[0] = dstXIntrinsic->size[0];
  outputImage->size[1] = dstXIntrinsic->size[1];
  emxEnsureCapacity((emxArray__common *)outputImage, k, (int32_T)sizeof(real_T));
  k = dstYIntrinsic->size[0] * dstYIntrinsic->size[1];
  emxEnsureCapacity((emxArray__common *)dstYIntrinsic, k, (int32_T)sizeof(real_T));
  nm1d2 = dstYIntrinsic->size[0];
  k = dstYIntrinsic->size[1];
  nm1d2 *= k;
  for (k = 0; k < nm1d2; k++) {
    dstYIntrinsic->data[k] = (dstYIntrinsic->data[k] + 3.0) - 1.0;
  }

  ndbl = 0.0;
  for (k = 0; k < 2; k++) {
    c_inputImage[k] = b_inputImage->size[k];
  }

  for (k = 0; k < 2; k++) {
    b_outputImage[k] = outputImage->size[k];
  }

  remaptbb_real64(&b_inputImage->data[0], c_inputImage, 2.0,
                  &dstYIntrinsic->data[0], &dstXIntrinsic->data[0], 1, &ndbl,
                  &outputImage->data[0], b_outputImage, (real_T)
                  (outputImage->size[0] * outputImage->size[1]));
  emxFree_real_T(&b_inputImage);
  emxFree_real_T(&dstYIntrinsic);
  emxFree_real_T(&dstXIntrinsic);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void b_repmat(const emxArray_real_T *a, real_T varargin_1, real_T
                     varargin_2, emxArray_real_T *b)
{
  int32_T outsize_idx_1;
  int32_T jtilecol;
  int32_T ibtile;
  int32_T jcol;
  int32_T ibmat;
  int32_T itilerow;
  outsize_idx_1 = a->size[1] * (int32_T)varargin_2;
  jtilecol = b->size[0] * b->size[1];
  b->size[0] = (int32_T)varargin_1;
  b->size[1] = outsize_idx_1;
  emxEnsureCapacity((emxArray__common *)b, jtilecol, (int32_T)sizeof(real_T));
  if (((int32_T)varargin_1 == 0) || (outsize_idx_1 == 0)) {
  } else {
    outsize_idx_1 = a->size[1];
    for (jtilecol = 1; jtilecol <= (int32_T)varargin_2; jtilecol++) {
      ibtile = (jtilecol - 1) * ((int32_T)varargin_1 * outsize_idx_1) - 1;
      for (jcol = 0; jcol + 1 <= outsize_idx_1; jcol++) {
        ibmat = ibtile + jcol * (int32_T)varargin_1;
        for (itilerow = 1; itilerow <= (int32_T)varargin_1; itilerow++) {
          b->data[ibmat + itilerow] = a->data[jcol];
        }
      }
    }
  }
}

static void b_sqrt(real_T x[4])
{
  int32_T k;
  for (k = 0; k < 4; k++) {
    x[k] = muDoubleScalarSqrt(x[k]);
  }
}

static void bsxfun(const real_T a[8], const real_T b[2], real_T c[8])
{
  int32_T ak;
  int32_T bk;
  int32_T ck;
  real_T cv[4];
  int32_T k;
  ak = 0;
  bk = 0;
  for (ck = 0; ck < 6; ck += 4) {
    for (k = 0; k < 4; k++) {
      cv[k] = a[ak + k] - b[bk];
    }

    for (k = 0; k < 4; k++) {
      c[ck + k] = cv[k];
    }

    ak += 4;
    bk++;
  }
}

static vision_CascadeObjectDetector_10 *c_CascadeObjectDetector_Cascade
  (vision_CascadeObjectDetector_10 *obj)
{
  vision_CascadeObjectDetector_10 *b_obj;
  vision_CascadeObjectDetector_10 *c_obj;
  void * ptrObj;
  const mxArray *y;
  static const int32_T iv6[2] = { 1, 10 };

  const mxArray *m0;
  char_T cv0[10];
  int32_T i;
  static const char_T cv1[10] = { 'i', 's', 'd', 'e', 'p', 'l', 'o', 'y', 'e',
    'd' };

  char_T ClassificationModel[124];
  static const char_T b_ClassificationModel[124] = { '/', 'A', 'p', 'p', 'l',
    'i', 'c', 'a', 't', 'i', 'o', 'n', 's', '/', 'M', 'A', 'T', 'L', 'A', 'B',
    '_', 'R', '2', '0', '1', '4', 'b', '.', 'a', 'p', 'p', '/', 't', 'o', 'o',
    'l', 'b', 'o', 'x', '/', 'v', 'i', 's', 'i', 'o', 'n', '/', 'v', 'i', 's',
    'i', 'o', 'n', 'u', 't', 'i', 'l', 'i', 't', 'i', 'e', 's', '/', 'c', 'l',
    'a', 's', 's', 'i', 'f', 'i', 'e', 'r', 'd', 'a', 't', 'a', '/', 'c', 'a',
    's', 'c', 'a', 'd', 'e', '/', 'h', 'a', 'a', 'r', '/', 'h', 'a', 'a', 'r',
    'c', 'a', 's', 'c', 'a', 'd', 'e', '_', 'f', 'r', 'o', 'n', 't', 'a', 'l',
    'f', 'a', 'c', 'e', '_', 'a', 'l', 't', '2', '.', 'x', 'm', 'l', '\x00' };

  const mxArray *b_y;
  static const int32_T iv7[2] = { 1, 10 };

  b_obj = obj;
  b_obj->ScaleFactor = 1.1;
  b_obj->MergeThreshold = 4.0;
  c_obj = b_obj;
  c_obj->matlabCodegenIsDeleted = false;
  c_obj->isInitialized = false;
  c_obj->isReleased = false;
  c_obj->matlabCodegenIsDeleted = false;
  ptrObj = NULL;
  cascadeClassifier_construct(&ptrObj);
  b_obj->pCascadeClassifier = ptrObj;
  c_obj = b_obj;
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv6);
  for (i = 0; i < 10; i++) {
    cv0[i] = cv1[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 10, m0, cv0);
  emlrtAssign(&y, m0);
  emlrt_marshallIn(feval(y, &emlrtMCI), "feval");
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 124U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  c_obj = b_obj;
  b_y = NULL;
  m0 = emlrtCreateCharArray(2, iv7);
  for (i = 0; i < 10; i++) {
    cv0[i] = cv1[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 10, m0, cv0);
  emlrtAssign(&b_y, m0);
  emlrt_marshallIn(feval(b_y, &emlrtMCI), "feval");
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 124U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  return b_obj;
}

static void c_SystemCore_step(faceSwapLiveStackData *SD,
  vision_CascadeObjectDetector_12 *obj, const emxArray_real_T *varargin_1,
  emxArray_real_T *varargout_1)
{
  vision_CascadeObjectDetector_12 *b_obj;
  int32_T i5;
  uint8_T inputSize[8];
  int32_T num_bboxes;
  boolean_T exitg1;
  int32_T Iu8_size[2];
  int32_T loop_ub;
  int32_T i6;
  void * ptrObj;
  real_T ScaleFactor;
  uint32_T MergeThreshold;
  int32_T MinSize_[2];
  int32_T MaxSize_[2];
  void * ptrDetectedObj;
  emxArray_int32_T *bboxes_;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  if (!obj->isInitialized) {
    b_obj = obj;
    b_obj->isInitialized = true;
    for (i5 = 0; i5 < 2; i5++) {
      b_obj->inputVarSize1[i5] = (uint32_T)varargin_1->size[i5];
    }

    for (i5 = 0; i5 < 6; i5++) {
      b_obj->inputVarSize1[i5 + 2] = 1U;
    }

    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->TunablePropsChanged = false;
  }

  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = false;
  }

  b_obj = obj;
  for (i5 = 0; i5 < 2; i5++) {
    inputSize[i5] = (uint8_T)varargin_1->size[i5];
  }

  for (i5 = 0; i5 < 6; i5++) {
    inputSize[i5 + 2] = 1;
  }

  num_bboxes = 0;
  exitg1 = false;
  while ((!exitg1) && (num_bboxes < 8)) {
    if (b_obj->inputVarSize1[num_bboxes] != inputSize[num_bboxes]) {
      for (i5 = 0; i5 < 8; i5++) {
        b_obj->inputVarSize1[i5] = inputSize[i5];
      }

      exitg1 = true;
    } else {
      num_bboxes++;
    }
  }

  b_obj = obj;
  for (i5 = 0; i5 < 2; i5++) {
    Iu8_size[i5] = varargin_1->size[i5];
  }

  grayto8_double(&varargin_1->data[0], &SD->u1.f5.Iu8_data[0], (real_T)
                 (varargin_1->size[0] * varargin_1->size[1]));
  num_bboxes = Iu8_size[0];
  for (i5 = 0; i5 < num_bboxes; i5++) {
    loop_ub = Iu8_size[1];
    for (i6 = 0; i6 < loop_ub; i6++) {
      SD->u1.f5.Iu8_grayT_data[i6 + Iu8_size[1] * i5] = SD->u1.f5.Iu8_data[i5 +
        Iu8_size[0] * i6];
    }
  }

  ptrObj = b_obj->pCascadeClassifier;
  ScaleFactor = b_obj->ScaleFactor;
  MergeThreshold = (uint32_T)muDoubleScalarRound(b_obj->MergeThreshold);
  for (i5 = 0; i5 < 2; i5++) {
    MinSize_[i5] = 0;
    MaxSize_[i5] = 0;
  }

  ptrDetectedObj = NULL;
  num_bboxes = Iu8_size[1] * Iu8_size[0];
  for (i5 = 0; i5 < num_bboxes; i5++) {
    SD->u1.f5.Iu8_data[i5] = SD->u1.f5.Iu8_grayT_data[i5];
  }

  emxInit_int32_T(&bboxes_, 2, true);
  num_bboxes = cascadeClassifier_detectMultiScale(ptrObj, &ptrDetectedObj,
    &SD->u1.f5.Iu8_data[0], Iu8_size[0], Iu8_size[1], ScaleFactor,
    MergeThreshold, MinSize_, MaxSize_);
  i5 = bboxes_->size[0] * bboxes_->size[1];
  bboxes_->size[0] = num_bboxes;
  bboxes_->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)bboxes_, i5, (int32_T)sizeof(int32_T));
  cascadeClassifier_assignOutputDeleteBbox(ptrDetectedObj, &bboxes_->data[0]);
  i5 = varargout_1->size[0] * varargout_1->size[1];
  varargout_1->size[0] = bboxes_->size[0];
  varargout_1->size[1] = bboxes_->size[1];
  emxEnsureCapacity((emxArray__common *)varargout_1, i5, (int32_T)sizeof(real_T));
  num_bboxes = bboxes_->size[0] * bboxes_->size[1];
  for (i5 = 0; i5 < num_bboxes; i5++) {
    varargout_1->data[i5] = bboxes_->data[i5];
  }

  emxFree_int32_T(&bboxes_);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void c_bsxfun(const real_T a[4860], const boolean_T b[1620], real_T c
                     [4860])
{
  int32_T asub[2];
  int32_T bsub[2];
  int32_T i;
  int32_T bk;
  int32_T ck;
  real_T cv[30];
  int32_T k;
  for (i = 0; i < 2; i++) {
    asub[i] = 1;
    bsub[i] = 1;
  }

  i = 0;
  bk = 0;
  for (ck = 0; ck < 4832; ck += 30) {
    for (k = 0; k < 30; k++) {
      cv[k] = a[i + k] * (real_T)b[bk + k];
    }

    memcpy(&c[ck], &cv[0], 30U * sizeof(real_T));
    if (asub[0] < 54) {
      i += 30;
      bk += 30;
      bsub[0]++;
      asub[0]++;
    } else if (bsub[0] < 54) {
      bk += 30;
      bsub[0]++;
    } else {
      asub[0] = 1;
      bsub[0] = 1;
      if (asub[1] < 3) {
        i += 30;
        bk -= 1590;
        asub[1]++;
      } else {
        asub[1] = 1;
      }
    }
  }
}

static void c_eml_xaxpy(int32_T n, real_T a, const real_T x[10], int32_T ix0,
  real_T y[80], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (a == 0.0) {
  } else {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix];
      ix++;
      iy++;
    }
  }
}

static real_T c_eml_xnrm2(int32_T n, const real_T x[80], int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  int32_T k;
  real_T absxk;
  real_T t;
  y = 0.0;
  scale = 2.2250738585072014E-308;
  kend = (ix0 + n) - 1;
  for (k = ix0; k <= kend; k++) {
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = 1.0 + y * t * t;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static real_T (*c_emlrt_marshallIn(const mxArray *targetImage, const char_T
  *identifier))[307440]
{
  real_T (*y)[307440];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(emlrtAlias(targetImage), &thisId);
  emlrtDestroyArray(&targetImage);
  return y;
}
  static void c_emxInit_real_T(emxArray_real_T **pEmxArray, int32_T
  numDimensions, boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void c_imfilter(const boolean_T varargin_1[102480], boolean_T b[102480])
{
  emxArray_boolean_T *a;
  int32_T tmp_size[1];
  int32_T tmp_data[25];
  int32_T loop_ub;
  int32_T i21;
  static const real_T dv12[25] = { 0.00390625, 0.015625, 0.0234375, 0.015625,
    0.00390625, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625, 0.0234375, 0.09375,
    0.140625, 0.09375, 0.0234375, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.00390625, 0.015625, 0.0234375, 0.015625, 0.00390625 };

  real_T nonzero_h_data[25];
  real_T outSize[2];
  real_T padSize[2];
  boolean_T conn[25];
  real_T connDims[2];
  real_T start[2];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_boolean_T(&a, 2, true);
  d_padarray(varargin_1, a);
  eml_li_find(tmp_data, tmp_size);
  loop_ub = tmp_size[0];
  for (i21 = 0; i21 < loop_ub; i21++) {
    nonzero_h_data[i21] = dv12[tmp_data[i21] - 1];
  }

  for (i21 = 0; i21 < 2; i21++) {
    outSize[i21] = 240.0 + 187.0 * (real_T)i21;
  }

  for (i21 = 0; i21 < 2; i21++) {
    padSize[i21] = a->size[i21];
  }

  for (i21 = 0; i21 < 25; i21++) {
    conn[i21] = true;
  }

  for (i21 = 0; i21 < 2; i21++) {
    connDims[i21] = 5.0;
    start[i21] = 2.0;
  }

  imfilter_boolean(&a->data[0], b, 2.0, outSize, 2.0, padSize, &nonzero_h_data[0],
                   (real_T)tmp_size[0], conn, 2.0, connDims, start, 2.0, true,
                   true);
  emxFree_boolean_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void c_padarray(const real_T varargin_1[307440], emxArray_real_T *b)
{
  int16_T sizeB[3];
  int32_T idxA[1293];
  int16_T sizeIdxDir[3];
  emxArray_uint32_T *dimNums;
  emxArray_real_T *y;
  int32_T k;
  static const int16_T iv17[3] = { 240, 427, 3 };

  int32_T ndbl;
  int32_T apnd;
  int32_T cdiff;
  int32_T i19;
  int32_T nm1d2;
  int32_T i;
  static const int8_T iv18[3] = { 2, 2, 0 };

  real_T y_data[431];
  int32_T y_size[2];
  int32_T tmp_size[2];
  real_T tmp_data[431];
  uint32_T idxDir_data[431];
  int16_T b_tmp_data[431];
  int32_T b_idxDir_data[431];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_uint32_T(&dimNums, 2, true);
  emxInit_real_T(&y, 2, true);
  for (k = 0; k < 3; k++) {
    ndbl = (int32_T)muDoubleScalarFloor(((real_T)iv17[k] - 1.0) + 0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - iv17[k]) + 1;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)iv17[k]) {
      ndbl++;
      apnd = iv17[k];
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }

    i19 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = ndbl;
    emxEnsureCapacity((emxArray__common *)y, i19, (int32_T)sizeof(real_T));
    y->data[0] = 1.0;
    y->data[ndbl - 1] = apnd;
    i19 = ndbl - 1;
    nm1d2 = (int32_T)((uint32_T)i19 >> 1);
    for (i = 1; i < nm1d2; i++) {
      y->data[i] = 1.0 + (real_T)i;
      y->data[(ndbl - i) - 1] = apnd - i;
    }

    if (nm1d2 << 1 == ndbl - 1) {
      y->data[nm1d2] = (1.0 + (real_T)apnd) / 2.0;
    } else {
      y->data[nm1d2] = 1.0 + (real_T)nm1d2;
      y->data[nm1d2 + 1] = apnd - nm1d2;
    }

    i19 = dimNums->size[0] * dimNums->size[1];
    dimNums->size[0] = 1;
    dimNums->size[1] = y->size[1];
    emxEnsureCapacity((emxArray__common *)dimNums, i19, (int32_T)sizeof(uint32_T));
    cdiff = y->size[0] * y->size[1];
    for (i19 = 0; i19 < cdiff; i19++) {
      dimNums->data[i19] = (uint32_T)muDoubleScalarRound(y->data[i19]);
    }

    i = (iv17[k] + iv18[k]) - 1;
    ndbl = (int32_T)muDoubleScalarFloor((real_T)(i + iv18[k]) + 0.5);
    apnd = ndbl - iv18[k];
    cdiff = apnd - i;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)i) {
      ndbl++;
      apnd = i;
    } else if (cdiff > 0) {
      apnd = (ndbl - iv18[k]) - 1;
    } else {
      ndbl++;
    }

    y_size[0] = 1;
    y_size[1] = ndbl;
    y_data[0] = -(real_T)iv18[k];
    y_data[ndbl - 1] = apnd;
    i19 = ndbl - 1;
    nm1d2 = (int32_T)((uint32_T)i19 >> 1);
    for (i = 1; i < nm1d2; i++) {
      y_data[i] = i - iv18[k];
      y_data[(ndbl - i) - 1] = apnd - i;
    }

    if (nm1d2 << 1 == ndbl - 1) {
      y_data[nm1d2] = (real_T)(apnd - iv18[k]) / 2.0;
    } else {
      y_data[nm1d2] = nm1d2 - iv18[k];
      y_data[nm1d2 + 1] = apnd - nm1d2;
    }

    b_mod(y_data, y_size, iv17[k], tmp_data, tmp_size);
    cdiff = tmp_size[0] * tmp_size[1];
    for (i19 = 0; i19 < cdiff; i19++) {
      idxDir_data[i19] = dimNums->data[(int32_T)(tmp_data[i19] + 1.0) - 1];
    }

    sizeIdxDir[k] = (int16_T)tmp_size[1];
    cdiff = sizeIdxDir[k];
    for (i19 = 0; i19 < cdiff; i19++) {
      b_tmp_data[i19] = (int16_T)i19;
    }

    cdiff = tmp_size[1];
    for (i19 = 0; i19 < cdiff; i19++) {
      b_idxDir_data[i19] = (int32_T)idxDir_data[i19];
    }

    cdiff = sizeIdxDir[k];
    for (i19 = 0; i19 < cdiff; i19++) {
      idxA[b_tmp_data[i19] + 431 * k] = b_idxDir_data[i19];
    }

    sizeB[k] = (int16_T)(iv17[k] + (iv18[k] << 1));
  }

  emxFree_real_T(&y);
  emxFree_uint32_T(&dimNums);
  i19 = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = sizeB[0];
  b->size[1] = sizeB[1];
  b->size[2] = sizeB[2];
  emxEnsureCapacity((emxArray__common *)b, i19, (int32_T)sizeof(real_T));
  for (k = 0; k < sizeB[2]; k++) {
    i19 = b->size[1];
    for (cdiff = 0; cdiff < i19; cdiff++) {
      nm1d2 = b->size[0];
      for (i = 0; i < nm1d2; i++) {
        b->data[(i + b->size[0] * cdiff) + b->size[0] * b->size[1] * k] =
          varargin_1[((idxA[i] + 240 * (idxA[431 + cdiff] - 1)) + 102480 *
                      (idxA[862 + k] - 1)) - 1];
      }
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void c_projective2d_transformPointsI(const real_T self_T[9], const
  emxArray_real_T *varargin_1, const emxArray_real_T *varargin_2,
  emxArray_real_T *varargout_1, emxArray_real_T *varargout_2)
{
  emxArray_real_T *w;
  real_T M[9];
  int32_T i15;
  int32_T loop_ub;
  emxArray_real_T *b_M;
  emxArray_real_T *c_M;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_real_T(&w, 2, true);
  inv(self_T, M);
  i15 = w->size[0] * w->size[1];
  w->size[0] = varargin_1->size[0];
  w->size[1] = varargin_1->size[1];
  emxEnsureCapacity((emxArray__common *)w, i15, (int32_T)sizeof(real_T));
  loop_ub = varargin_1->size[0] * varargin_1->size[1];
  for (i15 = 0; i15 < loop_ub; i15++) {
    w->data[i15] = (M[6] * varargin_1->data[i15] + M[7] * varargin_2->data[i15])
      + M[8];
  }

  emxInit_real_T(&b_M, 2, true);
  i15 = b_M->size[0] * b_M->size[1];
  b_M->size[0] = varargin_1->size[0];
  b_M->size[1] = varargin_1->size[1];
  emxEnsureCapacity((emxArray__common *)b_M, i15, (int32_T)sizeof(real_T));
  loop_ub = varargin_1->size[0] * varargin_1->size[1];
  for (i15 = 0; i15 < loop_ub; i15++) {
    b_M->data[i15] = (M[0] * varargin_1->data[i15] + M[1] * varargin_2->data[i15])
      + M[2];
  }

  emxInit_real_T(&c_M, 2, true);
  rdivide(b_M, w, varargout_1);
  i15 = c_M->size[0] * c_M->size[1];
  c_M->size[0] = varargin_1->size[0];
  c_M->size[1] = varargin_1->size[1];
  emxEnsureCapacity((emxArray__common *)c_M, i15, (int32_T)sizeof(real_T));
  loop_ub = varargin_1->size[0] * varargin_1->size[1];
  emxFree_real_T(&b_M);
  for (i15 = 0; i15 < loop_ub; i15++) {
    c_M->data[i15] = (M[3] * varargin_1->data[i15] + M[4] * varargin_2->data[i15])
      + M[5];
  }

  rdivide(c_M, w, varargout_2);
  emxFree_real_T(&c_M);
  emxFree_real_T(&w);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void c_repmat(const emxArray_real_T *a, real_T varargin_2,
                     emxArray_real_T *b)
{
  int32_T outsize_idx_1;
  int32_T jtilecol;
  int32_T ibtile;
  int32_T jcol;
  outsize_idx_1 = a->size[1] * (int32_T)varargin_2;
  jtilecol = b->size[0] * b->size[1];
  b->size[0] = 1;
  b->size[1] = outsize_idx_1;
  emxEnsureCapacity((emxArray__common *)b, jtilecol, (int32_T)sizeof(real_T));
  if (outsize_idx_1 == 0) {
  } else {
    outsize_idx_1 = a->size[1];
    for (jtilecol = 1; jtilecol <= (int32_T)varargin_2; jtilecol++) {
      ibtile = (jtilecol - 1) * outsize_idx_1;
      for (jcol = 1; jcol <= outsize_idx_1; jcol++) {
        b->data[(ibtile + jcol) - 1] = a->data[jcol - 1];
      }
    }
  }
}

static void c_sqrt(real_T *x)
{
  *x = muDoubleScalarSqrt(*x);
}

static vision_CascadeObjectDetector_12 *d_CascadeObjectDetector_Cascade
  (vision_CascadeObjectDetector_12 *obj)
{
  vision_CascadeObjectDetector_12 *b_obj;
  vision_CascadeObjectDetector_12 *c_obj;
  void * ptrObj;
  const mxArray *y;
  static const int32_T iv8[2] = { 1, 10 };

  const mxArray *m1;
  char_T cv2[10];
  int32_T i;
  static const char_T cv3[10] = { 'i', 's', 'd', 'e', 'p', 'l', 'o', 'y', 'e',
    'd' };

  char_T ClassificationModel[119];
  static const char_T b_ClassificationModel[119] = { '/', 'A', 'p', 'p', 'l',
    'i', 'c', 'a', 't', 'i', 'o', 'n', 's', '/', 'M', 'A', 'T', 'L', 'A', 'B',
    '_', 'R', '2', '0', '1', '4', 'b', '.', 'a', 'p', 'p', '/', 't', 'o', 'o',
    'l', 'b', 'o', 'x', '/', 'v', 'i', 's', 'i', 'o', 'n', '/', 'v', 'i', 's',
    'i', 'o', 'n', 'u', 't', 'i', 'l', 'i', 't', 'i', 'e', 's', '/', 'c', 'l',
    'a', 's', 's', 'i', 'f', 'i', 'e', 'r', 'd', 'a', 't', 'a', '/', 'c', 'a',
    's', 'c', 'a', 'd', 'e', '/', 'h', 'a', 'a', 'r', '/', 'h', 'a', 'a', 'r',
    'c', 'a', 's', 'c', 'a', 'd', 'e', '_', 'm', 'c', 's', '_', 'l', 'e', 'f',
    't', 'e', 'y', 'e', '.', 'x', 'm', 'l', '\x00' };

  const mxArray *b_y;
  static const int32_T iv9[2] = { 1, 10 };

  b_obj = obj;
  b_obj->ScaleFactor = 1.1;
  b_obj->MergeThreshold = 4.0;
  c_obj = b_obj;
  c_obj->matlabCodegenIsDeleted = false;
  c_obj->isInitialized = false;
  c_obj->isReleased = false;
  c_obj->matlabCodegenIsDeleted = false;
  ptrObj = NULL;
  cascadeClassifier_construct(&ptrObj);
  b_obj->pCascadeClassifier = ptrObj;
  c_obj = b_obj;
  y = NULL;
  m1 = emlrtCreateCharArray(2, iv8);
  for (i = 0; i < 10; i++) {
    cv2[i] = cv3[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 10, m1, cv2);
  emlrtAssign(&y, m1);
  emlrt_marshallIn(feval(y, &emlrtMCI), "feval");
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 119U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  c_obj = b_obj;
  b_y = NULL;
  m1 = emlrtCreateCharArray(2, iv9);
  for (i = 0; i < 10; i++) {
    cv2[i] = cv3[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 10, m1, cv2);
  emlrtAssign(&b_y, m1);
  emlrt_marshallIn(feval(b_y, &emlrtMCI), "feval");
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 119U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  return b_obj;
}

static void d_SystemCore_step(faceSwapLiveStackData *SD,
  vision_CascadeObjectDetector_13 *obj, const emxArray_real_T *varargin_1,
  emxArray_real_T *varargout_1)
{
  vision_CascadeObjectDetector_13 *b_obj;
  int32_T i7;
  uint8_T inputSize[8];
  int32_T num_bboxes;
  boolean_T exitg1;
  int32_T Iu8_size[2];
  int32_T loop_ub;
  int32_T i8;
  void * ptrObj;
  real_T ScaleFactor;
  uint32_T MergeThreshold;
  int32_T MinSize_[2];
  int32_T MaxSize_[2];
  void * ptrDetectedObj;
  emxArray_int32_T *bboxes_;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  if (!obj->isInitialized) {
    b_obj = obj;
    b_obj->isInitialized = true;
    for (i7 = 0; i7 < 2; i7++) {
      b_obj->inputVarSize1[i7] = (uint32_T)varargin_1->size[i7];
    }

    for (i7 = 0; i7 < 6; i7++) {
      b_obj->inputVarSize1[i7 + 2] = 1U;
    }

    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->TunablePropsChanged = false;
  }

  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = false;
  }

  b_obj = obj;
  for (i7 = 0; i7 < 2; i7++) {
    inputSize[i7] = (uint8_T)varargin_1->size[i7];
  }

  for (i7 = 0; i7 < 6; i7++) {
    inputSize[i7 + 2] = 1;
  }

  num_bboxes = 0;
  exitg1 = false;
  while ((!exitg1) && (num_bboxes < 8)) {
    if (b_obj->inputVarSize1[num_bboxes] != inputSize[num_bboxes]) {
      for (i7 = 0; i7 < 8; i7++) {
        b_obj->inputVarSize1[i7] = inputSize[i7];
      }

      exitg1 = true;
    } else {
      num_bboxes++;
    }
  }

  b_obj = obj;
  for (i7 = 0; i7 < 2; i7++) {
    Iu8_size[i7] = varargin_1->size[i7];
  }

  grayto8_double(&varargin_1->data[0], &SD->u1.f4.Iu8_data[0], (real_T)
                 (varargin_1->size[0] * varargin_1->size[1]));
  num_bboxes = Iu8_size[0];
  for (i7 = 0; i7 < num_bboxes; i7++) {
    loop_ub = Iu8_size[1];
    for (i8 = 0; i8 < loop_ub; i8++) {
      SD->u1.f4.Iu8_grayT_data[i8 + Iu8_size[1] * i7] = SD->u1.f4.Iu8_data[i7 +
        Iu8_size[0] * i8];
    }
  }

  ptrObj = b_obj->pCascadeClassifier;
  ScaleFactor = b_obj->ScaleFactor;
  MergeThreshold = (uint32_T)muDoubleScalarRound(b_obj->MergeThreshold);
  for (i7 = 0; i7 < 2; i7++) {
    MinSize_[i7] = 0;
    MaxSize_[i7] = 0;
  }

  ptrDetectedObj = NULL;
  num_bboxes = Iu8_size[1] * Iu8_size[0];
  for (i7 = 0; i7 < num_bboxes; i7++) {
    SD->u1.f4.Iu8_data[i7] = SD->u1.f4.Iu8_grayT_data[i7];
  }

  emxInit_int32_T(&bboxes_, 2, true);
  num_bboxes = cascadeClassifier_detectMultiScale(ptrObj, &ptrDetectedObj,
    &SD->u1.f4.Iu8_data[0], Iu8_size[0], Iu8_size[1], ScaleFactor,
    MergeThreshold, MinSize_, MaxSize_);
  i7 = bboxes_->size[0] * bboxes_->size[1];
  bboxes_->size[0] = num_bboxes;
  bboxes_->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)bboxes_, i7, (int32_T)sizeof(int32_T));
  cascadeClassifier_assignOutputDeleteBbox(ptrDetectedObj, &bboxes_->data[0]);
  i7 = varargout_1->size[0] * varargout_1->size[1];
  varargout_1->size[0] = bboxes_->size[0];
  varargout_1->size[1] = bboxes_->size[1];
  emxEnsureCapacity((emxArray__common *)varargout_1, i7, (int32_T)sizeof(real_T));
  num_bboxes = bboxes_->size[0] * bboxes_->size[1];
  for (i7 = 0; i7 < num_bboxes; i7++) {
    varargout_1->data[i7] = bboxes_->data[i7];
  }

  emxFree_int32_T(&bboxes_);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void d_bsxfun(const real_T a[19260], const boolean_T b[6420], real_T c
                     [19260])
{
  int32_T asub[2];
  int32_T bsub[2];
  int32_T i;
  int32_T bk;
  int32_T ck;
  real_T cv[60];
  int32_T k;
  for (i = 0; i < 2; i++) {
    asub[i] = 1;
    bsub[i] = 1;
  }

  i = 0;
  bk = 0;
  for (ck = 0; ck < 19202; ck += 60) {
    for (k = 0; k < 60; k++) {
      cv[k] = a[i + k] * (real_T)b[bk + k];
    }

    memcpy(&c[ck], &cv[0], 60U * sizeof(real_T));
    if (asub[0] < 107) {
      i += 60;
      bk += 60;
      bsub[0]++;
      asub[0]++;
    } else if (bsub[0] < 107) {
      bk += 60;
      bsub[0]++;
    } else {
      asub[0] = 1;
      bsub[0] = 1;
      if (asub[1] < 3) {
        i += 60;
        bk -= 6360;
        asub[1]++;
      } else {
        asub[1] = 1;
      }
    }
  }
}

static real_T (*d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId))[307440]
{
  real_T (*y)[307440];
  y = j_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static void d_imfilter(const boolean_T varargin_1[102480], boolean_T b[102480])
{
  emxArray_boolean_T *a;
  int32_T tmp_size[1];
  int32_T tmp_data[25];
  int32_T loop_ub;
  int32_T i23;
  static const real_T dv13[25] = { 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.09375, 0.375, 0.5625, 0.375, 0.09375,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.015625, 0.0625, 0.09375, 0.0625,
    0.015625 };

  real_T nonzero_h_data[25];
  real_T outSize[2];
  real_T padSize[2];
  boolean_T conn[25];
  real_T connDims[2];
  real_T start[2];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_boolean_T(&a, 2, true);
  d_padarray(varargin_1, a);
  eml_li_find(tmp_data, tmp_size);
  loop_ub = tmp_size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    nonzero_h_data[i23] = dv13[tmp_data[i23] - 1];
  }

  for (i23 = 0; i23 < 2; i23++) {
    outSize[i23] = 240.0 + 187.0 * (real_T)i23;
  }

  for (i23 = 0; i23 < 2; i23++) {
    padSize[i23] = a->size[i23];
  }

  for (i23 = 0; i23 < 25; i23++) {
    conn[i23] = true;
  }

  for (i23 = 0; i23 < 2; i23++) {
    connDims[i23] = 5.0;
    start[i23] = 2.0;
  }

  imfilter_boolean(&a->data[0], b, 2.0, outSize, 2.0, padSize, &nonzero_h_data[0],
                   (real_T)tmp_size[0], conn, 2.0, connDims, start, 2.0, true,
                   true);
  emxFree_boolean_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void d_padarray(const boolean_T varargin_1[102480], emxArray_boolean_T *b)
{
  int16_T sizeB[2];
  int16_T idxA[862];
  int16_T sizeIdxDir[2];
  emxArray_uint32_T *dimNums;
  emxArray_real_T *y;
  int32_T k;
  int32_T ndbl;
  int32_T apnd;
  int32_T cdiff;
  int32_T i22;
  int32_T nm1d2;
  real_T y_data[431];
  int32_T y_size[2];
  int32_T tmp_size[2];
  real_T tmp_data[431];
  uint32_T idxDir_data[431];
  int16_T b_tmp_data[431];
  int32_T b_idxDir_data[431];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_uint32_T(&dimNums, 2, true);
  emxInit_real_T(&y, 2, true);
  for (k = 0; k < 2; k++) {
    ndbl = (int32_T)muDoubleScalarFloor(((240.0 + 187.0 * (real_T)k) - 1.0) +
      0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - 187 * k) - 239;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (187.0 * (real_T)k +
         240.0)) {
      ndbl++;
      apnd = 240 + 187 * k;
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }

    i22 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = ndbl;
    emxEnsureCapacity((emxArray__common *)y, i22, (int32_T)sizeof(real_T));
    y->data[0] = 1.0;
    y->data[ndbl - 1] = apnd;
    i22 = ndbl - 1;
    nm1d2 = (int32_T)((uint32_T)i22 >> 1);
    for (cdiff = 1; cdiff < nm1d2; cdiff++) {
      y->data[cdiff] = 1.0 + (real_T)cdiff;
      y->data[(ndbl - cdiff) - 1] = apnd - cdiff;
    }

    if (nm1d2 << 1 == ndbl - 1) {
      y->data[nm1d2] = (1.0 + (real_T)apnd) / 2.0;
    } else {
      y->data[nm1d2] = 1.0 + (real_T)nm1d2;
      y->data[nm1d2 + 1] = apnd - nm1d2;
    }

    i22 = dimNums->size[0] * dimNums->size[1];
    dimNums->size[0] = 1;
    dimNums->size[1] = y->size[1];
    emxEnsureCapacity((emxArray__common *)dimNums, i22, (int32_T)sizeof(uint32_T));
    cdiff = y->size[0] * y->size[1];
    for (i22 = 0; i22 < cdiff; i22++) {
      dimNums->data[i22] = (uint32_T)muDoubleScalarRound(y->data[i22]);
    }

    ndbl = (int32_T)muDoubleScalarFloor(((((240.0 + 187.0 * (real_T)k) + 2.0) -
      1.0) - -2.0) + 0.5);
    apnd = ndbl - 2;
    cdiff = (ndbl - 187 * k) - 243;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (187.0 * (real_T)k +
         241.0)) {
      ndbl++;
      apnd = 241 + 187 * k;
    } else if (cdiff > 0) {
      apnd = ndbl - 3;
    } else {
      ndbl++;
    }

    y_size[0] = 1;
    y_size[1] = ndbl;
    y_data[0] = -2.0;
    y_data[ndbl - 1] = apnd;
    i22 = ndbl - 1;
    nm1d2 = (int32_T)((uint32_T)i22 >> 1);
    for (cdiff = 1; cdiff < nm1d2; cdiff++) {
      y_data[cdiff] = -2.0 + (real_T)cdiff;
      y_data[(ndbl - cdiff) - 1] = apnd - cdiff;
    }

    if (nm1d2 << 1 == ndbl - 1) {
      y_data[nm1d2] = (-2.0 + (real_T)apnd) / 2.0;
    } else {
      y_data[nm1d2] = -2.0 + (real_T)nm1d2;
      y_data[nm1d2 + 1] = apnd - nm1d2;
    }

    b_mod(y_data, y_size, 240.0 + 187.0 * (real_T)k, tmp_data, tmp_size);
    cdiff = tmp_size[0] * tmp_size[1];
    for (i22 = 0; i22 < cdiff; i22++) {
      idxDir_data[i22] = dimNums->data[(int32_T)(tmp_data[i22] + 1.0) - 1];
    }

    sizeIdxDir[k] = (int16_T)tmp_size[1];
    cdiff = sizeIdxDir[k];
    for (i22 = 0; i22 < cdiff; i22++) {
      b_tmp_data[i22] = (int16_T)i22;
    }

    cdiff = tmp_size[1];
    for (i22 = 0; i22 < cdiff; i22++) {
      b_idxDir_data[i22] = (int32_T)idxDir_data[i22];
    }

    cdiff = sizeIdxDir[k];
    for (i22 = 0; i22 < cdiff; i22++) {
      idxA[b_tmp_data[i22] + 431 * k] = (int16_T)b_idxDir_data[i22];
    }

    sizeB[k] = (int16_T)(244 + 187 * k);
  }

  emxFree_real_T(&y);
  emxFree_uint32_T(&dimNums);
  i22 = b->size[0] * b->size[1];
  b->size[0] = sizeB[0];
  b->size[1] = sizeB[1];
  emxEnsureCapacity((emxArray__common *)b, i22, (int32_T)sizeof(boolean_T));
  for (cdiff = 0; cdiff < sizeB[1]; cdiff++) {
    i22 = b->size[0];
    for (nm1d2 = 0; nm1d2 < i22; nm1d2++) {
      b->data[nm1d2 + b->size[0] * cdiff] = varargin_1[(idxA[nm1d2] + 240 *
        (idxA[431 + cdiff] - 1)) - 1];
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static int32_T div_s32_floor(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  uint32_T tempAbsQuotient;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroErrorR2012b(NULL, emlrtRootTLSGlobal);
  } else {
    if (numerator >= 0) {
      absNumerator = (uint32_T)numerator;
    } else {
      absNumerator = (uint32_T)-numerator;
    }

    if (denominator >= 0) {
      absDenominator = (uint32_T)denominator;
    } else {
      absDenominator = (uint32_T)-denominator;
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }
    }

    if (quotientNeedsNegation) {
      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }

  return quotient;
}

static vision_CascadeObjectDetector_11 *e_CascadeObjectDetector_Cascade
  (vision_CascadeObjectDetector_11 *obj)
{
  vision_CascadeObjectDetector_11 *b_obj;
  vision_CascadeObjectDetector_11 *c_obj;
  void * ptrObj;
  const mxArray *y;
  static const int32_T iv10[2] = { 1, 10 };

  const mxArray *m2;
  char_T cv4[10];
  int32_T i;
  static const char_T cv5[10] = { 'i', 's', 'd', 'e', 'p', 'l', 'o', 'y', 'e',
    'd' };

  char_T ClassificationModel[120];
  static const char_T b_ClassificationModel[120] = { '/', 'A', 'p', 'p', 'l',
    'i', 'c', 'a', 't', 'i', 'o', 'n', 's', '/', 'M', 'A', 'T', 'L', 'A', 'B',
    '_', 'R', '2', '0', '1', '4', 'b', '.', 'a', 'p', 'p', '/', 't', 'o', 'o',
    'l', 'b', 'o', 'x', '/', 'v', 'i', 's', 'i', 'o', 'n', '/', 'v', 'i', 's',
    'i', 'o', 'n', 'u', 't', 'i', 'l', 'i', 't', 'i', 'e', 's', '/', 'c', 'l',
    'a', 's', 's', 'i', 'f', 'i', 'e', 'r', 'd', 'a', 't', 'a', '/', 'c', 'a',
    's', 'c', 'a', 'd', 'e', '/', 'h', 'a', 'a', 'r', '/', 'h', 'a', 'a', 'r',
    'c', 'a', 's', 'c', 'a', 'd', 'e', '_', 'm', 'c', 's', '_', 'r', 'i', 'g',
    'h', 't', 'e', 'y', 'e', '.', 'x', 'm', 'l', '\x00' };

  const mxArray *b_y;
  static const int32_T iv11[2] = { 1, 10 };

  b_obj = obj;
  b_obj->ScaleFactor = 1.1;
  b_obj->MergeThreshold = 4.0;
  c_obj = b_obj;
  c_obj->matlabCodegenIsDeleted = false;
  c_obj->isInitialized = false;
  c_obj->isReleased = false;
  c_obj->matlabCodegenIsDeleted = false;
  ptrObj = NULL;
  cascadeClassifier_construct(&ptrObj);
  b_obj->pCascadeClassifier = ptrObj;
  c_obj = b_obj;
  y = NULL;
  m2 = emlrtCreateCharArray(2, iv10);
  for (i = 0; i < 10; i++) {
    cv4[i] = cv5[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 10, m2, cv4);
  emlrtAssign(&y, m2);
  emlrt_marshallIn(feval(y, &emlrtMCI), "feval");
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 120U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  c_obj = b_obj;
  b_y = NULL;
  m2 = emlrtCreateCharArray(2, iv11);
  for (i = 0; i < 10; i++) {
    cv4[i] = cv5[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 10, m2, cv4);
  emlrtAssign(&b_y, m2);
  emlrt_marshallIn(feval(b_y, &emlrtMCI), "feval");
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 120U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  return b_obj;
}

static void e_SystemCore_step(faceSwapLiveStackData *SD,
  vision_CascadeObjectDetector_14 *obj, const emxArray_real_T *varargin_1,
  emxArray_real_T *varargout_1)
{
  vision_CascadeObjectDetector_14 *b_obj;
  int32_T i9;
  uint8_T inputSize[8];
  int32_T num_bboxes;
  boolean_T exitg1;
  int32_T Iu8_size[2];
  int32_T loop_ub;
  int32_T i10;
  void * ptrObj;
  real_T ScaleFactor;
  uint32_T MergeThreshold;
  int32_T MinSize_[2];
  int32_T MaxSize_[2];
  void * ptrDetectedObj;
  emxArray_int32_T *bboxes_;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  if (!obj->isInitialized) {
    b_obj = obj;
    b_obj->isInitialized = true;
    for (i9 = 0; i9 < 2; i9++) {
      b_obj->inputVarSize1[i9] = (uint32_T)varargin_1->size[i9];
    }

    for (i9 = 0; i9 < 6; i9++) {
      b_obj->inputVarSize1[i9 + 2] = 1U;
    }

    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->TunablePropsChanged = false;
  }

  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = false;
  }

  b_obj = obj;
  for (i9 = 0; i9 < 2; i9++) {
    inputSize[i9] = (uint8_T)varargin_1->size[i9];
  }

  for (i9 = 0; i9 < 6; i9++) {
    inputSize[i9 + 2] = 1;
  }

  num_bboxes = 0;
  exitg1 = false;
  while ((!exitg1) && (num_bboxes < 8)) {
    if (b_obj->inputVarSize1[num_bboxes] != inputSize[num_bboxes]) {
      for (i9 = 0; i9 < 8; i9++) {
        b_obj->inputVarSize1[i9] = inputSize[i9];
      }

      exitg1 = true;
    } else {
      num_bboxes++;
    }
  }

  b_obj = obj;
  for (i9 = 0; i9 < 2; i9++) {
    Iu8_size[i9] = varargin_1->size[i9];
  }

  grayto8_double(&varargin_1->data[0], &SD->u1.f3.Iu8_data[0], (real_T)
                 (varargin_1->size[0] * varargin_1->size[1]));
  num_bboxes = Iu8_size[0];
  for (i9 = 0; i9 < num_bboxes; i9++) {
    loop_ub = Iu8_size[1];
    for (i10 = 0; i10 < loop_ub; i10++) {
      SD->u1.f3.Iu8_grayT_data[i10 + Iu8_size[1] * i9] = SD->u1.f3.Iu8_data[i9 +
        Iu8_size[0] * i10];
    }
  }

  ptrObj = b_obj->pCascadeClassifier;
  ScaleFactor = b_obj->ScaleFactor;
  MergeThreshold = (uint32_T)muDoubleScalarRound(b_obj->MergeThreshold);
  for (i9 = 0; i9 < 2; i9++) {
    MinSize_[i9] = 0;
    MaxSize_[i9] = 0;
  }

  ptrDetectedObj = NULL;
  num_bboxes = Iu8_size[1] * Iu8_size[0];
  for (i9 = 0; i9 < num_bboxes; i9++) {
    SD->u1.f3.Iu8_data[i9] = SD->u1.f3.Iu8_grayT_data[i9];
  }

  emxInit_int32_T(&bboxes_, 2, true);
  num_bboxes = cascadeClassifier_detectMultiScale(ptrObj, &ptrDetectedObj,
    &SD->u1.f3.Iu8_data[0], Iu8_size[0], Iu8_size[1], ScaleFactor,
    MergeThreshold, MinSize_, MaxSize_);
  i9 = bboxes_->size[0] * bboxes_->size[1];
  bboxes_->size[0] = num_bboxes;
  bboxes_->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)bboxes_, i9, (int32_T)sizeof(int32_T));
  cascadeClassifier_assignOutputDeleteBbox(ptrDetectedObj, &bboxes_->data[0]);
  i9 = varargout_1->size[0] * varargout_1->size[1];
  varargout_1->size[0] = bboxes_->size[0];
  varargout_1->size[1] = bboxes_->size[1];
  emxEnsureCapacity((emxArray__common *)varargout_1, i9, (int32_T)sizeof(real_T));
  num_bboxes = bboxes_->size[0] * bboxes_->size[1];
  for (i9 = 0; i9 < num_bboxes; i9++) {
    varargout_1->data[i9] = bboxes_->data[i9];
  }

  emxFree_int32_T(&bboxes_);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void e_bsxfun(const real_T a[77040], const boolean_T b[25680], real_T c
                     [77040])
{
  int32_T asub[2];
  int32_T bsub[2];
  int32_T i;
  int32_T bk;
  int32_T ck;
  real_T cv[120];
  int32_T k;
  for (i = 0; i < 2; i++) {
    asub[i] = 1;
    bsub[i] = 1;
  }

  i = 0;
  bk = 0;
  for (ck = 0; ck < 76922; ck += 120) {
    for (k = 0; k < 120; k++) {
      cv[k] = a[i + k] * (real_T)b[bk + k];
    }

    memcpy(&c[ck], &cv[0], 120U * sizeof(real_T));
    if (asub[0] < 214) {
      i += 120;
      bk += 120;
      bsub[0]++;
      asub[0]++;
    } else if (bsub[0] < 214) {
      bk += 120;
      bsub[0]++;
    } else {
      asub[0] = 1;
      bsub[0] = 1;
      if (asub[1] < 3) {
        i += 120;
        bk -= 25560;
        asub[1]++;
      } else {
        asub[1] = 1;
      }
    }
  }
}

static real_T (*e_emlrt_marshallIn(const mxArray *swapImage, const char_T
  *identifier))[33075]
{
  real_T (*y)[33075];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = f_emlrt_marshallIn(emlrtAlias(swapImage), &thisId);
  emlrtDestroyArray(&swapImage);
  return y;
}
  static void e_imfilter(const real_T varargin_1[77040], real_T b[77040])
{
  emxArray_real_T *a;
  int32_T tmp_size[1];
  int32_T tmp_data[25];
  int32_T loop_ub;
  int32_T i24;
  static const real_T dv14[25] = { 0.00390625, 0.015625, 0.0234375, 0.015625,
    0.00390625, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625, 0.0234375, 0.09375,
    0.140625, 0.09375, 0.0234375, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.00390625, 0.015625, 0.0234375, 0.015625, 0.00390625 };

  real_T nonzero_h_data[25];
  boolean_T densityFlag;
  boolean_T tooBig;
  real_T padSize[3];
  real_T connDims[2];
  static const real_T h[25] = { 0.00390625, 0.015625, 0.0234375, 0.015625,
    0.00390625, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625, 0.0234375, 0.09375,
    0.140625, 0.09375, 0.0234375, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.00390625, 0.015625, 0.0234375, 0.015625, 0.00390625 };

  static const real_T outSize[3] = { 120.0, 214.0, 3.0 };

  boolean_T conn[25];
  static const real_T start[3] = { 2.0, 2.0, 0.0 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  b_emxInit_real_T(&a, 3, true);
  e_padarray(varargin_1, a);
  eml_li_find(tmp_data, tmp_size);
  loop_ub = tmp_size[0];
  for (i24 = 0; i24 < loop_ub; i24++) {
    nonzero_h_data[i24] = dv14[tmp_data[i24] - 1];
  }

  densityFlag = false;
  if ((real_T)tmp_size[0] / 25.0 > 0.05) {
    densityFlag = true;
  }

  tooBig = true;
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    tooBig = false;
  }

  if (densityFlag && (!tooBig)) {
    densityFlag = true;
  } else {
    densityFlag = false;
  }

  if (densityFlag) {
    for (i24 = 0; i24 < 3; i24++) {
      padSize[i24] = a->size[i24];
    }

    for (i24 = 0; i24 < 2; i24++) {
      connDims[i24] = 5.0;
    }

    ippfilter_real64(&a->data[0], b, outSize, 3.0, padSize, h, connDims, true,
                     false);
  } else {
    for (i24 = 0; i24 < 3; i24++) {
      padSize[i24] = a->size[i24];
    }

    for (i24 = 0; i24 < 25; i24++) {
      conn[i24] = true;
    }

    for (i24 = 0; i24 < 2; i24++) {
      connDims[i24] = 5.0;
    }

    imfilter_real64(&a->data[0], b, 3.0, outSize, 3.0, padSize, &nonzero_h_data
                    [0], (real_T)tmp_size[0], conn, 2.0, connDims, start, 3.0,
                    true, true);
  }

  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void e_padarray(const real_T varargin_1[77040], emxArray_real_T *b)
{
  uint8_T sizeB[3];
  int32_T idxA[654];
  int16_T sizeIdxDir[3];
  emxArray_uint32_T *dimNums;
  emxArray_real_T *y;
  int32_T k;
  static const uint8_T uv1[3] = { 120U, 214U, 3U };

  int32_T ndbl;
  int32_T apnd;
  int32_T cdiff;
  int32_T i25;
  int32_T nm1d2;
  int32_T i;
  static const int8_T iv20[3] = { 2, 2, 0 };

  real_T y_data[431];
  int32_T y_size[2];
  int32_T tmp_size[2];
  real_T tmp_data[431];
  uint32_T idxDir_data[431];
  int16_T b_tmp_data[218];
  int32_T b_idxDir_data[431];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_uint32_T(&dimNums, 2, true);
  emxInit_real_T(&y, 2, true);
  for (k = 0; k < 3; k++) {
    ndbl = (int32_T)muDoubleScalarFloor(((real_T)uv1[k] - 1.0) + 0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - uv1[k]) + 1;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)uv1[k]) {
      ndbl++;
      apnd = uv1[k];
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }

    i25 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = ndbl;
    emxEnsureCapacity((emxArray__common *)y, i25, (int32_T)sizeof(real_T));
    y->data[0] = 1.0;
    y->data[ndbl - 1] = apnd;
    i25 = ndbl - 1;
    nm1d2 = (int32_T)((uint32_T)i25 >> 1);
    for (i = 1; i < nm1d2; i++) {
      y->data[i] = 1.0 + (real_T)i;
      y->data[(ndbl - i) - 1] = apnd - i;
    }

    if (nm1d2 << 1 == ndbl - 1) {
      y->data[nm1d2] = (1.0 + (real_T)apnd) / 2.0;
    } else {
      y->data[nm1d2] = 1.0 + (real_T)nm1d2;
      y->data[nm1d2 + 1] = apnd - nm1d2;
    }

    i25 = dimNums->size[0] * dimNums->size[1];
    dimNums->size[0] = 1;
    dimNums->size[1] = y->size[1];
    emxEnsureCapacity((emxArray__common *)dimNums, i25, (int32_T)sizeof(uint32_T));
    cdiff = y->size[0] * y->size[1];
    for (i25 = 0; i25 < cdiff; i25++) {
      dimNums->data[i25] = (uint32_T)muDoubleScalarRound(y->data[i25]);
    }

    i = (uv1[k] + iv20[k]) - 1;
    ndbl = (int32_T)muDoubleScalarFloor((real_T)(i + iv20[k]) + 0.5);
    apnd = ndbl - iv20[k];
    cdiff = apnd - i;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)i) {
      ndbl++;
      apnd = i;
    } else if (cdiff > 0) {
      apnd = (ndbl - iv20[k]) - 1;
    } else {
      ndbl++;
    }

    y_size[0] = 1;
    y_size[1] = ndbl;
    y_data[0] = -(real_T)iv20[k];
    y_data[ndbl - 1] = apnd;
    i25 = ndbl - 1;
    nm1d2 = (int32_T)((uint32_T)i25 >> 1);
    for (i = 1; i < nm1d2; i++) {
      y_data[i] = i - iv20[k];
      y_data[(ndbl - i) - 1] = apnd - i;
    }

    if (nm1d2 << 1 == ndbl - 1) {
      y_data[nm1d2] = (real_T)(apnd - iv20[k]) / 2.0;
    } else {
      y_data[nm1d2] = nm1d2 - iv20[k];
      y_data[nm1d2 + 1] = apnd - nm1d2;
    }

    b_mod(y_data, y_size, uv1[k], tmp_data, tmp_size);
    cdiff = tmp_size[0] * tmp_size[1];
    for (i25 = 0; i25 < cdiff; i25++) {
      idxDir_data[i25] = dimNums->data[(int32_T)(tmp_data[i25] + 1.0) - 1];
    }

    sizeIdxDir[k] = (int16_T)tmp_size[1];
    cdiff = sizeIdxDir[k];
    for (i25 = 0; i25 < cdiff; i25++) {
      b_tmp_data[i25] = (int16_T)i25;
    }

    cdiff = tmp_size[1];
    for (i25 = 0; i25 < cdiff; i25++) {
      b_idxDir_data[i25] = (int32_T)idxDir_data[i25];
    }

    cdiff = sizeIdxDir[k];
    for (i25 = 0; i25 < cdiff; i25++) {
      idxA[b_tmp_data[i25] + 218 * k] = b_idxDir_data[i25];
    }

    sizeB[k] = (uint8_T)(uv1[k] + (iv20[k] << 1));
  }

  emxFree_real_T(&y);
  emxFree_uint32_T(&dimNums);
  i25 = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = sizeB[0];
  b->size[1] = sizeB[1];
  b->size[2] = sizeB[2];
  emxEnsureCapacity((emxArray__common *)b, i25, (int32_T)sizeof(real_T));
  for (k = 0; k < sizeB[2]; k++) {
    i25 = b->size[1];
    for (cdiff = 0; cdiff < i25; cdiff++) {
      nm1d2 = b->size[0];
      for (i = 0; i < nm1d2; i++) {
        b->data[(i + b->size[0] * cdiff) + b->size[0] * b->size[1] * k] =
          varargin_1[((idxA[i] + 120 * (idxA[218 + cdiff] - 1)) + 25680 * (idxA
          [436 + k] - 1)) - 1];
      }
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void eml_li_find(int32_T y_data[], int32_T y_size[1])
{
  int32_T k;
  int32_T i;
  k = 0;
  for (i = 0; i < 25; i++) {
    k++;
  }

  y_size[0] = k;
  k = 0;
  for (i = 0; i < 25; i++) {
    y_data[k] = i + 1;
    k++;
  }
}

static void eml_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[80], int32_T
                      iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (a == 0.0) {
  } else {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * y[ix];
      ix++;
      iy++;
    }
  }
}

static real_T eml_xdotc(int32_T n, const real_T x[80], int32_T ix0, const real_T
  y[80], int32_T iy0)
{
  real_T d;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0;
  ix = ix0;
  iy = iy0;
  for (k = 1; k <= n; k++) {
    d += x[ix - 1] * y[iy - 1];
    ix++;
    iy++;
  }

  return d;
}

static void eml_xgesvd(const real_T A[80], real_T S[8])
{
  real_T b_A[80];
  real_T s[8];
  real_T e[8];
  int32_T i;
  real_T work[10];
  int32_T q;
  int32_T qs;
  boolean_T apply_transform;
  real_T ztest0;
  int32_T qjj;
  int32_T m;
  real_T ztest;
  real_T rt;
  int32_T iter;
  real_T snorm;
  int32_T exitg3;
  boolean_T exitg2;
  real_T f;
  real_T varargin_1[5];
  real_T mtmp;
  boolean_T exitg1;
  real_T sqds;
  memcpy(&b_A[0], &A[0], 80U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    s[i] = 0.0;
    e[i] = 0.0;
  }

  memset(&work[0], 0, 10U * sizeof(real_T));
  for (q = 0; q < 8; q++) {
    qs = q + 10 * q;
    apply_transform = false;
    ztest0 = eml_xnrm2(10 - q, b_A, qs + 1);
    if (ztest0 > 0.0) {
      apply_transform = true;
      if (b_A[qs] < 0.0) {
        s[q] = -ztest0;
      } else {
        s[q] = ztest0;
      }

      if (muDoubleScalarAbs(s[q]) >= 1.0020841800044864E-292) {
        ztest0 = 1.0 / s[q];
        i = (qs - q) + 10;
        for (qjj = qs; qjj + 1 <= i; qjj++) {
          b_A[qjj] *= ztest0;
        }
      } else {
        i = (qs - q) + 10;
        for (qjj = qs; qjj + 1 <= i; qjj++) {
          b_A[qjj] /= s[q];
        }
      }

      b_A[qs]++;
      s[q] = -s[q];
    } else {
      s[q] = 0.0;
    }

    for (i = q + 1; i + 1 < 9; i++) {
      qjj = q + 10 * i;
      if (apply_transform) {
        eml_xaxpy(10 - q, -(eml_xdotc(10 - q, b_A, qs + 1, b_A, qjj + 1) / b_A[q
                            + 10 * q]), qs + 1, b_A, qjj + 1);
      }

      e[i] = b_A[qjj];
    }

    if (q + 1 <= 6) {
      ztest0 = b_eml_xnrm2(7 - q, e, q + 2);
      if (ztest0 == 0.0) {
        e[q] = 0.0;
      } else {
        if (e[q + 1] < 0.0) {
          e[q] = -ztest0;
        } else {
          e[q] = ztest0;
        }

        ztest0 = e[q];
        if (muDoubleScalarAbs(e[q]) >= 1.0020841800044864E-292) {
          ztest0 = 1.0 / e[q];
          for (qjj = q + 1; qjj + 1 < 9; qjj++) {
            e[qjj] *= ztest0;
          }
        } else {
          for (qjj = q + 1; qjj + 1 < 9; qjj++) {
            e[qjj] /= ztest0;
          }
        }

        e[q + 1]++;
        e[q] = -e[q];
        for (i = q + 1; i + 1 < 11; i++) {
          work[i] = 0.0;
        }

        for (i = q + 1; i + 1 < 9; i++) {
          b_eml_xaxpy(9 - q, e[i], b_A, (q + 10 * i) + 2, work, q + 2);
        }

        for (i = q + 1; i + 1 < 9; i++) {
          c_eml_xaxpy(9 - q, -e[i] / e[q + 1], work, q + 2, b_A, (q + 10 * i) +
                      2);
        }
      }
    }
  }

  m = 6;
  e[6] = b_A[76];
  e[7] = 0.0;
  for (q = 0; q < 8; q++) {
    ztest = e[q];
    if (s[q] != 0.0) {
      rt = muDoubleScalarAbs(s[q]);
      ztest0 = s[q] / rt;
      s[q] = rt;
      if (q + 1 < 8) {
        ztest = e[q] / ztest0;
      }
    }

    if ((q + 1 < 8) && (ztest != 0.0)) {
      rt = muDoubleScalarAbs(ztest);
      ztest0 = ztest;
      ztest = rt;
      s[q + 1] *= rt / ztest0;
    }

    e[q] = ztest;
  }

  iter = 0;
  snorm = 0.0;
  for (i = 0; i < 8; i++) {
    snorm = muDoubleScalarMax(snorm, muDoubleScalarMax(muDoubleScalarAbs(s[i]),
      muDoubleScalarAbs(e[i])));
  }

  while ((m + 2 > 0) && (!(iter >= 75))) {
    i = m;
    do {
      exitg3 = 0;
      q = i + 1;
      if (i + 1 == 0) {
        exitg3 = 1;
      } else {
        ztest0 = muDoubleScalarAbs(e[i]);
        if ((ztest0 <= 2.2204460492503131E-16 * (muDoubleScalarAbs(s[i]) +
              muDoubleScalarAbs(s[i + 1]))) || (ztest0 <=
             1.0020841800044864E-292) || ((iter > 20) && (ztest0 <=
              2.2204460492503131E-16 * snorm))) {
          e[i] = 0.0;
          exitg3 = 1;
        } else {
          i--;
        }
      }
    } while (exitg3 == 0);

    if (i + 1 == m + 1) {
      i = 4;
    } else {
      qs = m + 2;
      qjj = m + 2;
      exitg2 = false;
      while ((!exitg2) && (qjj >= i + 1)) {
        qs = qjj;
        if (qjj == i + 1) {
          exitg2 = true;
        } else {
          ztest0 = 0.0;
          if (qjj < m + 2) {
            ztest0 = muDoubleScalarAbs(e[qjj - 1]);
          }

          if (qjj > i + 2) {
            ztest0 += muDoubleScalarAbs(e[qjj - 2]);
          }

          ztest = muDoubleScalarAbs(s[qjj - 1]);
          if ((ztest <= 2.2204460492503131E-16 * ztest0) || (ztest <=
               1.0020841800044864E-292)) {
            s[qjj - 1] = 0.0;
            exitg2 = true;
          } else {
            qjj--;
          }
        }
      }

      if (qs == i + 1) {
        i = 3;
      } else if (qs == m + 2) {
        i = 1;
      } else {
        i = 2;
        q = qs;
      }
    }

    switch (i) {
     case 1:
      f = e[m];
      e[m] = 0.0;
      for (qjj = m; qjj + 1 >= q + 1; qjj--) {
        ztest0 = s[qjj];
        eml_xrotg(&ztest0, &f, &ztest, &rt);
        s[qjj] = ztest0;
        if (qjj + 1 > q + 1) {
          f = -rt * e[qjj - 1];
          e[qjj - 1] *= ztest;
        }
      }
      break;

     case 2:
      f = e[q - 1];
      e[q - 1] = 0.0;
      while (q + 1 <= m + 2) {
        eml_xrotg(&s[q], &f, &ztest, &rt);
        f = -rt * e[q];
        e[q] *= ztest;
        q++;
      }
      break;

     case 3:
      varargin_1[0] = muDoubleScalarAbs(s[m + 1]);
      varargin_1[1] = muDoubleScalarAbs(s[m]);
      varargin_1[2] = muDoubleScalarAbs(e[m]);
      varargin_1[3] = muDoubleScalarAbs(s[q]);
      varargin_1[4] = muDoubleScalarAbs(e[q]);
      i = 1;
      mtmp = varargin_1[0];
      if (muDoubleScalarIsNaN(varargin_1[0])) {
        qjj = 2;
        exitg1 = false;
        while ((!exitg1) && (qjj < 6)) {
          i = qjj;
          if (!muDoubleScalarIsNaN(varargin_1[qjj - 1])) {
            mtmp = varargin_1[qjj - 1];
            exitg1 = true;
          } else {
            qjj++;
          }
        }
      }

      if (i < 5) {
        while (i + 1 < 6) {
          if (varargin_1[i] > mtmp) {
            mtmp = varargin_1[i];
          }

          i++;
        }
      }

      f = s[m + 1] / mtmp;
      ztest0 = s[m] / mtmp;
      ztest = e[m] / mtmp;
      sqds = s[q] / mtmp;
      rt = ((ztest0 + f) * (ztest0 - f) + ztest * ztest) / 2.0;
      ztest0 = f * ztest;
      ztest0 *= ztest0;
      if ((rt != 0.0) || (ztest0 != 0.0)) {
        ztest = rt * rt + ztest0;
        c_sqrt(&ztest);
        if (rt < 0.0) {
          ztest = -ztest;
        }

        ztest = ztest0 / (rt + ztest);
      } else {
        ztest = 0.0;
      }

      f = (sqds + f) * (sqds - f) + ztest;
      ztest0 = sqds * (e[q] / mtmp);
      for (qjj = q + 1; qjj <= m + 1; qjj++) {
        eml_xrotg(&f, &ztest0, &ztest, &rt);
        if (qjj > q + 1) {
          e[qjj - 2] = f;
        }

        f = ztest * s[qjj - 1] + rt * e[qjj - 1];
        e[qjj - 1] = ztest * e[qjj - 1] - rt * s[qjj - 1];
        ztest0 = rt * s[qjj];
        s[qjj] *= ztest;
        s[qjj - 1] = f;
        eml_xrotg(&s[qjj - 1], &ztest0, &ztest, &rt);
        f = ztest * e[qjj - 1] + rt * s[qjj];
        s[qjj] = -rt * e[qjj - 1] + ztest * s[qjj];
        ztest0 = rt * e[qjj];
        e[qjj] *= ztest;
      }

      e[m] = f;
      iter++;
      break;

     default:
      if (s[q] < 0.0) {
        s[q] = -s[q];
      }

      i = q + 1;
      while ((q + 1 < 8) && (s[q] < s[i])) {
        rt = s[q];
        s[q] = s[i];
        s[i] = rt;
        q = i;
        i++;
      }

      iter = 0;
      m--;
      break;
    }
  }

  memcpy(&S[0], &s[0], sizeof(real_T) << 3);
}

static real_T eml_xnrm2(int32_T n, const real_T x[80], int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  int32_T k;
  real_T absxk;
  real_T t;
  y = 0.0;
  scale = 2.2250738585072014E-308;
  kend = (ix0 + n) - 1;
  for (k = ix0; k <= kend; k++) {
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = 1.0 + y * t * t;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static void eml_xrotg(real_T *a, real_T *b, real_T *c, real_T *s)
{
  double * a_t;
  double * b_t;
  double * c_t;
  double * s_t;
  *c = 0.0;
  *s = 0.0;
  a_t = (double *)(a);
  b_t = (double *)(b);
  c_t = (double *)(c);
  s_t = (double *)(s);
  drotg(a_t, b_t, c_t, s_t);
}

static boolean_T emlrt_marshallIn(const mxArray *b_feval, const char_T
  *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(emlrtAlias(b_feval), &thisId);
  emlrtDestroyArray(&b_feval);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[307440])
{
  const mxArray *y;
  static const int32_T iv25[3] = { 0, 0, 0 };

  const mxArray *m5;
  static const int32_T iv26[3] = { 240, 427, 3 };

  y = NULL;
  m5 = emlrtCreateNumericArray(3, iv25, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m5, (void *)u);
  emlrtSetDimensions((mxArray *)m5, iv26, 3);
  emlrtAssign(&y, m5);
  return y;
}

static void emxEnsureCapacity(emxArray__common *emxArray, int32_T oldNumel,
  int32_T elementSize)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      i <<= 1;
    }

    newData = emlrtCallocMex((uint32_T)i, (uint32_T)elementSize);
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, (uint32_T)(elementSize * oldNumel));
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_boolean_T *)NULL;
  }
}

static void emxFree_int32_T(emxArray_int32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T *)NULL) {
    if (((*pEmxArray)->data != (int32_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_int32_T *)NULL;
  }
}

static void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

static void emxFree_uint32_T(emxArray_uint32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_uint32_T *)NULL) {
    if (((*pEmxArray)->data != (uint32_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_uint32_T *)NULL;
  }
}

static void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int32_T
  numDimensions, boolean_T doPush)
{
  emxArray_boolean_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_boolean_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T numDimensions,
  boolean_T doPush)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_int32_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions,
  boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInit_uint32_T(emxArray_uint32_T **pEmxArray, int32_T
  numDimensions, boolean_T doPush)
{
  emxArray_uint32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_uint32_T *)emlrtMallocMex(sizeof(emxArray_uint32_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_uint32_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (uint32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static vision_CascadeObjectDetector_13 *f_CascadeObjectDetector_Cascade
  (vision_CascadeObjectDetector_13 *obj)
{
  vision_CascadeObjectDetector_13 *b_obj;
  vision_CascadeObjectDetector_13 *c_obj;
  void * ptrObj;
  const mxArray *y;
  static const int32_T iv12[2] = { 1, 10 };

  const mxArray *m3;
  char_T cv6[10];
  int32_T i;
  static const char_T cv7[10] = { 'i', 's', 'd', 'e', 'p', 'l', 'o', 'y', 'e',
    'd' };

  char_T ClassificationModel[117];
  static const char_T b_ClassificationModel[117] = { '/', 'A', 'p', 'p', 'l',
    'i', 'c', 'a', 't', 'i', 'o', 'n', 's', '/', 'M', 'A', 'T', 'L', 'A', 'B',
    '_', 'R', '2', '0', '1', '4', 'b', '.', 'a', 'p', 'p', '/', 't', 'o', 'o',
    'l', 'b', 'o', 'x', '/', 'v', 'i', 's', 'i', 'o', 'n', '/', 'v', 'i', 's',
    'i', 'o', 'n', 'u', 't', 'i', 'l', 'i', 't', 'i', 'e', 's', '/', 'c', 'l',
    'a', 's', 's', 'i', 'f', 'i', 'e', 'r', 'd', 'a', 't', 'a', '/', 'c', 'a',
    's', 'c', 'a', 'd', 'e', '/', 'h', 'a', 'a', 'r', '/', 'h', 'a', 'a', 'r',
    'c', 'a', 's', 'c', 'a', 'd', 'e', '_', 'm', 'c', 's', '_', 'm', 'o', 'u',
    't', 'h', '.', 'x', 'm', 'l', '\x00' };

  const mxArray *b_y;
  static const int32_T iv13[2] = { 1, 10 };

  b_obj = obj;
  b_obj->ScaleFactor = 1.1;
  b_obj->MergeThreshold = 4.0;
  c_obj = b_obj;
  c_obj->matlabCodegenIsDeleted = false;
  c_obj->isInitialized = false;
  c_obj->isReleased = false;
  c_obj->matlabCodegenIsDeleted = false;
  ptrObj = NULL;
  cascadeClassifier_construct(&ptrObj);
  b_obj->pCascadeClassifier = ptrObj;
  c_obj = b_obj;
  y = NULL;
  m3 = emlrtCreateCharArray(2, iv12);
  for (i = 0; i < 10; i++) {
    cv6[i] = cv7[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 10, m3, cv6);
  emlrtAssign(&y, m3);
  emlrt_marshallIn(feval(y, &emlrtMCI), "feval");
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 117U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  c_obj = b_obj;
  b_y = NULL;
  m3 = emlrtCreateCharArray(2, iv13);
  for (i = 0; i < 10; i++) {
    cv6[i] = cv7[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 10, m3, cv6);
  emlrtAssign(&b_y, m3);
  emlrt_marshallIn(feval(b_y, &emlrtMCI), "feval");
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 117U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  return b_obj;
}

static void f_bsxfun(const real_T a[307440], const boolean_T b[102480], real_T
                     c[307440])
{
  int32_T asub[2];
  int32_T bsub[2];
  int32_T i;
  int32_T bk;
  int32_T ck;
  real_T cv[240];
  int32_T k;
  for (i = 0; i < 2; i++) {
    asub[i] = 1;
    bsub[i] = 1;
  }

  i = 0;
  bk = 0;
  for (ck = 0; ck < 307202; ck += 240) {
    for (k = 0; k < 240; k++) {
      cv[k] = a[i + k] * (real_T)b[bk + k];
    }

    memcpy(&c[ck], &cv[0], 240U * sizeof(real_T));
    if (asub[0] < 427) {
      i += 240;
      bk += 240;
      bsub[0]++;
      asub[0]++;
    } else if (bsub[0] < 427) {
      bk += 240;
      bsub[0]++;
    } else {
      asub[0] = 1;
      bsub[0] = 1;
      if (asub[1] < 3) {
        i += 240;
        bk -= 102240;
        asub[1]++;
      } else {
        asub[1] = 1;
      }
    }
  }
}

static real_T (*f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId))[33075]
{
  real_T (*y)[33075];
  y = k_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static void f_imfilter(const real_T varargin_1[77040], real_T b[77040])
{
  emxArray_real_T *a;
  int32_T tmp_size[1];
  int32_T tmp_data[25];
  int32_T loop_ub;
  int32_T i26;
  static const real_T dv15[25] = { 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.09375, 0.375, 0.5625, 0.375, 0.09375,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.015625, 0.0625, 0.09375, 0.0625,
    0.015625 };

  real_T nonzero_h_data[25];
  boolean_T densityFlag;
  boolean_T tooBig;
  real_T padSize[3];
  real_T connDims[2];
  static const real_T h[25] = { 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.09375, 0.375, 0.5625, 0.375, 0.09375,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.015625, 0.0625, 0.09375, 0.0625,
    0.015625 };

  static const real_T outSize[3] = { 120.0, 214.0, 3.0 };

  boolean_T conn[25];
  static const real_T start[3] = { 2.0, 2.0, 0.0 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  b_emxInit_real_T(&a, 3, true);
  e_padarray(varargin_1, a);
  eml_li_find(tmp_data, tmp_size);
  loop_ub = tmp_size[0];
  for (i26 = 0; i26 < loop_ub; i26++) {
    nonzero_h_data[i26] = dv15[tmp_data[i26] - 1];
  }

  densityFlag = false;
  if ((real_T)tmp_size[0] / 25.0 > 0.05) {
    densityFlag = true;
  }

  tooBig = true;
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    tooBig = false;
  }

  if (densityFlag && (!tooBig)) {
    densityFlag = true;
  } else {
    densityFlag = false;
  }

  if (densityFlag) {
    for (i26 = 0; i26 < 3; i26++) {
      padSize[i26] = a->size[i26];
    }

    for (i26 = 0; i26 < 2; i26++) {
      connDims[i26] = 5.0;
    }

    ippfilter_real64(&a->data[0], b, outSize, 3.0, padSize, h, connDims, true,
                     false);
  } else {
    for (i26 = 0; i26 < 3; i26++) {
      padSize[i26] = a->size[i26];
    }

    for (i26 = 0; i26 < 25; i26++) {
      conn[i26] = true;
    }

    for (i26 = 0; i26 < 2; i26++) {
      connDims[i26] = 5.0;
    }

    imfilter_real64(&a->data[0], b, 3.0, outSize, 3.0, padSize, &nonzero_h_data
                    [0], (real_T)tmp_size[0], conn, 2.0, connDims, start, 3.0,
                    true, true);
  }

  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void f_padarray(const boolean_T varargin_1[25680], boolean_T b_data[],
  int32_T b_size[2])
{
  uint8_T sizeB[2];
  uint8_T idxA[436];
  int16_T sizeIdxDir[2];
  emxArray_uint32_T *dimNums;
  emxArray_real_T *y;
  int32_T k;
  int32_T ndbl;
  int32_T apnd;
  int32_T cdiff;
  int32_T nm1d2;
  real_T y_data[431];
  int32_T y_size[2];
  int32_T tmp_size[2];
  real_T tmp_data[431];
  uint32_T idxDir_data[431];
  int16_T b_tmp_data[218];
  int32_T b_idxDir_data[431];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_uint32_T(&dimNums, 2, true);
  emxInit_real_T(&y, 2, true);
  for (k = 0; k < 2; k++) {
    ndbl = (int32_T)muDoubleScalarFloor(((120.0 + 94.0 * (real_T)k) - 1.0) + 0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - 94 * k) - 119;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (94.0 * (real_T)k +
         120.0)) {
      ndbl++;
      apnd = 120 + 94 * k;
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }

    nm1d2 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = ndbl;
    emxEnsureCapacity((emxArray__common *)y, nm1d2, (int32_T)sizeof(real_T));
    y->data[0] = 1.0;
    y->data[ndbl - 1] = apnd;
    nm1d2 = ndbl - 1;
    nm1d2 = (int32_T)((uint32_T)nm1d2 >> 1);
    for (cdiff = 1; cdiff < nm1d2; cdiff++) {
      y->data[cdiff] = 1.0 + (real_T)cdiff;
      y->data[(ndbl - cdiff) - 1] = apnd - cdiff;
    }

    if (nm1d2 << 1 == ndbl - 1) {
      y->data[nm1d2] = (1.0 + (real_T)apnd) / 2.0;
    } else {
      y->data[nm1d2] = 1.0 + (real_T)nm1d2;
      y->data[nm1d2 + 1] = apnd - nm1d2;
    }

    nm1d2 = dimNums->size[0] * dimNums->size[1];
    dimNums->size[0] = 1;
    dimNums->size[1] = y->size[1];
    emxEnsureCapacity((emxArray__common *)dimNums, nm1d2, (int32_T)sizeof
                      (uint32_T));
    cdiff = y->size[0] * y->size[1];
    for (nm1d2 = 0; nm1d2 < cdiff; nm1d2++) {
      dimNums->data[nm1d2] = (uint32_T)muDoubleScalarRound(y->data[nm1d2]);
    }

    ndbl = (int32_T)muDoubleScalarFloor(((((120.0 + 94.0 * (real_T)k) + 2.0) -
      1.0) - -2.0) + 0.5);
    apnd = ndbl - 2;
    cdiff = (ndbl - 94 * k) - 123;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (94.0 * (real_T)k +
         121.0)) {
      ndbl++;
      apnd = 121 + 94 * k;
    } else if (cdiff > 0) {
      apnd = ndbl - 3;
    } else {
      ndbl++;
    }

    y_size[0] = 1;
    y_size[1] = ndbl;
    y_data[0] = -2.0;
    y_data[ndbl - 1] = apnd;
    nm1d2 = ndbl - 1;
    nm1d2 = (int32_T)((uint32_T)nm1d2 >> 1);
    for (cdiff = 1; cdiff < nm1d2; cdiff++) {
      y_data[cdiff] = -2.0 + (real_T)cdiff;
      y_data[(ndbl - cdiff) - 1] = apnd - cdiff;
    }

    if (nm1d2 << 1 == ndbl - 1) {
      y_data[nm1d2] = (-2.0 + (real_T)apnd) / 2.0;
    } else {
      y_data[nm1d2] = -2.0 + (real_T)nm1d2;
      y_data[nm1d2 + 1] = apnd - nm1d2;
    }

    b_mod(y_data, y_size, 120.0 + 94.0 * (real_T)k, tmp_data, tmp_size);
    cdiff = tmp_size[0] * tmp_size[1];
    for (nm1d2 = 0; nm1d2 < cdiff; nm1d2++) {
      idxDir_data[nm1d2] = dimNums->data[(int32_T)(tmp_data[nm1d2] + 1.0) - 1];
    }

    sizeIdxDir[k] = (int16_T)tmp_size[1];
    cdiff = sizeIdxDir[k];
    for (nm1d2 = 0; nm1d2 < cdiff; nm1d2++) {
      b_tmp_data[nm1d2] = (int16_T)nm1d2;
    }

    cdiff = tmp_size[1];
    for (nm1d2 = 0; nm1d2 < cdiff; nm1d2++) {
      b_idxDir_data[nm1d2] = (int32_T)idxDir_data[nm1d2];
    }

    cdiff = sizeIdxDir[k];
    for (nm1d2 = 0; nm1d2 < cdiff; nm1d2++) {
      idxA[b_tmp_data[nm1d2] + 218 * k] = (uint8_T)b_idxDir_data[nm1d2];
    }

    sizeB[k] = (uint8_T)(124 + 94 * k);
  }

  emxFree_real_T(&y);
  emxFree_uint32_T(&dimNums);
  b_size[0] = sizeB[0];
  b_size[1] = sizeB[1];
  for (cdiff = 0; cdiff < sizeB[1]; cdiff++) {
    for (nm1d2 = 0; nm1d2 < b_size[0]; nm1d2++) {
      b_data[nm1d2 + b_size[0] * cdiff] = varargin_1[(idxA[nm1d2] + 120 * (idxA
        [218 + cdiff] - 1)) - 1];
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void faceSwapLive_once(void)
{
  faceDetector_not_empty = false;
}

static const mxArray *feval(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m6;
  pArray = b;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m6, 1, &pArray, "feval",
    true, location);
}

static void fitgeotrans(const real_T fixedPoints_data[], const int32_T
  fixedPoints_size[2], projective2d *tform)
{
  real_T T[9];
  int32_T xy_size[2];
  real_T xy_data[20];
  int32_T rtemp;
  int32_T r1;
  real_T x_data[10];
  real_T y_data[10];
  real_T b_y_data[10];
  int32_T r2;
  real_T b_x_data[10];
  real_T c_y_data[10];
  real_T X[80];
  static const real_T dv5[5] = { -0.0072520911700345216, 1.1168220401852607,
    -1.2401075900758414, 1.0171057865972908, -0.88656814553667607 };

  static const real_T dv6[5] = { -0.23387994023360154, -1.095065766675158,
    -1.095065766675158, 1.1712127239605172, 1.2527987496234017 };

  real_T U[8];
  real_T absxk;
  int32_T exponent;
  real_T Tvec[9];
  static const real_T dv7[10] = { 0.0072520911700345216, -1.1168220401852607,
    1.2401075900758414, -1.0171057865972908, 0.88656814553667607,
    0.23387994023360154, 1.095065766675158, 1.095065766675158,
    -1.1712127239605172, -1.2527987496234017 };

  real_T Tinv[9];
  real_T y[9];
  static const real_T b[9] = { 18.3855015342706, 0.0, 53.86666666666666, 0.0,
    18.3855015342706, 60.7, 0.0, 0.0, 1.0 };

  int32_T r3;
  real_T a21;
  normalizeControlPoints(fixedPoints_data, fixedPoints_size, xy_data, xy_size, T);
  rtemp = xy_size[0];
  for (r1 = 0; r1 < rtemp; r1++) {
    x_data[r1] = xy_data[r1];
  }

  rtemp = xy_size[0];
  for (r1 = 0; r1 < rtemp; r1++) {
    y_data[r1] = xy_data[r1 + xy_size[0]];
  }

  r1 = xy_size[0];
  rtemp = xy_size[0];
  for (r2 = 0; r2 < rtemp; r2++) {
    b_y_data[r2] = y_data[r2];
  }

  rtemp = xy_size[0];
  for (r2 = 0; r2 < rtemp; r2++) {
    b_x_data[r2] = x_data[r2];
  }

  rtemp = xy_size[0];
  for (r2 = 0; r2 < rtemp; r2++) {
    c_y_data[r2] = y_data[r2];
  }

  rtemp = xy_size[0];
  for (r2 = 0; r2 < rtemp; r2++) {
    X[r2] = x_data[r2];
  }

  for (r2 = 0; r2 < 5; r2++) {
    X[10 + r2] = b_y_data[r2];
    X[20 + r2] = 1.0;
    X[30 + r2] = 0.0;
    X[40 + r2] = 0.0;
    X[50 + r2] = 0.0;
    X[60 + r2] = dv5[r2] * x_data[r2];
    X[70 + r2] = dv5[r2] * y_data[r2];
  }

  rtemp = xy_size[0];
  for (r2 = 0; r2 < rtemp; r2++) {
    X[r2 + r1] = 0.0;
  }

  for (r2 = 0; r2 < 5; r2++) {
    X[10 + (r2 + r1)] = 0.0;
  }

  for (r2 = 0; r2 < 5; r2++) {
    X[20 + (r2 + r1)] = 0.0;
  }

  for (r2 = 0; r2 < 5; r2++) {
    X[30 + (r2 + r1)] = b_x_data[r2];
  }

  for (r2 = 0; r2 < 5; r2++) {
    X[40 + (r2 + r1)] = c_y_data[r2];
  }

  for (r2 = 0; r2 < 5; r2++) {
    X[50 + (r2 + r1)] = 1.0;
  }

  for (r2 = 0; r2 < 5; r2++) {
    X[60 + (r2 + r1)] = dv6[r2] * x_data[r2];
  }

  for (r2 = 0; r2 < 5; r2++) {
    X[70 + (r2 + r1)] = dv6[r2] * y_data[r2];
  }

  eml_xgesvd(X, U);
  absxk = muDoubleScalarAbs(U[0]);
  if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk)) && (!(absxk
        <= 2.2250738585072014E-308))) {
    frexp(absxk, &exponent);
  }

  mldivide(X, dv7, U);
  memcpy(&Tvec[0], &U[0], sizeof(real_T) << 3);
  Tvec[8] = 1.0;
  memcpy(&Tinv[0], &Tvec[0], 9U * sizeof(real_T));
  for (r1 = 0; r1 < 3; r1++) {
    for (r2 = 0; r2 < 3; r2++) {
      y[r1 + 3 * r2] = 0.0;
      for (rtemp = 0; rtemp < 3; rtemp++) {
        y[r1 + 3 * r2] += Tinv[r1 + 3 * rtemp] * b[rtemp + 3 * r2];
      }
    }
  }

  r1 = 0;
  r2 = 1;
  r3 = 2;
  absxk = muDoubleScalarAbs(T[0]);
  a21 = muDoubleScalarAbs(T[1]);
  if (a21 > absxk) {
    absxk = a21;
    r1 = 1;
    r2 = 0;
  }

  if (muDoubleScalarAbs(T[2]) > absxk) {
    r1 = 2;
    r2 = 1;
    r3 = 0;
  }

  T[r2] /= T[r1];
  T[r3] /= T[r1];
  T[3 + r2] -= T[r2] * T[3 + r1];
  T[3 + r3] -= T[r3] * T[3 + r1];
  T[6 + r2] -= T[r2] * T[6 + r1];
  T[6 + r3] -= T[r3] * T[6 + r1];
  if (muDoubleScalarAbs(T[3 + r3]) > muDoubleScalarAbs(T[3 + r2])) {
    rtemp = r2;
    r2 = r3;
    r3 = rtemp;
  }

  T[3 + r3] /= T[3 + r2];
  T[6 + r3] -= T[3 + r3] * T[6 + r2];
  for (exponent = 0; exponent < 3; exponent++) {
    Tinv[3 * exponent] = y[r1 + 3 * exponent];
    Tinv[1 + 3 * exponent] = y[r2 + 3 * exponent] - Tinv[3 * exponent] * T[r2];
    Tinv[2 + 3 * exponent] = (y[r3 + 3 * exponent] - Tinv[3 * exponent] * T[r3])
      - Tinv[1 + 3 * exponent] * T[3 + r3];
    Tinv[2 + 3 * exponent] /= T[6 + r3];
    Tinv[3 * exponent] -= Tinv[2 + 3 * exponent] * T[6 + r1];
    Tinv[1 + 3 * exponent] -= Tinv[2 + 3 * exponent] * T[6 + r2];
    Tinv[1 + 3 * exponent] /= T[3 + r2];
    Tinv[3 * exponent] -= Tinv[1 + 3 * exponent] * T[3 + r1];
    Tinv[3 * exponent] /= T[r1];
  }

  inv(Tinv, T);
  absxk = T[8];
  for (r1 = 0; r1 < 9; r1++) {
    T[r1] /= absxk;
  }

  projective2d_set_T(tform, T);
  tform->Dimensionality = 2.0;
}

static vision_CascadeObjectDetector_14 *g_CascadeObjectDetector_Cascade
  (vision_CascadeObjectDetector_14 *obj)
{
  vision_CascadeObjectDetector_14 *b_obj;
  vision_CascadeObjectDetector_14 *c_obj;
  void * ptrObj;
  const mxArray *y;
  static const int32_T iv14[2] = { 1, 10 };

  const mxArray *m4;
  char_T cv8[10];
  int32_T i;
  static const char_T cv9[10] = { 'i', 's', 'd', 'e', 'p', 'l', 'o', 'y', 'e',
    'd' };

  char_T ClassificationModel[116];
  static const char_T b_ClassificationModel[116] = { '/', 'A', 'p', 'p', 'l',
    'i', 'c', 'a', 't', 'i', 'o', 'n', 's', '/', 'M', 'A', 'T', 'L', 'A', 'B',
    '_', 'R', '2', '0', '1', '4', 'b', '.', 'a', 'p', 'p', '/', 't', 'o', 'o',
    'l', 'b', 'o', 'x', '/', 'v', 'i', 's', 'i', 'o', 'n', '/', 'v', 'i', 's',
    'i', 'o', 'n', 'u', 't', 'i', 'l', 'i', 't', 'i', 'e', 's', '/', 'c', 'l',
    'a', 's', 's', 'i', 'f', 'i', 'e', 'r', 'd', 'a', 't', 'a', '/', 'c', 'a',
    's', 'c', 'a', 'd', 'e', '/', 'h', 'a', 'a', 'r', '/', 'h', 'a', 'a', 'r',
    'c', 'a', 's', 'c', 'a', 'd', 'e', '_', 'm', 'c', 's', '_', 'n', 'o', 's',
    'e', '.', 'x', 'm', 'l', '\x00' };

  const mxArray *b_y;
  static const int32_T iv15[2] = { 1, 10 };

  b_obj = obj;
  b_obj->ScaleFactor = 1.1;
  b_obj->MergeThreshold = 4.0;
  c_obj = b_obj;
  c_obj->matlabCodegenIsDeleted = false;
  c_obj->isInitialized = false;
  c_obj->isReleased = false;
  c_obj->matlabCodegenIsDeleted = false;
  ptrObj = NULL;
  cascadeClassifier_construct(&ptrObj);
  b_obj->pCascadeClassifier = ptrObj;
  c_obj = b_obj;
  y = NULL;
  m4 = emlrtCreateCharArray(2, iv14);
  for (i = 0; i < 10; i++) {
    cv8[i] = cv9[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 10, m4, cv8);
  emlrtAssign(&y, m4);
  emlrt_marshallIn(feval(y, &emlrtMCI), "feval");
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 116U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  c_obj = b_obj;
  b_y = NULL;
  m4 = emlrtCreateCharArray(2, iv15);
  for (i = 0; i < 10; i++) {
    cv8[i] = cv9[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 10, m4, cv8);
  emlrtAssign(&b_y, m4);
  emlrt_marshallIn(feval(b_y, &emlrtMCI), "feval");
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 116U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  return b_obj;
}

static boolean_T (*g_emlrt_marshallIn(const mxArray *swapMask, const char_T
  *identifier))[11025]
{
  boolean_T (*y)[11025];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = h_emlrt_marshallIn(emlrtAlias(swapMask), &thisId);
  emlrtDestroyArray(&swapMask);
  return y;
}
  static void g_imfilter(faceSwapLiveStackData *SD, const boolean_T varargin_1
  [25680], boolean_T b[25680])
{
  int32_T a_size[2];
  int32_T tmp_size[1];
  int32_T tmp_data[25];
  int32_T loop_ub;
  int32_T i27;
  static const real_T dv16[25] = { 0.00390625, 0.015625, 0.0234375, 0.015625,
    0.00390625, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625, 0.0234375, 0.09375,
    0.140625, 0.09375, 0.0234375, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.00390625, 0.015625, 0.0234375, 0.015625, 0.00390625 };

  real_T nonzero_h_data[25];
  real_T outSize[2];
  real_T padSize[2];
  boolean_T conn[25];
  real_T connDims[2];
  real_T start[2];
  f_padarray(varargin_1, SD->u1.f1.a_data, a_size);
  eml_li_find(tmp_data, tmp_size);
  loop_ub = tmp_size[0];
  for (i27 = 0; i27 < loop_ub; i27++) {
    nonzero_h_data[i27] = dv16[tmp_data[i27] - 1];
  }

  for (i27 = 0; i27 < 2; i27++) {
    outSize[i27] = 120.0 + 94.0 * (real_T)i27;
    padSize[i27] = a_size[i27];
  }

  for (i27 = 0; i27 < 25; i27++) {
    conn[i27] = true;
  }

  for (i27 = 0; i27 < 2; i27++) {
    connDims[i27] = 5.0;
    start[i27] = 2.0;
  }

  imfilter_boolean(&SD->u1.f1.a_data[0], b, 2.0, outSize, 2.0, padSize,
                   &nonzero_h_data[0], (real_T)tmp_size[0], conn, 2.0, connDims,
                   start, 2.0, true, true);
}

static void g_padarray(const real_T varargin_1[19260], emxArray_real_T *b)
{
  int8_T sizeB[3];
  int32_T idxA[333];
  int16_T sizeIdxDir[3];
  emxArray_uint32_T *dimNums;
  emxArray_real_T *y;
  int32_T k;
  static const int8_T iv21[3] = { 60, 107, 3 };

  int32_T ndbl;
  int32_T apnd;
  int32_T cdiff;
  int32_T i30;
  int32_T nm1d2;
  int32_T i;
  static const int8_T iv22[3] = { 2, 2, 0 };

  real_T y_data[431];
  int32_T y_size[2];
  int32_T tmp_size[2];
  real_T tmp_data[431];
  uint32_T idxDir_data[431];
  int16_T b_tmp_data[111];
  int32_T b_idxDir_data[431];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_uint32_T(&dimNums, 2, true);
  emxInit_real_T(&y, 2, true);
  for (k = 0; k < 3; k++) {
    ndbl = (int32_T)muDoubleScalarFloor(((real_T)iv21[k] - 1.0) + 0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - iv21[k]) + 1;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)iv21[k]) {
      ndbl++;
      apnd = iv21[k];
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }

    i30 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = ndbl;
    emxEnsureCapacity((emxArray__common *)y, i30, (int32_T)sizeof(real_T));
    y->data[0] = 1.0;
    y->data[ndbl - 1] = apnd;
    i30 = ndbl - 1;
    nm1d2 = (int32_T)((uint32_T)i30 >> 1);
    for (i = 1; i < nm1d2; i++) {
      y->data[i] = 1.0 + (real_T)i;
      y->data[(ndbl - i) - 1] = apnd - i;
    }

    if (nm1d2 << 1 == ndbl - 1) {
      y->data[nm1d2] = (1.0 + (real_T)apnd) / 2.0;
    } else {
      y->data[nm1d2] = 1.0 + (real_T)nm1d2;
      y->data[nm1d2 + 1] = apnd - nm1d2;
    }

    i30 = dimNums->size[0] * dimNums->size[1];
    dimNums->size[0] = 1;
    dimNums->size[1] = y->size[1];
    emxEnsureCapacity((emxArray__common *)dimNums, i30, (int32_T)sizeof(uint32_T));
    cdiff = y->size[0] * y->size[1];
    for (i30 = 0; i30 < cdiff; i30++) {
      dimNums->data[i30] = (uint32_T)muDoubleScalarRound(y->data[i30]);
    }

    i = (iv21[k] + iv22[k]) - 1;
    ndbl = (int32_T)muDoubleScalarFloor((real_T)(i + iv22[k]) + 0.5);
    apnd = ndbl - iv22[k];
    cdiff = apnd - i;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)i) {
      ndbl++;
      apnd = i;
    } else if (cdiff > 0) {
      apnd = (ndbl - iv22[k]) - 1;
    } else {
      ndbl++;
    }

    y_size[0] = 1;
    y_size[1] = ndbl;
    y_data[0] = -(real_T)iv22[k];
    y_data[ndbl - 1] = apnd;
    i30 = ndbl - 1;
    nm1d2 = (int32_T)((uint32_T)i30 >> 1);
    for (i = 1; i < nm1d2; i++) {
      y_data[i] = i - iv22[k];
      y_data[(ndbl - i) - 1] = apnd - i;
    }

    if (nm1d2 << 1 == ndbl - 1) {
      y_data[nm1d2] = (real_T)(apnd - iv22[k]) / 2.0;
    } else {
      y_data[nm1d2] = nm1d2 - iv22[k];
      y_data[nm1d2 + 1] = apnd - nm1d2;
    }

    b_mod(y_data, y_size, iv21[k], tmp_data, tmp_size);
    cdiff = tmp_size[0] * tmp_size[1];
    for (i30 = 0; i30 < cdiff; i30++) {
      idxDir_data[i30] = dimNums->data[(int32_T)(tmp_data[i30] + 1.0) - 1];
    }

    sizeIdxDir[k] = (int16_T)tmp_size[1];
    cdiff = sizeIdxDir[k];
    for (i30 = 0; i30 < cdiff; i30++) {
      b_tmp_data[i30] = (int16_T)i30;
    }

    cdiff = tmp_size[1];
    for (i30 = 0; i30 < cdiff; i30++) {
      b_idxDir_data[i30] = (int32_T)idxDir_data[i30];
    }

    cdiff = sizeIdxDir[k];
    for (i30 = 0; i30 < cdiff; i30++) {
      idxA[b_tmp_data[i30] + 111 * k] = b_idxDir_data[i30];
    }

    sizeB[k] = (int8_T)(iv21[k] + (iv22[k] << 1));
  }

  emxFree_real_T(&y);
  emxFree_uint32_T(&dimNums);
  i30 = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = sizeB[0];
  b->size[1] = sizeB[1];
  b->size[2] = sizeB[2];
  emxEnsureCapacity((emxArray__common *)b, i30, (int32_T)sizeof(real_T));
  for (k = 0; k < sizeB[2]; k++) {
    i30 = b->size[1];
    for (cdiff = 0; cdiff < i30; cdiff++) {
      nm1d2 = b->size[0];
      for (i = 0; i < nm1d2; i++) {
        b->data[(i + b->size[0] * cdiff) + b->size[0] * b->size[1] * k] =
          varargin_1[((idxA[i] + 60 * (idxA[111 + cdiff] - 1)) + 6420 * (idxA
          [222 + k] - 1)) - 1];
      }
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static boolean_T (*h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId))[11025]
{
  boolean_T (*y)[11025];
  y = l_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static void h_imfilter(faceSwapLiveStackData *SD, const boolean_T varargin_1
  [25680], boolean_T b[25680])
{
  int32_T a_size[2];
  int32_T tmp_size[1];
  int32_T tmp_data[25];
  int32_T loop_ub;
  int32_T i28;
  static const real_T dv17[25] = { 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.09375, 0.375, 0.5625, 0.375, 0.09375,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.015625, 0.0625, 0.09375, 0.0625,
    0.015625 };

  real_T nonzero_h_data[25];
  real_T outSize[2];
  real_T padSize[2];
  boolean_T conn[25];
  real_T connDims[2];
  real_T start[2];
  f_padarray(varargin_1, SD->u1.f0.a_data, a_size);
  eml_li_find(tmp_data, tmp_size);
  loop_ub = tmp_size[0];
  for (i28 = 0; i28 < loop_ub; i28++) {
    nonzero_h_data[i28] = dv17[tmp_data[i28] - 1];
  }

  for (i28 = 0; i28 < 2; i28++) {
    outSize[i28] = 120.0 + 94.0 * (real_T)i28;
    padSize[i28] = a_size[i28];
  }

  for (i28 = 0; i28 < 25; i28++) {
    conn[i28] = true;
  }

  for (i28 = 0; i28 < 2; i28++) {
    connDims[i28] = 5.0;
    start[i28] = 2.0;
  }

  imfilter_boolean(&SD->u1.f0.a_data[0], b, 2.0, outSize, 2.0, padSize,
                   &nonzero_h_data[0], (real_T)tmp_size[0], conn, 2.0, connDims,
                   start, 2.0, true, true);
}

static void h_padarray(const boolean_T varargin_1[6420], boolean_T b_data[],
  int32_T b_size[2])
{
  int8_T sizeB[2];
  int8_T idxA[222];
  int16_T sizeIdxDir[2];
  emxArray_uint32_T *dimNums;
  emxArray_real_T *y;
  int32_T k;
  int32_T ndbl;
  int32_T apnd;
  int32_T cdiff;
  int32_T nm1d2;
  real_T y_data[431];
  int32_T y_size[2];
  int32_T tmp_size[2];
  real_T tmp_data[431];
  uint32_T idxDir_data[431];
  int16_T b_tmp_data[111];
  int32_T b_idxDir_data[431];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_uint32_T(&dimNums, 2, true);
  emxInit_real_T(&y, 2, true);
  for (k = 0; k < 2; k++) {
    ndbl = (int32_T)muDoubleScalarFloor(((60.0 + 47.0 * (real_T)k) - 1.0) + 0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - 47 * k) - 59;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (47.0 * (real_T)k +
         60.0)) {
      ndbl++;
      apnd = 60 + 47 * k;
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }

    nm1d2 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = ndbl;
    emxEnsureCapacity((emxArray__common *)y, nm1d2, (int32_T)sizeof(real_T));
    y->data[0] = 1.0;
    y->data[ndbl - 1] = apnd;
    nm1d2 = ndbl - 1;
    nm1d2 = (int32_T)((uint32_T)nm1d2 >> 1);
    for (cdiff = 1; cdiff < nm1d2; cdiff++) {
      y->data[cdiff] = 1.0 + (real_T)cdiff;
      y->data[(ndbl - cdiff) - 1] = apnd - cdiff;
    }

    if (nm1d2 << 1 == ndbl - 1) {
      y->data[nm1d2] = (1.0 + (real_T)apnd) / 2.0;
    } else {
      y->data[nm1d2] = 1.0 + (real_T)nm1d2;
      y->data[nm1d2 + 1] = apnd - nm1d2;
    }

    nm1d2 = dimNums->size[0] * dimNums->size[1];
    dimNums->size[0] = 1;
    dimNums->size[1] = y->size[1];
    emxEnsureCapacity((emxArray__common *)dimNums, nm1d2, (int32_T)sizeof
                      (uint32_T));
    cdiff = y->size[0] * y->size[1];
    for (nm1d2 = 0; nm1d2 < cdiff; nm1d2++) {
      dimNums->data[nm1d2] = (uint32_T)muDoubleScalarRound(y->data[nm1d2]);
    }

    ndbl = (int32_T)muDoubleScalarFloor(((((60.0 + 47.0 * (real_T)k) + 2.0) -
      1.0) - -2.0) + 0.5);
    apnd = ndbl - 2;
    cdiff = (ndbl - 47 * k) - 63;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (47.0 * (real_T)k +
         61.0)) {
      ndbl++;
      apnd = 61 + 47 * k;
    } else if (cdiff > 0) {
      apnd = ndbl - 3;
    } else {
      ndbl++;
    }

    y_size[0] = 1;
    y_size[1] = ndbl;
    y_data[0] = -2.0;
    y_data[ndbl - 1] = apnd;
    nm1d2 = ndbl - 1;
    nm1d2 = (int32_T)((uint32_T)nm1d2 >> 1);
    for (cdiff = 1; cdiff < nm1d2; cdiff++) {
      y_data[cdiff] = -2.0 + (real_T)cdiff;
      y_data[(ndbl - cdiff) - 1] = apnd - cdiff;
    }

    if (nm1d2 << 1 == ndbl - 1) {
      y_data[nm1d2] = (-2.0 + (real_T)apnd) / 2.0;
    } else {
      y_data[nm1d2] = -2.0 + (real_T)nm1d2;
      y_data[nm1d2 + 1] = apnd - nm1d2;
    }

    b_mod(y_data, y_size, 60.0 + 47.0 * (real_T)k, tmp_data, tmp_size);
    cdiff = tmp_size[0] * tmp_size[1];
    for (nm1d2 = 0; nm1d2 < cdiff; nm1d2++) {
      idxDir_data[nm1d2] = dimNums->data[(int32_T)(tmp_data[nm1d2] + 1.0) - 1];
    }

    sizeIdxDir[k] = (int16_T)tmp_size[1];
    cdiff = sizeIdxDir[k];
    for (nm1d2 = 0; nm1d2 < cdiff; nm1d2++) {
      b_tmp_data[nm1d2] = (int16_T)nm1d2;
    }

    cdiff = tmp_size[1];
    for (nm1d2 = 0; nm1d2 < cdiff; nm1d2++) {
      b_idxDir_data[nm1d2] = (int32_T)idxDir_data[nm1d2];
    }

    cdiff = sizeIdxDir[k];
    for (nm1d2 = 0; nm1d2 < cdiff; nm1d2++) {
      idxA[b_tmp_data[nm1d2] + 111 * k] = (int8_T)b_idxDir_data[nm1d2];
    }

    sizeB[k] = (int8_T)(64 + 47 * k);
  }

  emxFree_real_T(&y);
  emxFree_uint32_T(&dimNums);
  b_size[0] = sizeB[0];
  b_size[1] = sizeB[1];
  for (cdiff = 0; cdiff < sizeB[1]; cdiff++) {
    for (nm1d2 = 0; nm1d2 < b_size[0]; nm1d2++) {
      b_data[nm1d2 + b_size[0] * cdiff] = varargin_1[(idxA[nm1d2] + 60 * (idxA
        [111 + cdiff] - 1)) - 1];
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static boolean_T i_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  boolean_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "logical", false, 0U,
    0);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void i_imfilter(const real_T varargin_1[19260], real_T b[19260])
{
  emxArray_real_T *a;
  int32_T tmp_size[1];
  int32_T tmp_data[25];
  int32_T loop_ub;
  int32_T i29;
  static const real_T dv18[25] = { 0.00390625, 0.015625, 0.0234375, 0.015625,
    0.00390625, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625, 0.0234375, 0.09375,
    0.140625, 0.09375, 0.0234375, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.00390625, 0.015625, 0.0234375, 0.015625, 0.00390625 };

  real_T nonzero_h_data[25];
  boolean_T densityFlag;
  boolean_T tooBig;
  real_T padSize[3];
  real_T connDims[2];
  static const real_T h[25] = { 0.00390625, 0.015625, 0.0234375, 0.015625,
    0.00390625, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625, 0.0234375, 0.09375,
    0.140625, 0.09375, 0.0234375, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.00390625, 0.015625, 0.0234375, 0.015625, 0.00390625 };

  static const real_T outSize[3] = { 60.0, 107.0, 3.0 };

  boolean_T conn[25];
  static const real_T start[3] = { 2.0, 2.0, 0.0 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  b_emxInit_real_T(&a, 3, true);
  g_padarray(varargin_1, a);
  eml_li_find(tmp_data, tmp_size);
  loop_ub = tmp_size[0];
  for (i29 = 0; i29 < loop_ub; i29++) {
    nonzero_h_data[i29] = dv18[tmp_data[i29] - 1];
  }

  densityFlag = false;
  if ((real_T)tmp_size[0] / 25.0 > 0.05) {
    densityFlag = true;
  }

  tooBig = true;
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    tooBig = false;
  }

  if (densityFlag && (!tooBig)) {
    densityFlag = true;
  } else {
    densityFlag = false;
  }

  if (densityFlag) {
    for (i29 = 0; i29 < 3; i29++) {
      padSize[i29] = a->size[i29];
    }

    for (i29 = 0; i29 < 2; i29++) {
      connDims[i29] = 5.0;
    }

    ippfilter_real64(&a->data[0], b, outSize, 3.0, padSize, h, connDims, true,
                     false);
  } else {
    for (i29 = 0; i29 < 3; i29++) {
      padSize[i29] = a->size[i29];
    }

    for (i29 = 0; i29 < 25; i29++) {
      conn[i29] = true;
    }

    for (i29 = 0; i29 < 2; i29++) {
      connDims[i29] = 5.0;
    }

    imfilter_real64(&a->data[0], b, 3.0, outSize, 3.0, padSize, &nonzero_h_data
                    [0], (real_T)tmp_size[0], conn, 2.0, connDims, start, 3.0,
                    true, true);
  }

  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void i_padarray(const real_T varargin_1[4860], emxArray_real_T *b)
{
  int8_T sizeB[3];
  int32_T idxA[174];
  int16_T sizeIdxDir[3];
  emxArray_uint32_T *dimNums;
  emxArray_real_T *y;
  int32_T k;
  static const int8_T iv23[3] = { 30, 54, 3 };

  int32_T ndbl;
  int32_T apnd;
  int32_T cdiff;
  int32_T i35;
  int32_T nm1d2;
  int32_T i;
  static const int8_T iv24[3] = { 2, 2, 0 };

  real_T y_data[431];
  int32_T y_size[2];
  int32_T tmp_size[2];
  real_T tmp_data[431];
  uint32_T idxDir_data[431];
  int16_T b_tmp_data[58];
  int32_T b_idxDir_data[431];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_uint32_T(&dimNums, 2, true);
  emxInit_real_T(&y, 2, true);
  for (k = 0; k < 3; k++) {
    ndbl = (int32_T)muDoubleScalarFloor(((real_T)iv23[k] - 1.0) + 0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - iv23[k]) + 1;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)iv23[k]) {
      ndbl++;
      apnd = iv23[k];
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }

    i35 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = ndbl;
    emxEnsureCapacity((emxArray__common *)y, i35, (int32_T)sizeof(real_T));
    y->data[0] = 1.0;
    y->data[ndbl - 1] = apnd;
    i35 = ndbl - 1;
    nm1d2 = (int32_T)((uint32_T)i35 >> 1);
    for (i = 1; i < nm1d2; i++) {
      y->data[i] = 1.0 + (real_T)i;
      y->data[(ndbl - i) - 1] = apnd - i;
    }

    if (nm1d2 << 1 == ndbl - 1) {
      y->data[nm1d2] = (1.0 + (real_T)apnd) / 2.0;
    } else {
      y->data[nm1d2] = 1.0 + (real_T)nm1d2;
      y->data[nm1d2 + 1] = apnd - nm1d2;
    }

    i35 = dimNums->size[0] * dimNums->size[1];
    dimNums->size[0] = 1;
    dimNums->size[1] = y->size[1];
    emxEnsureCapacity((emxArray__common *)dimNums, i35, (int32_T)sizeof(uint32_T));
    cdiff = y->size[0] * y->size[1];
    for (i35 = 0; i35 < cdiff; i35++) {
      dimNums->data[i35] = (uint32_T)muDoubleScalarRound(y->data[i35]);
    }

    i = (iv23[k] + iv24[k]) - 1;
    ndbl = (int32_T)muDoubleScalarFloor((real_T)(i + iv24[k]) + 0.5);
    apnd = ndbl - iv24[k];
    cdiff = apnd - i;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)i) {
      ndbl++;
      apnd = i;
    } else if (cdiff > 0) {
      apnd = (ndbl - iv24[k]) - 1;
    } else {
      ndbl++;
    }

    y_size[0] = 1;
    y_size[1] = ndbl;
    y_data[0] = -(real_T)iv24[k];
    y_data[ndbl - 1] = apnd;
    i35 = ndbl - 1;
    nm1d2 = (int32_T)((uint32_T)i35 >> 1);
    for (i = 1; i < nm1d2; i++) {
      y_data[i] = i - iv24[k];
      y_data[(ndbl - i) - 1] = apnd - i;
    }

    if (nm1d2 << 1 == ndbl - 1) {
      y_data[nm1d2] = (real_T)(apnd - iv24[k]) / 2.0;
    } else {
      y_data[nm1d2] = nm1d2 - iv24[k];
      y_data[nm1d2 + 1] = apnd - nm1d2;
    }

    b_mod(y_data, y_size, iv23[k], tmp_data, tmp_size);
    cdiff = tmp_size[0] * tmp_size[1];
    for (i35 = 0; i35 < cdiff; i35++) {
      idxDir_data[i35] = dimNums->data[(int32_T)(tmp_data[i35] + 1.0) - 1];
    }

    sizeIdxDir[k] = (int16_T)tmp_size[1];
    cdiff = sizeIdxDir[k];
    for (i35 = 0; i35 < cdiff; i35++) {
      b_tmp_data[i35] = (int16_T)i35;
    }

    cdiff = tmp_size[1];
    for (i35 = 0; i35 < cdiff; i35++) {
      b_idxDir_data[i35] = (int32_T)idxDir_data[i35];
    }

    cdiff = sizeIdxDir[k];
    for (i35 = 0; i35 < cdiff; i35++) {
      idxA[b_tmp_data[i35] + 58 * k] = b_idxDir_data[i35];
    }

    sizeB[k] = (int8_T)(iv23[k] + (iv24[k] << 1));
  }

  emxFree_real_T(&y);
  emxFree_uint32_T(&dimNums);
  i35 = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = sizeB[0];
  b->size[1] = sizeB[1];
  b->size[2] = sizeB[2];
  emxEnsureCapacity((emxArray__common *)b, i35, (int32_T)sizeof(real_T));
  for (k = 0; k < sizeB[2]; k++) {
    i35 = b->size[1];
    for (cdiff = 0; cdiff < i35; cdiff++) {
      nm1d2 = b->size[0];
      for (i = 0; i < nm1d2; i++) {
        b->data[(i + b->size[0] * cdiff) + b->size[0] * b->size[1] * k] =
          varargin_1[((idxA[i] + 30 * (idxA[58 + cdiff] - 1)) + 1620 * (idxA[116
          + k] - 1)) - 1];
      }
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void imfilter(const real_T varargin_1[307440], real_T b[307440])
{
  emxArray_real_T *a;
  int32_T tmp_size[1];
  int32_T tmp_data[25];
  int32_T loop_ub;
  int32_T i18;
  static const real_T dv10[25] = { 0.00390625, 0.015625, 0.0234375, 0.015625,
    0.00390625, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625, 0.0234375, 0.09375,
    0.140625, 0.09375, 0.0234375, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.00390625, 0.015625, 0.0234375, 0.015625, 0.00390625 };

  real_T nonzero_h_data[25];
  boolean_T densityFlag;
  boolean_T tooBig;
  real_T padSize[3];
  real_T connDims[2];
  static const real_T h[25] = { 0.00390625, 0.015625, 0.0234375, 0.015625,
    0.00390625, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625, 0.0234375, 0.09375,
    0.140625, 0.09375, 0.0234375, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.00390625, 0.015625, 0.0234375, 0.015625, 0.00390625 };

  static const real_T outSize[3] = { 240.0, 427.0, 3.0 };

  boolean_T conn[25];
  static const real_T start[3] = { 2.0, 2.0, 0.0 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  b_emxInit_real_T(&a, 3, true);
  c_padarray(varargin_1, a);
  eml_li_find(tmp_data, tmp_size);
  loop_ub = tmp_size[0];
  for (i18 = 0; i18 < loop_ub; i18++) {
    nonzero_h_data[i18] = dv10[tmp_data[i18] - 1];
  }

  densityFlag = false;
  if ((real_T)tmp_size[0] / 25.0 > 0.05) {
    densityFlag = true;
  }

  tooBig = true;
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    tooBig = false;
  }

  if (densityFlag && (!tooBig)) {
    densityFlag = true;
  } else {
    densityFlag = false;
  }

  if (densityFlag) {
    for (i18 = 0; i18 < 3; i18++) {
      padSize[i18] = a->size[i18];
    }

    for (i18 = 0; i18 < 2; i18++) {
      connDims[i18] = 5.0;
    }

    ippfilter_real64(&a->data[0], b, outSize, 3.0, padSize, h, connDims, true,
                     false);
  } else {
    for (i18 = 0; i18 < 3; i18++) {
      padSize[i18] = a->size[i18];
    }

    for (i18 = 0; i18 < 25; i18++) {
      conn[i18] = true;
    }

    for (i18 = 0; i18 < 2; i18++) {
      connDims[i18] = 5.0;
    }

    imfilter_real64(&a->data[0], b, 3.0, outSize, 3.0, padSize, &nonzero_h_data
                    [0], (real_T)tmp_size[0], conn, 2.0, connDims, start, 3.0,
                    true, true);
  }

  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void imref2d_imref2d(const real_T imageSizeIn[3], real_T
  obj_XWorldLimits[2], real_T obj_YWorldLimits[2], real_T obj_ImageSize[2],
  real_T *obj_PixelExtentInWorldX, real_T *obj_PixelExtentInWorldY)
{
  real_T dv8[2];
  real_T dv9[2];
  int32_T i12;
  obj_ImageSize[0] = imageSizeIn[0];
  obj_ImageSize[1] = imageSizeIn[1];
  dv8[0] = 0.0;
  dv8[1] = imageSizeIn[1];
  dv9[0] = 0.0;
  dv9[1] = imageSizeIn[0];
  for (i12 = 0; i12 < 2; i12++) {
    obj_XWorldLimits[i12] = 0.5 + dv8[i12];
    obj_YWorldLimits[i12] = 0.5 + dv9[i12];
  }

  *obj_PixelExtentInWorldX = 1.0;
  *obj_PixelExtentInWorldY = 1.0;
}

static void imref2d_intrinsicToWorld(const emxArray_real_T *xIntrinsic, const
  emxArray_real_T *yIntrinsic, emxArray_real_T *xw, emxArray_real_T *yw)
{
  int32_T i14;
  int32_T loop_ub;
  i14 = xw->size[0] * xw->size[1];
  xw->size[0] = xIntrinsic->size[0];
  xw->size[1] = xIntrinsic->size[1];
  emxEnsureCapacity((emxArray__common *)xw, i14, (int32_T)sizeof(real_T));
  loop_ub = xIntrinsic->size[0] * xIntrinsic->size[1];
  for (i14 = 0; i14 < loop_ub; i14++) {
    xw->data[i14] = 0.5 + (xIntrinsic->data[i14] - 0.5);
  }

  i14 = yw->size[0] * yw->size[1];
  yw->size[0] = yIntrinsic->size[0];
  yw->size[1] = yIntrinsic->size[1];
  emxEnsureCapacity((emxArray__common *)yw, i14, (int32_T)sizeof(real_T));
  loop_ub = yIntrinsic->size[0] * yIntrinsic->size[1];
  for (i14 = 0; i14 < loop_ub; i14++) {
    yw->data[i14] = 0.5 + (yIntrinsic->data[i14] - 0.5);
  }
}

static void imref2d_worldToIntrinsic(const emxArray_real_T *xWorld, const
  emxArray_real_T *yWorld, emxArray_real_T *xi, emxArray_real_T *yi)
{
  int32_T i17;
  int32_T loop_ub;
  i17 = xi->size[0] * xi->size[1];
  xi->size[0] = xWorld->size[0];
  xi->size[1] = xWorld->size[1];
  emxEnsureCapacity((emxArray__common *)xi, i17, (int32_T)sizeof(real_T));
  loop_ub = xWorld->size[0] * xWorld->size[1];
  for (i17 = 0; i17 < loop_ub; i17++) {
    xi->data[i17] = 0.5 + (xWorld->data[i17] - 0.5);
  }

  i17 = yi->size[0] * yi->size[1];
  yi->size[0] = yWorld->size[0];
  yi->size[1] = yWorld->size[1];
  emxEnsureCapacity((emxArray__common *)yi, i17, (int32_T)sizeof(real_T));
  loop_ub = yWorld->size[0] * yWorld->size[1];
  for (i17 = 0; i17 < loop_ub; i17++) {
    yi->data[i17] = 0.5 + (yWorld->data[i17] - 0.5);
  }
}

static void inv(const real_T x[9], real_T y[9])
{
  real_T b_x[9];
  int32_T p1;
  int32_T p2;
  int32_T p3;
  real_T absx11;
  real_T absx21;
  real_T absx31;
  int32_T itmp;
  real_T b_y;
  memcpy(&b_x[0], &x[0], 9U * sizeof(real_T));
  p1 = 0;
  p2 = 3;
  p3 = 6;
  absx11 = muDoubleScalarAbs(x[0]);
  absx21 = muDoubleScalarAbs(x[1]);
  absx31 = muDoubleScalarAbs(x[2]);
  if ((absx21 > absx11) && (absx21 > absx31)) {
    p1 = 3;
    p2 = 0;
    b_x[0] = x[1];
    b_x[1] = x[0];
    b_x[3] = x[4];
    b_x[4] = x[3];
    b_x[6] = x[7];
    b_x[7] = x[6];
  } else {
    if (absx31 > absx11) {
      p1 = 6;
      p3 = 0;
      b_x[0] = x[2];
      b_x[2] = x[0];
      b_x[3] = x[5];
      b_x[5] = x[3];
      b_x[6] = x[8];
      b_x[8] = x[6];
    }
  }

  absx21 = b_x[1] / b_x[0];
  b_x[1] /= b_x[0];
  absx11 = b_x[2] / b_x[0];
  b_x[2] /= b_x[0];
  b_x[4] -= absx21 * b_x[3];
  b_x[5] -= absx11 * b_x[3];
  b_x[7] -= absx21 * b_x[6];
  b_x[8] -= absx11 * b_x[6];
  if (muDoubleScalarAbs(b_x[5]) > muDoubleScalarAbs(b_x[4])) {
    itmp = p2;
    p2 = p3;
    p3 = itmp;
    b_x[1] = absx11;
    b_x[2] = absx21;
    absx11 = b_x[4];
    b_x[4] = b_x[5];
    b_x[5] = absx11;
    absx11 = b_x[7];
    b_x[7] = b_x[8];
    b_x[8] = absx11;
  }

  absx31 = b_x[5];
  b_y = b_x[4];
  absx21 = b_x[5] / b_x[4];
  b_x[8] -= absx21 * b_x[7];
  absx11 = (absx21 * b_x[1] - b_x[2]) / b_x[8];
  absx21 = -(b_x[1] + b_x[7] * absx11) / b_x[4];
  y[p1] = ((1.0 - b_x[3] * absx21) - b_x[6] * absx11) / b_x[0];
  y[p1 + 1] = absx21;
  y[p1 + 2] = absx11;
  absx11 = -(absx31 / b_y) / b_x[8];
  absx21 = (1.0 - b_x[7] * absx11) / b_x[4];
  y[p2] = -(b_x[3] * absx21 + b_x[6] * absx11) / b_x[0];
  y[p2 + 1] = absx21;
  y[p2 + 2] = absx11;
  absx11 = 1.0 / b_x[8];
  absx21 = -b_x[7] * absx11 / b_x[4];
  y[p3] = -(b_x[3] * absx21 + b_x[6] * absx11) / b_x[0];
  y[p3 + 1] = absx21;
  y[p3 + 2] = absx11;
}

static real_T (*j_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier *
  msgId))[307440]
{
  real_T (*ret)[307440];
  int32_T iv27[3];
  int32_T i;
  static const int16_T iv28[3] = { 240, 427, 3 };

  for (i = 0; i < 3; i++) {
    iv27[i] = iv28[i];
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 3U,
    iv27);
  ret = (real_T (*)[307440])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void j_imfilter(const real_T varargin_1[19260], real_T b[19260])
{
  emxArray_real_T *a;
  int32_T tmp_size[1];
  int32_T tmp_data[25];
  int32_T loop_ub;
  int32_T i31;
  static const real_T dv19[25] = { 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.09375, 0.375, 0.5625, 0.375, 0.09375,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.015625, 0.0625, 0.09375, 0.0625,
    0.015625 };

  real_T nonzero_h_data[25];
  boolean_T densityFlag;
  boolean_T tooBig;
  real_T padSize[3];
  real_T connDims[2];
  static const real_T h[25] = { 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.09375, 0.375, 0.5625, 0.375, 0.09375,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.015625, 0.0625, 0.09375, 0.0625,
    0.015625 };

  static const real_T outSize[3] = { 60.0, 107.0, 3.0 };

  boolean_T conn[25];
  static const real_T start[3] = { 2.0, 2.0, 0.0 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  b_emxInit_real_T(&a, 3, true);
  g_padarray(varargin_1, a);
  eml_li_find(tmp_data, tmp_size);
  loop_ub = tmp_size[0];
  for (i31 = 0; i31 < loop_ub; i31++) {
    nonzero_h_data[i31] = dv19[tmp_data[i31] - 1];
  }

  densityFlag = false;
  if ((real_T)tmp_size[0] / 25.0 > 0.05) {
    densityFlag = true;
  }

  tooBig = true;
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    tooBig = false;
  }

  if (densityFlag && (!tooBig)) {
    densityFlag = true;
  } else {
    densityFlag = false;
  }

  if (densityFlag) {
    for (i31 = 0; i31 < 3; i31++) {
      padSize[i31] = a->size[i31];
    }

    for (i31 = 0; i31 < 2; i31++) {
      connDims[i31] = 5.0;
    }

    ippfilter_real64(&a->data[0], b, outSize, 3.0, padSize, h, connDims, true,
                     false);
  } else {
    for (i31 = 0; i31 < 3; i31++) {
      padSize[i31] = a->size[i31];
    }

    for (i31 = 0; i31 < 25; i31++) {
      conn[i31] = true;
    }

    for (i31 = 0; i31 < 2; i31++) {
      connDims[i31] = 5.0;
    }

    imfilter_real64(&a->data[0], b, 3.0, outSize, 3.0, padSize, &nonzero_h_data
                    [0], (real_T)tmp_size[0], conn, 2.0, connDims, start, 3.0,
                    true, true);
  }

  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void j_padarray(const boolean_T varargin_1[1620], boolean_T b_data[],
  int32_T b_size[2])
{
  int8_T sizeB[2];
  int8_T idxA[116];
  int16_T sizeIdxDir[2];
  emxArray_uint32_T *dimNums;
  emxArray_real_T *y;
  int32_T k;
  int32_T ndbl;
  int32_T apnd;
  int32_T cdiff;
  int32_T nm1d2;
  real_T y_data[431];
  int32_T y_size[2];
  int32_T tmp_size[2];
  real_T tmp_data[431];
  uint32_T idxDir_data[431];
  int16_T b_tmp_data[58];
  int32_T b_idxDir_data[431];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_uint32_T(&dimNums, 2, true);
  emxInit_real_T(&y, 2, true);
  for (k = 0; k < 2; k++) {
    ndbl = (int32_T)muDoubleScalarFloor(((30.0 + 24.0 * (real_T)k) - 1.0) + 0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - 24 * k) - 29;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (24.0 * (real_T)k +
         30.0)) {
      ndbl++;
      apnd = 30 + 24 * k;
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }

    nm1d2 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = ndbl;
    emxEnsureCapacity((emxArray__common *)y, nm1d2, (int32_T)sizeof(real_T));
    y->data[0] = 1.0;
    y->data[ndbl - 1] = apnd;
    nm1d2 = ndbl - 1;
    nm1d2 = (int32_T)((uint32_T)nm1d2 >> 1);
    for (cdiff = 1; cdiff < nm1d2; cdiff++) {
      y->data[cdiff] = 1.0 + (real_T)cdiff;
      y->data[(ndbl - cdiff) - 1] = apnd - cdiff;
    }

    if (nm1d2 << 1 == ndbl - 1) {
      y->data[nm1d2] = (1.0 + (real_T)apnd) / 2.0;
    } else {
      y->data[nm1d2] = 1.0 + (real_T)nm1d2;
      y->data[nm1d2 + 1] = apnd - nm1d2;
    }

    nm1d2 = dimNums->size[0] * dimNums->size[1];
    dimNums->size[0] = 1;
    dimNums->size[1] = y->size[1];
    emxEnsureCapacity((emxArray__common *)dimNums, nm1d2, (int32_T)sizeof
                      (uint32_T));
    cdiff = y->size[0] * y->size[1];
    for (nm1d2 = 0; nm1d2 < cdiff; nm1d2++) {
      dimNums->data[nm1d2] = (uint32_T)muDoubleScalarRound(y->data[nm1d2]);
    }

    ndbl = (int32_T)muDoubleScalarFloor(((((30.0 + 24.0 * (real_T)k) + 2.0) -
      1.0) - -2.0) + 0.5);
    apnd = ndbl - 2;
    cdiff = (ndbl - 24 * k) - 33;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (24.0 * (real_T)k +
         31.0)) {
      ndbl++;
      apnd = 31 + 24 * k;
    } else if (cdiff > 0) {
      apnd = ndbl - 3;
    } else {
      ndbl++;
    }

    y_size[0] = 1;
    y_size[1] = ndbl;
    y_data[0] = -2.0;
    y_data[ndbl - 1] = apnd;
    nm1d2 = ndbl - 1;
    nm1d2 = (int32_T)((uint32_T)nm1d2 >> 1);
    for (cdiff = 1; cdiff < nm1d2; cdiff++) {
      y_data[cdiff] = -2.0 + (real_T)cdiff;
      y_data[(ndbl - cdiff) - 1] = apnd - cdiff;
    }

    if (nm1d2 << 1 == ndbl - 1) {
      y_data[nm1d2] = (-2.0 + (real_T)apnd) / 2.0;
    } else {
      y_data[nm1d2] = -2.0 + (real_T)nm1d2;
      y_data[nm1d2 + 1] = apnd - nm1d2;
    }

    b_mod(y_data, y_size, 30.0 + 24.0 * (real_T)k, tmp_data, tmp_size);
    cdiff = tmp_size[0] * tmp_size[1];
    for (nm1d2 = 0; nm1d2 < cdiff; nm1d2++) {
      idxDir_data[nm1d2] = dimNums->data[(int32_T)(tmp_data[nm1d2] + 1.0) - 1];
    }

    sizeIdxDir[k] = (int16_T)tmp_size[1];
    cdiff = sizeIdxDir[k];
    for (nm1d2 = 0; nm1d2 < cdiff; nm1d2++) {
      b_tmp_data[nm1d2] = (int16_T)nm1d2;
    }

    cdiff = tmp_size[1];
    for (nm1d2 = 0; nm1d2 < cdiff; nm1d2++) {
      b_idxDir_data[nm1d2] = (int32_T)idxDir_data[nm1d2];
    }

    cdiff = sizeIdxDir[k];
    for (nm1d2 = 0; nm1d2 < cdiff; nm1d2++) {
      idxA[b_tmp_data[nm1d2] + 58 * k] = (int8_T)b_idxDir_data[nm1d2];
    }

    sizeB[k] = (int8_T)(34 + 24 * k);
  }

  emxFree_real_T(&y);
  emxFree_uint32_T(&dimNums);
  b_size[0] = sizeB[0];
  b_size[1] = sizeB[1];
  for (cdiff = 0; cdiff < sizeB[1]; cdiff++) {
    for (nm1d2 = 0; nm1d2 < b_size[0]; nm1d2++) {
      b_data[nm1d2 + b_size[0] * cdiff] = varargin_1[(idxA[nm1d2] + 30 * (idxA
        [58 + cdiff] - 1)) - 1];
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static real_T (*k_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier *
  msgId))[33075]
{
  real_T (*ret)[33075];
  int32_T iv29[3];
  int32_T i;
  static const int8_T iv30[3] = { 105, 105, 3 };

  for (i = 0; i < 3; i++) {
    iv29[i] = iv30[i];
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 3U,
    iv29);
  ret = (real_T (*)[33075])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void k_imfilter(const boolean_T varargin_1[6420], boolean_T b[6420])
{
  int32_T a_size[2];
  boolean_T a_data[12321];
  int32_T tmp_size[1];
  int32_T tmp_data[25];
  int32_T loop_ub;
  int32_T i32;
  static const real_T dv20[25] = { 0.00390625, 0.015625, 0.0234375, 0.015625,
    0.00390625, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625, 0.0234375, 0.09375,
    0.140625, 0.09375, 0.0234375, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.00390625, 0.015625, 0.0234375, 0.015625, 0.00390625 };

  real_T nonzero_h_data[25];
  real_T outSize[2];
  real_T padSize[2];
  boolean_T conn[25];
  real_T connDims[2];
  real_T start[2];
  h_padarray(varargin_1, a_data, a_size);
  eml_li_find(tmp_data, tmp_size);
  loop_ub = tmp_size[0];
  for (i32 = 0; i32 < loop_ub; i32++) {
    nonzero_h_data[i32] = dv20[tmp_data[i32] - 1];
  }

  for (i32 = 0; i32 < 2; i32++) {
    outSize[i32] = 60.0 + 47.0 * (real_T)i32;
    padSize[i32] = a_size[i32];
  }

  for (i32 = 0; i32 < 25; i32++) {
    conn[i32] = true;
  }

  for (i32 = 0; i32 < 2; i32++) {
    connDims[i32] = 5.0;
    start[i32] = 2.0;
  }

  imfilter_boolean(&a_data[0], b, 2.0, outSize, 2.0, padSize, &nonzero_h_data[0],
                   (real_T)tmp_size[0], conn, 2.0, connDims, start, 2.0, true,
                   true);
}

static boolean_T (*l_emlrt_marshallIn(const mxArray *src, const
  emlrtMsgIdentifier *msgId))[11025]
{
  boolean_T (*ret)[11025];
  int32_T iv31[2];
  int32_T i;
  for (i = 0; i < 2; i++) {
    iv31[i] = 105;
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "logical", false, 2U,
    iv31);
  ret = (boolean_T (*)[11025])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void l_imfilter(const boolean_T varargin_1[6420], boolean_T b[6420])
{
  int32_T a_size[2];
  boolean_T a_data[12321];
  int32_T tmp_size[1];
  int32_T tmp_data[25];
  int32_T loop_ub;
  int32_T i33;
  static const real_T dv21[25] = { 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.09375, 0.375, 0.5625, 0.375, 0.09375,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.015625, 0.0625, 0.09375, 0.0625,
    0.015625 };

  real_T nonzero_h_data[25];
  real_T outSize[2];
  real_T padSize[2];
  boolean_T conn[25];
  real_T connDims[2];
  real_T start[2];
  h_padarray(varargin_1, a_data, a_size);
  eml_li_find(tmp_data, tmp_size);
  loop_ub = tmp_size[0];
  for (i33 = 0; i33 < loop_ub; i33++) {
    nonzero_h_data[i33] = dv21[tmp_data[i33] - 1];
  }

  for (i33 = 0; i33 < 2; i33++) {
    outSize[i33] = 60.0 + 47.0 * (real_T)i33;
    padSize[i33] = a_size[i33];
  }

  for (i33 = 0; i33 < 25; i33++) {
    conn[i33] = true;
  }

  for (i33 = 0; i33 < 2; i33++) {
    connDims[i33] = 5.0;
    start[i33] = 2.0;
  }

  imfilter_boolean(&a_data[0], b, 2.0, outSize, 2.0, padSize, &nonzero_h_data[0],
                   (real_T)tmp_size[0], conn, 2.0, connDims, start, 2.0, true,
                   true);
}

static void m_imfilter(const real_T varargin_1[4860], real_T b[4860])
{
  emxArray_real_T *a;
  int32_T tmp_size[1];
  int32_T tmp_data[25];
  int32_T loop_ub;
  int32_T i34;
  static const real_T dv22[25] = { 0.00390625, 0.015625, 0.0234375, 0.015625,
    0.00390625, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625, 0.0234375, 0.09375,
    0.140625, 0.09375, 0.0234375, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.00390625, 0.015625, 0.0234375, 0.015625, 0.00390625 };

  real_T nonzero_h_data[25];
  boolean_T densityFlag;
  boolean_T tooBig;
  real_T padSize[3];
  real_T connDims[2];
  static const real_T h[25] = { 0.00390625, 0.015625, 0.0234375, 0.015625,
    0.00390625, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625, 0.0234375, 0.09375,
    0.140625, 0.09375, 0.0234375, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.00390625, 0.015625, 0.0234375, 0.015625, 0.00390625 };

  static const real_T outSize[3] = { 30.0, 54.0, 3.0 };

  boolean_T conn[25];
  static const real_T start[3] = { 2.0, 2.0, 0.0 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  b_emxInit_real_T(&a, 3, true);
  i_padarray(varargin_1, a);
  eml_li_find(tmp_data, tmp_size);
  loop_ub = tmp_size[0];
  for (i34 = 0; i34 < loop_ub; i34++) {
    nonzero_h_data[i34] = dv22[tmp_data[i34] - 1];
  }

  densityFlag = false;
  if ((real_T)tmp_size[0] / 25.0 > 0.05) {
    densityFlag = true;
  }

  tooBig = true;
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    tooBig = false;
  }

  if (densityFlag && (!tooBig)) {
    densityFlag = true;
  } else {
    densityFlag = false;
  }

  if (densityFlag) {
    for (i34 = 0; i34 < 3; i34++) {
      padSize[i34] = a->size[i34];
    }

    for (i34 = 0; i34 < 2; i34++) {
      connDims[i34] = 5.0;
    }

    ippfilter_real64(&a->data[0], b, outSize, 3.0, padSize, h, connDims, true,
                     false);
  } else {
    for (i34 = 0; i34 < 3; i34++) {
      padSize[i34] = a->size[i34];
    }

    for (i34 = 0; i34 < 25; i34++) {
      conn[i34] = true;
    }

    for (i34 = 0; i34 < 2; i34++) {
      connDims[i34] = 5.0;
    }

    imfilter_real64(&a->data[0], b, 3.0, outSize, 3.0, padSize, &nonzero_h_data
                    [0], (real_T)tmp_size[0], conn, 2.0, connDims, start, 3.0,
                    true, true);
  }

  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void meshgrid(const emxArray_real_T *x, const emxArray_real_T *y,
                     emxArray_real_T *xx, emxArray_real_T *yy)
{
  emxArray_real_T *a;
  int32_T ibtile;
  int32_T x_idx_0;
  int32_T varargin_1_idx_0;
  int32_T k;
  int32_T y_idx_0;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_real_T(&a, 2, true);
  if ((x->size[1] == 0) || (y->size[1] == 0)) {
    ibtile = xx->size[0] * xx->size[1];
    xx->size[0] = 0;
    xx->size[1] = 0;
    emxEnsureCapacity((emxArray__common *)xx, ibtile, (int32_T)sizeof(real_T));
    ibtile = yy->size[0] * yy->size[1];
    yy->size[0] = 0;
    yy->size[1] = 0;
    emxEnsureCapacity((emxArray__common *)yy, ibtile, (int32_T)sizeof(real_T));
  } else {
    x_idx_0 = x->size[1];
    ibtile = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = x_idx_0;
    emxEnsureCapacity((emxArray__common *)a, ibtile, (int32_T)sizeof(real_T));
    for (ibtile = 0; ibtile < x_idx_0; ibtile++) {
      a->data[a->size[0] * ibtile] = x->data[ibtile];
    }

    varargin_1_idx_0 = y->size[1];
    ibtile = xx->size[0] * xx->size[1];
    xx->size[0] = varargin_1_idx_0;
    xx->size[1] = a->size[1];
    emxEnsureCapacity((emxArray__common *)xx, ibtile, (int32_T)sizeof(real_T));
    for (x_idx_0 = 0; x_idx_0 + 1 <= a->size[1]; x_idx_0++) {
      ibtile = x_idx_0 * varargin_1_idx_0;
      for (k = 1; k <= varargin_1_idx_0; k++) {
        xx->data[(ibtile + k) - 1] = a->data[x_idx_0];
      }
    }

    varargin_1_idx_0 = x->size[1];
    y_idx_0 = y->size[1];
    ibtile = yy->size[0] * yy->size[1];
    yy->size[0] = y_idx_0;
    yy->size[1] = varargin_1_idx_0;
    emxEnsureCapacity((emxArray__common *)yy, ibtile, (int32_T)sizeof(real_T));
    y_idx_0 = y->size[1];
    for (x_idx_0 = 1; x_idx_0 <= varargin_1_idx_0; x_idx_0++) {
      ibtile = (x_idx_0 - 1) * y_idx_0;
      for (k = 1; k <= y_idx_0; k++) {
        yy->data[(ibtile + k) - 1] = y->data[k - 1];
      }
    }
  }

  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void mldivide(const real_T A[80], const real_T B[10], real_T Y[8])
{
  real_T b_B[10];
  real_T b_A[80];
  real_T tau[8];
  int8_T jpvt[8];
  real_T work[8];
  int32_T i11;
  real_T vn1[8];
  real_T vn2[8];
  int32_T k;
  int32_T iy;
  real_T tol;
  real_T rankR;
  int32_T itemp;
  real_T absxk;
  real_T t;
  int32_T i;
  int32_T i_i;
  int32_T ix;
  int32_T pvt;
  int32_T i_ip1;
  int32_T lastv;
  int32_T lastc;
  boolean_T exitg2;
  int32_T exitg1;
  memcpy(&b_B[0], &B[0], 10U * sizeof(real_T));
  memcpy(&b_A[0], &A[0], 80U * sizeof(real_T));
  for (i11 = 0; i11 < 8; i11++) {
    jpvt[i11] = (int8_T)(1 + i11);
    work[i11] = 0.0;
  }

  k = 1;
  for (iy = 0; iy < 8; iy++) {
    tol = 0.0;
    rankR = 2.2250738585072014E-308;
    for (itemp = k; itemp <= k + 9; itemp++) {
      absxk = muDoubleScalarAbs(A[itemp - 1]);
      if (absxk > rankR) {
        t = rankR / absxk;
        tol = 1.0 + tol * t * t;
        rankR = absxk;
      } else {
        t = absxk / rankR;
        tol += t * t;
      }
    }

    tol = rankR * muDoubleScalarSqrt(tol);
    vn1[iy] = tol;
    vn2[iy] = vn1[iy];
    k += 10;
  }

  for (i = 0; i < 8; i++) {
    i_i = i + i * 10;
    itemp = 1;
    if (8 - i > 1) {
      ix = i;
      tol = muDoubleScalarAbs(vn1[i]);
      for (k = 2; k <= 8 - i; k++) {
        ix++;
        rankR = muDoubleScalarAbs(vn1[ix]);
        if (rankR > tol) {
          itemp = k;
          tol = rankR;
        }
      }
    }

    pvt = (i + itemp) - 1;
    if (pvt + 1 != i + 1) {
      ix = 10 * pvt;
      iy = 10 * i;
      for (k = 0; k < 10; k++) {
        tol = b_A[ix];
        b_A[ix] = b_A[iy];
        b_A[iy] = tol;
        ix++;
        iy++;
      }

      itemp = jpvt[pvt];
      jpvt[pvt] = jpvt[i];
      jpvt[i] = (int8_T)itemp;
      vn1[pvt] = vn1[i];
      vn2[pvt] = vn2[i];
    }

    absxk = b_A[i_i];
    rankR = 0.0;
    tol = c_eml_xnrm2(9 - i, b_A, i_i + 2);
    if (tol != 0.0) {
      tol = muDoubleScalarHypot(b_A[i_i], tol);
      if (b_A[i_i] >= 0.0) {
        tol = -tol;
      }

      if (muDoubleScalarAbs(tol) < 1.0020841800044864E-292) {
        itemp = 0;
        do {
          itemp++;
          i11 = (i_i - i) + 10;
          for (k = i_i + 1; k + 1 <= i11; k++) {
            b_A[k] *= 9.9792015476736E+291;
          }

          tol *= 9.9792015476736E+291;
          absxk *= 9.9792015476736E+291;
        } while (!(muDoubleScalarAbs(tol) >= 1.0020841800044864E-292));

        tol = muDoubleScalarHypot(absxk, c_eml_xnrm2(9 - i, b_A, i_i + 2));
        if (absxk >= 0.0) {
          tol = -tol;
        }

        rankR = (tol - absxk) / tol;
        absxk = 1.0 / (absxk - tol);
        i11 = (i_i - i) + 10;
        for (k = i_i + 1; k + 1 <= i11; k++) {
          b_A[k] *= absxk;
        }

        for (k = 1; k <= itemp; k++) {
          tol *= 1.0020841800044864E-292;
        }

        absxk = tol;
      } else {
        rankR = (tol - b_A[i_i]) / tol;
        absxk = 1.0 / (b_A[i_i] - tol);
        i11 = (i_i - i) + 10;
        for (k = i_i + 1; k + 1 <= i11; k++) {
          b_A[k] *= absxk;
        }

        absxk = tol;
      }
    }

    tau[i] = rankR;
    b_A[i_i] = absxk;
    if (i + 1 < 8) {
      absxk = b_A[i_i];
      b_A[i_i] = 1.0;
      i_ip1 = (i + (i + 1) * 10) + 1;
      if (tau[i] != 0.0) {
        lastv = 10 - i;
        itemp = (i_i - i) + 9;
        while ((lastv > 0) && (b_A[itemp] == 0.0)) {
          lastv--;
          itemp--;
        }

        lastc = 7 - i;
        exitg2 = false;
        while ((!exitg2) && (lastc > 0)) {
          itemp = i_ip1 + (lastc - 1) * 10;
          k = itemp;
          do {
            exitg1 = 0;
            if (k <= (itemp + lastv) - 1) {
              if (b_A[k - 1] != 0.0) {
                exitg1 = 1;
              } else {
                k++;
              }
            } else {
              lastc--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        lastv = 0;
        lastc = 0;
      }

      if (lastv > 0) {
        if (lastc == 0) {
        } else {
          for (iy = 1; iy <= lastc; iy++) {
            work[iy - 1] = 0.0;
          }

          iy = 0;
          i11 = i_ip1 + 10 * (lastc - 1);
          for (itemp = i_ip1; itemp <= i11; itemp += 10) {
            ix = i_i;
            tol = 0.0;
            pvt = (itemp + lastv) - 1;
            for (k = itemp; k <= pvt; k++) {
              tol += b_A[k - 1] * b_A[ix];
              ix++;
            }

            work[iy] += tol;
            iy++;
          }
        }

        if (-tau[i] == 0.0) {
        } else {
          itemp = i_ip1 - 1;
          pvt = 0;
          for (iy = 1; iy <= lastc; iy++) {
            if (work[pvt] != 0.0) {
              tol = work[pvt] * -tau[i];
              ix = i_i;
              i11 = lastv + itemp;
              for (k = itemp; k + 1 <= i11; k++) {
                b_A[k] += b_A[ix] * tol;
                ix++;
              }
            }

            pvt++;
            itemp += 10;
          }
        }
      }

      b_A[i_i] = absxk;
    }

    for (iy = i + 1; iy + 1 < 9; iy++) {
      if (vn1[iy] != 0.0) {
        tol = muDoubleScalarAbs(b_A[i + 10 * iy]) / vn1[iy];
        tol = 1.0 - tol * tol;
        if (tol < 0.0) {
          tol = 0.0;
        }

        rankR = vn1[iy] / vn2[iy];
        rankR = tol * (rankR * rankR);
        if (rankR <= 1.4901161193847656E-8) {
          vn1[iy] = eml_xnrm2(9 - i, b_A, (i + 10 * iy) + 2);
          vn2[iy] = vn1[iy];
        } else {
          vn1[iy] *= muDoubleScalarSqrt(tol);
        }
      }
    }
  }

  rankR = 0.0;
  tol = 10.0 * muDoubleScalarAbs(b_A[0]) * 2.2204460492503131E-16;
  k = 0;
  while ((k < 8) && (!(muDoubleScalarAbs(b_A[k + 10 * k]) <= tol))) {
    rankR++;
    k++;
  }

  memset(&Y[0], 0, sizeof(real_T) << 3);
  for (iy = 0; iy < 8; iy++) {
    if (tau[iy] != 0.0) {
      tol = b_B[iy];
      for (i = 0; i <= 8 - iy; i++) {
        itemp = (iy + i) + 1;
        tol += b_A[itemp + 10 * iy] * b_B[itemp];
      }

      tol *= tau[iy];
      if (tol != 0.0) {
        b_B[iy] -= tol;
        for (i = 0; i <= 8 - iy; i++) {
          itemp = (iy + i) + 1;
          b_B[itemp] -= b_A[itemp + 10 * iy] * tol;
        }
      }
    }
  }

  for (i = 0; i < (int32_T)rankR; i++) {
    Y[jpvt[i] - 1] = b_B[i];
  }

  for (iy = 0; iy < (int32_T)-(1.0 + (-1.0 - rankR)); iy++) {
    tol = rankR + -(real_T)iy;
    Y[jpvt[(int32_T)tol - 1] - 1] /= b_A[((int32_T)tol + 10 * ((int32_T)tol - 1))
      - 1];
    for (i = 0; i < (int32_T)(tol - 1.0); i++) {
      Y[jpvt[i] - 1] -= Y[jpvt[(int32_T)tol - 1] - 1] * b_A[i + 10 * ((int32_T)
        tol - 1)];
    }
  }
}

static void n_imfilter(const real_T varargin_1[4860], real_T b[4860])
{
  emxArray_real_T *a;
  int32_T tmp_size[1];
  int32_T tmp_data[25];
  int32_T loop_ub;
  int32_T i36;
  static const real_T dv23[25] = { 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.09375, 0.375, 0.5625, 0.375, 0.09375,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.015625, 0.0625, 0.09375, 0.0625,
    0.015625 };

  real_T nonzero_h_data[25];
  boolean_T densityFlag;
  boolean_T tooBig;
  real_T padSize[3];
  real_T connDims[2];
  static const real_T h[25] = { 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.09375, 0.375, 0.5625, 0.375, 0.09375,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.015625, 0.0625, 0.09375, 0.0625,
    0.015625 };

  static const real_T outSize[3] = { 30.0, 54.0, 3.0 };

  boolean_T conn[25];
  static const real_T start[3] = { 2.0, 2.0, 0.0 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  b_emxInit_real_T(&a, 3, true);
  i_padarray(varargin_1, a);
  eml_li_find(tmp_data, tmp_size);
  loop_ub = tmp_size[0];
  for (i36 = 0; i36 < loop_ub; i36++) {
    nonzero_h_data[i36] = dv23[tmp_data[i36] - 1];
  }

  densityFlag = false;
  if ((real_T)tmp_size[0] / 25.0 > 0.05) {
    densityFlag = true;
  }

  tooBig = true;
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    tooBig = false;
  }

  if (densityFlag && (!tooBig)) {
    densityFlag = true;
  } else {
    densityFlag = false;
  }

  if (densityFlag) {
    for (i36 = 0; i36 < 3; i36++) {
      padSize[i36] = a->size[i36];
    }

    for (i36 = 0; i36 < 2; i36++) {
      connDims[i36] = 5.0;
    }

    ippfilter_real64(&a->data[0], b, outSize, 3.0, padSize, h, connDims, true,
                     false);
  } else {
    for (i36 = 0; i36 < 3; i36++) {
      padSize[i36] = a->size[i36];
    }

    for (i36 = 0; i36 < 25; i36++) {
      conn[i36] = true;
    }

    for (i36 = 0; i36 < 2; i36++) {
      connDims[i36] = 5.0;
    }

    imfilter_real64(&a->data[0], b, 3.0, outSize, 3.0, padSize, &nonzero_h_data
                    [0], (real_T)tmp_size[0], conn, 2.0, connDims, start, 3.0,
                    true, true);
  }

  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void normalizeControlPoints(const real_T pts_data[], const int32_T
  pts_size[2], real_T ptsNorm_data[], int32_T ptsNorm_size[2], real_T
  normMatrixInv[9])
{
  real_T cent[2];
  int32_T iy;
  int32_T ix;
  int32_T na1;
  int32_T ixstart;
  real_T s;
  real_T av_data[10];
  int32_T ak;
  int32_T bk;
  int32_T nc1;
  int32_T ck;
  real_T cv_data[10];
  if (pts_size[0] == 0) {
    for (iy = 0; iy < 2; iy++) {
      cent[iy] = 0.0;
    }
  } else {
    ix = -1;
    iy = -1;
    for (na1 = 0; na1 < 2; na1++) {
      ixstart = ix + 1;
      ix++;
      s = pts_data[ixstart];
      for (ixstart = 2; ixstart <= pts_size[0]; ixstart++) {
        ix++;
        s += pts_data[ix];
      }

      iy++;
      cent[iy] = s;
    }
  }

  for (iy = 0; iy < 2; iy++) {
    cent[iy] /= (real_T)pts_size[0];
  }

  na1 = pts_size[0];
  ptsNorm_size[0] = pts_size[0];
  if (pts_size[0] == 0) {
  } else {
    ak = 0;
    bk = 0;
    nc1 = pts_size[0];
    iy = (pts_size[0] << 1) - pts_size[0];
    ck = 0;
    while ((nc1 > 0) && (ck <= iy)) {
      for (ixstart = 0; ixstart + 1 <= na1; ixstart++) {
        av_data[ixstart] = pts_data[ak + ixstart];
      }

      ixstart = (int8_T)pts_size[0];
      for (ix = 0; ix < ixstart; ix++) {
        cv_data[ix] = av_data[ix] - cent[bk];
      }

      for (ixstart = 0; ixstart + 1 <= nc1; ixstart++) {
        ptsNorm_data[ck + ixstart] = cv_data[ixstart];
      }

      ak += na1;
      bk++;
      ck += nc1;
    }
  }

  iy = pts_size[0];
  for (ixstart = 0; ixstart < (int8_T)iy; ixstart++) {
    av_data[ixstart] = muDoubleScalarHypot(ptsNorm_data[ixstart],
      ptsNorm_data[ixstart + ptsNorm_size[0]]);
  }

  for (ixstart = 0; ixstart < (int8_T)iy; ixstart++) {
    cv_data[ixstart] = av_data[ixstart] * av_data[ixstart];
  }

  if ((int8_T)pts_size[0] == 0) {
    s = 0.0;
  } else {
    s = cv_data[0];
    for (ixstart = 2; ixstart <= (int8_T)ptsNorm_size[0]; ixstart++) {
      s += cv_data[ixstart - 1];
    }
  }

  if (s > 0.0) {
    s = muDoubleScalarSqrt(pts_size[0] << 1) / muDoubleScalarSqrt(s);
  } else {
    s = 1.0;
  }

  ptsNorm_size[1] = 2;
  ixstart = pts_size[0] << 1;
  for (iy = 0; iy < ixstart; iy++) {
    ptsNorm_data[iy] *= s;
  }

  normMatrixInv[0] = 1.0 / s;
  normMatrixInv[3] = 0.0;
  normMatrixInv[6] = 0.0;
  normMatrixInv[1] = 0.0;
  normMatrixInv[4] = 1.0 / s;
  normMatrixInv[7] = 0.0;
  normMatrixInv[2] = cent[0];
  normMatrixInv[5] = cent[1];
  normMatrixInv[8] = 1.0;
}

static void o_imfilter(const boolean_T varargin_1[1620], boolean_T b[1620])
{
  int32_T a_size[2];
  boolean_T a_data[3364];
  int32_T tmp_size[1];
  int32_T tmp_data[25];
  int32_T loop_ub;
  int32_T i37;
  static const real_T dv24[25] = { 0.00390625, 0.015625, 0.0234375, 0.015625,
    0.00390625, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625, 0.0234375, 0.09375,
    0.140625, 0.09375, 0.0234375, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.00390625, 0.015625, 0.0234375, 0.015625, 0.00390625 };

  real_T nonzero_h_data[25];
  real_T outSize[2];
  real_T padSize[2];
  boolean_T conn[25];
  real_T connDims[2];
  real_T start[2];
  j_padarray(varargin_1, a_data, a_size);
  eml_li_find(tmp_data, tmp_size);
  loop_ub = tmp_size[0];
  for (i37 = 0; i37 < loop_ub; i37++) {
    nonzero_h_data[i37] = dv24[tmp_data[i37] - 1];
  }

  for (i37 = 0; i37 < 2; i37++) {
    outSize[i37] = 30.0 + 24.0 * (real_T)i37;
    padSize[i37] = a_size[i37];
  }

  for (i37 = 0; i37 < 25; i37++) {
    conn[i37] = true;
  }

  for (i37 = 0; i37 < 2; i37++) {
    connDims[i37] = 5.0;
    start[i37] = 2.0;
  }

  imfilter_boolean(&a_data[0], b, 2.0, outSize, 2.0, padSize, &nonzero_h_data[0],
                   (real_T)tmp_size[0], conn, 2.0, connDims, start, 2.0, true,
                   true);
}

static void p_imfilter(const boolean_T varargin_1[1620], boolean_T b[1620])
{
  int32_T a_size[2];
  boolean_T a_data[3364];
  int32_T tmp_size[1];
  int32_T tmp_data[25];
  int32_T loop_ub;
  int32_T i38;
  static const real_T dv25[25] = { 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.09375, 0.375, 0.5625, 0.375, 0.09375,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.015625, 0.0625, 0.09375, 0.0625,
    0.015625 };

  real_T nonzero_h_data[25];
  real_T outSize[2];
  real_T padSize[2];
  boolean_T conn[25];
  real_T connDims[2];
  real_T start[2];
  j_padarray(varargin_1, a_data, a_size);
  eml_li_find(tmp_data, tmp_size);
  loop_ub = tmp_size[0];
  for (i38 = 0; i38 < loop_ub; i38++) {
    nonzero_h_data[i38] = dv25[tmp_data[i38] - 1];
  }

  for (i38 = 0; i38 < 2; i38++) {
    outSize[i38] = 30.0 + 24.0 * (real_T)i38;
    padSize[i38] = a_size[i38];
  }

  for (i38 = 0; i38 < 25; i38++) {
    conn[i38] = true;
  }

  for (i38 = 0; i38 < 2; i38++) {
    connDims[i38] = 5.0;
    start[i38] = 2.0;
  }

  imfilter_boolean(&a_data[0], b, 2.0, outSize, 2.0, padSize, &nonzero_h_data[0],
                   (real_T)tmp_size[0], conn, 2.0, connDims, start, 2.0, true,
                   true);
}

static void padarray(const real_T varargin_1[11025], emxArray_real_T *b)
{
  int32_T j;
  int32_T i;
  for (j = 0; j < 2; j++) {
    i = b->size[0] * b->size[1];
    b->size[j] = 111;
    emxEnsureCapacity((emxArray__common *)b, i, (int32_T)sizeof(real_T));
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

static void projective2d_set_T(projective2d *self, const real_T T[9])
{
  int32_T i39;
  for (i39 = 0; i39 < 9; i39++) {
    self->T[i39] = T[i39];
  }
}

static void rdivide(const emxArray_real_T *x, const emxArray_real_T *y,
                    emxArray_real_T *z)
{
  int32_T i16;
  int32_T loop_ub;
  i16 = z->size[0] * z->size[1];
  z->size[0] = x->size[0];
  z->size[1] = x->size[1];
  emxEnsureCapacity((emxArray__common *)z, i16, (int32_T)sizeof(real_T));
  loop_ub = x->size[0] * x->size[1];
  for (i16 = 0; i16 < loop_ub; i16++) {
    z->data[i16] = x->data[i16] / y->data[i16];
  }
}

static void remapPointsAndResample(const real_T inputImage[33075], const real_T
  tform_T[9], const real_T outputRef_ImageSize[2], emxArray_real_T *outputImage)
{
  int32_T n;
  real_T apnd;
  real_T ndbl;
  real_T cdiff;
  emxArray_real_T *y;
  int32_T i13;
  int32_T nm1d2;
  int32_T k;
  emxArray_real_T *b_y;
  emxArray_real_T *dstXIntrinsic;
  emxArray_real_T *dstYIntrinsic;
  emxArray_real_T *dstXWorld;
  emxArray_real_T *dstYWorld;
  emxArray_real_T *srcXWorld;
  emxArray_real_T *srcYWorld;
  emxArray_real_T *b_inputImage;
  emxArray_real_T *r0;
  real_T fillValues[3];
  real_T c_inputImage[3];
  real_T b_outputImage[3];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  if (outputRef_ImageSize[1] < 1.0) {
    n = -1;
    apnd = outputRef_ImageSize[1];
  } else {
    ndbl = muDoubleScalarFloor((outputRef_ImageSize[1] - 1.0) + 0.5);
    apnd = 1.0 + ndbl;
    cdiff = (1.0 + ndbl) - outputRef_ImageSize[1];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * outputRef_ImageSize
        [1]) {
      ndbl++;
      apnd = outputRef_ImageSize[1];
    } else if (cdiff > 0.0) {
      apnd = 1.0 + (ndbl - 1.0);
    } else {
      ndbl++;
    }

    n = (int32_T)ndbl - 1;
  }

  emxInit_real_T(&y, 2, true);
  i13 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = n + 1;
  emxEnsureCapacity((emxArray__common *)y, i13, (int32_T)sizeof(real_T));
  if (n + 1 > 0) {
    y->data[0] = 1.0;
    if (n + 1 > 1) {
      y->data[n] = apnd;
      i13 = n + (n < 0);
      if (i13 >= 0) {
        nm1d2 = (int32_T)((uint32_T)i13 >> 1);
      } else {
        nm1d2 = (int32_T)~(~(uint32_T)i13 >> 1);
      }

      for (k = 1; k < nm1d2; k++) {
        y->data[k] = 1.0 + (real_T)k;
        y->data[n - k] = apnd - (real_T)k;
      }

      if (nm1d2 << 1 == n) {
        y->data[nm1d2] = (1.0 + apnd) / 2.0;
      } else {
        y->data[nm1d2] = 1.0 + (real_T)nm1d2;
        y->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
      }
    }
  }

  if (outputRef_ImageSize[0] < 1.0) {
    n = -1;
    apnd = outputRef_ImageSize[0];
  } else {
    ndbl = muDoubleScalarFloor((outputRef_ImageSize[0] - 1.0) + 0.5);
    apnd = 1.0 + ndbl;
    cdiff = (1.0 + ndbl) - outputRef_ImageSize[0];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * outputRef_ImageSize
        [0]) {
      ndbl++;
      apnd = outputRef_ImageSize[0];
    } else if (cdiff > 0.0) {
      apnd = 1.0 + (ndbl - 1.0);
    } else {
      ndbl++;
    }

    n = (int32_T)ndbl - 1;
  }

  emxInit_real_T(&b_y, 2, true);
  i13 = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = n + 1;
  emxEnsureCapacity((emxArray__common *)b_y, i13, (int32_T)sizeof(real_T));
  if (n + 1 > 0) {
    b_y->data[0] = 1.0;
    if (n + 1 > 1) {
      b_y->data[n] = apnd;
      i13 = n + (n < 0);
      if (i13 >= 0) {
        nm1d2 = (int32_T)((uint32_T)i13 >> 1);
      } else {
        nm1d2 = (int32_T)~(~(uint32_T)i13 >> 1);
      }

      for (k = 1; k < nm1d2; k++) {
        b_y->data[k] = 1.0 + (real_T)k;
        b_y->data[n - k] = apnd - (real_T)k;
      }

      if (nm1d2 << 1 == n) {
        b_y->data[nm1d2] = (1.0 + apnd) / 2.0;
      } else {
        b_y->data[nm1d2] = 1.0 + (real_T)nm1d2;
        b_y->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
      }
    }
  }

  emxInit_real_T(&dstXIntrinsic, 2, true);
  emxInit_real_T(&dstYIntrinsic, 2, true);
  emxInit_real_T(&dstXWorld, 2, true);
  emxInit_real_T(&dstYWorld, 2, true);
  emxInit_real_T(&srcXWorld, 2, true);
  emxInit_real_T(&srcYWorld, 2, true);
  b_emxInit_real_T(&b_inputImage, 3, true);
  meshgrid(y, b_y, dstXIntrinsic, dstYIntrinsic);
  imref2d_intrinsicToWorld(dstXIntrinsic, dstYIntrinsic, dstXWorld, dstYWorld);
  c_projective2d_transformPointsI(tform_T, dstXWorld, dstYWorld, srcXWorld,
    srcYWorld);
  imref2d_worldToIntrinsic(srcXWorld, srcYWorld, dstXIntrinsic, dstYIntrinsic);
  i13 = b_inputImage->size[0] * b_inputImage->size[1] * b_inputImage->size[2];
  b_inputImage->size[0] = 111;
  b_inputImage->size[1] = 111;
  b_inputImage->size[2] = 3;
  emxEnsureCapacity((emxArray__common *)b_inputImage, i13, (int32_T)sizeof
                    (real_T));
  emxFree_real_T(&b_y);
  emxFree_real_T(&y);
  emxFree_real_T(&srcYWorld);
  emxFree_real_T(&srcXWorld);
  emxFree_real_T(&dstYWorld);
  emxFree_real_T(&dstXWorld);
  for (i13 = 0; i13 < 36963; i13++) {
    b_inputImage->data[i13] = 0.0;
  }

  emxInit_real_T(&r0, 2, true);
  for (nm1d2 = 0; nm1d2 < 3; nm1d2++) {
    padarray(*(real_T (*)[11025])&inputImage[11025 * nm1d2], r0);
    for (i13 = 0; i13 < 111; i13++) {
      for (k = 0; k < 111; k++) {
        b_inputImage->data[(k + b_inputImage->size[0] * i13) +
          b_inputImage->size[0] * b_inputImage->size[1] * nm1d2] = r0->data[k +
          111 * i13];
      }
    }
  }

  emxFree_real_T(&r0);
  i13 = dstXIntrinsic->size[0] * dstXIntrinsic->size[1];
  emxEnsureCapacity((emxArray__common *)dstXIntrinsic, i13, (int32_T)sizeof
                    (real_T));
  nm1d2 = dstXIntrinsic->size[0];
  k = dstXIntrinsic->size[1];
  nm1d2 *= k;
  for (i13 = 0; i13 < nm1d2; i13++) {
    dstXIntrinsic->data[i13] = (dstXIntrinsic->data[i13] + 3.0) - 1.0;
  }

  i13 = outputImage->size[0] * outputImage->size[1] * outputImage->size[2];
  outputImage->size[0] = dstXIntrinsic->size[0];
  outputImage->size[1] = dstXIntrinsic->size[1];
  outputImage->size[2] = 3;
  emxEnsureCapacity((emxArray__common *)outputImage, i13, (int32_T)sizeof(real_T));
  i13 = dstYIntrinsic->size[0] * dstYIntrinsic->size[1];
  emxEnsureCapacity((emxArray__common *)dstYIntrinsic, i13, (int32_T)sizeof
                    (real_T));
  nm1d2 = dstYIntrinsic->size[0];
  k = dstYIntrinsic->size[1];
  nm1d2 *= k;
  for (i13 = 0; i13 < nm1d2; i13++) {
    dstYIntrinsic->data[i13] = (dstYIntrinsic->data[i13] + 3.0) - 1.0;
  }

  for (nm1d2 = 0; nm1d2 < 3; nm1d2++) {
    fillValues[nm1d2] = 0.0;
  }

  for (i13 = 0; i13 < 3; i13++) {
    c_inputImage[i13] = b_inputImage->size[i13];
  }

  for (i13 = 0; i13 < 3; i13++) {
    b_outputImage[i13] = outputImage->size[i13];
  }

  remaptbb_real64(&b_inputImage->data[0], c_inputImage, 3.0,
                  &dstYIntrinsic->data[0], &dstXIntrinsic->data[0], 1,
                  fillValues, &outputImage->data[0], b_outputImage, (real_T)
                  (outputImage->size[0] * outputImage->size[1] * 3));
  emxFree_real_T(&b_inputImage);
  emxFree_real_T(&dstYIntrinsic);
  emxFree_real_T(&dstXIntrinsic);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void repmat(const emxArray_real_T *a, real_T varargin_1, emxArray_real_T *
                   b)
{
  int32_T varargin_1_idx_1;
  int32_T ibmat;
  int32_T itilerow;
  varargin_1_idx_1 = b->size[0] * b->size[1];
  b->size[0] = (int32_T)varargin_1;
  b->size[1] = a->size[1];
  emxEnsureCapacity((emxArray__common *)b, varargin_1_idx_1, (int32_T)sizeof
                    (real_T));
  varargin_1_idx_1 = a->size[1];
  if (((int32_T)varargin_1 == 0) || (varargin_1_idx_1 == 0)) {
  } else {
    for (varargin_1_idx_1 = 0; varargin_1_idx_1 + 1 <= a->size[1];
         varargin_1_idx_1++) {
      ibmat = varargin_1_idx_1 * (int32_T)varargin_1;
      for (itilerow = 1; itilerow <= (int32_T)varargin_1; itilerow++) {
        b->data[(ibmat + itilerow) - 1] = a->data[varargin_1_idx_1];
      }
    }
  }
}

static void rgb2gray(const emxArray_real_T *X, emxArray_real_T *I)
{
  real_T origSize[3];
  int32_T i;
  real_T sizeI;
  real_T y;
  int32_T k;
  static const real_T b[3] = { 0.29893602129377539, 0.58704307445112125,
    0.11402090425510336 };

  for (i = 0; i < 3; i++) {
    origSize[i] = X->size[i];
  }

  i = I->size[0] * I->size[1];
  I->size[0] = (int32_T)(uint32_T)origSize[0];
  I->size[1] = (int32_T)(uint32_T)origSize[1];
  emxEnsureCapacity((emxArray__common *)I, i, (int32_T)sizeof(real_T));
  sizeI = (real_T)(X->size[0] * X->size[1] * 3) / 3.0;
  for (i = 0; i < (int32_T)sizeI; i++) {
    origSize[0] = X->data[i];
    origSize[1] = X->data[(int32_T)((1.0 + (real_T)i) + sizeI) - 1];
    origSize[2] = X->data[(int32_T)((1.0 + (real_T)i) + 2.0 * sizeI) - 1];
    y = 0.0;
    for (k = 0; k < 3; k++) {
      y += origSize[k] * b[k];
    }

    I->data[i] = y;
    if (I->data[i] > 1.0) {
      I->data[i] = 1.0;
    } else {
      if (I->data[i] < 0.0) {
        I->data[i] = 0.0;
      }
    }
  }
}

static void sum(const real_T x[8], real_T y[4])
{
  int32_T iy;
  int32_T ixstart;
  int32_T j;
  iy = -1;
  ixstart = 3;
  for (j = 0; j < 4; j++) {
    ixstart++;
    iy++;
    y[iy] = x[ixstart - 4] + x[ixstart];
  }
}

void faceSwapLive(faceSwapLiveStackData *SD, real_T targetImage[307440], const
                  real_T swapImage[33075], const boolean_T swapMask[11025],
                  real_T swappedImage[307440])
{
  emxArray_real_T *faceBoxes;
  int32_T j;
  emxArray_real_T *xRange;
  emxArray_real_T *yRange;
  emxArray_real_T *faceImage;
  emxArray_real_T *rEyeBoxes;
  emxArray_real_T *lEyeBoxes;
  emxArray_real_T *mouthBoxes;
  emxArray_real_T *noseBoxes;
  emxArray_real_T *noseCenter;
  emxArray_real_T *mouthLeft;
  emxArray_real_T *mouthRight;
  emxArray_real_T *lEyeCenter;
  emxArray_real_T *rEyeCenter;
  emxArray_real_T *idxNose;
  emxArray_real_T *idxMouth;
  emxArray_real_T *idxLEye;
  emxArray_real_T *idxREye;
  emxArray_real_T *points;
  emxArray_real_T *dists;
  emxArray_real_T *y;
  emxArray_real_T *c;
  emxArray_real_T *av;
  emxArray_real_T *cv;
  emxArray_real_T *b_mouthBoxes;
  emxArray_real_T *c_mouthBoxes;
  emxArray_real_T *d_mouthBoxes;
  emxArray_real_T *e_mouthBoxes;
  emxArray_real_T *b_targetImage;
  emxArray_real_T *c_targetImage;
  int32_T absb;
  real_T apnd;
  real_T ndbl;
  real_T cdiff;
  real_T b_absb;
  int32_T i0;
  int32_T nm1d2;
  int32_T k;
  int32_T i1;
  int32_T b_ndbl;
  int32_T b_apnd;
  int32_T bk;
  real_T b_points[8];
  real_T sz[2];
  real_T a[8];
  real_T dist1[4];
  static const int8_T iv0[4] = { 0, 4, 6, 8 };

  static const int8_T iv1[4] = { 1, 5, 7, 9 };

  real_T dist2[4];
  static const int8_T iv2[4] = { 0, 2, 6, 8 };

  static const int8_T iv3[4] = { 1, 3, 7, 9 };

  real_T dist3[4];
  static const int8_T iv4[4] = { 0, 2, 4, 8 };

  static const int8_T iv5[4] = { 1, 3, 4, 9 };

  real_T dist4[4];
  real_T b_dists[16];
  int32_T na1;
  static const real_T dv0[16] = { 0.66828929698204464, 0.709729404078068,
    0.82063341203289908, 0.81516197675825952, 0.66828929698204464,
    1.1123310007811715, 1.0705838620705388, 1.4566111362643215,
    0.709729404078068, 1.1123310007811715, 1.5095486465647872,
    1.1205444317741478, 0.82063341203289908, 1.0705838620705388,
    1.4357539616390549, 0.8992458951099872 };

  boolean_T exitg2;
  real_T x[10];
  real_T bestPoints_data[10];
  real_T bestMouth_data[4];
  real_T b_mouthLeft[2];
  real_T b_mouthRight[2];
  boolean_T bv0[2];
  boolean_T bv1[2];
  boolean_T bv2[2];
  boolean_T bv3[2];
  boolean_T b_y;
  boolean_T exitg1;
  real_T b_bestPoints_data[20];
  real_T c_bestPoints_data[10];
  real_T d_bestPoints_data[10];
  int32_T bestPoints_size[2];
  projective2d expl_temp;
  real_T tform_T[9];
  real_T d_targetImage[3];
  boolean_T gaussMask_2[25680];
  boolean_T gaussTemp[25680];
  boolean_T gaussMask_3[6420];
  boolean_T unusedExpr[25680];
  boolean_T b_gaussTemp[6420];
  boolean_T gaussMask_4[1620];
  boolean_T b_unusedExpr[6420];
  real_T gaussian1_5[1215];
  real_T gaussian2_5[1215];
  boolean_T c_gaussTemp[1620];
  boolean_T gaussMask_5[405];
  boolean_T c_unusedExpr[1620];
  real_T imageRecon[1215];
  boolean_T b_gaussMask_5[405];
  boolean_T b_gaussMask_4[1620];
  boolean_T b_gaussMask_3[6420];
  boolean_T b_gaussMask_2[25680];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);

  /*  shrink scale for swapImage */
  /* only declare the detectors the first time function is called, easier to deal with coder that way */
  if (!faceDetector_not_empty) {
    c_CascadeObjectDetector_Cascade(&faceDetector);
    faceDetector_not_empty = true;
    d_CascadeObjectDetector_Cascade(&lEyeDetector);
    e_CascadeObjectDetector_Cascade(&rEyeDetector);
    f_CascadeObjectDetector_Cascade(&mouthDetector);
    g_CascadeObjectDetector_Cascade(&noseDetector);
  }

  emxInit_real_T(&faceBoxes, 2, true);

  /*  Detect faces in image */
  SystemCore_step(SD, &faceDetector, targetImage, faceBoxes);

  /*  Initialize swappedImage, if no faces are found it just returns targetImage */
  memcpy(&swappedImage[0], &targetImage[0], 307440U * sizeof(real_T));
  j = 0;
  emxInit_real_T(&xRange, 2, true);
  emxInit_real_T(&yRange, 2, true);
  b_emxInit_real_T(&faceImage, 3, true);
  emxInit_real_T(&rEyeBoxes, 2, true);
  emxInit_real_T(&lEyeBoxes, 2, true);
  emxInit_real_T(&mouthBoxes, 2, true);
  emxInit_real_T(&noseBoxes, 2, true);
  emxInit_real_T(&noseCenter, 2, true);
  emxInit_real_T(&mouthLeft, 2, true);
  emxInit_real_T(&mouthRight, 2, true);
  emxInit_real_T(&lEyeCenter, 2, true);
  emxInit_real_T(&rEyeCenter, 2, true);
  emxInit_real_T(&idxNose, 2, true);
  emxInit_real_T(&idxMouth, 2, true);
  emxInit_real_T(&idxLEye, 2, true);
  emxInit_real_T(&idxREye, 2, true);
  emxInit_real_T(&points, 2, true);
  emxInit_real_T(&dists, 2, true);
  emxInit_real_T(&y, 2, true);
  emxInit_real_T(&c, 2, true);
  c_emxInit_real_T(&av, 1, true);
  c_emxInit_real_T(&cv, 1, true);
  c_emxInit_real_T(&b_mouthBoxes, 1, true);
  c_emxInit_real_T(&c_mouthBoxes, 1, true);
  c_emxInit_real_T(&d_mouthBoxes, 1, true);
  c_emxInit_real_T(&e_mouthBoxes, 1, true);
  b_emxInit_real_T(&b_targetImage, 3, true);
  b_emxInit_real_T(&c_targetImage, 3, true);
  while (j <= faceBoxes->size[0] - 1) {
    if (faceBoxes->data[j + faceBoxes->size[0] * 3] < 1.0) {
      absb = -1;
      apnd = faceBoxes->data[j + faceBoxes->size[0] * 3];
    } else {
      ndbl = muDoubleScalarFloor((faceBoxes->data[j + faceBoxes->size[0] * 3] -
        1.0) + 0.5);
      apnd = 1.0 + ndbl;
      cdiff = (1.0 + ndbl) - faceBoxes->data[j + faceBoxes->size[0] * 3];
      b_absb = muDoubleScalarAbs(faceBoxes->data[j + faceBoxes->size[0] * 3]);
      if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarMax
          (1.0, b_absb)) {
        ndbl++;
        apnd = faceBoxes->data[j + faceBoxes->size[0] * 3];
      } else if (cdiff > 0.0) {
        apnd = 1.0 + (ndbl - 1.0);
      } else {
        ndbl++;
      }

      absb = (int32_T)ndbl - 1;
    }

    i0 = xRange->size[0] * xRange->size[1];
    xRange->size[0] = 1;
    xRange->size[1] = absb + 1;
    emxEnsureCapacity((emxArray__common *)xRange, i0, (int32_T)sizeof(real_T));
    if (absb + 1 > 0) {
      xRange->data[0] = 1.0;
      if (absb + 1 > 1) {
        xRange->data[absb] = apnd;
        i0 = absb + (absb < 0);
        if (i0 >= 0) {
          nm1d2 = (int32_T)((uint32_T)i0 >> 1);
        } else {
          nm1d2 = (int32_T)~(~(uint32_T)i0 >> 1);
        }

        for (k = 1; k < nm1d2; k++) {
          xRange->data[k] = 1.0 + (real_T)k;
          xRange->data[absb - k] = apnd - (real_T)k;
        }

        if (nm1d2 << 1 == absb) {
          xRange->data[nm1d2] = (1.0 + apnd) / 2.0;
        } else {
          xRange->data[nm1d2] = 1.0 + (real_T)nm1d2;
          xRange->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
        }
      }
    }

    i0 = xRange->size[0] * xRange->size[1];
    xRange->size[0] = 1;
    emxEnsureCapacity((emxArray__common *)xRange, i0, (int32_T)sizeof(real_T));
    nm1d2 = xRange->size[0];
    absb = xRange->size[1];
    ndbl = faceBoxes->data[j + faceBoxes->size[0]];
    k = nm1d2 * absb;
    for (i0 = 0; i0 < k; i0++) {
      xRange->data[i0] += ndbl;
    }

    if (faceBoxes->data[j + (faceBoxes->size[0] << 1)] < 1.0) {
      absb = -1;
      apnd = faceBoxes->data[j + (faceBoxes->size[0] << 1)];
    } else {
      ndbl = muDoubleScalarFloor((faceBoxes->data[j + (faceBoxes->size[0] << 1)]
        - 1.0) + 0.5);
      apnd = 1.0 + ndbl;
      cdiff = (1.0 + ndbl) - faceBoxes->data[j + (faceBoxes->size[0] << 1)];
      b_absb = muDoubleScalarAbs(faceBoxes->data[j + (faceBoxes->size[0] << 1)]);
      if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarMax
          (1.0, b_absb)) {
        ndbl++;
        apnd = faceBoxes->data[j + (faceBoxes->size[0] << 1)];
      } else if (cdiff > 0.0) {
        apnd = 1.0 + (ndbl - 1.0);
      } else {
        ndbl++;
      }

      absb = (int32_T)ndbl - 1;
    }

    i0 = yRange->size[0] * yRange->size[1];
    yRange->size[0] = 1;
    yRange->size[1] = absb + 1;
    emxEnsureCapacity((emxArray__common *)yRange, i0, (int32_T)sizeof(real_T));
    if (absb + 1 > 0) {
      yRange->data[0] = 1.0;
      if (absb + 1 > 1) {
        yRange->data[absb] = apnd;
        i0 = absb + (absb < 0);
        if (i0 >= 0) {
          nm1d2 = (int32_T)((uint32_T)i0 >> 1);
        } else {
          nm1d2 = (int32_T)~(~(uint32_T)i0 >> 1);
        }

        for (k = 1; k < nm1d2; k++) {
          yRange->data[k] = 1.0 + (real_T)k;
          yRange->data[absb - k] = apnd - (real_T)k;
        }

        if (nm1d2 << 1 == absb) {
          yRange->data[nm1d2] = (1.0 + apnd) / 2.0;
        } else {
          yRange->data[nm1d2] = 1.0 + (real_T)nm1d2;
          yRange->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
        }
      }
    }

    i0 = yRange->size[0] * yRange->size[1];
    yRange->size[0] = 1;
    emxEnsureCapacity((emxArray__common *)yRange, i0, (int32_T)sizeof(real_T));
    nm1d2 = yRange->size[0];
    absb = yRange->size[1];
    ndbl = faceBoxes->data[j];
    k = nm1d2 * absb;
    for (i0 = 0; i0 < k; i0++) {
      yRange->data[i0] += ndbl;
    }

    i0 = faceImage->size[0] * faceImage->size[1] * faceImage->size[2];
    faceImage->size[0] = xRange->size[1];
    faceImage->size[1] = yRange->size[1];
    faceImage->size[2] = 3;
    emxEnsureCapacity((emxArray__common *)faceImage, i0, (int32_T)sizeof(real_T));
    for (i0 = 0; i0 < 3; i0++) {
      k = yRange->size[1];
      for (i1 = 0; i1 < k; i1++) {
        absb = xRange->size[1];
        for (b_ndbl = 0; b_ndbl < absb; b_ndbl++) {
          faceImage->data[(b_ndbl + faceImage->size[0] * i1) + faceImage->size[0]
            * faceImage->size[1] * i0] = targetImage[(((int32_T)xRange->
            data[xRange->size[0] * b_ndbl] + 240 * ((int32_T)yRange->data
            [yRange->size[0] * i1] - 1)) + 102480 * i0) - 1];
        }
      }
    }

    /* coder needs to know max size of face */
    rgb2gray(faceImage, idxNose);

    /* coder step needs grayscale image */
    /*  detect features in face */
    b_SystemCore_step(SD, &rEyeDetector, idxNose, rEyeBoxes);
    c_SystemCore_step(SD, &lEyeDetector, idxNose, lEyeBoxes);
    d_SystemCore_step(SD, &mouthDetector, idxNose, mouthBoxes);
    e_SystemCore_step(SD, &noseDetector, idxNose, noseBoxes);

    /*  If anything is missing, skip this facebox */
    if ((rEyeBoxes->size[0] == 0) || (lEyeBoxes->size[0] == 0) ||
        (mouthBoxes->size[0] == 0) || (noseBoxes->size[0] == 0)) {
    } else {
      /*  Determine the best features using the pictoral structure, k-fan */
      /* scale of baseImage, so I don't have to keep resizing basePoints */
      /*  Pull out center of boxes (and LR of mouth) and count each feature */
      k = noseBoxes->size[0];
      i0 = noseCenter->size[0] * noseCenter->size[1];
      noseCenter->size[0] = k;
      noseCenter->size[1] = 2;
      emxEnsureCapacity((emxArray__common *)noseCenter, i0, (int32_T)sizeof
                        (real_T));
      for (i0 = 0; i0 < 2; i0++) {
        for (i1 = 0; i1 < k; i1++) {
          noseCenter->data[i1 + noseCenter->size[0] * i0] = noseBoxes->data[i1 +
            noseBoxes->size[0] * i0] + noseBoxes->data[i1 + noseBoxes->size[0] *
            (2 + i0)] / 2.0;
        }
      }

      k = mouthBoxes->size[0];
      absb = mouthBoxes->size[0];
      nm1d2 = mouthBoxes->size[0];
      i0 = b_mouthBoxes->size[0];
      b_mouthBoxes->size[0] = nm1d2;
      emxEnsureCapacity((emxArray__common *)b_mouthBoxes, i0, (int32_T)sizeof
                        (real_T));
      for (i0 = 0; i0 < nm1d2; i0++) {
        b_mouthBoxes->data[i0] = mouthBoxes->data[i0];
      }

      nm1d2 = mouthBoxes->size[0];
      i0 = c_mouthBoxes->size[0];
      c_mouthBoxes->size[0] = nm1d2;
      emxEnsureCapacity((emxArray__common *)c_mouthBoxes, i0, (int32_T)sizeof
                        (real_T));
      for (i0 = 0; i0 < nm1d2; i0++) {
        c_mouthBoxes->data[i0] = mouthBoxes->data[i0 + mouthBoxes->size[0]] +
          mouthBoxes->data[i0 + mouthBoxes->size[0] * 3] / 2.0;
      }

      i0 = mouthLeft->size[0] * mouthLeft->size[1];
      mouthLeft->size[0] = k;
      mouthLeft->size[1] = 2;
      emxEnsureCapacity((emxArray__common *)mouthLeft, i0, (int32_T)sizeof
                        (real_T));
      for (i0 = 0; i0 < k; i0++) {
        mouthLeft->data[i0] = b_mouthBoxes->data[i0];
      }

      for (i0 = 0; i0 < absb; i0++) {
        mouthLeft->data[i0 + mouthLeft->size[0]] = c_mouthBoxes->data[i0];
      }

      k = mouthBoxes->size[0];
      absb = mouthBoxes->size[0];
      nm1d2 = mouthBoxes->size[0];
      i0 = d_mouthBoxes->size[0];
      d_mouthBoxes->size[0] = nm1d2;
      emxEnsureCapacity((emxArray__common *)d_mouthBoxes, i0, (int32_T)sizeof
                        (real_T));
      for (i0 = 0; i0 < nm1d2; i0++) {
        d_mouthBoxes->data[i0] = mouthBoxes->data[i0] + mouthBoxes->data[i0 +
          (mouthBoxes->size[0] << 1)];
      }

      nm1d2 = mouthBoxes->size[0];
      i0 = e_mouthBoxes->size[0];
      e_mouthBoxes->size[0] = nm1d2;
      emxEnsureCapacity((emxArray__common *)e_mouthBoxes, i0, (int32_T)sizeof
                        (real_T));
      for (i0 = 0; i0 < nm1d2; i0++) {
        e_mouthBoxes->data[i0] = mouthBoxes->data[i0 + mouthBoxes->size[0]] +
          mouthBoxes->data[i0 + mouthBoxes->size[0] * 3] / 2.0;
      }

      i0 = mouthRight->size[0] * mouthRight->size[1];
      mouthRight->size[0] = k;
      mouthRight->size[1] = 2;
      emxEnsureCapacity((emxArray__common *)mouthRight, i0, (int32_T)sizeof
                        (real_T));
      for (i0 = 0; i0 < k; i0++) {
        mouthRight->data[i0] = d_mouthBoxes->data[i0];
      }

      for (i0 = 0; i0 < absb; i0++) {
        mouthRight->data[i0 + mouthRight->size[0]] = e_mouthBoxes->data[i0];
      }

      k = lEyeBoxes->size[0];
      i0 = lEyeCenter->size[0] * lEyeCenter->size[1];
      lEyeCenter->size[0] = k;
      lEyeCenter->size[1] = 2;
      emxEnsureCapacity((emxArray__common *)lEyeCenter, i0, (int32_T)sizeof
                        (real_T));
      for (i0 = 0; i0 < 2; i0++) {
        for (i1 = 0; i1 < k; i1++) {
          lEyeCenter->data[i1 + lEyeCenter->size[0] * i0] = lEyeBoxes->data[i1 +
            lEyeBoxes->size[0] * i0] + lEyeBoxes->data[i1 + lEyeBoxes->size[0] *
            (2 + i0)] / 2.0;
        }
      }

      k = rEyeBoxes->size[0];
      i0 = rEyeCenter->size[0] * rEyeCenter->size[1];
      rEyeCenter->size[0] = k;
      rEyeCenter->size[1] = 2;
      emxEnsureCapacity((emxArray__common *)rEyeCenter, i0, (int32_T)sizeof
                        (real_T));
      for (i0 = 0; i0 < 2; i0++) {
        for (i1 = 0; i1 < k; i1++) {
          rEyeCenter->data[i1 + rEyeCenter->size[0] * i0] = rEyeBoxes->data[i1 +
            rEyeBoxes->size[0] * i0] + rEyeBoxes->data[i1 + rEyeBoxes->size[0] *
            (2 + i0)] / 2.0;
        }
      }

      /*  Create matrix with permutation of every feature as a row */
      ndbl = (real_T)noseCenter->size[0] * (real_T)mouthLeft->size[0] * (real_T)
        lEyeCenter->size[0] * (real_T)rEyeCenter->size[0];
      b_ndbl = (int32_T)muDoubleScalarFloor(((real_T)noseCenter->size[0] - 1.0)
        + 0.5);
      b_apnd = b_ndbl + 1;
      nm1d2 = (b_ndbl - noseCenter->size[0]) + 1;
      absb = noseCenter->size[0];
      if (muDoubleScalarAbs(nm1d2) < 4.4408920985006262E-16 * (real_T)absb) {
        b_ndbl++;
        b_apnd = noseCenter->size[0];
      } else if (nm1d2 > 0) {
        b_apnd = b_ndbl;
      } else {
        b_ndbl++;
      }

      i0 = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = b_ndbl;
      emxEnsureCapacity((emxArray__common *)y, i0, (int32_T)sizeof(real_T));
      if (b_ndbl > 0) {
        y->data[0] = 1.0;
        if (b_ndbl > 1) {
          y->data[b_ndbl - 1] = b_apnd;
          i0 = b_ndbl - 1;
          i0 += (i0 < 0);
          if (i0 >= 0) {
            nm1d2 = (int32_T)((uint32_T)i0 >> 1);
          } else {
            nm1d2 = (int32_T)~(~(uint32_T)i0 >> 1);
          }

          for (k = 1; k < nm1d2; k++) {
            y->data[k] = 1.0 + (real_T)k;
            y->data[(b_ndbl - k) - 1] = b_apnd - k;
          }

          if (nm1d2 << 1 == b_ndbl - 1) {
            y->data[nm1d2] = (1.0 + (real_T)b_apnd) / 2.0;
          } else {
            y->data[nm1d2] = 1.0 + (real_T)nm1d2;
            y->data[nm1d2 + 1] = b_apnd - nm1d2;
          }
        }
      }

      repmat(y, ndbl / (real_T)noseCenter->size[0], idxNose);
      b_ndbl = (int32_T)muDoubleScalarFloor(((real_T)mouthLeft->size[0] - 1.0) +
        0.5);
      b_apnd = b_ndbl + 1;
      nm1d2 = (b_ndbl - mouthLeft->size[0]) + 1;
      absb = mouthLeft->size[0];
      if (muDoubleScalarAbs(nm1d2) < 4.4408920985006262E-16 * (real_T)absb) {
        b_ndbl++;
        b_apnd = mouthLeft->size[0];
      } else if (nm1d2 > 0) {
        b_apnd = b_ndbl;
      } else {
        b_ndbl++;
      }

      i0 = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = b_ndbl;
      emxEnsureCapacity((emxArray__common *)y, i0, (int32_T)sizeof(real_T));
      if (b_ndbl > 0) {
        y->data[0] = 1.0;
        if (b_ndbl > 1) {
          y->data[b_ndbl - 1] = b_apnd;
          i0 = b_ndbl - 1;
          i0 += (i0 < 0);
          if (i0 >= 0) {
            nm1d2 = (int32_T)((uint32_T)i0 >> 1);
          } else {
            nm1d2 = (int32_T)~(~(uint32_T)i0 >> 1);
          }

          for (k = 1; k < nm1d2; k++) {
            y->data[k] = 1.0 + (real_T)k;
            y->data[(b_ndbl - k) - 1] = b_apnd - k;
          }

          if (nm1d2 << 1 == b_ndbl - 1) {
            y->data[nm1d2] = (1.0 + (real_T)b_apnd) / 2.0;
          } else {
            y->data[nm1d2] = 1.0 + (real_T)nm1d2;
            y->data[nm1d2 + 1] = b_apnd - nm1d2;
          }
        }
      }

      b_repmat(y, ndbl / (real_T)noseCenter->size[0] / (real_T)mouthLeft->size[0],
               noseCenter->size[0], idxMouth);
      b_ndbl = (int32_T)muDoubleScalarFloor(((real_T)lEyeCenter->size[0] - 1.0)
        + 0.5);
      b_apnd = b_ndbl + 1;
      nm1d2 = (b_ndbl - lEyeCenter->size[0]) + 1;
      absb = lEyeCenter->size[0];
      if (muDoubleScalarAbs(nm1d2) < 4.4408920985006262E-16 * (real_T)absb) {
        b_ndbl++;
        b_apnd = lEyeCenter->size[0];
      } else if (nm1d2 > 0) {
        b_apnd = b_ndbl;
      } else {
        b_ndbl++;
      }

      i0 = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = b_ndbl;
      emxEnsureCapacity((emxArray__common *)y, i0, (int32_T)sizeof(real_T));
      if (b_ndbl > 0) {
        y->data[0] = 1.0;
        if (b_ndbl > 1) {
          y->data[b_ndbl - 1] = b_apnd;
          i0 = b_ndbl - 1;
          i0 += (i0 < 0);
          if (i0 >= 0) {
            nm1d2 = (int32_T)((uint32_T)i0 >> 1);
          } else {
            nm1d2 = (int32_T)~(~(uint32_T)i0 >> 1);
          }

          for (k = 1; k < nm1d2; k++) {
            y->data[k] = 1.0 + (real_T)k;
            y->data[(b_ndbl - k) - 1] = b_apnd - k;
          }

          if (nm1d2 << 1 == b_ndbl - 1) {
            y->data[nm1d2] = (1.0 + (real_T)b_apnd) / 2.0;
          } else {
            y->data[nm1d2] = 1.0 + (real_T)nm1d2;
            y->data[nm1d2 + 1] = b_apnd - nm1d2;
          }
        }
      }

      b_repmat(y, ndbl / (real_T)noseCenter->size[0] / (real_T)mouthLeft->size[0]
               / (real_T)lEyeCenter->size[0], (real_T)noseCenter->size[0] *
               (real_T)mouthLeft->size[0], idxLEye);
      b_ndbl = (int32_T)muDoubleScalarFloor(((real_T)rEyeCenter->size[0] - 1.0)
        + 0.5);
      b_apnd = b_ndbl + 1;
      nm1d2 = (b_ndbl - rEyeCenter->size[0]) + 1;
      absb = rEyeCenter->size[0];
      if (muDoubleScalarAbs(nm1d2) < 4.4408920985006262E-16 * (real_T)absb) {
        b_ndbl++;
        b_apnd = rEyeCenter->size[0];
      } else if (nm1d2 > 0) {
        b_apnd = b_ndbl;
      } else {
        b_ndbl++;
      }

      i0 = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = b_ndbl;
      emxEnsureCapacity((emxArray__common *)y, i0, (int32_T)sizeof(real_T));
      if (b_ndbl > 0) {
        y->data[0] = 1.0;
        if (b_ndbl > 1) {
          y->data[b_ndbl - 1] = b_apnd;
          i0 = b_ndbl - 1;
          i0 += (i0 < 0);
          if (i0 >= 0) {
            nm1d2 = (int32_T)((uint32_T)i0 >> 1);
          } else {
            nm1d2 = (int32_T)~(~(uint32_T)i0 >> 1);
          }

          for (k = 1; k < nm1d2; k++) {
            y->data[k] = 1.0 + (real_T)k;
            y->data[(b_ndbl - k) - 1] = b_apnd - k;
          }

          if (nm1d2 << 1 == b_ndbl - 1) {
            y->data[nm1d2] = (1.0 + (real_T)b_apnd) / 2.0;
          } else {
            y->data[nm1d2] = 1.0 + (real_T)nm1d2;
            y->data[nm1d2 + 1] = b_apnd - nm1d2;
          }
        }
      }

      c_repmat(y, ndbl / (real_T)rEyeCenter->size[0], idxREye);

      /*  Feature matrix, points = [x1 y1 x2 y2 x3 y3 x4 y4] */
      absb = idxNose->size[0] * idxNose->size[1];
      nm1d2 = idxMouth->size[0] * idxMouth->size[1];
      b_ndbl = idxMouth->size[0] * idxMouth->size[1];
      b_apnd = idxLEye->size[0] * idxLEye->size[1];
      bk = idxREye->size[1];
      i0 = points->size[0] * points->size[1];
      points->size[0] = absb;
      points->size[1] = 10;
      emxEnsureCapacity((emxArray__common *)points, i0, (int32_T)sizeof(real_T));
      for (i0 = 0; i0 < 2; i0++) {
        for (i1 = 0; i1 < absb; i1++) {
          points->data[i1 + points->size[0] * i0] = noseCenter->data[((int32_T)
            idxNose->data[i1] + noseCenter->size[0] * i0) - 1];
        }
      }

      for (i0 = 0; i0 < 2; i0++) {
        for (i1 = 0; i1 < nm1d2; i1++) {
          points->data[i1 + points->size[0] * (i0 + 2)] = mouthLeft->data
            [((int32_T)idxMouth->data[i1] + mouthLeft->size[0] * i0) - 1];
        }
      }

      for (i0 = 0; i0 < 2; i0++) {
        for (i1 = 0; i1 < b_ndbl; i1++) {
          points->data[i1 + points->size[0] * (i0 + 4)] = mouthRight->data
            [((int32_T)idxMouth->data[i1] + mouthRight->size[0] * i0) - 1];
        }
      }

      for (i0 = 0; i0 < 2; i0++) {
        for (i1 = 0; i1 < b_apnd; i1++) {
          points->data[i1 + points->size[0] * (i0 + 6)] = lEyeCenter->data
            [((int32_T)idxLEye->data[i1] + lEyeCenter->size[0] * i0) - 1];
        }
      }

      for (i0 = 0; i0 < 2; i0++) {
        for (i1 = 0; i1 < bk; i1++) {
          points->data[i1 + points->size[0] * (i0 + 8)] = rEyeCenter->data
            [((int32_T)idxREye->data[i1] + rEyeCenter->size[0] * i0) - 1];
        }
      }

      /*  Points of my test face */
      /*  k-Fan distances for base face */
      /*  This is pretty slow, try to vectorize it later */
      i0 = dists->size[0] * dists->size[1];
      dists->size[0] = (int32_T)ndbl;
      dists->size[1] = 16;
      emxEnsureCapacity((emxArray__common *)dists, i0, (int32_T)sizeof(real_T));
      k = (int32_T)ndbl << 4;
      for (i0 = 0; i0 < k; i0++) {
        dists->data[i0] = 0.0;
      }

      for (nm1d2 = 0; nm1d2 < (int32_T)ndbl; nm1d2++) {
        /*  Converts it into the k-fan space, right now using Nose and Right Eye */
        for (i0 = 0; i0 < 4; i0++) {
          b_points[i0] = points->data[nm1d2 + points->size[0] * (2 + (i0 << 1))];
        }

        for (i0 = 0; i0 < 4; i0++) {
          b_points[4 + i0] = points->data[nm1d2 + points->size[0] * (3 + (i0 <<
            1))];
        }

        for (i0 = 0; i0 < 2; i0++) {
          sz[i0] = points->data[nm1d2 + points->size[0] * i0];
        }

        bsxfun(b_points, sz, a);
        for (k = 0; k < 8; k++) {
          b_points[k] = a[k] * a[k];
        }

        sum(b_points, dist1);
        b_sqrt(dist1);
        for (i0 = 0; i0 < 4; i0++) {
          b_points[i0] = points->data[nm1d2 + points->size[0] * iv0[i0]];
        }

        for (i0 = 0; i0 < 4; i0++) {
          b_points[4 + i0] = points->data[nm1d2 + points->size[0] * iv1[i0]];
        }

        for (i0 = 0; i0 < 2; i0++) {
          sz[i0] = points->data[nm1d2 + points->size[0] * (2 + i0)];
        }

        bsxfun(b_points, sz, a);
        for (k = 0; k < 8; k++) {
          b_points[k] = a[k] * a[k];
        }

        sum(b_points, dist2);
        b_sqrt(dist2);
        for (i0 = 0; i0 < 4; i0++) {
          b_points[i0] = points->data[nm1d2 + points->size[0] * iv2[i0]];
        }

        for (i0 = 0; i0 < 4; i0++) {
          b_points[4 + i0] = points->data[nm1d2 + points->size[0] * iv3[i0]];
        }

        for (i0 = 0; i0 < 2; i0++) {
          sz[i0] = points->data[nm1d2 + points->size[0] * (4 + i0)];
        }

        bsxfun(b_points, sz, a);
        for (k = 0; k < 8; k++) {
          b_points[k] = a[k] * a[k];
        }

        sum(b_points, dist3);
        b_sqrt(dist3);
        for (i0 = 0; i0 < 4; i0++) {
          b_points[i0] = points->data[nm1d2 + points->size[0] * iv4[i0]];
        }

        for (i0 = 0; i0 < 4; i0++) {
          b_points[4 + i0] = points->data[nm1d2 + points->size[0] * iv5[i0]];
        }

        for (i0 = 0; i0 < 2; i0++) {
          sz[i0] = points->data[nm1d2 + points->size[0] * (6 + i0)];
        }

        bsxfun(b_points, sz, a);
        for (k = 0; k < 8; k++) {
          b_points[k] = a[k] * a[k];
        }

        sum(b_points, dist4);
        b_sqrt(dist4);
        for (i0 = 0; i0 < 4; i0++) {
          b_dists[i0] = dist1[i0];
        }

        for (i0 = 0; i0 < 4; i0++) {
          b_dists[i0 + 4] = dist2[i0];
        }

        for (i0 = 0; i0 < 4; i0++) {
          b_dists[i0 + 8] = dist3[i0];
        }

        for (i0 = 0; i0 < 4; i0++) {
          b_dists[i0 + 12] = dist4[i0];
        }

        cdiff = b_dists[0];
        for (k = 0; k < 15; k++) {
          cdiff += b_dists[k + 1];
        }

        cdiff /= 16.0;
        for (i0 = 0; i0 < 16; i0++) {
          b_dists[i0] /= cdiff;
        }

        /*  dividing by mean seems to be best way to normalize */
        for (i0 = 0; i0 < 16; i0++) {
          dists->data[nm1d2 + dists->size[0] * i0] = b_dists[i0];
        }
      }

      /*  Find the closest in k-fan space */
      na1 = dists->size[0];
      i0 = c->size[0] * c->size[1];
      c->size[0] = dists->size[0];
      c->size[1] = 16;
      emxEnsureCapacity((emxArray__common *)c, i0, (int32_T)sizeof(real_T));
      b_ndbl = dists->size[0];
      if (b_ndbl == 0) {
      } else {
        nm1d2 = dists->size[0];
        i0 = av->size[0];
        av->size[0] = nm1d2;
        emxEnsureCapacity((emxArray__common *)av, i0, (int32_T)sizeof(real_T));
        b_apnd = 0;
        bk = 0;
        b_ndbl = dists->size[0];
        absb = dists->size[0];
        nm1d2 = dists->size[0];
        i0 = (absb << 4) - nm1d2;
        absb = 0;
        while ((b_ndbl > 0) && (absb <= i0)) {
          for (k = 0; k + 1 <= na1; k++) {
            av->data[k] = dists->data[b_apnd + k];
          }

          i1 = cv->size[0];
          cv->size[0] = av->size[0];
          emxEnsureCapacity((emxArray__common *)cv, i1, (int32_T)sizeof(real_T));
          k = av->size[0];
          for (i1 = 0; i1 < k; i1++) {
            cv->data[i1] = av->data[i1] - dv0[bk];
          }

          for (k = 0; k + 1 <= b_ndbl; k++) {
            c->data[absb + k] = cv->data[k];
          }

          b_apnd += na1;
          bk++;
          absb += b_ndbl;
        }
      }

      for (i0 = 0; i0 < 2; i0++) {
        sz[i0] = c->size[i0];
      }

      i0 = dists->size[0] * dists->size[1];
      dists->size[0] = (int32_T)sz[0];
      dists->size[1] = 16;
      emxEnsureCapacity((emxArray__common *)dists, i0, (int32_T)sizeof(real_T));
      i0 = c->size[0] << 4;
      for (k = 0; k < i0; k++) {
        dists->data[k] = muDoubleScalarAbs(c->data[k]);
      }

      for (i0 = 0; i0 < 2; i0++) {
        sz[i0] = dists->size[i0];
      }

      i0 = av->size[0];
      av->size[0] = (int32_T)sz[0];
      emxEnsureCapacity((emxArray__common *)av, i0, (int32_T)sizeof(real_T));
      if (dists->size[0] == 0) {
        i0 = av->size[0];
        av->size[0] = (int32_T)sz[0];
        emxEnsureCapacity((emxArray__common *)av, i0, (int32_T)sizeof(real_T));
        k = (int32_T)sz[0];
        for (i0 = 0; i0 < k; i0++) {
          av->data[i0] = 0.0;
        }
      } else {
        absb = dists->size[0];
        nm1d2 = -1;
        b_apnd = -1;
        for (b_ndbl = 1; b_ndbl <= absb; b_ndbl++) {
          b_apnd++;
          bk = b_apnd;
          ndbl = dists->data[b_apnd];
          for (k = 0; k < 15; k++) {
            bk += absb;
            ndbl += dists->data[bk];
          }

          nm1d2++;
          av->data[nm1d2] = ndbl;
        }
      }

      b_apnd = 1;
      absb = av->size[0];
      ndbl = av->data[0];
      b_ndbl = 0;
      if (av->size[0] > 1) {
        if (muDoubleScalarIsNaN(av->data[0])) {
          bk = 1;
          exitg2 = false;
          while ((!exitg2) && (bk + 1 <= absb)) {
            b_apnd = bk + 1;
            if (!muDoubleScalarIsNaN(av->data[bk])) {
              ndbl = av->data[bk];
              b_ndbl = bk;
              exitg2 = true;
            } else {
              bk++;
            }
          }
        }

        if (b_apnd < av->size[0]) {
          while (b_apnd + 1 <= absb) {
            if (av->data[b_apnd] < ndbl) {
              ndbl = av->data[b_apnd];
              b_ndbl = b_apnd;
            }

            b_apnd++;
          }
        }
      }

      /*  If minimum is too far away, reject all faces, otherwise retrun the best */
      if (ndbl > 4.0) {
        nm1d2 = 0;
        b_apnd = 0;
      } else {
        /*  Return points, the index in boxes, and the homography (don't use homography anymore though) */
        for (i0 = 0; i0 < 10; i0++) {
          x[i0] = points->data[b_ndbl + points->size[0] * i0];
        }

        nm1d2 = 1;
        b_apnd = 10;
        for (k = 0; k < 10; k++) {
          ndbl = muDoubleScalarRound(x[k]);
          bestPoints_data[k] = ndbl;
          x[k] = ndbl;
        }

        /*  Calculate the left and right corners of the mouth */
        absb = (int32_T)idxMouth->data[b_ndbl];
        for (i0 = 0; i0 < 4; i0++) {
          bestMouth_data[i0] = mouthBoxes->data[(absb + mouthBoxes->size[0] * i0)
            - 1];
        }

        for (i0 = 0; i0 < 2; i0++) {
          sz[i0] = bestMouth_data[i0] + bestMouth_data[2 + i0] / 2.0;
        }

        ndbl = x[6] - x[8];
        absb = (int32_T)idxMouth->data[b_ndbl];
        cdiff = mouthBoxes->data[(absb + (mouthBoxes->size[0] << 1)) - 1] / 2.0;
        for (i0 = 0; i0 < 2; i0++) {
          b_mouthLeft[i0] = sz[i0] - (x[6 + i0] - x[8 + i0]) / ndbl * cdiff;
        }

        ndbl = x[6] - x[8];
        absb = (int32_T)idxMouth->data[b_ndbl];
        cdiff = mouthBoxes->data[(absb + (mouthBoxes->size[0] << 1)) - 1] / 2.0;
        for (i0 = 0; i0 < 2; i0++) {
          apnd = sz[i0] + (x[6 + i0] - x[8 + i0]) / ndbl * cdiff;
          b_mouthRight[i0] = apnd;
          bv0[i0] = !muDoubleScalarIsInf(b_mouthLeft[i0]);
          bv1[i0] = !muDoubleScalarIsNaN(b_mouthLeft[i0]);
          bv2[i0] = !muDoubleScalarIsInf(apnd);
          bv3[i0] = !muDoubleScalarIsNaN(apnd);
        }

        b_y = false;
        k = 0;
        exitg1 = false;
        while ((!exitg1) && (k < 2)) {
          if (!((bv0[k] && bv1[k] && (bv2[k] && bv3[k])) == 0)) {
            b_y = true;
            exitg1 = true;
          } else {
            k++;
          }
        }

        if (b_y) {
          /*  Reject NaN or Inf points, it happens sometimes */
          for (i0 = 0; i0 < 2; i0++) {
            bestPoints_data[2 + i0] = b_mouthLeft[i0];
          }

          for (i0 = 0; i0 < 2; i0++) {
            bestPoints_data[4 + i0] = b_mouthRight[i0];
          }
        }
      }

      /*  If featSelectLive rejects points, skip this facebox */
      if ((nm1d2 == 0) || (b_apnd == 0)) {
      } else {
        /*  Reshape control points for warping */
        if (2 > b_apnd) {
          i0 = 1;
          i1 = 1;
          b_ndbl = 0;
        } else {
          i0 = 2;
          i1 = 2;
          b_ndbl = b_apnd;
        }

        /*  Fit transformation and warp image and mask */
        absb = b_apnd - 1;
        nm1d2 = (int32_T)((uint32_T)absb >> 1) + 1;
        absb = b_apnd - 1;
        k = (int32_T)((uint32_T)absb >> 1);
        for (absb = 0; absb <= k; absb++) {
          c_bestPoints_data[absb] = bestPoints_data[absb << 1];
        }

        k = div_s32_floor(b_ndbl - i0, i1);
        for (absb = 0; absb <= k; absb++) {
          d_bestPoints_data[absb] = bestPoints_data[(i0 + i1 * absb) - 1];
        }

        bestPoints_size[0] = nm1d2;
        bestPoints_size[1] = 2;
        for (absb = 0; absb < nm1d2; absb++) {
          b_bestPoints_data[absb] = c_bestPoints_data[absb];
        }

        k = div_s32_floor(b_ndbl - i0, i1) + 1;
        for (i0 = 0; i0 < k; i0++) {
          b_bestPoints_data[i0 + nm1d2] = d_bestPoints_data[i0];
        }

        fitgeotrans(b_bestPoints_data, bestPoints_size, &expl_temp);
        for (i0 = 0; i0 < 9; i0++) {
          tform_T[i0] = expl_temp.T[i0];
        }

        i0 = b_targetImage->size[0] * b_targetImage->size[1] *
          b_targetImage->size[2];
        b_targetImage->size[0] = xRange->size[1];
        b_targetImage->size[1] = yRange->size[1];
        b_targetImage->size[2] = 3;
        emxEnsureCapacity((emxArray__common *)b_targetImage, i0, (int32_T)sizeof
                          (real_T));
        for (i0 = 0; i0 < 3; i0++) {
          k = yRange->size[1];
          for (i1 = 0; i1 < k; i1++) {
            absb = xRange->size[1];
            for (b_ndbl = 0; b_ndbl < absb; b_ndbl++) {
              b_targetImage->data[(b_ndbl + b_targetImage->size[0] * i1) +
                b_targetImage->size[0] * b_targetImage->size[1] * i0] =
                targetImage[(((int32_T)xRange->data[xRange->size[0] * b_ndbl] +
                              240 * ((int32_T)yRange->data[yRange->size[0] * i1]
                - 1)) + 102480 * i0) - 1];
            }
          }
        }

        for (i0 = 0; i0 < 3; i0++) {
          d_targetImage[i0] = b_targetImage->size[i0];
        }

        imref2d_imref2d(d_targetImage, sz, b_mouthLeft, b_mouthRight, &ndbl,
                        &apnd);
        remapPointsAndResample(swapImage, tform_T, b_mouthRight, faceImage);
        i0 = c_targetImage->size[0] * c_targetImage->size[1] *
          c_targetImage->size[2];
        c_targetImage->size[0] = xRange->size[1];
        c_targetImage->size[1] = yRange->size[1];
        c_targetImage->size[2] = 3;
        emxEnsureCapacity((emxArray__common *)c_targetImage, i0, (int32_T)sizeof
                          (real_T));
        for (i0 = 0; i0 < 3; i0++) {
          k = yRange->size[1];
          for (i1 = 0; i1 < k; i1++) {
            absb = xRange->size[1];
            for (b_ndbl = 0; b_ndbl < absb; b_ndbl++) {
              c_targetImage->data[(b_ndbl + c_targetImage->size[0] * i1) +
                c_targetImage->size[0] * c_targetImage->size[1] * i0] =
                targetImage[(((int32_T)xRange->data[xRange->size[0] * b_ndbl] +
                              240 * ((int32_T)yRange->data[yRange->size[0] * i1]
                - 1)) + 102480 * i0) - 1];
            }
          }
        }

        for (i0 = 0; i0 < 3; i0++) {
          d_targetImage[i0] = c_targetImage->size[i0];
        }

        imref2d_imref2d(d_targetImage, sz, b_mouthLeft, b_mouthRight, &ndbl,
                        &apnd);
        b_remapPointsAndResample(SD, swapMask, tform_T, b_mouthRight, idxNose);
        memset(&SD->f8.imageMask[0], 0, 102480U * sizeof(boolean_T));
        k = idxNose->size[1];
        for (i0 = 0; i0 < k; i0++) {
          absb = idxNose->size[0];
          for (i1 = 0; i1 < absb; i1++) {
            SD->f8.imageMask[((int32_T)xRange->data[xRange->size[0] * i1] + 240 *
                              ((int32_T)yRange->data[yRange->size[0] * i0] - 1))
              - 1] = (idxNose->data[i1 + idxNose->size[0] * i0] != 0.0);
          }
        }

        memcpy(&SD->f8.morphedBlend[0], &targetImage[0], 307440U * sizeof(real_T));
        for (i0 = 0; i0 < 3; i0++) {
          k = faceImage->size[1];
          for (i1 = 0; i1 < k; i1++) {
            absb = faceImage->size[0];
            for (b_ndbl = 0; b_ndbl < absb; b_ndbl++) {
              SD->f8.morphedBlend[(((int32_T)xRange->data[xRange->size[0] *
                                    b_ndbl] + 240 * ((int32_T)yRange->
                data[yRange->size[0] * i1] - 1)) + 102480 * i0) - 1] =
                faceImage->data[(b_ndbl + faceImage->size[0] * i1) +
                faceImage->size[0] * faceImage->size[1] * i0];
            }
          }
        }

        /* PYRAMIDBLUR pyramid blur two pyramid objects using a binary mask */
        /*  First -> Second */
        imfilter(SD->f8.morphedBlend, SD->f8.gaussTemp);
        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 214; i1++) {
            for (b_ndbl = 0; b_ndbl < 120; b_ndbl++) {
              SD->f8.gaussian1_2[(b_ndbl + 120 * i1) + 25680 * i0] =
                SD->f8.gaussTemp[((b_ndbl << 1) + 240 * (i1 << 1)) + 102480 * i0];
            }
          }
        }

        memset(&SD->f8.gaussTemp[0], 0, 307440U * sizeof(real_T));
        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 214; i1++) {
            for (b_ndbl = 0; b_ndbl < 120; b_ndbl++) {
              SD->f8.gaussTemp[((b_ndbl << 1) + 240 * (i1 << 1)) + 102480 * i0] =
                SD->f8.gaussian1_2[(b_ndbl + 120 * i1) + 25680 * i0];
            }
          }
        }

        b_imfilter(SD->f8.gaussTemp, SD->f8.dv1);
        for (i0 = 0; i0 < 307440; i0++) {
          SD->f8.morphedBlend[i0] -= SD->f8.dv1[i0];
        }

        imfilter(targetImage, SD->f8.gaussTemp);
        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 214; i1++) {
            for (b_ndbl = 0; b_ndbl < 120; b_ndbl++) {
              SD->f8.gaussian2_2[(b_ndbl + 120 * i1) + 25680 * i0] =
                SD->f8.gaussTemp[((b_ndbl << 1) + 240 * (i1 << 1)) + 102480 * i0];
            }
          }
        }

        memset(&SD->f8.gaussTemp[0], 0, 307440U * sizeof(real_T));
        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 214; i1++) {
            for (b_ndbl = 0; b_ndbl < 120; b_ndbl++) {
              SD->f8.gaussTemp[((b_ndbl << 1) + 240 * (i1 << 1)) + 102480 * i0] =
                SD->f8.gaussian2_2[(b_ndbl + 120 * i1) + 25680 * i0];
            }
          }
        }

        b_imfilter(SD->f8.gaussTemp, SD->f8.laplacian2_1);
        for (i0 = 0; i0 < 307440; i0++) {
          SD->f8.laplacian2_1[i0] = targetImage[i0] - SD->f8.laplacian2_1[i0];
        }

        c_imfilter(SD->f8.imageMask, SD->f8.d_gaussTemp);
        for (i0 = 0; i0 < 214; i0++) {
          for (i1 = 0; i1 < 120; i1++) {
            gaussMask_2[i1 + 120 * i0] = SD->f8.d_gaussTemp[(i1 << 1) + 240 *
              (i0 << 1)];
          }
        }

        memset(&SD->f8.d_gaussTemp[0], 0, 102480U * sizeof(boolean_T));
        for (i0 = 0; i0 < 214; i0++) {
          for (i1 = 0; i1 < 120; i1++) {
            SD->f8.d_gaussTemp[(i1 << 1) + 240 * (i0 << 1)] = gaussMask_2[i1 +
              120 * i0];
          }
        }

        d_imfilter(SD->f8.d_gaussTemp, SD->f8.unusedExpr);

        /*  Second -> Third */
        e_imfilter(SD->f8.gaussian1_2, SD->f8.b_gaussTemp);
        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 107; i1++) {
            for (b_ndbl = 0; b_ndbl < 60; b_ndbl++) {
              SD->f8.gaussian1_3[(b_ndbl + 60 * i1) + 6420 * i0] =
                SD->f8.b_gaussTemp[((b_ndbl << 1) + 120 * (i1 << 1)) + 25680 *
                i0];
            }
          }
        }

        memset(&SD->f8.b_gaussTemp[0], 0, 77040U * sizeof(real_T));
        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 107; i1++) {
            for (b_ndbl = 0; b_ndbl < 60; b_ndbl++) {
              SD->f8.b_gaussTemp[((b_ndbl << 1) + 120 * (i1 << 1)) + 25680 * i0]
                = SD->f8.gaussian1_3[(b_ndbl + 60 * i1) + 6420 * i0];
            }
          }
        }

        f_imfilter(SD->f8.b_gaussTemp, SD->f8.dv2);
        for (i0 = 0; i0 < 77040; i0++) {
          SD->f8.gaussian1_2[i0] -= SD->f8.dv2[i0];
        }

        e_imfilter(SD->f8.gaussian2_2, SD->f8.b_gaussTemp);
        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 107; i1++) {
            for (b_ndbl = 0; b_ndbl < 60; b_ndbl++) {
              SD->f8.gaussian2_3[(b_ndbl + 60 * i1) + 6420 * i0] =
                SD->f8.b_gaussTemp[((b_ndbl << 1) + 120 * (i1 << 1)) + 25680 *
                i0];
            }
          }
        }

        memset(&SD->f8.b_gaussTemp[0], 0, 77040U * sizeof(real_T));
        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 107; i1++) {
            for (b_ndbl = 0; b_ndbl < 60; b_ndbl++) {
              SD->f8.b_gaussTemp[((b_ndbl << 1) + 120 * (i1 << 1)) + 25680 * i0]
                = SD->f8.gaussian2_3[(b_ndbl + 60 * i1) + 6420 * i0];
            }
          }
        }

        f_imfilter(SD->f8.b_gaussTemp, SD->f8.dv2);
        for (i0 = 0; i0 < 77040; i0++) {
          SD->f8.gaussian2_2[i0] -= SD->f8.dv2[i0];
        }

        g_imfilter(SD, gaussMask_2, gaussTemp);
        for (i0 = 0; i0 < 107; i0++) {
          for (i1 = 0; i1 < 60; i1++) {
            gaussMask_3[i1 + 60 * i0] = gaussTemp[(i1 << 1) + 120 * (i0 << 1)];
          }
        }

        memset(&gaussTemp[0], 0, 25680U * sizeof(boolean_T));
        for (i0 = 0; i0 < 107; i0++) {
          for (i1 = 0; i1 < 60; i1++) {
            gaussTemp[(i1 << 1) + 120 * (i0 << 1)] = gaussMask_3[i1 + 60 * i0];
          }
        }

        h_imfilter(SD, gaussTemp, unusedExpr);

        /*  Third -> Fourth */
        i_imfilter(SD->f8.gaussian1_3, SD->f8.c_gaussTemp);
        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 54; i1++) {
            for (b_ndbl = 0; b_ndbl < 30; b_ndbl++) {
              SD->f8.gaussian1_4[(b_ndbl + 30 * i1) + 1620 * i0] =
                SD->f8.c_gaussTemp[((b_ndbl << 1) + 60 * (i1 << 1)) + 6420 * i0];
            }
          }
        }

        memset(&SD->f8.c_gaussTemp[0], 0, 19260U * sizeof(real_T));
        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 54; i1++) {
            for (b_ndbl = 0; b_ndbl < 30; b_ndbl++) {
              SD->f8.c_gaussTemp[((b_ndbl << 1) + 60 * (i1 << 1)) + 6420 * i0] =
                SD->f8.gaussian1_4[(b_ndbl + 30 * i1) + 1620 * i0];
            }
          }
        }

        j_imfilter(SD->f8.c_gaussTemp, SD->f8.dv3);
        for (i0 = 0; i0 < 19260; i0++) {
          SD->f8.gaussian1_3[i0] -= SD->f8.dv3[i0];
        }

        i_imfilter(SD->f8.gaussian2_3, SD->f8.c_gaussTemp);
        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 54; i1++) {
            for (b_ndbl = 0; b_ndbl < 30; b_ndbl++) {
              SD->f8.gaussian2_4[(b_ndbl + 30 * i1) + 1620 * i0] =
                SD->f8.c_gaussTemp[((b_ndbl << 1) + 60 * (i1 << 1)) + 6420 * i0];
            }
          }
        }

        memset(&SD->f8.c_gaussTemp[0], 0, 19260U * sizeof(real_T));
        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 54; i1++) {
            for (b_ndbl = 0; b_ndbl < 30; b_ndbl++) {
              SD->f8.c_gaussTemp[((b_ndbl << 1) + 60 * (i1 << 1)) + 6420 * i0] =
                SD->f8.gaussian2_4[(b_ndbl + 30 * i1) + 1620 * i0];
            }
          }
        }

        j_imfilter(SD->f8.c_gaussTemp, SD->f8.dv3);
        for (i0 = 0; i0 < 19260; i0++) {
          SD->f8.gaussian2_3[i0] -= SD->f8.dv3[i0];
        }

        k_imfilter(gaussMask_3, b_gaussTemp);
        for (i0 = 0; i0 < 54; i0++) {
          for (i1 = 0; i1 < 30; i1++) {
            gaussMask_4[i1 + 30 * i0] = b_gaussTemp[(i1 << 1) + 60 * (i0 << 1)];
          }
        }

        memset(&b_gaussTemp[0], 0, 6420U * sizeof(boolean_T));
        for (i0 = 0; i0 < 54; i0++) {
          for (i1 = 0; i1 < 30; i1++) {
            b_gaussTemp[(i1 << 1) + 60 * (i0 << 1)] = gaussMask_4[i1 + 30 * i0];
          }
        }

        l_imfilter(b_gaussTemp, b_unusedExpr);

        /*  Fourth -> Fifth */
        m_imfilter(SD->f8.gaussian1_4, SD->f8.e_gaussTemp);
        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 27; i1++) {
            for (b_ndbl = 0; b_ndbl < 15; b_ndbl++) {
              gaussian1_5[(b_ndbl + 15 * i1) + 405 * i0] = SD->f8.e_gaussTemp
                [((b_ndbl << 1) + 30 * (i1 << 1)) + 1620 * i0];
            }
          }
        }

        memset(&SD->f8.e_gaussTemp[0], 0, 4860U * sizeof(real_T));
        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 27; i1++) {
            for (b_ndbl = 0; b_ndbl < 15; b_ndbl++) {
              SD->f8.e_gaussTemp[((b_ndbl << 1) + 30 * (i1 << 1)) + 1620 * i0] =
                gaussian1_5[(b_ndbl + 15 * i1) + 405 * i0];
            }
          }
        }

        n_imfilter(SD->f8.e_gaussTemp, SD->f8.dv4);
        for (i0 = 0; i0 < 4860; i0++) {
          SD->f8.gaussian1_4[i0] -= SD->f8.dv4[i0];
        }

        m_imfilter(SD->f8.gaussian2_4, SD->f8.e_gaussTemp);
        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 27; i1++) {
            for (b_ndbl = 0; b_ndbl < 15; b_ndbl++) {
              gaussian2_5[(b_ndbl + 15 * i1) + 405 * i0] = SD->f8.e_gaussTemp
                [((b_ndbl << 1) + 30 * (i1 << 1)) + 1620 * i0];
            }
          }
        }

        memset(&SD->f8.e_gaussTemp[0], 0, 4860U * sizeof(real_T));
        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 27; i1++) {
            for (b_ndbl = 0; b_ndbl < 15; b_ndbl++) {
              SD->f8.e_gaussTemp[((b_ndbl << 1) + 30 * (i1 << 1)) + 1620 * i0] =
                gaussian2_5[(b_ndbl + 15 * i1) + 405 * i0];
            }
          }
        }

        n_imfilter(SD->f8.e_gaussTemp, SD->f8.dv4);
        for (i0 = 0; i0 < 4860; i0++) {
          SD->f8.gaussian2_4[i0] -= SD->f8.dv4[i0];
        }

        o_imfilter(gaussMask_4, c_gaussTemp);
        for (i0 = 0; i0 < 27; i0++) {
          for (i1 = 0; i1 < 15; i1++) {
            gaussMask_5[i1 + 15 * i0] = c_gaussTemp[(i1 << 1) + 30 * (i0 << 1)];
          }
        }

        memset(&c_gaussTemp[0], 0, 1620U * sizeof(boolean_T));
        for (i0 = 0; i0 < 27; i0++) {
          for (i1 = 0; i1 < 15; i1++) {
            c_gaussTemp[(i1 << 1) + 30 * (i0 << 1)] = gaussMask_5[i1 + 15 * i0];
          }
        }

        p_imfilter(c_gaussTemp, c_unusedExpr);
        b_bsxfun(gaussian1_5, gaussMask_5, imageRecon);
        for (i0 = 0; i0 < 405; i0++) {
          b_gaussMask_5[i0] = !gaussMask_5[i0];
        }

        b_bsxfun(gaussian2_5, b_gaussMask_5, gaussian1_5);
        for (i0 = 0; i0 < 1215; i0++) {
          imageRecon[i0] += gaussian1_5[i0];
        }

        /*  Fifth -> Fourth  */
        c_bsxfun(SD->f8.gaussian1_4, gaussMask_4, SD->f8.c_laplacian);
        for (i0 = 0; i0 < 1620; i0++) {
          b_gaussMask_4[i0] = !gaussMask_4[i0];
        }

        c_bsxfun(SD->f8.gaussian2_4, b_gaussMask_4, SD->f8.dv4);
        for (i0 = 0; i0 < 4860; i0++) {
          SD->f8.e_gaussTemp[i0] = 0.0;
          SD->f8.c_laplacian[i0] += SD->f8.dv4[i0];
        }

        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 27; i1++) {
            for (b_ndbl = 0; b_ndbl < 15; b_ndbl++) {
              SD->f8.e_gaussTemp[((b_ndbl << 1) + 30 * (i1 << 1)) + 1620 * i0] =
                imageRecon[(b_ndbl + 15 * i1) + 405 * i0];
            }
          }
        }

        n_imfilter(SD->f8.e_gaussTemp, SD->f8.dv4);
        for (i0 = 0; i0 < 4860; i0++) {
          SD->f8.e_gaussTemp[i0] = SD->f8.dv4[i0] + SD->f8.c_laplacian[i0];
        }

        /*  Fourth -> Third  */
        d_bsxfun(SD->f8.gaussian1_3, gaussMask_3, SD->f8.b_laplacian);
        for (i0 = 0; i0 < 6420; i0++) {
          b_gaussMask_3[i0] = !gaussMask_3[i0];
        }

        d_bsxfun(SD->f8.gaussian2_3, b_gaussMask_3, SD->f8.dv3);
        for (i0 = 0; i0 < 19260; i0++) {
          SD->f8.c_gaussTemp[i0] = 0.0;
          SD->f8.b_laplacian[i0] += SD->f8.dv3[i0];
        }

        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 54; i1++) {
            for (b_ndbl = 0; b_ndbl < 30; b_ndbl++) {
              SD->f8.c_gaussTemp[((b_ndbl << 1) + 60 * (i1 << 1)) + 6420 * i0] =
                SD->f8.e_gaussTemp[(b_ndbl + 30 * i1) + 1620 * i0];
            }
          }
        }

        j_imfilter(SD->f8.c_gaussTemp, SD->f8.dv3);
        for (i0 = 0; i0 < 19260; i0++) {
          SD->f8.c_gaussTemp[i0] = SD->f8.dv3[i0] + SD->f8.b_laplacian[i0];
        }

        /*  Third -> Second  */
        e_bsxfun(SD->f8.gaussian1_2, gaussMask_2, SD->f8.laplacian);
        for (i0 = 0; i0 < 25680; i0++) {
          b_gaussMask_2[i0] = !gaussMask_2[i0];
        }

        e_bsxfun(SD->f8.gaussian2_2, b_gaussMask_2, SD->f8.dv2);
        for (i0 = 0; i0 < 77040; i0++) {
          SD->f8.b_gaussTemp[i0] = 0.0;
          SD->f8.laplacian[i0] += SD->f8.dv2[i0];
        }

        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 107; i1++) {
            for (b_ndbl = 0; b_ndbl < 60; b_ndbl++) {
              SD->f8.b_gaussTemp[((b_ndbl << 1) + 120 * (i1 << 1)) + 25680 * i0]
                = SD->f8.c_gaussTemp[(b_ndbl + 60 * i1) + 6420 * i0];
            }
          }
        }

        f_imfilter(SD->f8.b_gaussTemp, SD->f8.dv2);
        for (i0 = 0; i0 < 77040; i0++) {
          SD->f8.b_gaussTemp[i0] = SD->f8.dv2[i0] + SD->f8.laplacian[i0];
        }

        /*  Second -> First */
        f_bsxfun(SD->f8.morphedBlend, SD->f8.imageMask, SD->f8.gaussTemp);
        f_bsxfun(SD->f8.laplacian2_1, SD->f8.imageMask, SD->f8.dv1);
        for (i0 = 0; i0 < 307440; i0++) {
          swappedImage[i0] = 0.0;
          SD->f8.gaussTemp[i0] += SD->f8.dv1[i0];
        }

        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 214; i1++) {
            for (b_ndbl = 0; b_ndbl < 120; b_ndbl++) {
              swappedImage[((b_ndbl << 1) + 240 * (i1 << 1)) + 102480 * i0] =
                SD->f8.b_gaussTemp[(b_ndbl + 120 * i1) + 25680 * i0];
            }
          }
        }

        b_imfilter(swappedImage, SD->f8.dv1);
        for (i0 = 0; i0 < 307440; i0++) {
          swappedImage[i0] = SD->f8.dv1[i0] + SD->f8.gaussTemp[i0];
        }

        if (faceBoxes->size[0] > 1) {
          memcpy(&targetImage[0], &swappedImage[0], 307440U * sizeof(real_T));
        }
      }
    }

    j++;
  }

  emxFree_real_T(&c_targetImage);
  emxFree_real_T(&b_targetImage);
  emxFree_real_T(&e_mouthBoxes);
  emxFree_real_T(&d_mouthBoxes);
  emxFree_real_T(&c_mouthBoxes);
  emxFree_real_T(&b_mouthBoxes);
  emxFree_real_T(&cv);
  emxFree_real_T(&av);
  emxFree_real_T(&c);
  emxFree_real_T(&y);
  emxFree_real_T(&dists);
  emxFree_real_T(&points);
  emxFree_real_T(&idxREye);
  emxFree_real_T(&idxLEye);
  emxFree_real_T(&idxMouth);
  emxFree_real_T(&idxNose);
  emxFree_real_T(&rEyeCenter);
  emxFree_real_T(&lEyeCenter);
  emxFree_real_T(&mouthRight);
  emxFree_real_T(&mouthLeft);
  emxFree_real_T(&noseCenter);
  emxFree_real_T(&noseBoxes);
  emxFree_real_T(&mouthBoxes);
  emxFree_real_T(&lEyeBoxes);
  emxFree_real_T(&rEyeBoxes);
  emxFree_real_T(&faceImage);
  emxFree_real_T(&yRange);
  emxFree_real_T(&xRange);
  emxFree_real_T(&faceBoxes);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

void faceSwapLive_api(faceSwapLiveStackData *SD, const mxArray *prhs[3], const
                      mxArray *plhs[1])
{
  real_T (*swappedImage)[307440];
  real_T (*targetImage)[307440];
  real_T (*swapImage)[33075];
  boolean_T (*swapMask)[11025];
  swappedImage = (real_T (*)[307440])mxMalloc(sizeof(real_T [307440]));
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, false, -1);

  /* Marshall function inputs */
  targetImage = c_emlrt_marshallIn(emlrtAlias(prhs[0]), "targetImage");
  swapImage = e_emlrt_marshallIn(emlrtAlias(prhs[1]), "swapImage");
  swapMask = g_emlrt_marshallIn(emlrtAlias(prhs[2]), "swapMask");

  /* Invoke the target function */
  faceSwapLive(SD, *targetImage, *swapImage, *swapMask, *swappedImage);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*swappedImage);
}

void faceSwapLive_atexit(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void faceSwapLive_initialize(emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, false, 0U, 0);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "Video_and_Image_Blockset", 2);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "Image_Toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    faceSwapLive_once();
  }
}

void faceSwapLive_terminate(void)
{
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (faceSwapLive.c) */
