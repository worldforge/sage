// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_transpose_matrix
#define GL_ARB_transpose_matrix 1

#include <GL/gl.h>

static const char * const str_GL_ARB_transpose_matrix = "GL_ARB_transpose_matrix";
static int GL_ARB_transpose_matrix_initialised = 0;

#define GL_TRANSPOSE_MODELVIEW_MATRIX_ARB	0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX_ARB	0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX_ARB		0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX_ARB		0x84E6

typedef void (*PFNGLLOADTRANSPOSEMATRIXFARBPROC)(GLfloat *m);
static PFNGLLOADTRANSPOSEMATRIXFARBPROC glLoadTransposeMatrixfARB = 0;

typedef void (*PFNGLLOADTRANSPOSEMATRIXDARBPROC)(GLdouble *m);
static PFNGLLOADTRANSPOSEMATRIXDARBPROC glLoadTransposeMatrixdARB = 0;

typedef void (*PFNGLMULTTRANSPOSEMATRIXFARBPROC)(GLfloat *m);
static PFNGLMULTTRANSPOSEMATRIXFARBPROC glMultTransposeMatrixfARB = 0;

typedef void (*PFNGLMULTTRANSPOSEMATRIXDARBPROC)(GLdouble *m);
static PFNGLMULTTRANSPOSEMATRIXDARBPROC glMultTransposeMatrixdARB = 0;

static int initialise_GL_ARB_transpose_matrix();

#else
static int GL_ARB_transpose_matrix_initialised = 1;
#endif
