// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_blend_logic_op.h"
#include "utility.h"

int initialise_GL_EXT_blend_logic_op() {
  GL_EXT_blend_logic_op_initialised = isExtensionSupported(str_GL_EXT_blend_logic_op);
  return GL_EXT_blend_logic_op_initialised;
}
