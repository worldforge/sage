// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_cmyka
#define GL_EXT_cmyka 1

static const char * const str_GL_EXT_cmyka = "GL_EXT_cmyka";
static int GL_EXT_cmyka_initialised = 0;

#define GL_CMYK_EXT                0x800C
#define GL_CMYKA_EXT               0x800D
#define GL_PACK_CMYK_HINT_EXT      0x800E
#define GL_UNPACK_CMYK_HINT_EXT    0x800F
		
static int initialise_GL_EXT_cmyka();

#else
static int GL_EXT_cmyka_initialised = 1;
#endif
