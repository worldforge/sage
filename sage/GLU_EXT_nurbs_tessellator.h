// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GLU_EXT_nurbs_tessellator_H
#define GLU_EXT_nurbs_tessellator_H 1

#include <GL/gl.h>
#include <GL/glu.h>
#include <sage/sage.h>

#ifndef GLU_EXT_nurbs_tessellator
#define GLU_EXT_nurbs_tessellator 1

typedef void (*PFNGLUNURBSCALLBACKDATAEXTPROC)(GLUnurbsObj* theNurb, GLvoid* userData);

#define GLU_NURBS_MODE_EXT             100160
#define GLU_NURBS_TESSELLATOR_EXT      100161
#define GLU_NURBS_RENDERER_EXT         100162
#define GLU_NURBS_BEGIN_EXT                    100164
#define GLU_NURBS_VERTEX_EXT                   100165
#define GLU_NURBS_NORMAL_EXT                   100166
#define GLU_NURBS_COLOR_EXT                    100167
#define GLU_NURBS_TEXTURE_COORD_EXT            100168
#define GLU_NURBS_END_EXT                      100169
#define GLU_NURBS_BEGIN_DATA_EXT               100170
#define GLU_NURBS_VERTEX_DATA_EXT              100171
#define GLU_NURBS_NORMAL_DATA_EXT              100172
#define GLU_NURBS_COLOR_DATA_EXT               100173
#define GLU_NURBS_TEXTURE_COORD_DATA_EXT       100174
#define GLU_NURBS_END_DATA_EXT                 100175

#endif

SAGEAPI PFNGLUNURBSCALLBACKDATAEXTPROC gluNurbsCallbackDataEXT;

SAGEAPI int GLU_EXT_nurbs_tessellator_initialised;
SAGEAPI int initialise_GLU_EXT_nurbs_tessellator();

#endif
