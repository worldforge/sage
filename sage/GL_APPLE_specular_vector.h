// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_APPLE_specular_vector
#define GL_APPLE_specular_vector 1

static const char * const str_GL_APPLE_specular_vector = "GL_APPLE_specular_vector";
static int GL_APPLE_specular_vector_initialised = 0;

#define GL_LIGHT_MODEL_SPECULAR_VECTOR_APPLE           0x85B0

static int initialise_GL_APPLE_specular_vector();

#else
static int GL_APPLE_specular_vector_initialised = 1;
#endif
