// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_vertex_weighting_H
#define GL_EXT_vertex_weighting_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_vertex_weighting
#define GL_EXT_vertex_weighting 1

typedef void (*PFNGLVERTEXWEIGHTFEXTPROC)(GLfloat weight);
typedef void (*PFNGLVERTEXWEIGHTFVEXTPROC)(GLfloat *weight);
typedef void (*PFNGLVERTEXWEIGHTPOINTEREXTPROC)(GLint size, GLenum type, GLsizei stride, GLvoid *pointer);

#define GL_VERTEX_WEIGHTING_EXT                0x8509
#define GL_MODELVIEW0_EXT                      0x1700  //(alias to MODELVIEW enumerant)
#define GL_MODELVIEW1_EXT                      0x850A
#define GL_MODELVIEW0_MATRIX_EXT               0x0BA6  //(alias to MODELVIEW_MATRIX)
#define GL_MODELVIEW1_MATRIX_EXT               0x8506
#define GL_CURRENT_VERTEX_WEIGHT_EXT           0x850B
#define GL_VERTEX_WEIGHT_ARRAY_EXT             0x850C
#define GL_VERTEX_WEIGHT_ARRAY_SIZE_EXT        0x850D
#define GL_VERTEX_WEIGHT_ARRAY_TYPE_EXT        0x850E
#define GL_VERTEX_WEIGHT_ARRAY_STRIDE_EXT      0x850F
#define GL_MODELVIEW0_STACK_DEPTH_EXT          0x0BA3  //(alias to MODELVIEW_STACK_DEPTH)
#define GL_MODELVIEW1_STACK_DEPTH_EXT          0x8502
#define GL_VERTEX_WEIGHT_ARRAY_POINTER_EXT     0x8510

#endif

SAGEAPI PFNGLVERTEXWEIGHTFEXTPROC glVertexWeightfEXT;
SAGEAPI PFNGLVERTEXWEIGHTFVEXTPROC glVertexWeightfvEXT;
SAGEAPI PFNGLVERTEXWEIGHTPOINTEREXTPROC glVertexWeightPointerEXT;

SAGEAPI int GL_EXT_vertex_weighting_initialised;
SAGEAPI int initialise_GL_EXT_vertex_weighting();

#endif
