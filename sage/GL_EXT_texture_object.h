// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_texture_object_H
#define GL_EXT_texture_object_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_texture_object
#define GL_EXT_texture_object 1

typedef void (*PFNGLGENTEXTURESEXTPROC)(GLsizei n, GLuint* textures);
typedef void (*PFNGLDELETETEXTURESEXTPROC)(GLsizei n, const GLuint* textures);
typedef void (*PFNGLBINDTEXTUREEXTPROC)(GLenum target, GLuint texture);
typedef void (*PFNGLPRIORITIZETEXTURESEXTPROC)(GLsizei n, const GLuint* textures, const GLclampf* priorities);
typedef GLboolean (*PFNGLARETEXTURESRESIDENTEXTPROC)(GLsizei n, const GLuint* textures, GLboolean* residences);
typedef GLboolean (*PFNGLISTEXTUREEXTPROC)(GLuint texture);

#define GL_TEXTURE_PRIORITY_EXT            0x8066
#define GL_TEXTURE_RESIDENT_EXT            0x8067
#define GL_TEXTURE_1D_BINDING_EXT          0x8068
#define GL_TEXTURE_2D_BINDING_EXT          0x8069
#define GL_TEXTURE_3D_BINDING_EXT          0x806A

#endif

SAGEAPI PFNGLGENTEXTURESEXTPROC glGenTexturesEXT;
SAGEAPI PFNGLDELETETEXTURESEXTPROC glDeleteTexturesEXT;
SAGEAPI PFNGLBINDTEXTUREEXTPROC glBindTextureEXT;
SAGEAPI PFNGLPRIORITIZETEXTURESEXTPROC glPrioritizeTexturesEXT;
SAGEAPI PFNGLARETEXTURESRESIDENTEXTPROC glAreTexturesResidentEXT;
SAGEAPI PFNGLISTEXTUREEXTPROC glIsTextureEXT;

SAGEAPI int GL_EXT_texture_object_initialised;
SAGEAPI int initialise_GL_EXT_texture_object();

#endif
