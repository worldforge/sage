// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ATI_vertex_array_object
#define GL_ATI_vertex_array_object 1

#include <GL/gl.h>

static const char * const str_GL_ATI_vertex_array_object = "GL_ATI_vertex_array_object";
static int GL_ATI_vertex_array_object_initialised = 0;

typedef GLuint (*PFNGLNEWOBJECTBUFFERATIPROC)(GLsizei size, const void *pointer, GLenum usage);
static PFNGLNEWOBJECTBUFFERATIPROC glNewObjectBufferATI = 0;

typedef GLboolean (*PFNGLISOBJECTBUFFERATIPROC)(GLuint buffer);
static PFNGLISOBJECTBUFFERATIPROC glIsObjectBufferATI = 0;

typedef void (*PFNGLUPDATEOBJECTBUFFERATIPROC)(GLuint buffer, GLuint offset, GLsizei size, const void *pointer, GLenum preserve);
static PFNGLUPDATEOBJECTBUFFERATIPROC glUpdateObjectBufferATI = 0;

typedef void (*PFNGLGETOBJECTBUFFERFVATIPROC)(GLuint buffer, GLenum pname, GLfloat *params);
static PFNGLGETOBJECTBUFFERFVATIPROC glGetObjectBufferfvATI = 0;

typedef void (*PFNGLGETOBJECTBUFFERIVATIPROC)(GLuint buffer, GLenum pname, GLint *params);
static PFNGLGETOBJECTBUFFERIVATIPROC glGetObjectBufferivATI = 0;

typedef void (*PFNGLDELETEOBJECTBUFFERATIPROC)(GLuint buffer);
static PFNGLDELETEOBJECTBUFFERATIPROC glDeleteObjectBufferATI = 0;

typedef void (*PFNGLARRAYOBJECTATIPROC)(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
static PFNGLARRAYOBJECTATIPROC glArrayObjectATI = 0;

typedef void (*PFNGLGETARRAYOBJECTFVATIPROC)(GLenum array, GLenum pname, GLfloat *params);
static PFNGLGETARRAYOBJECTFVATIPROC glGetArrayObjectfvATI = 0;

typedef void (*PFNGLGETARRAYOBJECTIVATIPROC)(GLenum array, GLenum pname, GLint *params);
static PFNGLGETARRAYOBJECTIVATIPROC glGetArrayObjectivATI = 0;
	

typedef void (*PFNGLVARIANTARRAYOBJECTATIPROC)(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
static PFNGLVARIANTARRAYOBJECTATIPROC glVariantArrayObjectATI = 0;

typedef void (*PFNGLGETVARIANTARRAYOBJECTFVATIPROC)(GLuint id, GLenum pname, GLfloat *params);
static PFNGLGETVARIANTARRAYOBJECTFVATIPROC glGetVariantArrayObjectfvATI = 0;

typedef void (*PFNGLGETVARIANTARRAYOBJECTIVATIPROC)(GLuint id, GLenum pname, GLint *params);
static PFNGLGETVARIANTARRAYOBJECTIVATIPROC glGetVariantArrayObjectivATI = 0;

#define GL_STATIC_ATI                      0x8760
#define GL_DYNAMIC_ATI                     0x8761

static int initialise_GL_ATI_vertex_array_object();

#else
static int GL_ATI_vertex_array_object_initialised = 1;
#endif
