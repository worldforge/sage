// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_light_texture_H
#define GL_EXT_light_texture_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_light_texture
#define GL_EXT_light_texture 1

typedef void (*PFNGLAPPLYTEXTUREEXTPROC)(GLenum mode);
typedef void (*PFNGLTEXTURELIGHTEXTPROC)(GLenum pname)
typedef void (*PFNGLTEXTUREMATERIALEXTPROC)(GLenum face, GLenum mode);

#define GL_FRAGMENT_MATERIAL_EXT                       0x8349
#define GL_FRAGMENT_NORMAL_EXT                         0x834A
#define GL_FRAGMENT_DEPTH_EXT                          0x8452
#define GL_FRAGMENT_COLOR_EXT                          0x834C

#endif

SAGEAPI PFNGLAPPLYTEXTUREEXTPROC glApplyTextureEXT;
SAGEAPI PFNGLTEXTURELIGHTEXTPROC glTextureLightEXT;
SAGEAPI PFNGLTEXTUREMATERIALEXTPROC glTextureMaterialEXT;

SAGEAPI int GL_EXT_light_texture_initialised;
SAGEAPI int initialise_GL_EXT_light_texture();

#endif
