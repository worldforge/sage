// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ATI_vertex_array_object_H
#define GL_ATI_vertex_array_object_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_ATI_vertex_array_object
#define GL_ATI_vertex_array_object 1

typedef GLuint (*PFNGLNEWOBJECTBUFFERATIPROC)(GLsizei size, const void *pointer, GLenum usage);
typedef GLboolean (*PFNGLISOBJECTBUFFERATIPROC)(GLuint buffer);
typedef void (*PFNGLUPDATEOBJECTBUFFERATIPROC)(GLuint buffer, GLuint offset, GLsizei size, const void *pointer, GLenum preserve);
typedef void (*PFNGLGETOBJECTBUFFERFVATIPROC)(GLuint buffer, GLenum pname, GLfloat *params);
typedef void (*PFNGLGETOBJECTBUFFERIVATIPROC)(GLuint buffer, GLenum pname, GLint *params);
typedef void (*PFNGLDELETEOBJECTBUFFERATIPROC)(GLuint buffer);
typedef void (*PFNGLARRAYOBJECTATIPROC)(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
typedef void (*PFNGLGETARRAYOBJECTFVATIPROC)(GLenum array, GLenum pname, GLfloat *params);
typedef void (*PFNGLGETARRAYOBJECTIVATIPROC)(GLenum array, GLenum pname, GLint *params);
typedef void (*PFNGLVARIANTARRAYOBJECTATIPROC)(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
typedef void (*PFNGLGETVARIANTARRAYOBJECTFVATIPROC)(GLuint id, GLenum pname, GLfloat *params);
typedef void (*PFNGLGETVARIANTARRAYOBJECTIVATIPROC)(GLuint id, GLenum pname, GLint *params);

#define GL_STATIC_ATI                      0x8760
#define GL_DYNAMIC_ATI                     0x8761

#endif

SAGEAPI PFNGLNEWOBJECTBUFFERATIPROC glNewObjectBufferATI;
SAGEAPI PFNGLISOBJECTBUFFERATIPROC glIsObjectBufferATI;
SAGEAPI PFNGLUPDATEOBJECTBUFFERATIPROC glUpdateObjectBufferATI;
SAGEAPI PFNGLGETOBJECTBUFFERFVATIPROC glGetObjectBufferfvATI;
SAGEAPI PFNGLGETOBJECTBUFFERIVATIPROC glGetObjectBufferivATI;
SAGEAPI PFNGLDELETEOBJECTBUFFERATIPROC glDeleteObjectBufferATI;
SAGEAPI PFNGLARRAYOBJECTATIPROC glArrayObjectATI;
SAGEAPI PFNGLGETARRAYOBJECTFVATIPROC glGetArrayObjectfvATI;
SAGEAPI PFNGLGETARRAYOBJECTIVATIPROC glGetArrayObjectivATI;
SAGEAPI PFNGLVARIANTARRAYOBJECTATIPROC glVariantArrayObjectATI;
SAGEAPI PFNGLGETVARIANTARRAYOBJECTFVATIPROC glGetVariantArrayObjectfvATI;
SAGEAPI PFNGLGETVARIANTARRAYOBJECTIVATIPROC glGetVariantArrayObjectivATI;

SAGEAPI int GL_ATI_vertex_array_object_initialised;
SAGEAPI int initialise_GL_ATI_vertex_array_object();

#endif
