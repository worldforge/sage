// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_texture_compression_s3tc_H
#define GL_EXT_texture_compression_s3tc_H 1

#include <sage/sage.h>

#ifndef GL_EXT_texture_compression_s3tc
#define GL_EXT_texture_compression_s3tc 1

#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT                   0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT                  0x83F1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_EXT                  0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_EXT                  0x83F3
			    
#endif

SAGEAPI int GL_EXT_texture_compression_s3tc_initialised;
SAGEAPI int initialise_GL_EXT_texture_compression_s3tc();

#endif
