// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_APPLE_vertex_array_range
#define GL_APPLE_vertex_array_range 1

#include <GL/gl.h>

static const char * const str_GL_APPLE_vertex_array_range = "GL_APPLE_vertex_array_range";
static int GL_APPLE_vertex_array_range_initialised = 0;

typedef void (*PFNGLVERTEXARRAYRANGEAPPLEPROC)(GLsizei length, void *pointer);
static PFNGLVERTEXARRAYRANGEAPPLEPROC glVertexArrayRangeAPPLE = 0;

typedef void (*PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC)(GLsizei length, void *pointer);
static PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC glFlushVertexArrayRangeAPPLE = 0;

typedef void (*PFNGLVERTEXARRAYPARAMETERIAPPLEPROC)(GLenum pname, GLint param);
static PFNGLVERTEXARRAYPARAMETERIAPPLEPROC glVertexArrayParameteriAPPLE = 0;


#define GL_VERTEX_ARRAY_RANGE_APPLE              0x851D
#define GL_VERTEX_ARRAY_RANGE_LENGTH_APPLE       0x851E
#define GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_APPLE  0x8520
#define GL_VERTEX_ARRAY_RANGE_POINTER_APPLE      0x8521
#define GL_VERTEX_ARRAY_STORAGE_HINT_APPLE       0x851F
#define GL_STORAGE_CACHED_APPLE                  0x85BE
#define GL_STORAGE_SHARED_APPLE                  0x85BF

static int initialise_GL_APPLE_vertex_array_range();

#else
static int GL_APPLE_vertex_array_range_initialised = 1;
#endif
