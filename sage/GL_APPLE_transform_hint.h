// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_APPLE_transform_hint
#define GL_APPLE_transform_hint 1

static const char * const str_GL_APPLE_transform_hint = "GL_APPLE_transform_hint";
static int GL_APPLE_transform_hint_initialised = 0;

#define GL_TRANSFORM_HINT_APPLE                        0x85B1

static int initialise_GL_APPLE_transform_hint();

#else
static int GL_APPLE_transform_hint_initialised = 1;
#endif
