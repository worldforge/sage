// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ATI_text_fragment_shader.h"
#include "utility.h"

static int initialise_GL_ATI_text_fragment_shader() {
  GL_ATI_text_fragment_shader_initialised = isExtensionSupported(str_GL_ATI_text_fragment_shader);
  return GL_ATI_text_fragment_shader_initialised;
}
