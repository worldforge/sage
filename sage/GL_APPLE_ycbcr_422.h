// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_APPLE_ycbcr_422
#define GL_APPLE_ycbcr_422 1

static const char * const str_GL_APPLE_ycbcr_422 = "GL_APPLE_ycbcr_422";
static int GL_APPLE_ycbcr_422_initialised = 0;

#define GL_YCBCR_422_APPLE                 0x85B9
#define GL_UNSIGNED_SHORT_8_8_APPLE        0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_APPLE    0x85BB

static int initialise_GL_APPLE_ycbcr_422();

#else
static int GL_APPLE_ycbcr_422_initialised = 1;
#endif
