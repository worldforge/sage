// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GLX_ARB_get_proc_address.h"
#include "utility.h"

static int initialise_GLX_ARB_get_proc_address() {
  if (!isExtensionSupported(str_GLX_ARB_get_proc_address)) return 0;

  // TODO Link up function
  
  return GLX_ARB_get_proc_address_initialised;
}
