// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_static_vertex_array_H
#define GL_EXT_static_vertex_array_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_static_vertex_array
#define GL_EXT_static_vertex_array 1


typedef void (*PFNGLLOCKARRAYSEXTPROC)(GLint first, GLsizei count);
typedef void (*PFNGLUNLOCKARRAYSEXTPROC)(void);
		  
#endif

SAGEAPI PFNGLLOCKARRAYSEXTPROC glLockArraysEXT;
SAGEAPI PFNGLUNLOCKARRAYSEXTPROC glUnlockArraysEXT;

SAGEAPI int GL_EXT_static_vertex_array_initialised;
SAGEAPI int initialise_GL_EXT_static_vertex_array();

#endif
