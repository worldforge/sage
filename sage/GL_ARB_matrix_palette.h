// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_matrix_palette
#define GL_ARB_matrix_palette 1

#include <GL/gl.h>

static const char * const str_GL_ARB_matrix_palette = "GL_ARB_matrix_palette";
static int GL_ARB_matrix_palette_initialised = 0;

typedef void (*PFNGLCURRENTPALETTEMATRIXARBPROC)(GLint index);
static PFNGLCURRENTPALETTEMATRIXARBPROC glCurrentPaletteMatrixARB = 0;
    
typedef void (*PFNGLMATRIXINDEXUBVARBPROC)(GLint size, GLubyte *indices);
static PFNGLMATRIXINDEXUBVARBPROC glMatrixIndexubvARB = 0;
    
typedef void (*PFNGLMATRIXINDEXUSVARBPROC)(GLint size, GLushort *indices);
static PFNGLMATRIXINDEXUSVARBPROC glMatrixIndexusvARB = 0;

typedef void (*PFNGLMATRIXINDEXUIVARBPROC)(GLint size, GLuint *indices);
static PFNGLMATRIXINDEXUIVARBPROC glMatrixIndexuivARB = 0;

typedef void (*PFNGLMATRIXINDEXPOINTERARBPROC)(GLint size, GLenum type, GLsizei stride, void *pointer);
static PFNGLMATRIXINDEXPOINTERARBPROC glMatrixIndexPointerARB = 0;

 
#define GL_MATRIX_PALETTE_ARB                    0x8840
#define GL_MAX_MATRIX_PALETTE_STACK_DEPTH_ARB    0x8841
#define GL_MAX_PALETTE_MATRICES_ARB              0x8842
#define GL_CURRENT_PALETTE_MATRIX_ARB            0x8843
#define GL_MATRIX_INDEX_ARRAY_ARB                0x8844
#define GL_CURRENT_MATRIX_INDEX_ARB              0x8845
#define GL_MATRIX_INDEX_ARRAY_SIZE_ARB           0x8846
#define GL_MATRIX_INDEX_ARRAY_TYPE_ARB           0x8847
#define GL_MATRIX_INDEX_ARRAY_STRIDE_ARB         0x8848
#define GL_MATRIX_INDEX_ARRAY_POINTER_ARB        0x8849

static int initialise_GL_ARB_matrix_palette();
#else
static int GL_ARB_matrix_palette_initialised = 1;
#endif
