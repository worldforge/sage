// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include <GL/gl.h>
#include <string.h>

#include "utility.h"

/*
 * function Taken from OpenGL FAQ
 */

static GLubyte *extensions = 0;

int isExtensionSupported(const char *extension) {
//  const GLubyte *extensions = NULL;
  const GLubyte *start;
  GLubyte *where, *terminator;

  /* Extension names should not have spaces. */
  where = (GLubyte *) strchr(extension, ' ');
  if (where || *extension == '\0')
    return 0;
  
  if (!extensions) extensions = glGetString(GL_EXTENSIONS);
  
  if (!extensions) return 0;
  
  /* It takes a bit of care to be fool-proof about parsing the
     OpenGL extensions string. Don't be fooled by sub-strings,
     etc. */
  start = extensions;
  for (;;) {
    where = (GLubyte*) strstr((const char *) start, extension);
    if (!where)
      break;
    terminator = where + strlen(extension);
    if (where == start || *(where - 1) == ' ')
      if (*terminator == ' ' || * terminator == '\0')
        return 1;
    start = terminator;
  }
  return 0;
}
