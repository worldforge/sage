// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef WGL_ARB_make_current_read
#define WGL_ARB_make_current_read 1

static const char * const str_WGL_ARB_make_current_read = "WGL_ARB_make_current_read";
static int WGL_ARB_make_current_read_initialised = 0;

typedef BOOL (*PFNWGLMAKECONTEXTCURRENTARBPROC)(HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
static PFNWGLMAKECONTEXTCURRENTARBPROC wglMakeContextCurrentARB = 0;

typedef HDC (*PFNWGLGETCURRENTREADDCARBPROC)(VOID);
static PFNWGLGETCURRENTREADDCARBPROC wglGetCurrentReadDCARB = 0;

#define WGL_ERROR_INVALID_PIXEL_TYPE_ARB              0x2043
#define WGL_ERROR_INCOMPATIBLE_DEVICE_CONTEXTS_ARB    0x2054

static int initialise_WGL_ARB_make_current_read();

#else
static int WGL_ARB_make_current_read_initialised = 1;
#endif
