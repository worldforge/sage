// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_APPLE_element_array.h"
#include "utility.h"

#include "SDL.h"

static const char * const str_GL_APPLE_element_array = "GL_APPLE_element_array";

PFNGLELEMENTPOINTERAPPLEPROC glElementPointerAPPLE = 0;
PFNGLDRAWELEMENTARRAYAPPLEPROC glDrawElementArrayAPPLE = 0;
PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC glDrawRangeElementArrayAPPLE = 0;
PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC glMultiDrawElementArrayAPPLE = 0;
PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC glMultiDrawRangeElementArrayAPPLE = 0;

int GL_APPLE_element_array_initialised = 0;

int initialise_GL_APPLE_element_array() {
  if (!isExtensionSupported(str_GL_APPLE_element_array)) return 0;

  glElementPointerAPPLE = (PFNGLELEMENTPOINTERAPPLEPROC)SDL_GL_GetProcAddress("glElementPointerAPPLE");
  glDrawElementArrayAPPLE = (PFNGLDRAWELEMENTARRAYAPPLEPROC)SDL_GL_GetProcAddress("glDrawElementArrayAPPLE");
  glDrawRangeElementArrayAPPLE = (PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC)SDL_GL_GetProcAddress("glDrawRangeElementArrayAPPLE");
  glMultiDrawElementArrayAPPLE = (PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC)SDL_GL_GetProcAddress("glMultiDrawElementArrayAPPLE");
  glMultiDrawRangeElementArrayAPPLE = (PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC)SDL_GL_GetProcAddress("glMultiDrawRangeElementArrayAPPLE");

  GL_APPLE_element_array_initialised = (glElementPointerAPPLE && glDrawElementArrayAPPLE && glDrawRangeElementArrayAPPLE && glMultiDrawElementArrayAPPLE && glMultiDrawRangeElementArrayAPPLE);
  return GL_APPLE_element_array_initialised;
}
