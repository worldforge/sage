// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_draw_range_elements_H
#define GL_EXT_draw_range_elements_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_draw_range_elements
#define GL_EXT_draw_range_elements 1


typedef void (*PFNGLDRAWRANGEELEMENTSEXTPROC)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices);

#define GL_MAX_ELEMENTS_VERTICES_EXT      0x80E8
#define GL_MAX_ELEMENTS_INDICES_EXT       0x80E9

#endif

SAGEAPI PFNGLDRAWRANGEELEMENTSEXTPROC glDrawRangeElementsEXT;

SAGEAPI int GL_EXT_draw_range_elements_initialised;
SAGEAPI int initialise_GL_EXT_draw_range_elements();

#endif
