// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_transpose_matrix_H
#define GL_ARB_transpose_matrix_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_ARB_transpose_matrix
#define GL_ARB_transpose_matrix 1

typedef void (*PFNGLLOADTRANSPOSEMATRIXFARBPROC)(GLfloat *m);
typedef void (*PFNGLLOADTRANSPOSEMATRIXDARBPROC)(GLdouble *m);
typedef void (*PFNGLMULTTRANSPOSEMATRIXFARBPROC)(GLfloat *m);
typedef void (*PFNGLMULTTRANSPOSEMATRIXDARBPROC)(GLdouble *m);

#define GL_TRANSPOSE_MODELVIEW_MATRIX_ARB	0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX_ARB	0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX_ARB		0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX_ARB		0x84E6

#endif

SAGEAPI PFNGLLOADTRANSPOSEMATRIXFARBPROC glLoadTransposeMatrixfARB;
SAGEAPI PFNGLLOADTRANSPOSEMATRIXDARBPROC glLoadTransposeMatrixdARB;
SAGEAPI PFNGLMULTTRANSPOSEMATRIXFARBPROC glMultTransposeMatrixfARB;
SAGEAPI PFNGLMULTTRANSPOSEMATRIXDARBPROC glMultTransposeMatrixdARB;

SAGEAPI int GL_ARB_transpose_matrix_initialised;
SAGEAPI int initialise_GL_ARB_transpose_matrix();

#endif
