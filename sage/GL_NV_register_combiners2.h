// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_NV_register_combiners2_H
#define GL_NV_register_combiners2_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_NV_register_combiners2
#define GL_NV_register_combiners2 1

// Function pointers
typedef void (*PFNGLCOMBINERSTAGEPARAMETERFVNVPROC)(GLenum stage, GLenum pname, const GLfloat *params);
typedef void (*PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC)(GLenum stage, GLenum pname, GLfloat *params);

// Constants
#define PER_STAGE_CONSTANTS_NV                         0x8535

#endif

SAGEAPI PFNGLCOMBINERSTAGEPARAMETERFVNVPROC glCombinerStageParameterfvNV;
SAGEAPI PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC glGetCombinerStageParameterfvNV;

SAGEAPI int GL_NV_register_combiners2_initialised;
SAGEAPI int initialise_GL_NV_register_combiners2();

#endif
