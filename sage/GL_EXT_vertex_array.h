// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_vertex_array_H
#define GL_EXT_vertex_array_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_vertex_array
#define GL_EXT_vertex_array 1

typedef void (*PFNGLARRAYELEMENTEXTPROC)(GLint i);
typedef void (*PFNGLDRAWARRAYSEXTPROC)(GLenum mode, GLint first, GLsizei count);
typedef void (*PFNGLVERTEXPOINTEREXTPROC)(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid* pointer);
typedef void (*PFNGLNORMALPOINTEREXTPROC)(GLenum type, GLsizei stride, GLsizei count, const GLvoid* pointer);
typedef void (*PFNGLCOLORPOINTEREXTPROC)(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid* pointer);
typedef void (*PFNGLINDEXPOINTEREXTPROC)(GLenum type, GLsizei stride, GLsizei count, const GLvoid* pointer);
typedef void (*PFNGLTEXCOORDPOINTEREXTPROC)(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid* pointer);
typedef void (*PFNGLEDGEFLAGPOINTEREXTPROC)(GLsizei stride, GLsizei count, const GLboolean* pointer);
typedef void (*PFNGLGETPOINTERVEXTPROC)(GLenum pname, GLvoid** params);

#define GL_VERTEX_ARRAY_EXT		0x8074
#define GL_NORMAL_ARRAY_EXT		0x8075
#define GL_COLOR_ARRAY_EXT		0x8076
#define GL_INDEX_ARRAY_EXT		0x8077
#define GL_TEXTURE_COORD_ARRAY_EXT	0x8078
#define GL_EDGE_FLAG_ARRAY_EXT		0x8079
#define GL_DOUBLE_EXT			0x140A
#define GL_VERTEX_ARRAY_SIZE_EXT	0x807A
#define GL_VERTEX_ARRAY_TYPE_EXT	0x807B
#define GL_VERTEX_ARRAY_STRIDE_EXT	0x807C
#define GL_VERTEX_ARRAY_COUNT_EXT	0x807D
#define GL_NORMAL_ARRAY_TYPE_EXT	0x807E
#define GL_NORMAL_ARRAY_STRIDE_EXT	0x807F
#define GL_NORMAL_ARRAY_COUNT_EXT	0x8080
#define GL_COLOR_ARRAY_SIZE_EXT		0x8081
#define GL_COLOR_ARRAY_TYPE_EXT		0x8082
#define GL_COLOR_ARRAY_STRIDE_EXT	0x8083
#define GL_COLOR_ARRAY_COUNT_EXT	0x8084
#define GL_INDEX_ARRAY_TYPE_EXT		0x8085
#define GL_INDEX_ARRAY_STRIDE_EXT	0x8086
#define GL_INDEX_ARRAY_COUNT_EXT	0x8087
#define GL_TEXTURE_COORD_ARRAY_SIZE_EXT	0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE_EXT	0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE_EXT	0x808A
#define GL_TEXTURE_COORD_ARRAY_COUNT_EXT	0x808B
#define GL_EDGE_FLAG_ARRAY_STRIDE_EXT	0x808C
#define GL_EDGE_FLAG_ARRAY_COUNT_EXT	0x808D
#define GL_VERTEX_ARRAY_POINTER_EXT	0x808E
#define GL_NORMAL_ARRAY_POINTER_EXT	0x808F
#define GL_COLOR_ARRAY_POINTER_EXT	0x8090
#define GL_INDEX_ARRAY_POINTER_EXT	0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER_EXT 0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER_EXT	0x8093

#endif

SAGEAPI PFNGLARRAYELEMENTEXTPROC glArrayElementEXT;
SAGEAPI PFNGLDRAWARRAYSEXTPROC glDrawArraysEXT;
SAGEAPI PFNGLVERTEXPOINTEREXTPROC glVertexPointerEXT;
SAGEAPI PFNGLNORMALPOINTEREXTPROC glNormalPointerEXT;
SAGEAPI PFNGLCOLORPOINTEREXTPROC glColorPointerEXT;
SAGEAPI PFNGLINDEXPOINTEREXTPROC glIndexPointerEXT;
SAGEAPI PFNGLTEXCOORDPOINTEREXTPROC glTexCoordPointerEXT;
SAGEAPI PFNGLEDGEFLAGPOINTEREXTPROC glEdgeFlagPointerEXT;
SAGEAPI PFNGLGETPOINTERVEXTPROC glGetPointervEXT;

SAGEAPI int GL_EXT_vertex_array_initialised;
SAGEAPI int initialise_GL_EXT_vertex_array();

#endif
