// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_3DFX_texture_compression_FXT1
#define GL_3DFX_texture_compression_FXT1 1

static const char * const str_GL_3DFX_texture_compression_FXT1 = "GL_3DFX_texture_compression_FXT1";
static int GL_3DFX_texture_compression_FXT1_initialised = 0;

#define GL_COMPRESSED_RGB_FXT1_3DFX                          0x86B0
#define GL_COMPRESSED_RGBA_FXT1_3DFX                         0x86B1
	 
static int initialise_GL_3DFX_texture_compression_FXT1();

#else
static int GL_3DFX_texture_compression_FXT1_initialised = 1;
#endif
