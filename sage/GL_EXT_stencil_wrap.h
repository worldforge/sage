// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_stencil_wrap_H
#define GL_EXT_stencil_wrap_H 1

#include <sage/sage.h>

#ifndef GL_EXT_stencil_wrap
#define GL_EXT_stencil_wrap 1

#define GL_INCR_WRAP_EXT             0x8507
#define GL_DECR_WRAP_EXT             0x8508
	 
#endif

SAGEAPI int GL_EXT_stencil_wrap_initialised;
SAGEAPI int initialise_GL_EXT_stencil_wrap();

#endif
