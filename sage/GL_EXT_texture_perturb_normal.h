// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_texture_perturb_normal_H
#define GL_EXT_texture_perturb_normal_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_texture_perturb_normal
#define GL_EXT_texture_perturb_normal 1

typedef void (*PFNGLTEXTURENORMALEXTPROC)(GLenum mode);

#define GL_PERTURB_EXT                         0x85AE
#define GL_TEXTURE_NORMAL_EXT                  0x85AF
	    

#endif

SAGEAPI PFNGLTEXTURENORMALEXTPROC glTextureNormalEXT;

SAGEAPI int GL_EXT_texture_perturb_normal_initialised;
SAGEAPI int initialise_GL_EXT_texture_perturb_normal();

#endif
