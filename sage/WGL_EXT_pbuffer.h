// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef WGL_EXT_pbuffer_H
#define WGL_EXT_pbuffer_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef WGL_EXT_pbuffer
#define WGL_EXT_pbuffer 1

typedef HPBUFFEREXT (*PFNWGLCREATEPBUFFEREXTPROC)(HDC hDC, GLint iPixelFormat, GLint iWidth, GLint iHeight, const GLint *piAttribList);
typedef HDC (*PFNWGLGETPBUFFERDCEXTPROC)(HPBUFFEREXT hPbuffer);
typedef int (*PFNWGLRELEASEPBUFFERDCEXTPROC)(HPBUFFEREXT hPbuffer, HDC hDC);
typedef BOOL (*PFNWGLDESTROYPBUFFEREXTPROC)(HPBUFFEREXT hPbuffer);
typedef BOOL (*PFNWGLQUERYPBUFFEREXTPROC)(HPBUFFEREXT hPbuffer, GLint iAttribute, GLint *piValue);

#define WGL_DRAW_TO_PBUFFER_EXT              0x202D
#define WGL_MAX_PBUFFER_PIXELS_EXT           0x202E
#define WGL_MAX_PBUFFER_WIDTH_EXT            0x202F
#define WGL_MAX_PBUFFER_HEIGHT_EXT           0x2030
#define WGL_OPTIMAL_PBUFFER_WIDTH_EXT        0x2031
#define WGL_OPTIMAL_PBUFFER_HEIGHT_EXT       0x2032
#define WGL_PBUFFER_LARGEST_EXT              0x2033
#define WGL_PBUFFER_WIDTH_EXT                0x2034
#define WGL_PBUFFER_HEIGHT_EXT               0x2035

#endif

SAGEAPI PFNWGLCREATEPBUFFEREXTPROC wglCreatePbufferEXT;
SAGEAPI PFNWGLGETPBUFFERDCEXTPROC wglGetPbufferDCEXT;
SAGEAPI PFNWGLRELEASEPBUFFERDCEXTPROC wglReleasePbufferDCEXT;
SAGEAPI PFNWGLDESTROYPBUFFEREXTPROC wglDestroyPbufferEXT;
SAGEAPI PFNWGLQUERYPBUFFEREXTPROC wglQueryPbufferEXT;

SAGEAPI int WGL_EXT_pbuffer_initialised;
SAGEAPI int initialise_WGL_EXT_pbuffer();

#endif
