// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

// TODO this is also GL_SUN_multi_draw_arrays!

#ifndef GL_EXT_multi_draw_arrays_H
#define GL_EXT_multi_draw_arrays_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_multi_draw_arrays
#define GL_EXT_multi_draw_arrays 1

typedef void (*PFNGLMULTIDRAWARRAYSEXTPROC)(GLenum mode, GLint *first, GLsizei *count, GLsizei primcount);
typedef void (*PFNGLMULTIDRAWELEMENTSEXTPROC)(GLenum mode, GLsizei *count, GLenum type, const GLvoid **indices, GLsizei primcount);

#endif

SAGEAPI PFNGLMULTIDRAWARRAYSEXTPROC glMultiDrawArraysEXT;
SAGEAPI PFNGLMULTIDRAWELEMENTSEXTPROC glMultiDrawElementsEXT;

SAGEAPI int GL_EXT_multi_draw_arrays_initialised;
SAGEAPI int initialise_GL_EXT_multi_draw_arrays();

#endif
