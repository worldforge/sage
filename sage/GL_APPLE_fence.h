// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_APPLE_fence
#define GL_APPLE_fence 1

#include <GL/gl.h>

static const char * const str_GL_APPLE_fence = "GL_APPLE_fence";
static int GL_APPLE_fence_initialised = 0;

typedef void (*PFNGLGENFENCESAPPLEPROC)(GLsizei n, GLuint *fences);
static PFNGLGENFENCESAPPLEPROC glGenFencesAPPLE = 0;

typedef void (*PFNGLDELETEFENCESAPPLEPROC)(GLsizei n, const GLuint *fences);
static PFNGLDELETEFENCESAPPLEPROC glDeleteFencesAPPLE = 0;

typedef void (*PFNGLSETFENCEAPPLEPROC)(GLuint fence);
static PFNGLSETFENCEAPPLEPROC glSetFenceAPPLE = 0;

typedef GLboolean (*PFNGLISFENCEAPPLEPROC)(GLuint fence);
static PFNGLISFENCEAPPLEPROC glIsFenceAPPLE = 0;

typedef GLboolean (*PFNGLTESTFENCEAPPLEPROC)(GLuint fence);
static PFNGLTESTFENCEAPPLEPROC glTestFenceAPPLE = 0;

typedef void (*PFNGLFINISHFENCEAPPLEPROC)(GLuint fence);
static PFNGLFINISHFENCEAPPLEPROC glFinishFenceAPPLE = 0;

typedef GLboolean (*PFNGLTESTOBJECTAPPLEPROC)(GLenum object, GLuint name);
static PFNGLTESTOBJECTAPPLEPROC glTestObjectAPPLE = 0;

typedef void (*PFNGLFINISHOBJECTAPPLEPROC)(GLenum object, GLint name);
static PFNGLFINISHOBJECTAPPLEPROC glFinishObjectAPPLE = 0;

#define GL_DRAW_PIXELS_APPLE                    0x8A0A
#define GL_FENCE_APPLE                          0x8A0B

static int initialise_GL_APPLE_fence();

#else
static int GL_APPLE_fence_initialised = 1;
#endif
