// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_APPLE_element_array
#define GL_APPLE_element_array 1

#include <GL/gl.h>

static const char * const str_GL_APPLE_element_array = "GL_APPLE_element_array";
static int GL_APPLE_element_array_initialised = 0;

typedef void (*PFNGLELEMENTPOINTERAPPLEPROC)(GLenum type, const void *pointer);
static PFNGLELEMENTPOINTERAPPLEPROC glElementPointerAPPLE = 0;

typedef void (*PFNGLDRAWELEMENTARRAYAPPLEPROC)(GLenum mode, GLint first, GLsizei count);
static PFNGLDRAWELEMENTARRAYAPPLEPROC glDrawElementArrayAPPLE = 0;

typedef void (*PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC)(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count);
static PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC glDrawRangeElementArrayAPPLE = 0;

typedef void (*PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC)(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
static PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC glMultiDrawElementArrayAPPLE = 0;

typedef void (*PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC)(GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount);
static PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC glMultiDrawRangeElementArrayAPPLE = 0;

#define GL_ELEMENT_ARRAY_APPLE             0x8768
#define GL_ELEMENT_ARRAY_TYPE_APPLE        0x8769
#define GL_ELEMENT_ARRAY_POINTER_APPLE     0x876A

static int initialise_GL_APPLE_element_array();

#else
static int GL_APPLE_element_array_initialised = 1;
#endif
