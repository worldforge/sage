// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef WGL_EXT_pixel_format_H
#define WGL_EXT_pixel_format_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef WGL_EXT_pixel_format
#define WGL_EXT_pixel_format 1

typedef BOOL (*PFNWGLGETPIXELFORMATATTRIBIVEXTPROC)(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int *piAttributes, int *piValues);
typedef BOOL (*PFNWGLGETPIXELFORMATATTRIBFVEXTPROC)(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int *piAttributes, FLOAT *pfValues);
typedef BOOL (*PFNWGLCHOOSEPIXELFORMATEXTPROC)(HDC hdc, const int *piAttribIList, const FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT *nNumFormats);

#define WGL_NUMBER_PIXEL_FORMATS_EXT         0x2000
#define WGL_DRAW_TO_WINDOW_EXT               0x2001
#define WGL_DRAW_TO_BITMAP_EXT               0x2002
#define WGL_ACCELERATION_EXT                 0x2003
#define WGL_NEED_PALETTE_EXT                 0x2004
#define WGL_NEED_SYSTEM_PALETTE_EXT          0x2005
#define WGL_SWAP_LAYER_BUFFERS_EXT           0x2006
#define WGL_SWAP_METHOD_EXT                  0x2007
#define WGL_NUMBER_OVERLAYS_EXT              0x2008
#define WGL_NUMBER_UNDERLAYS_EXT             0x2009
#define WGL_TRANSPARENT_EXT                  0x200A
#define WGL_TRANSPARENT_VALUE_EXT            0x200B
#define WGL_SHARE_DEPTH_EXT                  0x200C
#define WGL_SHARE_STENCIL_EXT                0x200D
#define WGL_SHARE_ACCUM_EXT                  0x200E
#define WGL_SUPPORT_GDI_EXT                  0x200F
#define WGL_SUPPORT_OPENGL_EXT               0x2010
#define WGL_DOUBLE_BUFFER_EXT                0x2011
#define WGL_STEREO_EXT                       0x2012
#define WGL_PIXEL_TYPE_EXT                   0x2013
#define WGL_COLOR_BITS_EXT                   0x2014
#define WGL_RED_BITS_EXT                     0x2015
#define WGL_RED_SHIFT_EXT                    0x2016
#define WGL_GREEN_BITS_EXT                   0x2017
#define WGL_GREEN_SHIFT_EXT                  0x2018
#define WGL_BLUE_BITS_EXT                    0x2019
#define WGL_BLUE_SHIFT_EXT                   0x201A
#define WGL_ALPHA_BITS_EXT                   0x201B
#define WGL_ALPHA_SHIFT_EXT                  0x201C
#define WGL_ACCUM_BITS_EXT                   0x201D
#define WGL_ACCUM_RED_BITS_EXT               0x201E
#define WGL_ACCUM_GREEN_BITS_EXT             0x201F
#define WGL_ACCUM_BLUE_BITS_EXT              0x2020
#define WGL_ACCUM_ALPHA_BITS_EXT             0x2021
#define WGL_DEPTH_BITS_EXT                   0x2022
#define WGL_STENCIL_BITS_EXT                 0x2023
#define WGL_AUX_BUFFERS_EXT                  0x2024
#define WGL_NO_ACCELERATION_EXT              0x2025
#define WGL_GENERIC_ACCELERATION_EXT         0x2026
#define WGL_FULL_ACCELERATION_EXT            0x2027
#define WGL_SWAP_EXCHANGE_EXT                0x2028
#define WGL_SWAP_COPY_EXT                    0x2029
#define WGL_SWAP_UNDEFINED_EXT               0x202A
#define WGL_TYPE_RGBA_EXT                    0x202B
#define WGL_TYPE_COLORINDEX_EXT              0x202C

#endif

SAGEAPI PFNWGLGETPIXELFORMATATTRIBIVEXTPROC wglGetPixelFormatAttribivEXT;
SAGEAPI PFNWGLGETPIXELFORMATATTRIBFVEXTPROC wglGetPixelFormatAttribfvEXT;
SAGEAPI PFNWGLCHOOSEPIXELFORMATEXTPROC wglChoosePixelFormatEXT;

SAGEAPI int WGL_EXT_pixel_format_initialised;
SAGEAPI int initialise_WGL_EXT_pixel_format();

#endif
