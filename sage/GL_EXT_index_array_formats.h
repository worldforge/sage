// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_index_array_formats_H
#define GL_EXT_index_array_formats_H 1

#include <sage/sage.h>

#ifndef GL_EXT_index_array_formats
#define GL_EXT_index_array_formats 1

#define GL_IUI_V2F_EXT                    0x81AD
#define GL_IUI_V3F_EXT                    0x81AE
#define GL_IUI_N3F_V2F_EXT                0x81AF
#define GL_IUI_N3F_V3F_EXT                0x81B0
#define GL_T2F_IUI_V2F_EXT                0x81B1
#define GL_T2F_IUI_V3F_EXT                0x81B2
#define GL_T2F_IUI_N3F_V2F_EXT            0x81B3
#define GL_T2F_IUI_N3F_V3F_EXT            0x81B4

#endif

SAGEAPI int GL_EXT_index_array_formats_initialised;
SAGEAPI int initialise_GL_EXT_index_array_formats();

#endif
