// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_copy_texture_H
#define GL_EXT_copy_texture_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_copy_texture
#define GL_EXT_copy_texture 1

typedef void (*PFNGLCOPYTEXIMAGE1DEXTPROC)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
typdef void (*PFNGLCOPYTEXIMAGE2DEXTPROC)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (*PFNGLCOPYTEXSUBIMAGE1DEXTPROC)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (*PFNGLCOPYTEXSUBIMAGE2DEXTPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (*PFNGLCOPYTEXSUBIMAGE3DEXTPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);

#endif

SAGEAPI PFNGLCOPYTEXIMAGE1DEXTPROC glCopyTexImage1DEXT;
SAGEAPI PFNGLCOPYTEXIMAGE2DEXTPROC glCopyTexImage2DEXT;
SAGEAPI PFNGLCOPYTEXSUBIMAGE1DEXTPROC glCopyTexSubImage1DEXT;
SAGEAPI PFNGLCOPYTEXSUBIMAGE2DEXTPROC glCopyTexSubImage2DEXT;
SAGEAPI PFNGLCOPYTEXSUBIMAGE3DEXTPROC glCopyTexSubImage3DEXT;

SAGEAPI int GL_EXT_copy_texture_initialised;
SAGEAPI int initialise_GL_EXT_copy_texture();

#endif
