// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ATI_vertex_streams.h"
#include "utility.h"

int initialise_GL_ATI_vertex_streams() {
  if (!isExtensionSupported(str_GL_ATI_vertex_streams)) return 0;

  glVertexStream1sATI = (PFNGLVERTEXSTREAM1SATIPROC)SDL_GL_GetProcAddress("glVertexStream1sATI");
  glVertexStream1iATI = (PFNGLVERTEXSTREAM1IATIPROC)SDL_GL_GetProcAddress("glVertexStream1iATI");
  glVertexStream1fATI = (PFNGLVERTEXSTREAM1FATIPROC)SDL_GL_GetProcAddress("glVertexStream1fATI");
  glVertexStream1dATI = (PFNGLVERTEXSTREAM1DATIPROC)SDL_GL_GetProcAddress("glVertexStream1dATI");
  glVertexStream2sATI = (PFNGLVERTEXSTREAM2SATIPROC)SDL_GL_GetProcAddress("glVertexStream2sATI");
  glVertexStream2iATI = (PFNGLVERTEXSTREAM2IATIPROC)SDL_GL_GetProcAddress("glVertexStream2iATI");
  glVertexStream2fATI = (PFNGLVERTEXSTREAM2FATIPROC)SDL_GL_GetProcAddress("glVertexStream2fATI");
  glVertexStream2dATI = (PFNGLVERTEXSTREAM2DATIPROC)SDL_GL_GetProcAddress("glVertexStream2dATI");
  glVertexStream3sATI = (PFNGLVERTEXSTREAM3SATIPROC)SDL_GL_GetProcAddress("glVertexStream3sATI");
  glVertexStream3iATI = (PFNGLVERTEXSTREAM3IATIPROC)SDL_GL_GetProcAddress("glVertexStream3iATI");
  glVertexStream3fATI = (PFNGLVERTEXSTREAM3FATIPROC)SDL_GL_GetProcAddress("glVertexStream3fATI");
  glVertexStream3dATI = (PFNGLVERTEXSTREAM3DATIPROC)SDL_GL_GetProcAddress("glVertexStream3dATI");
  glVertexStream4sATI = (PFNGLVERTEXSTREAM4SATIPROC)SDL_GL_GetProcAddress("glVertexStream4sATI");
  glVertexStream4iATI = (PFNGLVERTEXSTREAM4IATIPROC)SDL_GL_GetProcAddress("glVertexStream4iATI");
  glVertexStream4fATI = (PFNGLVERTEXSTREAM4FATIPROC)SDL_GL_GetProcAddress("glVertexStream4fATI");
  glVertexStream4dATI = (PFNGLVERTEXSTREAM4DATIPROC)SDL_GL_GetProcAddress("glVertexStream4dATI");
  glVertexStream1svATI = (PFNGLVERTEXSTREAM1SVATIPROC)SDL_GL_GetProcAddress("glVertexStream1svATI");
  glVertexStream1ivATI = (PFNGLVERTEXSTREAM1IVATIPROC)SDL_GL_GetProcAddress("glVertexStream1ivATI");
  glVertexStream1fvATI = (PFNGLVERTEXSTREAM1FVATIPROC)SDL_GL_GetProcAddress("glVertexStream1fvATI");
  glVertexStream1dvATI = (PFNGLVERTEXSTREAM1DVATIPROC)SDL_GL_GetProcAddress("glVertexStream1dvATI");
  glVertexStream2svATI = (PFNGLVERTEXSTREAM2SVATIPROC)SDL_GL_GetProcAddress("glVertexStream2svATI");
  glVertexStream2ivATI = (PFNGLVERTEXSTREAM2IVATIPROC)SDL_GL_GetProcAddress("glVertexStream2ivATI");
  glVertexStream2fvATI = (PFNGLVERTEXSTREAM2FVATIPROC)SDL_GL_GetProcAddress("glVertexStream2fvATI");
  glVertexStream2dvATI = (PFNGLVERTEXSTREAM2DVATIPROC)SDL_GL_GetProcAddress("glVertexStream2dvATI");
  glVertexStream3svATI = (PFNGLVERTEXSTREAM3SVATIPROC)SDL_GL_GetProcAddress("glVertexStream3svATI");
  glVertexStream3ivATI = (PFNGLVERTEXSTREAM3IVATIPROC)SDL_GL_GetProcAddress("glVertexStream3ivATI");
  glVertexStream3fvATI = (PFNGLVERTEXSTREAM3FVATIPROC)SDL_GL_GetProcAddress("glVertexStream3fvATI");
  glVertexStream3dvATI = (PFNGLVERTEXSTREAM3DVATIPROC)SDL_GL_GetProcAddress("glVertexStream3dvATI");
  glVertexStream4svATI = (PFNGLVERTEXSTREAM4SVATIPROC)SDL_GL_GetProcAddress("glVertexStream4svATI");
  glVertexStream4ivATI = (PFNGLVERTEXSTREAM4IVATIPROC)SDL_GL_GetProcAddress("glVertexStream4ivATI");
  glVertexStream4fvATI = (PFNGLVERTEXSTREAM4FVATIPROC)SDL_GL_GetProcAddress("glVertexStream4fvATI");
  glVertexStream4dvATI = (PFNGLVERTEXSTREAM4DVATIPROC)SDL_GL_GetProcAddress("glVertexStream4dvATI");
  glNormalStream3bATI = (PFNGLNORMALSTREAM3BATIPROC)SDL_GL_GetProcAddress("glNormalStream3bATI");
  glNormalStream3sATI = (PFNGLNORMALSTREAM3SATIPROC)SDL_GL_GetProcAddress("glNormalStream3sATI");
  glNormalStream3iATI = (PFNGLNORMALSTREAM3IATIPROC)SDL_GL_GetProcAddress("glNormalStream3iATI");
  glNormalStream3fATI = (PFNGLNORMALSTREAM3FATIPROC)SDL_GL_GetProcAddress("glNormalStream3fATI");
  glNormalStream3dATI = (PFNGLNORMALSTREAM3DATIPROC)SDL_GL_GetProcAddress("glNormalStream3dATI");
  glNormalStream3bvATI = (PFNGLNORMALSTREAM3BVATIPROC)SDL_GL_GetProcAddress("glNormalStream3bvATI");
  glNormalStream3svATI = (PFNGLNORMALSTREAM3SVATIPROC)SDL_GL_GetProcAddress("glNormalStream3svATI");
  glNormalStream3ivATI = (PFNGLNORMALSTREAM3IVATIPROC)SDL_GL_GetProcAddress("glNormalStream3ivATI");
  glNormalStream3fvATI = (PFNGLNORMALSTREAM3FVATIPROC)SDL_GL_GetProcAddress("glNormalStream3fvATI");
  glNormalStream3dvATI = (PFNGLNORMALSTREAM3DVATIPROC)SDL_GL_GetProcAddress("glNormalStream3dvATI");
  glClientActiveVertexStreamATI = (PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC)SDL_GL_GetProcAddress("glClientActiveVertexStreamATI");
  glVertexBlendEnviATI = (PFNGLVERTEXBLENDENVIATIPROC)SDL_GL_GetProcAddress("glVertexBlendEnviATI");
  glVertexBlendEnvfATI = (PFNGLVERTEXBLENDENVFATIPROC)SDL_GL_GetProcAddress("glVertexBlendEnvfATI");

  GL_ATI_vertex_streams_initialised = (glVertexStream1sATI && glVertexStream1iATI && glVertexStream1fATI && glVertexStream1dATI && glVertexStream2sATI && glVertexStream2iATI && glVertexStream2fATI && glVertexStream2dATI && glVertexStream3sATI && glVertexStream3iATI && glVertexStream3fATI && glVertexStream3dATI && glVertexStream4sATI && glVertexStream4iATI && glVertexStream4fATI && glVertexStream4dATI && glVertexStream1svATI && glVertexStream1ivATI && glVertexStream1fvATI && glVertexStream1dvATI && glVertexStream2svATI && glVertexStream2ivATI && glVertexStream2fvATI && glVertexStream2dvATI && glVertexStream3svATI && glVertexStream3ivATI && glVertexStream3fvATI && glVertexStream3dvATI && glVertexStream4svATI && glVertexStream4ivATI && glVertexStream4fvATI && glVertexStream4dvATI && glNormalStream3bATI && glNormalStream3sATI && glNormalStream3iATI && glNormalStream3fATI && glNormalStream3dATI && glNormalStream3bvATI && glNormalStream3svATI && glNormalStream3ivATI && glNormalStream3fvATI && glNormalStream3dvATI && glClientActiveVertexStreamATI && glVertexBlendEnviATI && glVertexBlendEnvfATI);

  return GL_ATI_vertex_streams_initialised;
}
