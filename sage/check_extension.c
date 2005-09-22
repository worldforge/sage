// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003-2004 Simon Goodall

#define __glext_h_ 1
#include "GL.h"
#undef __glext_h_
#include <string.h>

#include <sage/utility.h>

/*
 * function Taken from OpenGL FAQ
 */

/*@null@*/static GLubyte *extensions = NULL;

int isExtensionSupported(const char *extension) {
//  const GLubyte *extensions = NULL;
  const GLubyte *start;
  GLubyte *where, *terminator;

  /* Extension names should not have spaces. */
  where = (GLubyte *) strchr(extension, ' ');
  if ((where != NULL) || *extension == '\0')
    return 0;
  
  if (extensions == NULL) extensions = (GLubyte*)glGetString(GL_EXTENSIONS);
  
  if (extensions == NULL) return 0;
  
  /* It takes a bit of care to be fool-proof about parsing the
     OpenGL extensions string. Don't be fooled by sub-strings,
     etc. */
  start = extensions;
  for (;;) {
    where = (GLubyte*) strstr((const char *) start, extension);
    if (!where)
      break;
    terminator = where + strlen(extension);
    if (where == start || *(where - 1) == (GLubyte)' ')
      if (*terminator == (GLubyte)' ' || *terminator == (GLubyte)'\0')
        return 1;
    start = terminator;
  }
  return 0;
}
