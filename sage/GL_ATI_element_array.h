// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ATI_element_array
#define GL_ATI_element_array 1

#include <GL/gl.h>

static const char * const str_GL_ATI_element_array = "GL_ATI_element_array";
static int GL_ATI_element_array_initialised = 0;


typedef void (*PFNGLELEMENTPOINTERATIPROC)(GLenum type, const void *pointer);
static PFNGLELEMENTPOINTERATIPROC glElementPointerATI = 0;

typedef void (*PFNGLDRAWELEMENTARRAYATIPROC)(GLenum mode, GLsizei count);
static PFNGLDRAWELEMENTARRAYATIPROC glDrawElementArrayATI = 0;

typedef void (*PFNGLDRAWRANGEELEMENTARRAYATIPROC)(GLenum mode, GLuint start, GLuint end, GLsizei count);
static PFNGLDRAWRANGEELEMENTARRAYATIPROC glDrawRangeElementArrayATI = 0;

#define GL_ELEMENT_ARRAY_ATI               0x8768
#define GL_ELEMENT_ARRAY_TYPE_ATI          0x8769
#define GL_ELEMENT_ARRAY_POINTER_ATI       0x876A

static int initialise_GL_ATI_element_array();

#else
static int GL_ATI_element_array_initialised = 1;
#endif
