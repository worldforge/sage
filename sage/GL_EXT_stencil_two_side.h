// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_stencil_two_side_H
#define GL_EXT_stencil_two_side_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_stencil_two_side
#define GL_EXT_stencil_two_side 1

typedef void (*PFNGLACTIVESTENCILFACEEXTPROC)(GLenum face);

#define GL_STENCIL_TEST_TWO_SIDE_EXT                 0x8910
#define GL_ACTIVE_STENCIL_FACE_EXT                   0x8911

#endif

SAGEAPI PFNGLACTIVESTENCILFACEEXTPROC glActiveStencilFaceEXT;

SAGEAPI int GL_EXT_stencil_two_side_initialised;
SAGEAPI int initialise_GL_EXT_stencil_two_side();

#endif
