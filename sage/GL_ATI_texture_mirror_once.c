// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ATI_texture_mirror_once.h"
#include "utility.h"

int initialise_GL_ATI_texture_mirror_once() {
  GL_ATI_texture_mirror_once_initialised = isExtensionSupported(str_GL_ATI_texture_mirror_once);
  return GL_ATI_texture_mirror_once_initialised;
}
