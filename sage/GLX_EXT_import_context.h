// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GLX_EXT_import_context_H
#define GLX_EXT_import_context_H 1

#include <GL/gl.h>
#include <GL/glx.h>
#include <sage/sage.h>

#ifndef GLX_EXT_import_context
#define GLX_EXT_import_context 1

typedef Display (**PFNGLXGETCURRENTDISPLAYEXTPROC)();
typedef GLint (*PFNGLXQUERYCONTEXTINFOEXTPROC)(Display *dpy, GLXContext context, GLint attribute, GLint *value);
typedef GLXContextID (*PFNGLXGETCONTEXTIDEXTPROC)(GLconst GLXContext context);
typedef GLXContext (*PFNGLXIMPORTCONTEXTEXTPROC)(Display *dpy, GLXContextID contextID);
typedef GLvoid (*PFNGLXFREECONTEXTEXTPROC)(Display *dpy, GLXContext context);

#define GLX_SHARE_CONTEXT_EXT               0x800A
#define GLX_VISUAL_ID_EXT                   0x800B
#define GLX_SCREEN_EXT                      0x800C

#endif

SAGEAPI PFNGLXGETCURRENTDISPLAYEXTPROC glXGetCurrentDisplayEXT;
SAGEAPI PFNGLXQUERYCONTEXTINFOEXTPROC glXQueryContextInfoEXT;
SAGEAPI PFNGLXGETCONTEXTIDEXTPROC glXGetContextIDEXT;
SAGEAPI PFNGLXIMPORTCONTEXTEXTPROC glXImportContextEXT;
SAGEAPI PFNGLXFREECONTEXTEXTPROC glXFreeContextEXT;

SAGEAPI int GLX_EXT_import_context_initialised;
SAGEAPI int initialise_GLX_EXT_import_context();

#endif
