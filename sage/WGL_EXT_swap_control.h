// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef WGL_EXT_swap_control_H
#define WGL_EXT_swap_control_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef WGL_EXT_swap_control
#define WGL_EXT_swap_control 1

typedef BOOL (*PFNWGLSWAPINTERVALEXTPROC)(GLint interval);
typedef int (*PFNWGLGETSWAPINTERVALEXTPROC)(void);
	
#endif

SAGEAPI PFNWGLSWAPINTERVALEXTPROC wglSwapIntervalEXT;
SAGEAPI PFNWGLGETSWAPINTERVALEXTPROC wglGetSwapIntervalEXT;
	
SAGEAPI int WGL_EXT_swap_control_initialised;
SAGEAPI int initialise_WGL_EXT_swap_control();

#endif
