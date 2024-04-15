//
//    Copyright (C) Microsoft Corporation.
//    Licensed under the MIT license
//

#ifndef __dxgicommon_h__
#define __dxgicommon_h__


typedef struct DXGI_RATIONAL
{
    UINT Numerator;
    UINT Denominator;
} DXGI_RATIONAL;

// The following values are used with DXGI_SAMPLE_DESC::Quality:
#define DXGI_STANDARD_MULTISAMPLE_QUALITY_PATTERN 0xffffffff
#define DXGI_CENTER_MULTISAMPLE_QUALITY_PATTERN 0xfffffffe

typedef struct DXGI_SAMPLE_DESC
{
    UINT Count;
    UINT Quality;
} DXGI_SAMPLE_DESC;

typedef enum DXGI_COLOR_SPACE_TYPE
{
    DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709             = 0,
    DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709             = 1,
    DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P709           = 2,
    DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P2020          = 3,
    DXGI_COLOR_SPACE_RESERVED                           = 4,
    DXGI_COLOR_SPACE_YCBCR_FULL_G22_NONE_P709_X601      = 5,
    DXGI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P601         = 6,
    DXGI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P601           = 7,
    DXGI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P709         = 8,
    DXGI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P709           = 9,
    DXGI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P2020        = 10,
    DXGI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P2020          = 11,
    DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020          = 12,
    DXGI_COLOR_SPACE_YCBCR_STUDIO_G2084_LEFT_P2020      = 13,
    DXGI_COLOR_SPACE_RGB_STUDIO_G2084_NONE_P2020        = 14,
    DXGI_COLOR_SPACE_YCBCR_STUDIO_G22_TOPLEFT_P2020     = 15,
    DXGI_COLOR_SPACE_YCBCR_STUDIO_G2084_TOPLEFT_P2020   = 16,
    DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P2020            = 17,
    DXGI_COLOR_SPACE_YCBCR_STUDIO_GHLG_TOPLEFT_P2020    = 18,
    DXGI_COLOR_SPACE_YCBCR_FULL_GHLG_TOPLEFT_P2020      = 19,
    DXGI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P709           = 20,
    DXGI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P2020          = 21,
    DXGI_COLOR_SPACE_YCBCR_STUDIO_G24_LEFT_P709         = 22,
    DXGI_COLOR_SPACE_YCBCR_STUDIO_G24_LEFT_P2020        = 23,
    DXGI_COLOR_SPACE_YCBCR_STUDIO_G24_TOPLEFT_P2020     = 24,
    DXGI_COLOR_SPACE_CUSTOM                             = 0xFFFFFFFF
} DXGI_COLOR_SPACE_TYPE;

#endif // __dxgicommon_h__