// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_paletted_texture_H
#define GL_EXT_paletted_texture_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_paletted_texture
#define GL_EXT_paletted_texture 1

typedef void (*PFNGLCOLORTABLEEXTPROC)(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid *data);
typedef void (*PFNGLCOLORSUBTABLEEXTPROC)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data);
typedef void (*PFNGLGETCOLORTABLEEXTPROC)(GLenum target, GLenum format, GLenum type, GLvoid *data);
typedef void (*PFNGLGETCOLORTABLEPARAMETERIVEXTPROC)(GLenum target, GLenum pname, GLint *params);
typedef void (*PFNGLGETCOLORTABLEPARAMETERFVEXTPROC)(GLenum target, GLenum pname, GLfloat *params);

#define GL_COLOR_INDEX1_EXT                0x80E2
#define GL_COLOR_INDEX2_EXT                0x80E3
#define GL_COLOR_INDEX4_EXT                0x80E4
#define GL_COLOR_INDEX8_EXT                0x80E5
#define GL_COLOR_INDEX12_EXT               0x80E6
#define GL_COLOR_INDEX16_EXT               0x80E7
#define GL_COLOR_TABLE_FORMAT_EXT          0x80D8
#define GL_COLOR_TABLE_WIDTH_EXT           0x80D9
#define GL_COLOR_TABLE_RED_SIZE_EXT        0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE_EXT      0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE_EXT       0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE_EXT      0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE_EXT  0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE_EXT  0x80DF
#define GL_TEXTURE_INDEX_SIZE_EXT          0x80ED
#define GL_TEXTURE_1D                      0x0DE0
#define GL_TEXTURE_2D                      0x0DE1
#define GL_TEXTURE_3D_EXT                  0x806F
#define GL_TEXTURE_CUBE_MAP_ARB            0x8513
#define GL_PROXY_TEXTURE_1D                0x8063
#define GL_PROXY_TEXTURE_2D                0x8064
#define GL_PROXY_TEXTURE_3D_EXT            0x8070
#define GL_PROXY_TEXTURE_CUBE_MAP_ARB      0x851B
#define GL_TEXTURE_1D                      0x0DE0
#define GL_TEXTURE_2D                      0x0DE1
#define GL_TEXTURE_3D_EXT                  0x806F
#define GL_TEXTURE_CUBE_MAP_ARB            0x8513

#endif

SAGEAPI PFNGLCOLORTABLEEXTPROC glColorTableEXT;
SAGEAPI PFNGLCOLORSUBTABLEEXTPROC glColorSubTableEXT;
SAGEAPI PFNGLGETCOLORTABLEEXTPROC glGetColorTableEXT;
SAGEAPI PFNGLGETCOLORTABLEPARAMETERIVEXTPROC glGetColorTableParameterivEXT;
SAGEAPI PFNGLGETCOLORTABLEPARAMETERFVEXTPROC glGetColorTableParameterfvEXT;

SAGEAPI int GL_EXT_paletted_texture_initialised;
SAGEAPI int initialise_GL_EXT_paletted_texture();

#endif
