// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GLX_EXT_visual_rating_H
#define GLX_EXT_visual_rating_H 1

#include <sage/sage.h>

#ifndef GLX_EXT_visual_rating
#define GLX_EXT_visual_rating 1

#define GLX_VISUAL_CAVEAT_EXT           0x20
#define GLX_NONE_EXT                    0x8000
#define GLX_SLOW_VISUAL_EXT             0x8001
#define GLX_NON_CONFORMANT_VISUAL_EXT   0x800D

#endif

SAGEAPI int GLX_EXT_visual_rating_initialised;
SAGEAPI int initialise_GLX_EXT_visual_rating();

#endif
