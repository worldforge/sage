// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_SGIS_generate_mipmap_H
#define GL_SGIS_generate_mipmap_H 1

#include <sage/sage.h>

#ifndef GL_SGIS_generate_mipmap
#define GL_SGIS_generate_mipmap 1

#define GL_GENERATE_MIPMAP_SGIS            0x8191
#define GL_GENERATE_MIPMAP_HINT_SGIS       0x8192

#endif

SAGEAPI int GL_SGIS_generate_mipmap_initialised;
SAGEAPI int initialise_GL_SGIS_generate_mipmap();

#endif
