// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef WGL_EXT_display_color_table_H
#define WGL_EXT_display_color_table_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef WGL_EXT_display_color_table
#define WGL_EXT_display_color_table 1

typedef GLboolean (*PFNWGLLOADDISPLAYCOLORTABLEEXTPROC)(GLushort *table, GLuint length);
typedef GLboolean (*PFNWGLBINDDISPLAYCOLORTABLEEXTPROC)(GLushort id);
typedef void (*PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC)(GLushort id);

#endif

SAGEAPI PFNWGLLOADDISPLAYCOLORTABLEEXTPROC wglLoadDisplayColorTableEXT;
SAGEAPI PFNWGLBINDDISPLAYCOLORTABLEEXTPROC wglBindDisplayColorTableEXT;
SAGEAPI PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC wglDestroyDisplayColorTableEXT;

SAGEAPI int WGL_EXT_display_color_table_initialised;
SAGEAPI int initialise_WGL_EXT_display_color_table();

#endif
