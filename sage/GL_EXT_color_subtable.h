// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_color_subtable
#define GL_EXT_color_subtable 1

#include <GL/gl.h>

static const char * const str_GL_EXT_color_subtable = "GL_EXT_color_subtable";
static int GL_EXT_color_subtable_initialised = 0;


typedef void (*PFNGLCOLORSUBTABLEEXTPROC)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void *data);
static PFNGLCOLORSUBTABLEEXTPROC glColorSubTableEXT = 0;

typedef void (*PFNGLCOPYCOLORSUBTABLEEXTPROC)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
static PFNGLCOPYCOLORSUBTABLEEXTPROC glCopyColorSubTableEXT = 0;

static int initialise_GL_EXT_color_subtable();

#else
static int GL_EXT_color_subtable_initialised = 1;
#endif
