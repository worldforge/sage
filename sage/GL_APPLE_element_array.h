// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_APPLE_element_array_H
#define GL_APPLE_element_array_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_APPLE_element_array
#define GL_APPLE_element_array 1


typedef void (*PFNGLELEMENTPOINTERAPPLEPROC)(GLenum type, const void *pointer);
typedef void (*PFNGLDRAWELEMENTARRAYAPPLEPROC)(GLenum mode, GLint first, GLsizei count);
typedef void (*PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC)(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count);
typedef void (*PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC)(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
typedef void (*PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC)(GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount);

#define GL_ELEMENT_ARRAY_APPLE             0x8768
#define GL_ELEMENT_ARRAY_TYPE_APPLE        0x8769
#define GL_ELEMENT_ARRAY_POINTER_APPLE     0x876A

#endif

SAGEAPI PFNGLELEMENTPOINTERAPPLEPROC glElementPointerAPPLE;
SAGEAPI PFNGLDRAWELEMENTARRAYAPPLEPROC glDrawElementArrayAPPLE;
SAGEAPI PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC glDrawRangeElementArrayAPPLE;
SAGEAPI PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC glMultiDrawElementArrayAPPLE;
SAGEAPI PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC glMultiDrawRangeElementArrayAPPLE;

SAGEAPI int GL_APPLE_element_array_initialised;
SAGEAPI int initialise_GL_APPLE_element_array();

#endif

