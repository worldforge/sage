// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_blend_subtract_H
#define GL_EXT_blend_subtract_H 1

#include <sage/sage.h>

#ifndef GL_EXT_blend_subtract
#define GL_EXT_blend_subtract 1

#define GL_FUNC_SUBTRACT_EXT                0x800A
#define GL_FUNC_REVERSE_SUBTRACT_EXT        0x800B
	
#endif

SAGEAPI int GL_EXT_blend_subtract_initialised;
SAGEAPI int initialise_GL_EXT_blend_subtract();

#endif
