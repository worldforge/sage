// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_APPLE_vertex_array_object
#define GL_APPLE_vertex_array_object 1

#include <GL/gl.h>

static const char * const str_GL_APPLE_vertex_array_object = "GL_APPLE_vertex_array_object";
static int GL_APPLE_vertex_array_object_initialised = 0;

typedef void (*PFNGLBINDVERTEXARRAYAPPLEPROC)(GLuint array);
static PFNGLBINDVERTEXARRAYAPPLEPROC glBindVertexArrayAPPLE = 0;

typedef void (*PFNGLDELETEVERTEXARRAYSAPPLEPROC)(GLsizei n, const GLuint *arrays);
static PFNGLDELETEVERTEXARRAYSAPPLEPROC glDeleteVertexArraysAPPLE = 0;

typedef void (*PFNGLGENVERTEXARRAYSAPPLEPROC)(GLsizei n, const GLuint *arrays);
static PFNGLGENVERTEXARRAYSAPPLEPROC glGenVertexArraysAPPLE = 0;

typedef GLboolean (*PFNGLISVERTEXARRAYAPPLEPROC)(GLuint array);
static PFNGLISVERTEXARRAYAPPLEPROC glIsVertexArrayAPPLE = 0;


#define GL_VERTEX_ARRAY_BINDING_APPLE                 0x85B5

static int initialise_GL_APPLE_vertex_array_object();

#else
static int GL_APPLE_vertex_array_object_initialised = 1;
#endif
