// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_clip_volume_hint
#define GL_EXT_clip_volume_hint 1

static const char * const str_GL_EXT_clip_volume_hint = "GL_EXT_clip_volume_hint";
static int GL_EXT_clip_volume_hint_initialised = 0;

#define GL_CLIP_VOLUME_CLIPPING_HINT_EXT   0x80F0

static int initialise_GL_EXT_clip_volume_hint();

#else
static int GL_EXT_clip_volume_hint_initialised = 1;
#endif
