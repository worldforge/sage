// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_NV_register_combiners2
#define GL_NV_register_combiners2 1

#include <GL/gl.h>

static const char * const str_GL_NV_register_combiners2 = "GL_NV_register_combiners2";
static int GL_NV_register_combiners2_initialised = 0;

// Function pointers
typedef void (*PFNGLCOMBINERSTAGEPARAMETERFVNVPROC)(GLenum stage, GLenum pname, const GLfloat *params);
static PFNGLCOMBINERSTAGEPARAMETERFVNVPROC glCombinerStageParameterfvNV = 0;

typedef void (*PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC)(GLenum stage, GLenum pname, GLfloat *params);
static PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC glGetCombinerStageParameterfvNV = 0;

// Constants

#define PER_STAGE_CONSTANTS_NV                         0x8535

static int initialise_GL_NV_register_combiners2();

#else
static int GL_NV_register_combiners2_initialised = 0;

#endif /* GL_NV_register_combiners2 */
