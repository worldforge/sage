// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ATI_vertex_streams.h"
#include "utility.h"

#include "SDL.h"

static const char * const str_GL_ATI_vertex_streams = "GL_ATI_vertex_streams";

PFNGLVERTEXSTREAM1SATIPROC glVertexStream1sATI = 0;
PFNGLVERTEXSTREAM1IATIPROC glVertexStream1iATI = 0;
PFNGLVERTEXSTREAM1FATIPROC glVertexStream1fATI = 0;
PFNGLVERTEXSTREAM1DATIPROC glVertexStream1dATI = 0;
PFNGLVERTEXSTREAM2SATIPROC glVertexStream2sATI = 0;
PFNGLVERTEXSTREAM2IATIPROC glVertexStream2iATI = 0;
PFNGLVERTEXSTREAM2FATIPROC glVertexStream2fATI = 0;
PFNGLVERTEXSTREAM2DATIPROC glVertexStream2dATI = 0;
PFNGLVERTEXSTREAM3SATIPROC glVertexStream3sATI = 0;
PFNGLVERTEXSTREAM3IATIPROC glVertexStream3iATI = 0;
PFNGLVERTEXSTREAM3FATIPROC glVertexStream3fATI = 0;
PFNGLVERTEXSTREAM3DATIPROC glVertexStream3dATI = 0;
PFNGLVERTEXSTREAM4SATIPROC glVertexStream4sATI = 0;
PFNGLVERTEXSTREAM4IATIPROC glVertexStream4iATI = 0;
PFNGLVERTEXSTREAM4FATIPROC glVertexStream4fATI = 0;
PFNGLVERTEXSTREAM4DATIPROC glVertexStream4dATI = 0;
PFNGLVERTEXSTREAM1SVATIPROC glVertexStream1svATI = 0;
PFNGLVERTEXSTREAM1IVATIPROC glVertexStream1ivATI = 0;
PFNGLVERTEXSTREAM1FVATIPROC glVertexStream1fvATI = 0;
PFNGLVERTEXSTREAM1DVATIPROC glVertexStream1dvATI = 0;
PFNGLVERTEXSTREAM2SVATIPROC glVertexStream2svATI = 0;
PFNGLVERTEXSTREAM2IVATIPROC glVertexStream2ivATI = 0;
PFNGLVERTEXSTREAM2FVATIPROC glVertexStream2fvATI = 0;
PFNGLVERTEXSTREAM2DVATIPROC glVertexStream2dvATI = 0;
PFNGLVERTEXSTREAM3SVATIPROC glVertexStream3svATI = 0;
PFNGLVERTEXSTREAM3IVATIPROC glVertexStream3ivATI = 0;
PFNGLVERTEXSTREAM3FVATIPROC glVertexStream3fvATI = 0;
PFNGLVERTEXSTREAM3DVATIPROC glVertexStream3dvATI = 0;
PFNGLVERTEXSTREAM4SVATIPROC glVertexStream4svATI = 0;
PFNGLVERTEXSTREAM4IVATIPROC glVertexStream4ivATI = 0;
PFNGLVERTEXSTREAM4FVATIPROC glVertexStream4fvATI = 0;
PFNGLVERTEXSTREAM4DVATIPROC glVertexStream4dvATI = 0;
PFNGLNORMALSTREAM3BATIPROC glNormalStream3bATI = 0;
PFNGLNORMALSTREAM3SATIPROC glNormalStream3sATI = 0;
PFNGLNORMALSTREAM3IATIPROC glNormalStream3iATI = 0;
PFNGLNORMALSTREAM3FATIPROC glNormalStream3fATI = 0;
PFNGLNORMALSTREAM3DATIPROC glNormalStream3dATI = 0;
PFNGLNORMALSTREAM3BVATIPROC glNormalStream3bvATI = 0;
PFNGLNORMALSTREAM3SVATIPROC glNormalStream3svATI = 0;
PFNGLNORMALSTREAM3IVATIPROC glNormalStream3ivATI = 0;
PFNGLNORMALSTREAM3FVATIPROC glNormalStream3fvATI = 0;
PFNGLNORMALSTREAM3DVATIPROC glNormalStream3dvATI = 0;
PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC glClientActiveVertexStreamATI = 0;
PFNGLVERTEXBLENDENVIATIPROC glVertexBlendEnviATI = 0;
PFNGLVERTEXBLENDENVFATIPROC glVertexBlendEnvfATI = 0;

int GL_ATI_vertex_streams_initialised = 0;

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
