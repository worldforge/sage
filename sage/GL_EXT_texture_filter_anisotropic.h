// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_texture_filter_anisotropic_H
#define GL_EXT_texture_filter_anisotropic_H 1

#include <sage/sage.h>

#ifndef GL_EXT_texture_filter_anisotropic
#define GL_EXT_texture_filter_anisotropic 1

#define GL_TEXTURE_MAX_ANISOTROPY_EXT          0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT      0x84FF
	 
#endif

SAGEAPI int GL_EXT_texture_filter_anisotropic_initialised;
SAGEAPI int initialise_GL_EXT_texture_filter_anisotropic();

#endif
