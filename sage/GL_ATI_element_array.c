// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ATI_element_array.h"
#include "utility.h"

int initialise_GL_ATI_element_array() {
  if (!isExtensionSupported(str_GL_ATI_element_array)) return 0;

  glElementPointerATI = (PFNGLELEMENTPOINTERATIPROC)SDL_GL_GetProcAddress("glElementPointerATI");
  glDrawElementArrayATI = (PFNGLDRAWELEMENTARRAYATIPROC)SDL_GL_GetProcAddress("glDrawElementArrayATI");
  glDrawRangeElementArrayATI = (PFNGLDRAWRANGEELEMENTARRAYATIPROC)SDL_GL_GetProcAddress("glDrawRangeElementArrayATI");

  GL_ATI_element_array_initialised = (glElementPointerATI && glDrawElementArrayATI && glDrawRangeElementArrayATI);

  return GL_ATI_element_array_initialised;
}
