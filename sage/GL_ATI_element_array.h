// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ATI_element_array_H
#define GL_ATI_element_array_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_ATI_element_array
#define GL_ATI_element_array 1

typedef void (*PFNGLELEMENTPOINTERATIPROC)(GLenum type, const void *pointer);
typedef void (*PFNGLDRAWELEMENTARRAYATIPROC)(GLenum mode, GLsizei count);
typedef void (*PFNGLDRAWRANGEELEMENTARRAYATIPROC)(GLenum mode, GLuint start, GLuint end, GLsizei count);

#define GL_ELEMENT_ARRAY_ATI               0x8768
#define GL_ELEMENT_ARRAY_TYPE_ATI          0x8769
#define GL_ELEMENT_ARRAY_POINTER_ATI       0x876A

#endif

SAGEAPI PFNGLELEMENTPOINTERATIPROC glElementPointerATI;
SAGEAPI PFNGLDRAWELEMENTARRAYATIPROC glDrawElementArrayATI;
SAGEAPI PFNGLDRAWRANGEELEMENTARRAYATIPROC glDrawRangeElementArrayATI;

SAGEAPI int GL_ATI_element_array_initialised;
SAGEAPI int initialise_GL_ATI_element_array();

#endif
