// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_blend_subtract
#define GL_EXT_blend_subtract 1

static const char * const str_GL_EXT_blend_subtract = "GL_EXT_blend_subtract";
static int GL_EXT_blend_subtract_initialised = 0;

#define GL_FUNC_SUBTRACT_EXT                0x800A
#define GL_FUNC_REVERSE_SUBTRACT_EXT        0x800B
	
static int initialise_GL_EXT_blend_subtract();

#else
static int GL_EXT_blend_subtract_initialised = 1;
#endif
