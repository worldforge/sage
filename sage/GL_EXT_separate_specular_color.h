// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_separate_specular_color_H
#define GL_EXT_separate_specular_color_H 1

#include <sage/sage.h>

#ifndef GL_EXT_separate_specular_color
#define GL_EXT_separate_specular_color 1

#define GL_LIGHT_MODEL_COLOR_CONTROL_EXT       0x81F8
#define GL_SINGLE_COLOR_EXT                    0x81F9
#define GL_SEPARATE_SPECULAR_COLOR_EXT         0x81FA

#endif

SAGEAPI int GL_EXT_separate_specular_color_initialised;
SAGEAPI int initialise_GL_EXT_separate_specular_color();

#endif
