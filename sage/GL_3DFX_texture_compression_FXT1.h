// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_3DFX_texture_compression_FXT1_H
#define GL_3DFX_texture_compression_FXT1_H 1

#include <sage/sage.h>

#ifndef GL_3DFX_texture_compression_FXT1
#define GL_3DFX_texture_compression_FXT1 1

#define GL_COMPRESSED_RGB_FXT1_3DFX                          0x86B0
#define GL_COMPRESSED_RGBA_FXT1_3DFX                         0x86B1

#endif

SAGEAPI int GL_3DFX_texture_compression_FXT1_initialised;
SAGEAPI int initialise_GL_3DFX_texture_compression_FXT1();

#endif
