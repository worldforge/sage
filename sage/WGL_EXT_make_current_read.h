// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef WGL_EXT_make_current_read_H
#define WGL_EXT_make_current_read_H 1

#include <sage/sage.h>

#ifndef WGL_EXT_make_current_read
#define WGL_EXT_make_current_read 1


typedef BOOL (*PFNWGLMAKECONTEXTCURRENTEXTPROC)(HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
typedef HDC (*PFNWGLGETCURRENTREADDCEXTPROC)(VOID);

#define WGL_ERROR_INVALID_PIXEL_TYPE_EXT            0x2043

#endif

SAGEAPI PFNWGLMAKECONTEXTCURRENTEXTPROC wglMakeContextCurrentEXT;
SAGEAPI PFNWGLGETCURRENTREADDCEXTPROC wglGetCurrentReadDCEXT;

SAGEAPI int WGL_EXT_make_current_read_initialised;
SAGEAPI int initialise_WGL_EXT_make_current_read();

#endif
