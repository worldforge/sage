// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_window_pos_H
#define GL_ARB_window_pos_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_ARB_window_pos
#define GL_ARB_window_pos 1

typedef void (*PFNGLWINDOWPOS2DARBPROC)(GLdouble x, GLdouble y);
typedef void (*PFNGLWINDOWPOS2FARBPROC)(GLfloat x, GLfloat y);
typedef void (*PFNGLWINDOWPOS2IARBPROC)(GLint x, GLint y);
typedef void (*PFNGLWINDOWPOS2SARBPROC)(GLshort x, GLshort y);
typedef void (*PFNGLWINDOWPOS2DVARBPROC)(const GLdouble *p);
typedef void (*PFNGLWINDOWPOS2FVARBPROC)(const GLfloat *p);
typedef void (*PFNGLWINDOWPOS2IVARBPROC)(const GLint *p);
typedef void (*PFNGLWINDOWPOS2SVARBPROC)(const GLshort *p);
typedef void (*PFNGLWINDOWPOS3DARBPROC)(GLdouble x, GLdouble y, GLdouble z);
typedef void (*PFNGLWINDOWPOS3FARBPROC)(GLfloat x, GLfloat y, GLfloat z);
typedef void (*PFNGLWINDOWPOS3IARBPROC)(GLint x, GLint y, GLint z);
typedef void (*PFNGLWINDOWPOS3SARBPROC)(GLshort x, GLshort y, GLshort z);
typedef void (*PFNGLWINDOWPOS3DVARBPROC)(const GLdouble *p);
typedef void (*PFNGLWINDOWPOS3FVARBPROC)(const GLfloat *p);
typedef void (*PFNGLWINDOWPOS3IVARBPROC)(const GLint *p);
typedef void (*PFNGLWINDOWPOS3SVARBPROC)(const GLshort *p);

#endif

SAGEAPI PFNGLWINDOWPOS2DARBPROC glWindowPos2dARB;
SAGEAPI PFNGLWINDOWPOS2FARBPROC glWindowPos2fARB;
SAGEAPI PFNGLWINDOWPOS2IARBPROC glWindowPos2iARB;
SAGEAPI PFNGLWINDOWPOS2SARBPROC glWindowPos2sARB;
SAGEAPI PFNGLWINDOWPOS2DVARBPROC glWindowPos2dvARB;
SAGEAPI PFNGLWINDOWPOS2FVARBPROC glWindowPos2fvARB;
SAGEAPI PFNGLWINDOWPOS2IVARBPROC glWindowPos2ivARB;
SAGEAPI PFNGLWINDOWPOS2SVARBPROC glWindowPos2svARB;
SAGEAPI PFNGLWINDOWPOS3DARBPROC glWindowPos3dARB;
SAGEAPI PFNGLWINDOWPOS3FARBPROC glWindowPos3fARB;
SAGEAPI PFNGLWINDOWPOS3IARBPROC glWindowPos3iARB;
SAGEAPI PFNGLWINDOWPOS3SARBPROC glWindowPos3sARB;
SAGEAPI PFNGLWINDOWPOS3DVARBPROC glWindowPos3dvARB;
SAGEAPI PFNGLWINDOWPOS3FVARBPROC glWindowPos3fvARB;
SAGEAPI PFNGLWINDOWPOS3IVARBPROC glWindowPos3ivARB;
SAGEAPI PFNGLWINDOWPOS3SVARBPROC glWindowPos3svARB;

SAGEAPI int GL_ARB_window_pos_initialised;
SAGEAPI int initialise_GL_ARB_window_pos();

#endif
