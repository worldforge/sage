// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_422_pixels_H
#define GL_EXT_422_pixels_H 1

#include <sage/sage.h>

#ifndef GL_EXT_422_pixels
#define GL_EXT_422_pixels 1

#define GL_422_EXT                            0x80CC
#define GL_422_REV_EXT                        0x80CD
#define GL_422_AVERAGE_EXT                    0x80CE
#define GL_422_REV_AVERAGE_EXT                0x80CF

#endif

SAGEAPI int GL_EXT_422_pixels_initialised;
SAGEAPI int initialise_GL_EXT_422_pixels();

#endif
