// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef WGL_ARB_pbuffer
#define WGL_ARB_pbuffer 1

#include <GL/gl.h>

static const char * const str_WGL_ARB_pbuffer = "WGL_ARB_pbuffer";
static int WGL_ARB_pbuffer_initialised = 0;

DECLARE_HANDLE(HPBUFFERARB);

typedef HPBUFFERARB (*PFNWGLCREATEPBUFFERARBPROC)(HDC hDC, GLint iPixelFormat, GLint iWidth, GLint iHeight, const GLint *piAttribList);
static PFNWGLCREATEPBUFFERARBPROC wglCreatePbufferARB = 0;

typedef HDC (*PFNWGLGETPBUFFERDCARBPROC)(HPBUFFERARB hPbuffer);
static PFNWGLGETPBUFFERDCARBPROC wglGetPbufferDCARB = 0;

typedef GLint (*PFNWGLRELEASEPBUFFERDCARBPROC)(HPBUFFERARB hPbuffer, HDC hDC);
static PFNWGLRELEASEPBUFFERDCARBPROC wglReleasePbufferDCARB = 0;

typedef BOOL (*PFNWGLDESTROYPBUFFERARBPROC)(HPBUFFERARB hPbuffer);
static PFNWGLDESTROYPBUFFERARBPROC wglDestroyPbufferARB = 0;

typedef BOOL (*PFNWGLQUERYPBUFFERARBPROC)(HPBUFFERARB hPbuffer, GLint iAttribute, GLint *piValue);
static PFNWGLQUERYPBUFFERARBPROC wglQueryPbufferARB = 0;

#define WGL_DRAW_TO_PBUFFER_ARB              0x202D
#define WGL_DRAW_TO_PBUFFER_ARB              0x202D
#define WGL_MAX_PBUFFER_PIXELS_ARB           0x202E
#define WGL_MAX_PBUFFER_WIDTH_ARB            0x202F
#define WGL_MAX_PBUFFER_HEIGHT_ARB           0x2030
#define WGL_PBUFFER_LARGEST_ARB              0x2033
#define WGL_PBUFFER_WIDTH_ARB                0x2034
#define WGL_PBUFFER_HEIGHT_ARB               0x2035
#define WGL_PBUFFER_LOST_ARB                 0x2036


static int initialise_WGL_ARB_pbuffer();

#else
static int WGL_ARB_pbuffer_initialised = 1;
#endif
