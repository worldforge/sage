// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_APPLE_client_storage
#define GL_APPLE_client_storage 1

static const char * const str_GL_APPLE_client_storage = "GL_APPLE_client_storage";
static int GL_APPLE_client_storage_initialised = 0;

#define GL_UNPACK_CLIENT_STORAGE_APPLE    0x85B2

static int initialise_GL_APPLE_client_storage();

#else
static int GL_APPLE_client_storage_initialised = 1;
#endif
