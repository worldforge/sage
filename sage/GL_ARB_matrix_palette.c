// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ARB_matrix_palette.h"
#include "utility.h"

#include "SDL.h"

static const char * const str_GL_ARB_matrix_palette = "GL_ARB_matrix_palette";

PFNGLCURRENTPALETTEMATRIXARBPROC glCurrentPaletteMatrixARB = 0;
PFNGLMATRIXINDEXUBVARBPROC glMatrixIndexubvARB = 0;
PFNGLMATRIXINDEXUSVARBPROC glMatrixIndexusvARB = 0;
PFNGLMATRIXINDEXUIVARBPROC glMatrixIndexuivARB = 0;
PFNGLMATRIXINDEXPOINTERARBPROC glMatrixIndexPointerARB = 0;

int GL_ARB_matrix_palette_initialised = 0;

int initialise_GL_ARB_matrix_palette() {
  if (!isExtensionSupported(str_GL_ARB_matrix_palette) ) {
    return 0;
  }
  glCurrentPaletteMatrixARB = (PFNGLCURRENTPALETTEMATRIXARBPROC)SDL_GL_GetProcAddress("glCurrentPaletteMatrixARB");
  glMatrixIndexubvARB = (PFNGLMATRIXINDEXUBVARBPROC)SDL_GL_GetProcAddress("glMatrixIndexubvARB");    
  glMatrixIndexusvARB = (PFNGLMATRIXINDEXUSVARBPROC)SDL_GL_GetProcAddress("glMatrixIndexusvARB");
  glMatrixIndexuivARB = (PFNGLMATRIXINDEXUIVARBPROC)SDL_GL_GetProcAddress("glMatrixIndexuivARB");
  glMatrixIndexPointerARB = (PFNGLMATRIXINDEXPOINTERARBPROC)SDL_GL_GetProcAddress("glMatrixIndexPointerARB");
  
  GL_ARB_matrix_palette_initialised = (glCurrentPaletteMatrixARB && glMatrixIndexubvARB && glMatrixIndexusvARB && glMatrixIndexuivARB && glMatrixIndexPointerARB);
  
  return GL_ARB_matrix_palette_initialised;
}
