// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_texture_lod_bias_H
#define GL_EXT_texture_lod_bias_H 1

#include <sage/sage.h>

#ifndef GL_EXT_texture_lod_bias
#define GL_EXT_texture_lod_bias 1

#define GL_TEXTURE_FILTER_CONTROL_EXT          0x8500
#define GL_TEXTURE_LOD_BIAS_EXT                0x8501
#define GL_MAX_TEXTURE_LOD_BIAS_EXT            0x84FD

#endif

SAGEAPI int GL_EXT_texture_lod_bias_initialised;
SAGEAPI int initialise_GL_EXT_texture_lod_bias();

#endif
