// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_color_subtable_H
#define GL_EXT_color_subtable_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_color_subtable
#define GL_EXT_color_subtable 1

typedef void (*PFNGLCOLORSUBTABLEEXTPROC)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void *data);
typedef void (*PFNGLCOPYCOLORSUBTABLEEXTPROC)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);

#endif

SAGEAPI PFNGLCOLORSUBTABLEEXTPROC glColorSubTableEXT;
SAGEAPI PFNGLCOPYCOLORSUBTABLEEXTPROC glCopyColorSubTableEXT;

SAGEAPI int GL_EXT_color_subtable_initialised;
SAGEAPI int initialise_GL_EXT_color_subtable();

#endif
