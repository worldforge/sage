// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_cmyka_H
#define GL_EXT_cmyka_H 1

#include <sage/sage.h>

#ifndef GL_EXT_cmyka
#define GL_EXT_cmyka 1

#define GL_CMYK_EXT                0x800C
#define GL_CMYKA_EXT               0x800D
#define GL_PACK_CMYK_HINT_EXT      0x800E
#define GL_UNPACK_CMYK_HINT_EXT    0x800F
		
#endif

SAGEAPI int GL_EXT_cmyka_initialised;
SAGEAPI int initialise_GL_EXT_cmyka();

#endif
