// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_fragment_lighting_H
#define GL_EXT_fragment_lighting_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_fragment_lighting
#define GL_EXT_fragment_lighting 1

typedef void (*PFNGLFRAGMENTLIGHTMODELIEXTPROC)(GLenum pname, GLint param);
typedef void (*PFNGLFRAGMENTLIGHTMODELFEXTPROC)(GLenum pname, GLfloat param);
typedef void (*PFNGLFRAGMENTLIGHTMODELIVEXTPROC)(GLenum pname, GLint *params);
typedef void (*PFNGLFRAGMENTLIGHTMODELFVEXTPROC)(GLenum pname, GLfloat *params);
typedef void (*PFNGLFRAGMENTLIGHTIEXTPROC)(GLenum light, GLenum pname, GLint param);
typedef void (*PFNGLFRAGMENTLIGHTFEXTPROC)(GLenum light, GLenum pname, GLfloat param);
typedef void (*PFNGLFRAGMENTLIGHTIVEXTPROC)(GLenum light, GLenum pname, GLint *params);
typedef void (*PFNGLFRAGMENTLIGHTFVEXTPROC)(GLenum light, GLenum pname, GLfloat *params);
typedef void (*PFNGLGETFRAGMENTLIGHTIVEXTPROC)(GLenum light, GLenum pname, GLint *params);
typedef void (*PFNGLGETFRAGMENTLIGHTFVEXTPROC)(GLenum light, GLenum pname, GLfloat *params);
typedef void (*PFNGLFRAGMENTMATERIALFEXTPROC)(GLenum face, GLenum pname, const GLfloat param);
typedef void (*PFNGLFRAGMENTMATERIALIEXTPROC)(GLenum face, GLenum pname, const GLint param);
typedef void (*PFNGLFRAGMENTMATERIALFVEXTPROC)(GLenum face, GLenum pname, const GLfloat *params);
typedef void (*PFNGLFRAGMENTMATERIALIVEXTPROC)(GLenum face, GLenum pname, const GLint *params);
typedef void (*PFNGLFRAGMENTCOLORMATERIALEXTPROC)(GLenum face, GLenum mode);
typedef void (*PFNGLGETFRAGMENTMATERIALFVEXTPROC)(GLenum face, GLenum pname, const GLfloat *params);
typedef void (*PFNGLGETFRAGMENTMATERIALIVEXTPROC)(GLenum face, GLenum pname, const GLint *params);
typedef void (*PFNGLLIGHTENVIEXTPROC)(GLenum pname, GLint param);

#define GL_FRAGMENT_LIGHTING_EXT                               0x8400
#define GL_FRAGMENT_COLOR_MATERIAL_EXT                         0x8401
#define GL_FRAGMENT_COLOR_MATERIAL_FACE_EXT                    0x8402
#define GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_EXT               0x8403
#define GL_MAX_FRAGMENT_LIGHTS_EXT                             0x8404
#define GL_MAX_ACTIVE_LIGHTS_EXT                               0x8405
#define GL_CURRENT_RASTER_NORMAL_EXT                           0x8406
#define GL_LIGHT_ENV_MODE_EXT                                  0x8407
#define GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_EXT               0x8408
#define GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_EXT                   0x8409
#define GL_FRAGMENT_LIGHT_MODEL_AMBIENT_EXT                    0x840A
#define GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_EXT       0x840B
#define GL_FRAGMENT_LIGHT0_EXT                                 0x840C
#define GL_FRAGMENT_LIGHT1_EXT                                 0x840D
#define GL_FRAGMENT_LIGHT2_EXT                                 0x840E
#define GL_FRAGMENT_LIGHT3_EXT                                 0x840F
#define GL_FRAGMENT_LIGHT4_EXT                                 0x8410
#define GL_FRAGMENT_LIGHT5_EXT                                 0x8411
#define GL_FRAGMENT_LIGHT6_EXT                                 0x8412
#define GL_FRAGMENT_LIGHT7_EXT                                 0x8413

#endif

SAGEAPI PFNGLFRAGMENTLIGHTMODELIEXTPROC glFragmentLightModeliEXT;
SAGEAPI PFNGLFRAGMENTLIGHTMODELFEXTPROC glFragmentLightModelfEXT;
SAGEAPI PFNGLFRAGMENTLIGHTMODELIVEXTPROC glFragmentLightModelivEXT;
SAGEAPI PFNGLFRAGMENTLIGHTMODELFVEXTPROC glFragmentLightModelfvEXT;
SAGEAPI PFNGLFRAGMENTLIGHTIEXTPROC glFragmentLightiEXT;
SAGEAPI PFNGLFRAGMENTLIGHTFEXTPROC glFragmentLightfEXT;
SAGEAPI PFNGLFRAGMENTLIGHTIVEXTPROC glFragmentLightivEXT;
SAGEAPI PFNGLFRAGMENTLIGHTFVEXTPROC glFragmentLightfvEXT;
SAGEAPI PFNGLGETFRAGMENTLIGHTIVEXTPROC glGetFragmentLightivEXT;
SAGEAPI PFNGLGETFRAGMENTLIGHTFVEXTPROC glGetFragmentLightfvEXT;
SAGEAPI PFNGLFRAGMENTMATERIALFEXTPROC glFragmentMaterialfEXT;
SAGEAPI PFNGLFRAGMENTMATERIALIEXTPROC glFragmentMaterialiEXT;
SAGEAPI PFNGLFRAGMENTMATERIALFVEXTPROC glFragmentMaterialfvEXT;
SAGEAPI PFNGLFRAGMENTMATERIALIVEXTPROC glFragmentMaterialivEXT;
SAGEAPI PFNGLFRAGMENTCOLORMATERIALEXTPROC glFragmentColorMaterialEXT;
SAGEAPI PFNGLGETFRAGMENTMATERIALFVEXTPROC glGetFragmentMaterialfvEXT;
SAGEAPI PFNGLGETFRAGMENTMATERIALIVEXTPROC glGetFragmentMaterialivEXT;
SAGEAPI PFNGLLIGHTENVIEXTPROC glLightEnviEXT;

SAGEAPI int GL_EXT_fragment_lighting_initialised;
SAGEAPI int initialise_GL_EXT_fragment_lighting();

#endif
