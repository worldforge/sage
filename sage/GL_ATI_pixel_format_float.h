// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ATI_pixel_format_float
#define GL_ATI_pixel_format_float 1

static const char * const str_GL_ATI_pixel_format_float = "GL_ATI_pixel_format_float";
static int GL_ATI_pixel_format_float_initialised = 0;


#define GL_RGBA_FLOAT_MODE_ATI                     0x8820
#define GL_OLOR_CLEAR_UNCLAMPED_VALUE_ATI         0x8835
#define GL_GL_TYPE_RGBA_FLOAT_ATI                 0x21A0
					
static int initialise_GL_ATI_pixel_format_float();

#else
static int GL_ATI_pixel_format_float_initialised = 1;
#endif
