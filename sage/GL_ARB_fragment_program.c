// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ARB_fragment_program.h"
#include "utility.h"

#include "SDL.h"

static const char * const str_GL_ARB_fragment_program = "GL_ARB_fragment_program";

PFNGLPROGRAMSTRINGARBPROC glProgramStringARB = 0;
PFNGLBINDPROGRAMARBPROC glBindProgramARB = 0;
PFNGLDELETEPROGRAMSARBPROC glDeleteProgramsARB = 0;
PFNGLGENPROGRAMSARBPROC glGenProgramsARB = 0;
PFNGLPROGRAMENVPARAMETER4DARBPROC glProgramEnvParameter4dARB = 0;
PFNGLPROGRAMENVPARAMETER4DVARBPROC glProgramEnvParameter4dvARB = 0;
PFNGLPROGRAMENVPARAMETER4FARBPROC glProgramEnvParameter4fARB = 0;
PFNGLPROGRAMENVPARAMETER4FVARBPROC glProgramEnvParameter4fvARB = 0;
PFNGLPROGRAMLOCALPARAMETER4DARBPROC glProgramLocalParameter4dARB = 0;
PFNGLPROGRAMLOCALPARAMETER4DVARBPROC glProgramLocalParameter4dvARB = 0;
PFNGLPROGRAMLOCALPARAMETER4FARBPROC glProgramLocalParameter4fARB = 0;
PFNGLPROGRAMLOCALPARAMETER4FVARBPROC glProgramLocalParameter4fvARB = 0;
PFNGLGETPROGRAMENVPARAMETERDVARBPROC glGetProgramEnvParameterdvARB = 0;
PFNGLGETPROGRAMENVPARAMETERFVARBPROC glGetProgramEnvParameterfvARB = 0;
PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC glGetProgramLocalParameterdvARB = 0;
PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC glGetProgramLocalParameterfvARB = 0;
PFNGLGETPROGRAMIVARBPROC glGetProgramivARB = 0;
PFNGLGETPROGRAMSTRINGARBPROC glGetProgramStringARB = 0;
PFNGLISPROGRAMARBPROC glIsProgramARB = 0;

int GL_ARB_fragment_program_initialised = 0;

int initialise_GL_ARB_fragment_program() {
  if (!isExtensionSupported(str_GL_ARB_fragment_program)) return 0;

  glProgramStringARB = (PFNGLPROGRAMSTRINGARBPROC)SDL_GL_GetProcAddress("glProgramStringARB");
  glBindProgramARB = (PFNGLBINDPROGRAMARBPROC)SDL_GL_GetProcAddress("glBindProgramARB");
  glDeleteProgramsARB = (PFNGLDELETEPROGRAMSARBPROC)SDL_GL_GetProcAddress("glDeleteProgramsARB");
  glGenProgramsARB = (PFNGLGENPROGRAMSARBPROC)SDL_GL_GetProcAddress("glGenProgramsARB");
  glProgramEnvParameter4dARB = (PFNGLPROGRAMENVPARAMETER4DARBPROC)SDL_GL_GetProcAddress("glProgramEnvParameter4dARB");
  glProgramEnvParameter4dvARB = (PFNGLPROGRAMENVPARAMETER4DVARBPROC)SDL_GL_GetProcAddress("glProgramEnvParameter4dvARB");
  glProgramEnvParameter4fARB = (PFNGLPROGRAMENVPARAMETER4FARBPROC)SDL_GL_GetProcAddress("glProgramEnvParameter4fARB");
  glProgramEnvParameter4fvARB = (PFNGLPROGRAMENVPARAMETER4FVARBPROC)SDL_GL_GetProcAddress("glProgramEnvParameter4fvARB");
  glProgramLocalParameter4dARB = (PFNGLPROGRAMLOCALPARAMETER4DARBPROC)SDL_GL_GetProcAddress("glProgramLocalParameter4dARB");
 glProgramLocalParameter4dvARB = (PFNGLPROGRAMLOCALPARAMETER4DVARBPROC)SDL_GL_GetProcAddress("glProgramLocalParameter4dvARB");
  glProgramLocalParameter4fARB = (PFNGLPROGRAMLOCALPARAMETER4FARBPROC)SDL_GL_GetProcAddress("glProgramLocalParameter4fARB");
  glProgramLocalParameter4fvARB = (PFNGLPROGRAMLOCALPARAMETER4FVARBPROC)SDL_GL_GetProcAddress("glProgramLocalParameter4fvARB");
  glGetProgramEnvParameterdvARB = (PFNGLGETPROGRAMENVPARAMETERDVARBPROC) SDL_GL_GetProcAddress("glGetProgramEnvParameterdvARB");
  glGetProgramEnvParameterfvARB = (PFNGLGETPROGRAMENVPARAMETERFVARBPROC)SDL_GL_GetProcAddress("glGetProgramEnvParameterfvARB");
  glGetProgramLocalParameterdvARB = (PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC)SDL_GL_GetProcAddress("glGetProgramLocalParameterdvARB");
  glGetProgramLocalParameterfvARB = (PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC)SDL_GL_GetProcAddress("glGetProgramLocalParameterfvARB");
  glGetProgramivARB = (PFNGLGETPROGRAMIVARBPROC)SDL_GL_GetProcAddress("glGetProgramivARB");
  glGetProgramStringARB = (PFNGLGETPROGRAMSTRINGARBPROC)SDL_GL_GetProcAddress("glGetProgramStringARB");
  glIsProgramARB = (PFNGLISPROGRAMARBPROC)SDL_GL_GetProcAddress("glIsProgramARB");

  GL_ARB_fragment_program_initialised = (glProgramStringARB && glBindProgramARB && glDeleteProgramsARB && glGenProgramsARB && glProgramEnvParameter4dARB && glProgramEnvParameter4dvARB && glProgramEnvParameter4fARB && glProgramEnvParameter4fvARB && glProgramLocalParameter4dARB && glProgramLocalParameter4dvARB && glProgramLocalParameter4fARB && glProgramLocalParameter4fvARB && glGetProgramEnvParameterdvARB && glGetProgramEnvParameterfvARB && glGetProgramLocalParameterdvARB && glGetProgramLocalParameterfvARB && glGetProgramivARB && glGetProgramStringARB && glIsProgramARB);

  return GL_ARB_fragment_program_initialised;
}
