// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_subtexture_H
#define GL_EXT_subtexture_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_subtexture
#define GL_EXT_subtexture 1

typedef void (*PFNGLTEXSUBIMAGE1DEXTPROC)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (*PFNGLTEXSUBIMAGE2DEXTPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (*PFNGLTEXSUBIMAGE3DEXTPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid* pixels);

#endif

SAGEAPI PFNGLTEXSUBIMAGE1DEXTPROC glTexSubImage1DEXT;
SAGEAPI PFNGLTEXSUBIMAGE2DEXTPROC glTexSubImage2DEXT;
SAGEAPI PFNGLTEXSUBIMAGE3DEXTPROC glTexSubImage3DEXT;

SAGEAPI int GL_EXT_subtexture_initialised;
SAGEAPI int initialise_GL_EXT_subtexture();

#endif
