// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include <sage/sage_glx.h>
#include "SDL.h"
#include "sage/utility.h"

#ifdef SAGE_GLX_VERSION_1_3
PFNGLXGETFBCONFIGATTRIBPROC glXGetFBConfigAttrib = NULL;
PFNGLXCREATEWINDOWPROC glXCreateWindow = NULL;
PFNGLXDESTROYWINDOWPROC glXDestroyWindow = NULL;
PFNGLXCREATEPIXMAPPROC glXCreatePixmap = NULL;
PFNGLXDESTROYPIXMAPPROC glXDestroyPixmap = NULL;
PFNGLXCREATEPBUFFERPROC glXCreatePbuffer = NULL;
PFNGLXDESTROYPBUFFERPROC glXDestroyPbuffer = NULL;
PFNGLXQUERYDRAWABLEPROC glXQueryDrawable = NULL;
PFNGLXCREATENEWCONTEXTPROC glXCreateNewContext = NULL;
PFNGLXMAKECONTEXTCURRENTPROC glXMakeContextCurrent = NULL;
PFNGLXGETCURRENTREADDRAWABLEPROC glXGetCurrentReadDrawable = NULL;
PFNGLXQUERYCONTEXTPROC glXQueryContext = NULL;
PFNGLXSELECTEVENTPROC glXSelectEvent = NULL;
PFNGLXGETSELECTEDEVENTPROC glXGetSelectedEvent = NULL;
#endif
#ifdef SAGE_GLX_VERSION_1_4
#endif
#ifdef SAGE_GLX_ARB_get_proc_address
#endif
#ifdef SAGE_GLX_ARB_multisample
#endif
#ifdef SAGE_GLX_SGIS_multisample
#endif
#ifdef SAGE_GLX_EXT_visual_info
#endif
#ifdef SAGE_GLX_SGI_swap_control
PFNGLXSWAPINTERVALSGIPROC glXSwapIntervalSGI = NULL;
#endif
#ifdef SAGE_GLX_SGI_video_sync
PFNGLXGETVIDEOSYNCSGIPROC glXGetVideoSyncSGI = NULL;
PFNGLXWAITVIDEOSYNCSGIPROC glXWaitVideoSyncSGI = NULL;
#endif
#ifdef SAGE_GLX_SGI_make_current_read
PFNGLXMAKECURRENTREADSGIPROC glXMakeCurrentReadSGI = NULL;
PFNGLXGETCURRENTREADDRAWABLESGIPROC glXGetCurrentReadDrawableSGI = NULL;
#endif
#ifdef SAGE_GLX_SGIX_video_source
PFNGLXCREATEGLXVIDEOSOURCESGIXPROC glXCreateGLXVideoSourceSGIX = NULL;
PFNGLXDESTROYGLXVIDEOSOURCESGIXPROC glXDestroyGLXVideoSourceSGIX = NULL;
#endif
#ifdef SAGE_GLX_EXT_visual_rating
#endif
#ifdef SAGE_GLX_EXT_import_context
PFNGLXQUERYCONTEXTINFOEXTPROC glXQueryContextInfoEXT = NULL;
PFNGLXGETCONTEXTIDEXTPROC glXGetContextIDEXT = NULL;
PFNGLXIMPORTCONTEXTEXTPROC glXImportContextEXT = NULL;
PFNGLXFREECONTEXTEXTPROC glXFreeContextEXT = NULL;
#endif
#ifdef SAGE_GLX_SGIX_fbconfig
PFNGLXGETFBCONFIGATTRIBSGIXPROC glXGetFBConfigAttribSGIX = NULL;
PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC glXCreateGLXPixmapWithConfigSGIX = NULL;
PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC glXCreateContextWithConfigSGIX = NULL;
PFNGLXGETFBCONFIGFROMVISUALSGIXPROC glXGetFBConfigFromVisualSGIX = NULL;
#endif
#ifdef SAGE_GLX_SGIX_pbuffer
PFNGLXCREATEGLXPBUFFERSGIXPROC glXCreateGLXPbufferSGIX = NULL;
PFNGLXDESTROYGLXPBUFFERSGIXPROC glXDestroyGLXPbufferSGIX = NULL;
PFNGLXQUERYGLXPBUFFERSGIXPROC glXQueryGLXPbufferSGIX = NULL;
PFNGLXSELECTEVENTSGIXPROC glXSelectEventSGIX = NULL;
PFNGLXGETSELECTEDEVENTSGIXPROC glXGetSelectedEventSGIX = NULL;
#endif
#ifdef SAGE_GLX_SGI_cushion
PFNGLXCUSHIONSGIPROC glXCushionSGI = NULL;
#endif
#ifdef SAGE_GLX_SGIX_video_resize
PFNGLXBINDCHANNELTOWINDOWSGIXPROC glXBindChannelToWindowSGIX = NULL;
PFNGLXCHANNELRECTSGIXPROC glXChannelRectSGIX = NULL;
PFNGLXQUERYCHANNELRECTSGIXPROC glXQueryChannelRectSGIX = NULL;
PFNGLXQUERYCHANNELDELTASSGIXPROC glXQueryChannelDeltasSGIX = NULL;
PFNGLXCHANNELRECTSYNCSGIXPROC glXChannelRectSyncSGIX = NULL;
#endif
#ifdef SAGE_GLX_SGIX_dmbuffer
PFNGLXASSOCIATEDMPBUFFERSGIXPROC glXAssociateDMPbufferSGIX = NULL;
#endif
#ifdef SAGE_GLX_SGIX_swap_group
PFNGLXJOINSWAPGROUPSGIXPROC glXJoinSwapGroupSGIX = NULL;
#endif
#ifdef SAGE_GLX_SGIX_swap_barrier
PFNGLXBINDSWAPBARRIERSGIXPROC glXBindSwapBarrierSGIX = NULL;
PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC glXQueryMaxSwapBarriersSGIX = NULL;
#endif
#ifdef SAGE_GLX_SUN_get_transparent_index
PFNGLXGETTRANSPARENTINDEXSUNPROC glXGetTransparentIndexSUN = NULL;
#endif
#ifdef SAGE_GLX_MESA_copy_sub_buffer
PFNGLXCOPYSUBBUFFERMESAPROC glXCopySubBufferMESA = NULL;
#endif
#ifdef SAGE_GLX_MESA_pixmap_colormap
PFNGLXCREATEGLXPIXMAPMESAPROC glXCreateGLXPixmapMESA = NULL;
#endif
#ifdef SAGE_GLX_MESA_release_buffers
PFNGLXRELEASEBUFFERSMESAPROC glXReleaseBuffersMESA = NULL;
#endif
#ifdef SAGE_GLX_MESA_set_3dfx_mode
PFNGLXSET3DFXMODEMESAPROC glXSet3DfxModeMESA = NULL;
#endif
#ifdef SAGE_GLX_SGIX_visual_select_group
#endif
#ifdef SAGE_GLX_OML_swap_method
#endif
#ifdef SAGE_GLX_OML_sync_control
PFNGLXGETSYNCVALUESOMLPROC glXGetSyncValuesOML = NULL;
PFNGLXGETMSCRATEOMLPROC glXGetMscRateOML = NULL;
PFNGLXWAITFORMSCOMLPROC glXWaitForMscOML = NULL;
PFNGLXWAITFORSBCOMLPROC glXWaitForSbcOML = NULL;
#endif

int sage_glx_ext[LAST_EXTENSION];

void sage_glx_init(void) {
#ifdef SAGE_GLX_VERSION_1_3
  glXGetFBConfigAttrib = (PFNGLXGETFBCONFIGATTRIBPROC)SDL_GL_GetProcAddress("glXGetFBConfigAttrib");
  glXCreateWindow = (PFNGLXCREATEWINDOWPROC)SDL_GL_GetProcAddress("glXCreateWindow");
  glXDestroyWindow = (PFNGLXDESTROYWINDOWPROC)SDL_GL_GetProcAddress("glXDestroyWindow");
  glXCreatePixmap = (PFNGLXCREATEPIXMAPPROC)SDL_GL_GetProcAddress("glXCreatePixmap");
  glXDestroyPixmap = (PFNGLXDESTROYPIXMAPPROC)SDL_GL_GetProcAddress("glXDestroyPixmap");
  glXCreatePbuffer = (PFNGLXCREATEPBUFFERPROC)SDL_GL_GetProcAddress("glXCreatePbuffer");
  glXDestroyPbuffer = (PFNGLXDESTROYPBUFFERPROC)SDL_GL_GetProcAddress("glXDestroyPbuffer");
  glXQueryDrawable = (PFNGLXQUERYDRAWABLEPROC)SDL_GL_GetProcAddress("glXQueryDrawable");
  glXCreateNewContext = (PFNGLXCREATENEWCONTEXTPROC)SDL_GL_GetProcAddress("glXCreateNewContext");
  glXMakeContextCurrent = (PFNGLXMAKECONTEXTCURRENTPROC)SDL_GL_GetProcAddress("glXMakeContextCurrent");
  glXGetCurrentReadDrawable = (PFNGLXGETCURRENTREADDRAWABLEPROC)SDL_GL_GetProcAddress("glXGetCurrentReadDrawable");
  glXQueryContext = (PFNGLXQUERYCONTEXTPROC)SDL_GL_GetProcAddress("glXQueryContext");
  glXSelectEvent = (PFNGLXSELECTEVENTPROC)SDL_GL_GetProcAddress("glXSelectEvent");
  glXGetSelectedEvent = (PFNGLXGETSELECTEDEVENTPROC)SDL_GL_GetProcAddress("glXGetSelectedEvent");
#endif
#ifdef SAGE_GLX_VERSION_1_4
#endif
#ifdef SAGE_GLX_ARB_get_proc_address
#endif
#ifdef SAGE_GLX_ARB_multisample
#endif
#ifdef SAGE_GLX_SGIS_multisample
#endif
#ifdef SAGE_GLX_EXT_visual_info
#endif
#ifdef SAGE_GLX_SGI_swap_control
  glXSwapIntervalSGI = (PFNGLXSWAPINTERVALSGIPROC)SDL_GL_GetProcAddress("glXSwapIntervalSGI");
#endif
#ifdef SAGE_GLX_SGI_video_sync
  glXGetVideoSyncSGI = (PFNGLXGETVIDEOSYNCSGIPROC)SDL_GL_GetProcAddress("glXGetVideoSyncSGI");
  glXWaitVideoSyncSGI = (PFNGLXWAITVIDEOSYNCSGIPROC)SDL_GL_GetProcAddress("glXWaitVideoSyncSGI");
#endif
#ifdef SAGE_GLX_SGI_make_current_read
  glXMakeCurrentReadSGI = (PFNGLXMAKECURRENTREADSGIPROC)SDL_GL_GetProcAddress("glXMakeCurrentReadSGI");
  glXGetCurrentReadDrawableSGI = (PFNGLXGETCURRENTREADDRAWABLESGIPROC)SDL_GL_GetProcAddress("glXGetCurrentReadDrawableSGI");
#endif
#ifdef SAGE_GLX_SGIX_video_source
  glXCreateGLXVideoSourceSGIX = (PFNGLXCREATEGLXVIDEOSOURCESGIXPROC)SDL_GL_GetProcAddress("glXCreateGLXVideoSourceSGIX");
  glXDestroyGLXVideoSourceSGIX = (PFNGLXDESTROYGLXVIDEOSOURCESGIXPROC)SDL_GL_GetProcAddress("glXDestroyGLXVideoSourceSGIX");
#endif
#ifdef SAGE_GLX_EXT_visual_rating
#endif
#ifdef SAGE_GLX_EXT_import_context
  glXQueryContextInfoEXT = (PFNGLXQUERYCONTEXTINFOEXTPROC)SDL_GL_GetProcAddress("glXQueryContextInfoEXT");
  glXGetContextIDEXT = (PFNGLXGETCONTEXTIDEXTPROC)SDL_GL_GetProcAddress("glXGetContextIDEXT");
  glXImportContextEXT = (PFNGLXIMPORTCONTEXTEXTPROC)SDL_GL_GetProcAddress("glXImportContextEXT");
  glXFreeContextEXT = (PFNGLXFREECONTEXTEXTPROC)SDL_GL_GetProcAddress("glXFreeContextEXT");
#endif
#ifdef SAGE_GLX_SGIX_fbconfig
  glXGetFBConfigAttribSGIX = (PFNGLXGETFBCONFIGATTRIBSGIXPROC)SDL_GL_GetProcAddress("glXGetFBConfigAttribSGIX");
  glXCreateGLXPixmapWithConfigSGIX = (PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC)SDL_GL_GetProcAddress("glXCreateGLXPixmapWithConfigSGIX");
  glXCreateContextWithConfigSGIX = (PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC)SDL_GL_GetProcAddress("glXCreateContextWithConfigSGIX");
  glXGetFBConfigFromVisualSGIX = (PFNGLXGETFBCONFIGFROMVISUALSGIXPROC)SDL_GL_GetProcAddress("glXGetFBConfigFromVisualSGIX");
#endif
#ifdef SAGE_GLX_SGIX_pbuffer
  glXCreateGLXPbufferSGIX = (PFNGLXCREATEGLXPBUFFERSGIXPROC)SDL_GL_GetProcAddress("glXCreateGLXPbufferSGIX");
  glXDestroyGLXPbufferSGIX = (PFNGLXDESTROYGLXPBUFFERSGIXPROC)SDL_GL_GetProcAddress("glXDestroyGLXPbufferSGIX");
  glXQueryGLXPbufferSGIX = (PFNGLXQUERYGLXPBUFFERSGIXPROC)SDL_GL_GetProcAddress("glXQueryGLXPbufferSGIX");
  glXSelectEventSGIX = (PFNGLXSELECTEVENTSGIXPROC)SDL_GL_GetProcAddress("glXSelectEventSGIX");
  glXGetSelectedEventSGIX = (PFNGLXGETSELECTEDEVENTSGIXPROC)SDL_GL_GetProcAddress("glXGetSelectedEventSGIX");
#endif
#ifdef SAGE_GLX_SGI_cushion
  glXCushionSGI = (PFNGLXCUSHIONSGIPROC)SDL_GL_GetProcAddress("glXCushionSGI");
#endif
#ifdef SAGE_GLX_SGIX_video_resize
  glXBindChannelToWindowSGIX = (PFNGLXBINDCHANNELTOWINDOWSGIXPROC)SDL_GL_GetProcAddress("glXBindChannelToWindowSGIX");
  glXChannelRectSGIX = (PFNGLXCHANNELRECTSGIXPROC)SDL_GL_GetProcAddress("glXChannelRectSGIX");
  glXQueryChannelRectSGIX = (PFNGLXQUERYCHANNELRECTSGIXPROC)SDL_GL_GetProcAddress("glXQueryChannelRectSGIX");
  glXQueryChannelDeltasSGIX = (PFNGLXQUERYCHANNELDELTASSGIXPROC)SDL_GL_GetProcAddress("glXQueryChannelDeltasSGIX");
  glXChannelRectSyncSGIX = (PFNGLXCHANNELRECTSYNCSGIXPROC)SDL_GL_GetProcAddress("glXChannelRectSyncSGIX");
#endif
#ifdef SAGE_GLX_SGIX_dmbuffer
  glXAssociateDMPbufferSGIX = (PFNGLXASSOCIATEDMPBUFFERSGIXPROC)SDL_GL_GetProcAddress("glXAssociateDMPbufferSGIX");
#endif
#ifdef SAGE_GLX_SGIX_swap_group
  glXJoinSwapGroupSGIX = (PFNGLXJOINSWAPGROUPSGIXPROC)SDL_GL_GetProcAddress("glXJoinSwapGroupSGIX");
#endif
#ifdef SAGE_GLX_SGIX_swap_barrier
  glXBindSwapBarrierSGIX = (PFNGLXBINDSWAPBARRIERSGIXPROC)SDL_GL_GetProcAddress("glXBindSwapBarrierSGIX");
  glXQueryMaxSwapBarriersSGIX = (PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC)SDL_GL_GetProcAddress("glXQueryMaxSwapBarriersSGIX");
#endif
#ifdef SAGE_GLX_SUN_get_transparent_index
  glXGetTransparentIndexSUN = (PFNGLXGETTRANSPARENTINDEXSUNPROC)SDL_GL_GetProcAddress("glXGetTransparentIndexSUN");
#endif
#ifdef SAGE_GLX_MESA_copy_sub_buffer
  glXCopySubBufferMESA = (PFNGLXCOPYSUBBUFFERMESAPROC)SDL_GL_GetProcAddress("glXCopySubBufferMESA");
#endif
#ifdef SAGE_GLX_MESA_pixmap_colormap
  glXCreateGLXPixmapMESA = (PFNGLXCREATEGLXPIXMAPMESAPROC)SDL_GL_GetProcAddress("glXCreateGLXPixmapMESA");
#endif
#ifdef SAGE_GLX_MESA_release_buffers
  glXReleaseBuffersMESA = (PFNGLXRELEASEBUFFERSMESAPROC)SDL_GL_GetProcAddress("glXReleaseBuffersMESA");
#endif
#ifdef SAGE_GLX_MESA_set_3dfx_mode
  glXSet3DfxModeMESA = (PFNGLXSET3DFXMODEMESAPROC)SDL_GL_GetProcAddress("glXSet3DfxModeMESA");
#endif
#ifdef SAGE_GLX_SGIX_visual_select_group
#endif
#ifdef SAGE_GLX_OML_swap_method
#endif
#ifdef SAGE_GLX_OML_sync_control
  glXGetSyncValuesOML = (PFNGLXGETSYNCVALUESOMLPROC)SDL_GL_GetProcAddress("glXGetSyncValuesOML");
  glXGetMscRateOML = (PFNGLXGETMSCRATEOMLPROC)SDL_GL_GetProcAddress("glXGetMscRateOML");
  glXWaitForMscOML = (PFNGLXWAITFORMSCOMLPROC)SDL_GL_GetProcAddress("glXWaitForMscOML");
  glXWaitForSbcOML = (PFNGLXWAITFORSBCOMLPROC)SDL_GL_GetProcAddress("glXWaitForSbcOML");
#endif
 sage_glx_ext[GLX_ARB_GET_PROC_ADDRESS] = isExtensionSupported("GLX_ARB_get_proc_address");
 sage_glx_ext[GLX_ARB_MULTISAMPLE] = isExtensionSupported("GLX_ARB_multisample");
 sage_glx_ext[GLX_SGIS_MULTISAMPLE] = isExtensionSupported("GLX_SGIS_multisample");
 sage_glx_ext[GLX_EXT_VISUAL_INFO] = isExtensionSupported("GLX_EXT_visual_info");
 sage_glx_ext[GLX_SGI_SWAP_CONTROL] = isExtensionSupported("GLX_SGI_swap_control");
 sage_glx_ext[GLX_SGI_VIDEO_SYNC] = isExtensionSupported("GLX_SGI_video_sync");
 sage_glx_ext[GLX_SGI_MAKE_CURRENT_READ] = isExtensionSupported("GLX_SGI_make_current_read");
 sage_glx_ext[GLX_SGIX_VIDEO_SOURCE] = isExtensionSupported("GLX_SGIX_video_source");
 sage_glx_ext[GLX_EXT_VISUAL_RATING] = isExtensionSupported("GLX_EXT_visual_rating");
 sage_glx_ext[GLX_EXT_IMPORT_CONTEXT] = isExtensionSupported("GLX_EXT_import_context");
 sage_glx_ext[GLX_SGIX_FBCONFIG] = isExtensionSupported("GLX_SGIX_fbconfig");
 sage_glx_ext[GLX_SGIX_PBUFFER] = isExtensionSupported("GLX_SGIX_pbuffer");
 sage_glx_ext[GLX_SGI_CUSHION] = isExtensionSupported("GLX_SGI_cushion");
 sage_glx_ext[GLX_SGIX_VIDEO_RESIZE] = isExtensionSupported("GLX_SGIX_video_resize");
 sage_glx_ext[GLX_SGIX_DMBUFFER] = isExtensionSupported("GLX_SGIX_dmbuffer");
 sage_glx_ext[GLX_SGIX_SWAP_GROUP] = isExtensionSupported("GLX_SGIX_swap_group");
 sage_glx_ext[GLX_SGIX_SWAP_BARRIER] = isExtensionSupported("GLX_SGIX_swap_barrier");
 sage_glx_ext[GLX_SUN_GET_TRANSPARENT_INDEX] = isExtensionSupported("GLX_SUN_get_transparent_index");
 sage_glx_ext[GLX_MESA_COPY_SUB_BUFFER] = isExtensionSupported("GLX_MESA_copy_sub_buffer");
 sage_glx_ext[GLX_MESA_PIXMAP_COLORMAP] = isExtensionSupported("GLX_MESA_pixmap_colormap");
 sage_glx_ext[GLX_MESA_RELEASE_BUFFERS] = isExtensionSupported("GLX_MESA_release_buffers");
 sage_glx_ext[GLX_MESA_SET_3DFX_MODE] = isExtensionSupported("GLX_MESA_set_3dfx_mode");
 sage_glx_ext[GLX_SGIX_VISUAL_SELECT_GROUP] = isExtensionSupported("GLX_SGIX_visual_select_group");
 sage_glx_ext[GLX_OML_SWAP_METHOD] = isExtensionSupported("GLX_OML_swap_method");
 sage_glx_ext[GLX_OML_SYNC_CONTROL] = isExtensionSupported("GLX_OML_sync_control");
}
