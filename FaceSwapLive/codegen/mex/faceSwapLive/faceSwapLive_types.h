/*
 * faceSwapLive_types.h
 *
 * Code generation for function 'faceSwapLive'
 *
 */

#ifndef __FACESWAPLIVE_TYPES_H__
#define __FACESWAPLIVE_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_boolean_T_111x111
#define struct_emxArray_boolean_T_111x111
struct emxArray_boolean_T_111x111
{
    boolean_T data[12321];
    int32_T size[2];
};
#endif /*struct_emxArray_boolean_T_111x111*/
#ifndef typedef_emxArray_boolean_T_111x111
#define typedef_emxArray_boolean_T_111x111
typedef struct emxArray_boolean_T_111x111 emxArray_boolean_T_111x111;
#endif /*typedef_emxArray_boolean_T_111x111*/
#ifndef struct_emxArray_boolean_T_218x218
#define struct_emxArray_boolean_T_218x218
struct emxArray_boolean_T_218x218
{
    boolean_T data[47524];
    int32_T size[2];
};
#endif /*struct_emxArray_boolean_T_218x218*/
#ifndef typedef_emxArray_boolean_T_218x218
#define typedef_emxArray_boolean_T_218x218
typedef struct emxArray_boolean_T_218x218 emxArray_boolean_T_218x218;
#endif /*typedef_emxArray_boolean_T_218x218*/
#ifndef struct_emxArray_boolean_T_58x58
#define struct_emxArray_boolean_T_58x58
struct emxArray_boolean_T_58x58
{
    boolean_T data[3364];
    int32_T size[2];
};
#endif /*struct_emxArray_boolean_T_58x58*/
#ifndef typedef_emxArray_boolean_T_58x58
#define typedef_emxArray_boolean_T_58x58
typedef struct emxArray_boolean_T_58x58 emxArray_boolean_T_58x58;
#endif /*typedef_emxArray_boolean_T_58x58*/
#ifndef struct_emxArray_int32_T_1x431
#define struct_emxArray_int32_T_1x431
struct emxArray_int32_T_1x431
{
    int32_T data[431];
    int32_T size[2];
};
#endif /*struct_emxArray_int32_T_1x431*/
#ifndef typedef_emxArray_int32_T_1x431
#define typedef_emxArray_int32_T_1x431
typedef struct emxArray_int32_T_1x431 emxArray_int32_T_1x431;
#endif /*typedef_emxArray_int32_T_1x431*/
#ifndef struct_emxArray_int32_T_25
#define struct_emxArray_int32_T_25
struct emxArray_int32_T_25
{
    int32_T data[25];
    int32_T size[1];
};
#endif /*struct_emxArray_int32_T_25*/
#ifndef typedef_emxArray_int32_T_25
#define typedef_emxArray_int32_T_25
typedef struct emxArray_int32_T_25 emxArray_int32_T_25;
#endif /*typedef_emxArray_int32_T_25*/
#ifndef struct_emxArray_real_T_10
#define struct_emxArray_real_T_10
struct emxArray_real_T_10
{
    real_T data[10];
    int32_T size[1];
};
#endif /*struct_emxArray_real_T_10*/
#ifndef typedef_emxArray_real_T_10
#define typedef_emxArray_real_T_10
typedef struct emxArray_real_T_10 emxArray_real_T_10;
#endif /*typedef_emxArray_real_T_10*/
#ifndef struct_emxArray_real_T_10x1
#define struct_emxArray_real_T_10x1
struct emxArray_real_T_10x1
{
    real_T data[10];
    int32_T size[2];
};
#endif /*struct_emxArray_real_T_10x1*/
#ifndef typedef_emxArray_real_T_10x1
#define typedef_emxArray_real_T_10x1
typedef struct emxArray_real_T_10x1 emxArray_real_T_10x1;
#endif /*typedef_emxArray_real_T_10x1*/
#ifndef struct_emxArray_real_T_10x2
#define struct_emxArray_real_T_10x2
struct emxArray_real_T_10x2
{
    real_T data[20];
    int32_T size[2];
};
#endif /*struct_emxArray_real_T_10x2*/
#ifndef typedef_emxArray_real_T_10x2
#define typedef_emxArray_real_T_10x2
typedef struct emxArray_real_T_10x2 emxArray_real_T_10x2;
#endif /*typedef_emxArray_real_T_10x2*/
#ifndef struct_emxArray_real_T_1x431
#define struct_emxArray_real_T_1x431
struct emxArray_real_T_1x431
{
    real_T data[431];
    int32_T size[2];
};
#endif /*struct_emxArray_real_T_1x431*/
#ifndef typedef_emxArray_real_T_1x431
#define typedef_emxArray_real_T_1x431
typedef struct emxArray_real_T_1x431 emxArray_real_T_1x431;
#endif /*typedef_emxArray_real_T_1x431*/
#ifndef struct_emxArray_uint8_T_200x200
#define struct_emxArray_uint8_T_200x200
struct emxArray_uint8_T_200x200
{
    uint8_T data[40000];
    int32_T size[2];
};
#endif /*struct_emxArray_uint8_T_200x200*/
#ifndef typedef_emxArray_uint8_T_200x200
#define typedef_emxArray_uint8_T_200x200
typedef struct emxArray_uint8_T_200x200 emxArray_uint8_T_200x200;
#endif /*typedef_emxArray_uint8_T_200x200*/
#ifndef typedef_faceSwapLiveStackData
#define typedef_faceSwapLiveStackData
typedef struct
{
    union
    {
        struct
        {
            boolean_T a_data[47524];
        } f0;
        struct
        {
            boolean_T a_data[47524];
        } f1;
        struct
        {
            real_T inputImage[11025];
        } f2;
        struct
        {
            uint8_T Iu8_data[40000];
            uint8_T Iu8_grayT_data[40000];
        } f3;
        struct
        {
            uint8_T Iu8_data[40000];
            uint8_T Iu8_grayT_data[40000];
        } f4;
        struct
        {
            uint8_T Iu8_data[40000];
            uint8_T Iu8_grayT_data[40000];
        } f5;
        struct
        {
            uint8_T Iu8_data[40000];
            uint8_T Iu8_grayT_data[40000];
        } f6;
        struct
        {
            uint8_T Iu8[307440];
            uint8_T Iu8_gray[102480];
            uint8_T b_Iu8_gray[102480];
        } f7;
    } u1;
    struct
    {
        real_T morphedBlend[307440];
        real_T gaussTemp[307440];
        real_T dv1[307440];
        real_T laplacian2_1[307440];
        real_T gaussian1_2[77040];
        real_T gaussian2_2[77040];
        real_T b_gaussTemp[77040];
        real_T dv2[77040];
        real_T laplacian[77040];
        real_T gaussian1_3[19260];
        real_T gaussian2_3[19260];
        real_T c_gaussTemp[19260];
        real_T dv3[19260];
        real_T b_laplacian[19260];
        boolean_T imageMask[102480];
        boolean_T d_gaussTemp[102480];
        boolean_T unusedExpr[102480];
        real_T gaussian1_4[4860];
        real_T gaussian2_4[4860];
        real_T e_gaussTemp[4860];
        real_T dv4[4860];
        real_T c_laplacian[4860];
    } f8;
} faceSwapLiveStackData;
#endif /*typedef_faceSwapLiveStackData*/

#endif
/* End of code generation (faceSwapLive_types.h) */
