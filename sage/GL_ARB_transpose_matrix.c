// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ARB_transpose_matrix.h"
#include "utility.h"

#include "SDL.h"

static const char * const str_GL_ARB_transpose_matrix = "GL_ARB_transpose_matrix";

PFNGLLOADTRANSPOSEMATRIXFARBPROC glLoadTransposeMatrixfARB = 0;
PFNGLLOADTRANSPOSEMATRIXDARBPROC glLoadTransposeMatrixdARB = 0;
PFNGLMULTTRANSPOSEMATRIXFARBPROC glMultTransposeMatrixfARB = 0;
PFNGLMULTTRANSPOSEMATRIXDARBPROC glMultTransposeMatrixdARB = 0;

int GL_ARB_transpose_matrix_initialised = 0;

int initialise_GL_ARB_transpose_matrix() {
  if (isExtensionSupported(str_GL_ARB_transpose_matrix)) {
    return 0;
  }
  glLoadTransposeMatrixfARB = (PFNGLLOADTRANSPOSEMATRIXFARBPROC)SDL_GL_GetProcAddress("glLoadTransposeMatrixfARB");
  glLoadTransposeMatrixdARB = (PFNGLLOADTRANSPOSEMATRIXDARBPROC)SDL_GL_GetProcAddress("glLoadTransposeMatrixdARB");
  glMultTransposeMatrixfARB = (PFNGLMULTTRANSPOSEMATRIXFARBPROC)SDL_GL_GetProcAddress("glMultTransposeMatrixfARB");
  glMultTransposeMatrixdARB = (PFNGLMULTTRANSPOSEMATRIXDARBPROC)SDL_GL_GetProcAddress("glMultTransposeMatrixdARB");

  GL_ARB_transpose_matrix_initialised = (glLoadTransposeMatrixfARB && glLoadTransposeMatrixdARB && glMultTransposeMatrixfARB && glMultTransposeMatrixdARB);
	  
  return GL_ARB_transpose_matrix_initialised;
}
