// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef WGL_ARB_buffer_region
#define WGL_ARB_buffer_region 1

#include <GL/gl.h>

static const char * const str_WGL_ARB_buffer_region = "WGL_ARB_buffer_region";
static int WGL_ARB_buffer_region_initialised = 0;

typedef HANDLE (*PFNWGLCREATEBUFFERREGIONARBPROC)(HDC hDC, GLint iLayerPlane, UINT uType);
static PFNWGLCREATEBUFFERREGIONARBPROC wglCreateBufferRegionARB = 0;

typedef VOID (*PFNWGLDELETEBUFFERREGIONARBPROC)(HANDLE hRegion);
static PFNWGLDELETEBUFFERREGIONARBPROC wglDeleteBufferRegionARB = 0;

typedef BOOL (*PFNWGLSAVEBUFFERREGIONARBPROC)(HANDLE hRegion, GLint x, GLint y, GLint width, GLint height);
static PFNWGLSAVEBUFFERREGIONARBPROC wglSaveBufferRegionARB = 0;

typedef BOOL (*PFNWGLRESTOREBUFFERREGIONARBPROC)(HANDLE hRegion, GLint x, GLint y, GLint width, GLint height, GLint xSrc, GLint ySrc);
static PFNWGLRESTOREBUFFERREGIONARBPROC wglRestoreBufferRegionARB = 0;

#define WGL_FRONT_COLOR_BUFFER_BIT_ARB          0x00000001
#define WGL_BACK_COLOR_BUFFER_BIT_ARB           0x00000002
#define WGL_DEPTH_BUFFER_BIT_ARB                0x00000004
#define WGL_STENCIL_BUFFER_BIT_ARB              0x00000008

static int initialise_WGL_ARB_buffer_region();

#else
static int WGL_ARB_buffer_region_initialised = 1;
#endif
