// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_index_func_H
#define GL_EXT_index_func_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_index_func
#define GL_EXT_index_func 1

typedef void (*PFNGLINDEXFUNCEXTPROC)(GLenum func, GLfloat ref);

#define GL_INDEX_TEST_EXT                 0x81B5
#define GL_INDEX_TEST_FUNC_EXT            0x81B6
#define GL_INDEX_TEST_REF_EXT             0x81B7

#endif

SAGEAPI PFNGLINDEXFUNCEXTPROC glIndexFuncEXT;

SAGEAPI int GL_EXT_index_func_initialised;
SAGEAPI int initialise_GL_EXT_index_func();

#endif
