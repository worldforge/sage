// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ATI_vertex_streams
#define GL_ATI_vertex_streams 1

#include <GL/gl.h>

static const char * const str_GL_ATI_vertex_streams = "GL_ATI_vertex_streams";
static int GL_ATI_vertex_streams_initialised = 0;


typedef void (*PFNGLVERTEXSTREAM1SATIPROC)(GLenum stream, GLshort);
static PFNGLVERTEXSTREAM1SATIPROC glVertexStream1sATI = 0;

typedef void (*PFNGLVERTEXSTREAM1IATIPROC)(GLenum stream, GLint);
static PFNGLVERTEXSTREAM1IATIPROC glVertexStream1iATI = 0;

typedef void (*PFNGLVERTEXSTREAM1FATIPROC)(GLenum stream, GLfloat);
static PFNGLVERTEXSTREAM1FATIPROC glVertexStream1fATI = 0;

typedef void (*PFNGLVERTEXSTREAM1DATIPROC)(GLenum stream, GLdouble);
static PFNGLVERTEXSTREAM1DATIPROC glVertexStream1dATI = 0;

typedef void (*PFNGLVERTEXSTREAM2SATIPROC)(GLenum stream, GLshort, GLshort);
static PFNGLVERTEXSTREAM2SATIPROC glVertexStream2sATI = 0;

typedef void (*PFNGLVERTEXSTREAM2IATIPROC)(GLenum stream, GLint, GLint);
static PFNGLVERTEXSTREAM2IATIPROC glVertexStream2iATI = 0;

typedef void (*PFNGLVERTEXSTREAM2FATIPROC)(GLenum stream, GLfloat, GLfloat);
static PFNGLVERTEXSTREAM2FATIPROC glVertexStream2fATI = 0;

typedef void (*PFNGLVERTEXSTREAM2DATIPROC)(GLenum stream, GLdouble, GLdouble);
static PFNGLVERTEXSTREAM2DATIPROC glVertexStream2dATI = 0;

typedef void (*PFNGLVERTEXSTREAM3SATIPROC)(GLenum stream, GLshort, GLshort, GLshort);
static PFNGLVERTEXSTREAM3SATIPROC glVertexStream3sATI = 0;

typedef void (*PFNGLVERTEXSTREAM3IATIPROC)(GLenum stream, GLint, GLint, GLint);
static PFNGLVERTEXSTREAM3IATIPROC glVertexStream3iATI = 0;

typedef void (*PFNGLVERTEXSTREAM3FATIPROC)(GLenum stream, GLfloat, GLfloat, GLfloat);
static PFNGLVERTEXSTREAM3FATIPROC glVertexStream3fATI = 0;

typedef void (*PFNGLVERTEXSTREAM3DATIPROC)(GLenum stream, GLdouble, GLdouble, GLdouble);
static PFNGLVERTEXSTREAM3DATIPROC glVertexStream3dATI = 0;

typedef void (*PFNGLVERTEXSTREAM4SATIPROC)(GLenum stream, GLshort, GLshort, GLshort, GLshort);
static PFNGLVERTEXSTREAM4SATIPROC glVertexStream4sATI = 0;

typedef void (*PFNGLVERTEXSTREAM4IATIPROC)(GLenum stream, GLint, GLint, GLint, GLint);
static PFNGLVERTEXSTREAM4IATIPROC glVertexStream4iATI = 0;

typedef void (*PFNGLVERTEXSTREAM4FATIPROC)(GLenum stream, GLfloat, GLfloat, GLfloat, GLfloat);
static PFNGLVERTEXSTREAM4FATIPROC glVertexStream4fATI = 0;

typedef void (*PFNGLVERTEXSTREAM4DATIPROC)(GLenum stream, GLdouble, GLdouble, GLdouble, GLdouble);
static PFNGLVERTEXSTREAM4DATIPROC glVertexStream4dATI = 0;

typedef void (*PFNGLVERTEXSTREAM1SVATIPROC)(GLenum stream, GLshort *);
static PFNGLVERTEXSTREAM1SVATIPROC glVertexStream1svATI = 0;

typedef void (*PFNGLVERTEXSTREAM1IVATIPROC)(GLenum stream, GLint *);
static PFNGLVERTEXSTREAM1IVATIPROC glVertexStream1ivATI = 0;

typedef void (*PFNGLVERTEXSTREAM1FVATIPROC)(GLenum stream, GLfloat *);
static PFNGLVERTEXSTREAM1FVATIPROC glVertexStream1fvATI = 0;

typedef void (*PFNGLVERTEXSTREAM1DVATIPROC)(GLenum stream, GLdouble *);
static PFNGLVERTEXSTREAM1DVATIPROC glVertexStream1dvATI = 0;

typedef void (*PFNGLVERTEXSTREAM2SVATIPROC)(GLenum stream, GLshort *);
static PFNGLVERTEXSTREAM2SVATIPROC glVertexStream2svATI = 0;

typedef void (*PFNGLVERTEXSTREAM2IVATIPROC)(GLenum stream, GLint *);
static PFNGLVERTEXSTREAM2IVATIPROC glVertexStream2ivATI = 0;

typedef void (*PFNGLVERTEXSTREAM2FVATIPROC)(GLenum stream, GLfloat *);
static PFNGLVERTEXSTREAM2FVATIPROC glVertexStream2fvATI = 0;

typedef void (*PFNGLVERTEXSTREAM2DVATIPROC)(GLenum stream, GLdouble *);
static PFNGLVERTEXSTREAM2DVATIPROC glVertexStream2dvATI = 0;

typedef void (*PFNGLVERTEXSTREAM3SVATIPROC)(GLenum stream, GLshort *);
static PFNGLVERTEXSTREAM3SVATIPROC glVertexStream3svATI = 0;

typedef void (*PFNGLVERTEXSTREAM3IVATIPROC)(GLenum stream, GLint *);
static PFNGLVERTEXSTREAM3IVATIPROC glVertexStream3ivATI = 0;

typedef void (*PFNGLVERTEXSTREAM3FVATIPROC)(GLenum stream, GLfloat *);
static PFNGLVERTEXSTREAM3FVATIPROC glVertexStream3fvATI = 0;

typedef void (*PFNGLVERTEXSTREAM3DVATIPROC)(GLenum stream, GLdouble *);
static PFNGLVERTEXSTREAM3DVATIPROC glVertexStream3dvATI = 0;

typedef void (*PFNGLVERTEXSTREAM4SVATIPROC)(GLenum stream, GLshort *);
static PFNGLVERTEXSTREAM4SVATIPROC glVertexStream4svATI = 0;

typedef void (*PFNGLVERTEXSTREAM4IVATIPROC)(GLenum stream, GLint *);
static PFNGLVERTEXSTREAM4IVATIPROC glVertexStream4ivATI = 0;

typedef void (*PFNGLVERTEXSTREAM4FVATIPROC)(GLenum stream, GLfloat *);
static PFNGLVERTEXSTREAM4FVATIPROC glVertexStream4fvATI = 0;

typedef void (*PFNGLVERTEXSTREAM4DVATIPROC)(GLenum stream, GLdouble *);
static PFNGLVERTEXSTREAM4DVATIPROC glVertexStream4dvATI = 0;

typedef void (*PFNGLNORMALSTREAM3BATIPROC)(GLenum stream, GLbyte coords);
static PFNGLNORMALSTREAM3BATIPROC glNormalStream3bATI = 0;

typedef void (*PFNGLNORMALSTREAM3SATIPROC)(GLenum stream, GLshort coords);
static PFNGLNORMALSTREAM3SATIPROC glNormalStream3sATI = 0;

typedef void (*PFNGLNORMALSTREAM3IATIPROC)(GLenum stream, GLint coords);
static PFNGLNORMALSTREAM3IATIPROC glNormalStream3iATI = 0;

typedef void (*PFNGLNORMALSTREAM3FATIPROC)(GLenum stream, GLfloat coords);
static PFNGLNORMALSTREAM3FATIPROC glNormalStream3fATI = 0;

typedef void (*PFNGLNORMALSTREAM3DATIPROC)(GLenum stream, GLdouble coords);
static PFNGLNORMALSTREAM3DATIPROC glNormalStream3dATI = 0;

typedef void (*PFNGLNORMALSTREAM3BVATIPROC)(GLenum stream, GLbyte *coords);
static PFNGLNORMALSTREAM3BVATIPROC glNormalStream3bvATI = 0;

typedef void (*PFNGLNORMALSTREAM3SVATIPROC)(GLenum stream, GLshort *coords);
static PFNGLNORMALSTREAM3SVATIPROC glNormalStream3svATI = 0;

typedef void (*PFNGLNORMALSTREAM3IVATIPROC)(GLenum stream, GLint *coords);
static PFNGLNORMALSTREAM3IVATIPROC glNormalStream3ivATI = 0;

typedef void (*PFNGLNORMALSTREAM3FVATIPROC)(GLenum stream, GLfloat *coords);
static PFNGLNORMALSTREAM3FVATIPROC glNormalStream3fvATI = 0;

typedef void (*PFNGLNORMALSTREAM3DVATIPROC)(GLenum stream, GLdouble *coords);
static PFNGLNORMALSTREAM3DVATIPROC glNormalStream3dvATI = 0;

typedef void (*PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC)(GLenum stream);
static PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC glClientActiveVertexStreamATI = 0;

typedef void (*PFNGLVERTEXBLENDENVIATIPROC)(GLenum pname, GLint param);
static PFNGLVERTEXBLENDENVIATIPROC glVertexBlendEnviATI = 0;

typedef void (*PFNGLVERTEXBLENDENVFATIPROC)(GLenum pname, GLfloat param);
static PFNGLVERTEXBLENDENVFATIPROC glVertexBlendEnvfATI = 0;

#define GL_MAX_VERTEX_STREAMS_ATI           0x876B
#define GL_VERTEX_STREAM0_ATI              0x876C
#define GL_VERTEX_STREAM1_ATI              0x876D
#define GL_VERTEX_STREAM2_ATI              0x876E
#define GL_VERTEX_STREAM3_ATI              0x876F
#define GL_VERTEX_STREAM4_ATI              0x8770
#define GL_VERTEX_STREAM5_ATI              0x8771
#define GL_VERTEX_STREAM6_ATI              0x8772
#define GL_VERTEX_STREAM7_ATI              0x8773
#define GL_VERTEX_SOURCE_ATI               0x8774


static int initialise_GL_ATI_vertex_streams();

#else
static int GL_ATI_vertex_streams_initialised = 1;
#endif
