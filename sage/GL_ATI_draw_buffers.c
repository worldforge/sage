// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ATI_draw_buffers.h"
#include "utility.h"

#include "SDL.h"

static const char * const str_GL_ATI_draw_buffers = "GL_ATI_draw_buffers";

PFNGLDRAWBUFFERSATIPROC glDrawBuffersATI = 0;

int GL_ATI_draw_buffers_initialised = 0;

int initialise_GL_ATI_draw_buffers() {
  if (!isExtensionSupported(str_GL_ATI_draw_buffers)) return 0;

  glDrawBuffersATI = (PFNGLDRAWBUFFERSATIPROC)SDL_GL_GetProcAddress("glDrawBuffersATI");

  GL_ATI_draw_buffers_initialised = (glDrawBuffersATI != 0);

  return GL_ATI_draw_buffers_initialised;
}
