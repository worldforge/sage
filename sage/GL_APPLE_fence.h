// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_APPLE_fence_H
#define GL_APPLE_fence_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_APPLE_fence
#define GL_APPLE_fence 1

typedef void (*PFNGLGENFENCESAPPLEPROC)(GLsizei n, GLuint *fences);
typedef void (*PFNGLDELETEFENCESAPPLEPROC)(GLsizei n, const GLuint *fences);
typedef void (*PFNGLSETFENCEAPPLEPROC)(GLuint fence);
typedef GLboolean (*PFNGLISFENCEAPPLEPROC)(GLuint fence);
typedef GLboolean (*PFNGLTESTFENCEAPPLEPROC)(GLuint fence);
typedef void (*PFNGLFINISHFENCEAPPLEPROC)(GLuint fence);
typedef GLboolean (*PFNGLTESTOBJECTAPPLEPROC)(GLenum object, GLuint name);
typedef void (*PFNGLFINISHOBJECTAPPLEPROC)(GLenum object, GLint name);

#define GL_DRAW_PIXELS_APPLE                    0x8A0A
#define GL_FENCE_APPLE                          0x8A0B

#endif

SAGEAPI PFNGLGENFENCESAPPLEPROC glGenFencesAPPLE;
SAGEAPI PFNGLDELETEFENCESAPPLEPROC glDeleteFencesAPPLE;
SAGEAPI PFNGLSETFENCEAPPLEPROC glSetFenceAPPLE;
SAGEAPI PFNGLISFENCEAPPLEPROC glIsFenceAPPLE;
SAGEAPI PFNGLTESTFENCEAPPLEPROC glTestFenceAPPLE;
SAGEAPI PFNGLFINISHFENCEAPPLEPROC glFinishFenceAPPLE;
SAGEAPI PFNGLTESTOBJECTAPPLEPROC glTestObjectAPPLE;
SAGEAPI PFNGLFINISHOBJECTAPPLEPROC glFinishObjectAPPLE;

SAGEAPI int GL_APPLE_fence_initialised;
SAGEAPI int initialise_GL_APPLE_fence();

#endif
