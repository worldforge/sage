// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_cull_vertex_H
#define GL_EXT_cull_vertex_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_cull_vertex
#define GL_EXT_cull_vertex 1

typedef void (*PFNGLCULLPARAMETERFVEXTPROC)(GLenum pname, GLfloat *params);
typedef void (*PFNGLCULLPARAMETERDVEXTPROC)(GLenum pname, GLdouble *params);
	

#define GL_CULL_VERTEX_EXT                0x81AA
#define GL_CULL_VERTEX_EYE_POSITION_EXT   0x81AB
#define GL_CULL_VERTEX_OBJECT_POSITION_EXT 0x81AC

#endif

SAGEAPI PFNGLCULLPARAMETERFVEXTPROC glCullParameterfvEXT;
SAGEAPI PFNGLCULLPARAMETERDVEXTPROC glCullParameterdvEXT;
	
SAGEAPI int GL_EXT_cull_vertex_initialised;
SAGEAPI int initialise_GL_EXT_cull_vertex();

#endif
