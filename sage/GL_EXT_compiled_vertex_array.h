// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_compiled_vertex_array
#define GL_EXT_compiled_vertex_array 1

#include <GL/gl.h>

static const char * const str_GL_EXT_compiled_vertex_array = "GL_EXT_compiled_vertex_array";
static int GL_EXT_compiled_vertex_array_initialised = 0;

typedef void (*PFNGLLOCKARRAYSEXTPROC)(GLint first, GLsizei count);
static PFNGLLOCKARRAYSEXTPROC glLockArraysEXT = 0;

typedef void (*PFNGLUNLOCKARRAYSEXTPROC)(void);
static PFNGLUNLOCKARRAYSEXTPROC glUnlockArraysEXT = 0;

//#define GL_ARRAY_ELEMENT_LOCK_FIRST_EXT
//#define GL_ARRAY_ELEMENT_LOCK_COUNT_EXT
		  

static int initialise_GL_EXT_compiled_vertex_array();

#else
static int GL_EXT_compiled_vertex_array_initialised = 1;
#endif
