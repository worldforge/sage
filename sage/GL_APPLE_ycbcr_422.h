// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_APPLE_ycbcr_422_H
#define GL_APPLE_ycbcr_422_H 1

#include <sage/sage.h>

#ifndef GL_APPLE_ycbcr_422
#define GL_APPLE_ycbcr_422 1

#define GL_YCBCR_422_APPLE                 0x85B9
#define GL_UNSIGNED_SHORT_8_8_APPLE        0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_APPLE    0x85BB

#endif
	
SAGEAPI int GL_APPLE_ycbcr_422_initialised;
SAGEAPI int initialise_GL_APPLE_ycbcr_422();

#endif
