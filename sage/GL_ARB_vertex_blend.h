// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_vertex_blend_H
#define GL_ARB_vertex_blend_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_ARB_vertex_blend
#define GL_ARB_vertex_blend 1

typedef void (*PFNGLWEIGHTBVARBPROC)(GLint size, GLbyte* weights);
typedef void (*PFNGLWEIGHTSVARBPROC)(GLint size, GLshort* weights);
typedef void (*PFNGLWEIGHTIVARBPROC)(GLint size, GLint* weights);
typedef void (*PFNGLWEIGHTFVARBPROC)(GLint size, GLfloat* weights);
typedef void (*PFNGLWEIGHTDVARBPROC)(GLint size, GLdouble* weights);
typedef void (*PFNGLWEIGHTUBVARBPROC)(GLint size, GLubyte* weights);
typedef void (*PFNGLWEIGHTUSVARBPROC)(GLint size, GLushort* weights);
typedef void (*PFNGLWEIGHTUIVARBPROC)(GLint size, GLuint* weights);
typedef void (*PFNGLWEIGHTPOINTERARBPROC)(GLint size, GLenum type, GLsizei stride, void *pointer);
typedef void (*PFNGLVERTEXBLENDARBPROC)(GLint count);

#define GL_MODELVIEW0_ARB                 0x1700 //(alias to MODELVIEW)
#define GL_MODELVIEW1_ARB                 0x850a
#define GL_MODELVIEW2_ARB                 0x8722
#define GL_MODELVIEW3_ARB                 0x8723
#define GL_MODELVIEW4_ARB                 0x8724
#define GL_MODELVIEW5_ARB                 0x8725
#define GL_MODELVIEW6_ARB                 0x8726
#define GL_MODELVIEW7_ARB                 0x8727
#define GL_MODELVIEW8_ARB                 0x8728
#define GL_MODELVIEW9_ARB                 0x8729
#define GL_MODELVIEW10_ARB                0x872A
#define GL_MODELVIEW11_ARB                0x872B
#define GL_MODELVIEW12_ARB                0x872C
#define GL_MODELVIEW13_ARB                0x872D
#define GL_MODELVIEW14_ARB                0x872E
#define GL_MODELVIEW15_ARB                0x872F
#define GL_MODELVIEW16_ARB                0x8730
#define GL_MODELVIEW17_ARB                0x8731
#define GL_MODELVIEW18_ARB                0x8732
#define GL_MODELVIEW19_ARB                0x8733
#define GL_MODELVIEW20_ARB                0x8734
#define GL_MODELVIEW21_ARB                0x8735
#define GL_MODELVIEW22_ARB                0x8736
#define GL_MODELVIEW23_ARB                0x8737
#define GL_MODELVIEW24_ARB                0x8738
#define GL_MODELVIEW25_ARB                0x8739
#define GL_MODELVIEW26_ARB                0x873A
#define GL_MODELVIEW27_ARB                0x873B
#define GL_MODELVIEW28_ARB                0x873C
#define GL_MODELVIEW29_ARB                0x873D
#define GL_MODELVIEW30_ARB                0x873E
#define GL_MODELVIEW31_ARB                0x873F
#define GL_CURRENT_WEIGHT_ARB              0x86A8
#define GL_WEIGHT_ARRAY_TYPE_ARB           0x86A9
#define GL_WEIGHT_ARRAY_STRIDE_ARB         0x86AA
#define GL_WEIGHT_ARRAY_SIZE_ARB           0x86AB
#define GL_WEIGHT_ARRAY_ARB                0x86AD

#endif

SAGEAPI PFNGLWEIGHTBVARBPROC glWeightbvARB;
SAGEAPI PFNGLWEIGHTSVARBPROC glWeightsvARB;
SAGEAPI PFNGLWEIGHTIVARBPROC glWeightivARB;
SAGEAPI PFNGLWEIGHTFVARBPROC glWeightfvARB;
SAGEAPI PFNGLWEIGHTDVARBPROC glWeightdvARB;
SAGEAPI PFNGLWEIGHTUBVARBPROC glWeightubvARB;
SAGEAPI PFNGLWEIGHTUSVARBPROC glWeightusvARB;
SAGEAPI PFNGLWEIGHTUIVARBPROC glWeightuivARB;
SAGEAPI PFNGLWEIGHTPOINTERARBPROC glWeightPointerARB;
SAGEAPI PFNGLVERTEXBLENDARBPROC glVertexBlendARB;

SAGEAPI int GL_ARB_vertex_blend_initialised;
SAGEAPI int initialise_GL_ARB_vertex_blend();

#endif
