// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_APPLE_vertex_array_object_H
#define GL_APPLE_vertex_array_object_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_APPLE_vertex_array_object
#define GL_APPLE_vertex_array_object 1

typedef void (*PFNGLBINDVERTEXARRAYAPPLEPROC)(GLuint array);
typedef void (*PFNGLDELETEVERTEXARRAYSAPPLEPROC)(GLsizei n, const GLuint *arrays);
typedef void (*PFNGLGENVERTEXARRAYSAPPLEPROC)(GLsizei n, const GLuint *arrays);
typedef GLboolean (*PFNGLISVERTEXARRAYAPPLEPROC)(GLuint array);

#define GL_VERTEX_ARRAY_BINDING_APPLE                 0x85B5

#endif

SAGEAPI PFNGLBINDVERTEXARRAYAPPLEPROC glBindVertexArrayAPPLE;
SAGEAPI PFNGLDELETEVERTEXARRAYSAPPLEPROC glDeleteVertexArraysAPPLE;
SAGEAPI PFNGLGENVERTEXARRAYSAPPLEPROC glGenVertexArraysAPPLE;
SAGEAPI PFNGLISVERTEXARRAYAPPLEPROC glIsVertexArrayAPPLE;

SAGEAPI int GL_APPLE_vertex_array_object_initialised;
SAGEAPI int initialise_GL_APPLE_vertex_array_object();

#endif
