// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_packed_pixels_H
#define GL_EXT_packed_pixels_H 1

#include <sage/sage.h>

#ifndef GL_EXT_packed_pixels
#define GL_EXT_packed_pixels 1

#define GL_UNSIGNED_BYTE_3_3_2_EXT         0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4_EXT      0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1_EXT      0x8034
#define GL_UNSIGNED_INT_8_8_8_8_EXT        0x8035
#define GL_UNSIGNED_INT_10_10_10_2_EXT     0x8036
				
#endif

SAGEAPI int GL_EXT_packed_pixels_initialised;
SAGEAPI int initialise_GL_EXT_packed_pixels();

#endif
