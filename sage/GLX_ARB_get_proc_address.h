// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GLX_ARB_get_proc_address
#define GLX_ARB_get_proc_address 1

#include <GL/gl.h>

static const char * const str_GLX_ARB_get_proc_address = "GLX_ARB_get_proc_address";
static int GLX_ARB_get_proc_address_initialised = 0;

//TODO how do i do this one?
//void (*glXGetProcAddressARB(const GLubyte *procName))(...)

static int initialise_GLX_ARB_get_proc_address();

#else
static int GLX_ARB_get_proc_address_initialised = 1;
#endif
