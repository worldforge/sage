// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_window_pos
#define GL_ARB_window_pos 1

#include <GL/gl.h>

static const char * const str_GL_ARB_window_pos = "GL_ARB_window_pos";
static int GL_ARB_window_pos_initialised = 0;

typedef void (*PFNGLWINDOWPOS2DARBPROC)(GLdouble x, GLdouble y);
static PFNGLWINDOWPOS2DARBPROC glWindowPos2dARB = 0;

typedef void (*PFNGLWINDOWPOS2FARBPROC)(GLfloat x, GLfloat y);
static PFNGLWINDOWPOS2FARBPROC glWindowPos2fARB = 0;

typedef void (*PFNGLWINDOWPOS2IARBPROC)(GLint x, GLint y);
static PFNGLWINDOWPOS2IARBPROC glWindowPos2iARB = 0;

typedef void (*PFNGLWINDOWPOS2SARBPROC)(GLshort x, GLshort y);
static PFNGLWINDOWPOS2SARBPROC glWindowPos2sARB = 0;

typedef void (*PFNGLWINDOWPOS2DVARBPROC)(const GLdouble *p);
static PFNGLWINDOWPOS2DVARBPROC glWindowPos2dvARB = 0;

typedef void (*PFNGLWINDOWPOS2FVARBPROC)(const GLfloat *p);
static PFNGLWINDOWPOS2FVARBPROC glWindowPos2fvARB = 0;

typedef void (*PFNGLWINDOWPOS2IVARBPROC)(const GLint *p);
static PFNGLWINDOWPOS2IVARBPROC glWindowPos2ivARB = 0;

typedef void (*PFNGLWINDOWPOS2SVARBPROC)(const GLshort *p);
static PFNGLWINDOWPOS2SVARBPROC glWindowPos2svARB = 0;

typedef void (*PFNGLWINDOWPOS3DARBPROC)(GLdouble x, GLdouble y, GLdouble z);
static PFNGLWINDOWPOS3DARBPROC glWindowPos3dARB = 0;

typedef void (*PFNGLWINDOWPOS3FARBPROC)(GLfloat x, GLfloat y, GLfloat z);
static PFNGLWINDOWPOS3FARBPROC glWindowPos3fARB = 0;

typedef void (*PFNGLWINDOWPOS3IARBPROC)(GLint x, GLint y, GLint z);
static PFNGLWINDOWPOS3IARBPROC glWindowPos3iARB = 0;

typedef void (*PFNGLWINDOWPOS3SARBPROC)(GLshort x, GLshort y, GLshort z);
static PFNGLWINDOWPOS3SARBPROC glWindowPos3sARB = 0;

typedef void (*PFNGLWINDOWPOS3DVARBPROC)(const GLdouble *p);
static PFNGLWINDOWPOS3DVARBPROC glWindowPos3dvARB = 0;

typedef void (*PFNGLWINDOWPOS3FVARBPROC)(const GLfloat *p);
static PFNGLWINDOWPOS3FVARBPROC glWindowPos3fvARB = 0;

typedef void (*PFNGLWINDOWPOS3IVARBPROC)(const GLint *p);
static PFNGLWINDOWPOS3IVARBPROC glWindowPos3ivARB = 0;

typedef void (*PFNGLWINDOWPOS3SVARBPROC)(const GLshort *p);
static PFNGLWINDOWPOS3SVARBPROC glWindowPos3svARB = 0;

static int initialise_GL_ARB_window_pos();

#else
static int GL_ARB_window_pos_initialised = 1;
#endif
