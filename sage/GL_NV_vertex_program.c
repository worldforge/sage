// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_NV_vertex_program.h"
#include "utility.h"

int initialise_GL_NV_vertex_program() {
  if (isExtensionSupported(str_GL_NV_vertex_program)) {
    return 0;
  }
  glBindProgramNV = (PFNGLBINDPROGRAMNVPROC)SDL_GL_GetProcAddress("glBindProgramNV");
  glDeleteProgramsNV = (PFNGLDELETEPROGRAMSNVPROC)SDL_GL_GetProcAddress("glDeleteProgramsNV");
  glExecuteProgramNV = (PFNGLEXECUTEPROGRAMNVPROC)SDL_GL_GetProcAddress("glExecuteProgramNV");
  glGenProgramsNV = (PFNGLGENPROGRAMSNVPROC)SDL_GL_GetProcAddress("glGenProgramsNV");
  glAreProgramsResidentNV = (PFNGLAREPROGRAMSRESIDENTNVPROC)SDL_GL_GetProcAddress("glAreProgramsResidentNV");
  glRequestResidentProgramsNV = (PFNGLREQUESTRESIDENTPROGRAMSNVPROC)SDL_GL_GetProcAddress("glRequestResidentProgramsNV");
  glGetProgramParameterfvNV = (PFNGLGETPROGRAMPARAMETERFVNVPROC)SDL_GL_GetProcAddress("glGetProgramParameterfvNV");
  glGetProgramParameterdvNV = (PFNGLGETPROGRAMPARAMETERDVNVPROC)SDL_GL_GetProcAddress("glGetProgramParameterdvNV");
  glGetProgramivNV = (PFNGLGETPROGRAMIVNVPROC)SDL_GL_GetProcAddress("glGetProgramivNV");
  glGetProgramStringNV = (PFNGLGETPROGRAMSTRINGNVPROC)SDL_GL_GetProcAddress("glGetProgramStringNV");
  glGetTrackMatrixivNV = (PFNGLGETTRACKMATRIXIVNVPROC)SDL_GL_GetProcAddress("glGetTrackMatrixivNV");
  glGetVertexAttribdvNV = (PFNGLGETVERTEXATTRIBDVNVPROC)SDL_GL_GetProcAddress("glGetVertexAttribdvNV");
  glGetVertexAttribfvNV = (PFNGLGETVERTEXATTRIBFVNVPROC)SDL_GL_GetProcAddress("glGetVertexAttribfvNV");
  glGetVertexAttribivNV = (PFNGLGETVERTEXATTRIBIVNVPROC)SDL_GL_GetProcAddress("glGetVertexAttribivNV");
  glGetVertexAttribPointervNV = (PFNGLGETVERTEXATTRIBPOINTERVNVPROC)SDL_GL_GetProcAddress("glGetVertexAttribPointervNV");
  glIsProgramNV = (PFNGLISPROGRAMNVPROC)SDL_GL_GetProcAddress("glIsProgramNV");
  glLoadProgramNV = (PFNGLLOADPROGRAMNVPROC)SDL_GL_GetProcAddress("glLoadProgramNV");
  glProgramParameter4fNV = (PFNGLPROGRAMPARAMETER4FNVPROC)SDL_GL_GetProcAddress("glProgramParameter4fNV");
  glProgramParameter4dNV = (PFNGLPROGRAMPARAMETER4DNVPROC)SDL_GL_GetProcAddress("glProgramParameter4dNV");
  glProgramParameter4dvNV = (PFNGLPROGRAMPARAMETER4DVNVPROC)SDL_GL_GetProcAddress("glProgramParameter4dvNV");
  glProgramParameter4fvNV = (PFNGLPROGRAMPARAMETER4FVNVPROC)SDL_GL_GetProcAddress("glProgramParameter4fvNV");
  glProgramParameters4dvNV = (PFNGLPROGRAMPARAMETERS4DVNVPROC)SDL_GL_GetProcAddress("glProgramParameters4dvNV");
  glProgramParameters4fvNV = (PFNGLPROGRAMPARAMETERS4FVNVPROC)SDL_GL_GetProcAddress("glProgramParameters4fvNV");
  glTrackMatrixNV = (PFNGLTRACKMATRIXNVPROC)SDL_GL_GetProcAddress("glTrackMatrixNV");
  glVertexAttribPointerNV = (PFNGLVERTEXATTRIBPOINTERNVPROC)SDL_GL_GetProcAddress("glVertexAttribPointerNV");
  glVertexAttrib1sNV = (PFNGLVERTEXATTRIB1SNVPROC)SDL_GL_GetProcAddress("glVertexAttrib1sNV");
  glVertexAttrib1fNV = (PFNGLVERTEXATTRIB1FNVPROC)SDL_GL_GetProcAddress("glVertexAttrib1fNV");
  glVertexAttrib1dNV = (PFNGLVERTEXATTRIB1DNVPROC)SDL_GL_GetProcAddress("glVertexAttrib1dNV");
  glVertexAttrib2sNV = (PFNGLVERTEXATTRIB2SNVPROC)SDL_GL_GetProcAddress("glVertexAttrib2sNV");
  glVertexAttrib2fNV = (PFNGLVERTEXATTRIB2FNVPROC)SDL_GL_GetProcAddress("glVertexAttrib2fNV");
  glVertexAttrib2dNV = (PFNGLVERTEXATTRIB2DNVPROC)SDL_GL_GetProcAddress("glVertexAttrib2dNV");
  glVertexAttrib3sNV = (PFNGLVERTEXATTRIB3SNVPROC)SDL_GL_GetProcAddress("glVertexAttrib3sNV");
  glVertexAttrib3fNV = (PFNGLVERTEXATTRIB3FNVPROC)SDL_GL_GetProcAddress("glVertexAttrib3fNV");
  glVertexAttrib3dNV = (PFNGLVERTEXATTRIB3DNVPROC)SDL_GL_GetProcAddress("glVertexAttrib3dNV");
  glVertexAttrib4sNV = (PFNGLVERTEXATTRIB4SNVPROC)SDL_GL_GetProcAddress("glVertexAttrib4sNV");
  glVertexAttrib4fNV = (PFNGLVERTEXATTRIB4FNVPROC)SDL_GL_GetProcAddress("glVertexAttrib4fNV");
  glVertexAttrib4dNV = (PFNGLVERTEXATTRIB4DNVPROC)SDL_GL_GetProcAddress("glVertexAttrib4dNV");
  glVertexAttrib4ubNV = (PFNGLVERTEXATTRIB4UBNVPROC)SDL_GL_GetProcAddress("glVertexAttrib4ubNV");
  glVertexAttrib1svNV = (PFNGLVERTEXATTRIB1SVNVPROC)SDL_GL_GetProcAddress("glVertexAttrib1svNV");
  glVertexAttrib1fvNV = (PFNGLVERTEXATTRIB1FVNVPROC)SDL_GL_GetProcAddress("glVertexAttrib1fvNV");
  glVertexAttrib1dvNV = (PFNGLVERTEXATTRIB1DVNVPROC)SDL_GL_GetProcAddress("glVertexAttrib1dvNV");
  glVertexAttrib2svNV = (PFNGLVERTEXATTRIB2SVNVPROC)SDL_GL_GetProcAddress("glVertexAttrib2svNV");
  glVertexAttrib2fvNV = (PFNGLVERTEXATTRIB2FVNVPROC)SDL_GL_GetProcAddress("glVertexAttrib2fvNV");
  glVertexAttrib4dvNV = (PFNGLVERTEXATTRIB4DVNVPROC)SDL_GL_GetProcAddress("glVertexAttrib4dvNV");
  glVertexAttrib3svNV = (PFNGLVERTEXATTRIB3SVNVPROC)SDL_GL_GetProcAddress("glVertexAttrib3svNV");
  glVertexAttrib3fvNV = (PFNGLVERTEXATTRIB3FVNVPROC)SDL_GL_GetProcAddress("glVertexAttrib3fvNV");
  glVertexAttrib3dvNV = (PFNGLVERTEXATTRIB3DVNVPROC)SDL_GL_GetProcAddress("glVertexAttrib3dvNV");
  glVertexAttrib4svNV = (PFNGLVERTEXATTRIB4SVNVPROC)SDL_GL_GetProcAddress("glVertexAttrib4svNV");
  glVertexAttrib4fvNV = (PFNGLVERTEXATTRIB4FVNVPROC)SDL_GL_GetProcAddress("glVertexAttrib4fvNV");
  glVertexAttrib4dvNV = (PFNGLVERTEXATTRIB4DVNVPROC)SDL_GL_GetProcAddress("glVertexAttrib4dvNV");
  glVertexAttrib4ubNV = (PFNGLVERTEXATTRIB4UBNVPROC)SDL_GL_GetProcAddress("glVertexAttrib4ubNV");
  glVertexAttribs1svNV = (PFNGLVERTEXATTRIBS1SVNVPROC)SDL_GL_GetProcAddress("glVertexAttribs1svNV");
  glVertexAttribs1fvNV = (PFNGLVERTEXATTRIBS1FVNVPROC)SDL_GL_GetProcAddress("glVertexAttribs1fvNV");
  glVertexAttribs1dvNV = (PFNGLVERTEXATTRIBS1DVNVPROC)SDL_GL_GetProcAddress("glVertexAttribs1dvNV");
  glVertexAttribs2svNV = (PFNGLVERTEXATTRIBS2SVNVPROC)SDL_GL_GetProcAddress("glVertexAttribs2svNV");
  glVertexAttribs2fvNV = (PFNGLVERTEXATTRIBS2FVNVPROC)SDL_GL_GetProcAddress("glVertexAttribs2fvNV");
  glVertexAttribs2dvNV = (PFNGLVERTEXATTRIBS2DVNVPROC)SDL_GL_GetProcAddress("glVertexAttribs2dvNV");
  glVertexAttribs3svNV = (PFNGLVERTEXATTRIBS3SVNVPROC)SDL_GL_GetProcAddress("glVertexAttribs3svNV");
  glVertexAttribs3fvNV = (PFNGLVERTEXATTRIBS3FVNVPROC)SDL_GL_GetProcAddress("glVertexAttribs3fvNV");
  glVertexAttribs3dvNV = (PFNGLVERTEXATTRIBS3DVNVPROC)SDL_GL_GetProcAddress("glVertexAttribs3dvNV");
  glVertexAttribs4svNV = (PFNGLVERTEXATTRIBS4SVNVPROC)SDL_GL_GetProcAddress("glVertexAttribs4svNV");
  glVertexAttribs4fvNV = (PFNGLVERTEXATTRIBS4FVNVPROC)SDL_GL_GetProcAddress("glVertexAttribs4fvNV");
  glVertexAttribs4dvNV = (PFNGLVERTEXATTRIBS4DVNVPROC)SDL_GL_GetProcAddress("glVertexAttribs4dvNV");
  glVertexAttribs4ubvNV = (PFNGLVERTEXATTRIBS4UBVNVPROC)SDL_GL_GetProcAddress("glVertexAttribs4ubvNV");

  GL_NV_vertex_program_initialised = (glBindProgramNV && glDeleteProgramsNV && glExecuteProgramNV && glGenProgramsNV && glAreProgramsResidentNV && glRequestResidentProgramsNV && glGetProgramParameterfvNV && glGetProgramParameterdvNV && glGetProgramivNV && glGetProgramStringNV && glGetTrackMatrixivNV && glGetVertexAttribdvNV && glGetVertexAttribfvNV && glGetVertexAttribivNV && glGetVertexAttribPointervNV && glIsProgramNV && glLoadProgramNV && glProgramParameter4fNV && glProgramParameter4dNV && glProgramParameter4dvNV && glProgramParameter4fvNV && glProgramParameters4dvNV && glProgramParameters4fvNV && glTrackMatrixNV && glVertexAttribPointerNV && glVertexAttrib1sNV && glVertexAttrib1fNV && glVertexAttrib1dNV && glVertexAttrib2sNV && glVertexAttrib2fNV && glVertexAttrib2dNV && glVertexAttrib3sNV && glVertexAttrib3fNV && glVertexAttrib3dNV && glVertexAttrib4sNV && glVertexAttrib4fNV && glVertexAttrib4dNV && glVertexAttrib4ubNV && glVertexAttrib1svNV && glVertexAttrib1fvNV && glVertexAttrib1dvNV && glVertexAttrib2svNV && glVertexAttrib2fvNV && glVertexAttrib4dvNV && glVertexAttrib3svNV && glVertexAttrib3fvNV && glVertexAttrib3dvNV && glVertexAttrib4svNV && glVertexAttrib4fvNV && glVertexAttrib4dvNV && glVertexAttrib4ubNV && glVertexAttribs1svNV && glVertexAttribs1fvNV && glVertexAttribs1dvNV && glVertexAttribs2svNV && glVertexAttribs2fvNV && glVertexAttribs2dvNV && glVertexAttribs3svNV && glVertexAttribs3fvNV && glVertexAttribs3dvNV && glVertexAttribs4svNV && glVertexAttribs4fvNV && glVertexAttribs4dvNV && glVertexAttribs4ubvNV);
  return GL_NV_vertex_program_initialised;
}
