// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_bgra_H
#define GL_EXT_bgra_H 1

#include <sage/sage.h>

#ifndef GL_EXT_bgra
#define GL_EXT_bgra 1

#define GL_BGR_EXT 0x80E0
#define GL_BGRA_EXT 0x80E1

#endif

SAGEAPI int GL_EXT_bgra_initialised;
SAGEAPI int initialise_GL_EXT_bgra();

#endif
