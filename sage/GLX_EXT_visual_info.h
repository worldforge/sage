// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GLX_EXT_visual_info_H
#define GLX_EXT_visual_info_H 1

#include <sage/sage.h>

#ifndef GLX_EXT_visual_info
#define GLX_EXT_visual_info 1

#define GLX_X_VISUAL_TYPE_EXT           0x22
#define GLX_TRANSPARENT_TYPE_EXT        0x23
#define GLX_TRANSPARENT_INDEX_VALUE_EXT 0x24
#define GLX_TRANSPARENT_RED_VALUE_EXT   0x25
#define GLX_TRANSPARENT_GREEN_VALUE_EXT 0x26
#define GLX_TRANSPARENT_BLUE_VALUE_EXT  0x27
#define GLX_TRANSPARENT_ALPHA_VALUE_EXT 0x28
#define GLX_TRUE_COLOR_EXT              0x8002
#define GLX_DIRECT_COLOR_EXT            0x8003
#define GLX_PSEUDO_COLOR_EXT            0x8004
#define GLX_STATIC_COLOR_EXT            0x8005
#define GLX_GRAY_SCALE_EXT              0x8006
#define GLX_STATIC_GRAY_EXT             0x8007
#define GLX_NONE_EXT                    0x8000
#define GLX_TRANSPARENT_RGB_EXT         0x8008
#define GLX_TRANSPARENT_INDEX_EXT       0x8009

#endif

SAGEAPI int GLX_EXT_visual_info_initialised;
SAGEAPI int initialise_GLX_EXT_visual_info();

#endif
