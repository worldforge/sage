// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include <sage/sage_glx.h>
#include "SDL.h"
#include "sage/utility.h"

#ifdef SAGE_GLX_VERSION_1_3
PFNGLXGETFBCONFIGATTRIBPROC SAGE_glXGetFBConfigAttrib = NULL;
PFNGLXCREATEWINDOWPROC SAGE_glXCreateWindow = NULL;
PFNGLXDESTROYWINDOWPROC SAGE_glXDestroyWindow = NULL;
PFNGLXCREATEPIXMAPPROC SAGE_glXCreatePixmap = NULL;
PFNGLXDESTROYPIXMAPPROC SAGE_glXDestroyPixmap = NULL;
PFNGLXCREATEPBUFFERPROC SAGE_glXCreatePbuffer = NULL;
PFNGLXDESTROYPBUFFERPROC SAGE_glXDestroyPbuffer = NULL;
PFNGLXQUERYDRAWABLEPROC SAGE_glXQueryDrawable = NULL;
PFNGLXCREATENEWCONTEXTPROC SAGE_glXCreateNewContext = NULL;
PFNGLXMAKECONTEXTCURRENTPROC SAGE_glXMakeContextCurrent = NULL;
PFNGLXGETCURRENTREADDRAWABLEPROC SAGE_glXGetCurrentReadDrawable = NULL;
PFNGLXQUERYCONTEXTPROC SAGE_glXQueryContext = NULL;
PFNGLXSELECTEVENTPROC SAGE_glXSelectEvent = NULL;
PFNGLXGETSELECTEDEVENTPROC SAGE_glXGetSelectedEvent = NULL;
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
PFNGLXSWAPINTERVALSGIPROC SAGE_glXSwapIntervalSGI = NULL;
#endif
#ifdef SAGE_GLX_SGI_video_sync
PFNGLXGETVIDEOSYNCSGIPROC SAGE_glXGetVideoSyncSGI = NULL;
PFNGLXWAITVIDEOSYNCSGIPROC SAGE_glXWaitVideoSyncSGI = NULL;
#endif
#ifdef SAGE_GLX_SGI_make_current_read
PFNGLXMAKECURRENTREADSGIPROC SAGE_glXMakeCurrentReadSGI = NULL;
PFNGLXGETCURRENTREADDRAWABLESGIPROC SAGE_glXGetCurrentReadDrawableSGI = NULL;
#endif
#ifdef SAGE_GLX_SGIX_video_source
PFNGLXCREATEGLXVIDEOSOURCESGIXPROC SAGE_glXCreateGLXVideoSourceSGIX = NULL;
PFNGLXDESTROYGLXVIDEOSOURCESGIXPROC SAGE_glXDestroyGLXVideoSourceSGIX = NULL;
#endif
#ifdef SAGE_GLX_EXT_visual_rating
#endif
#ifdef SAGE_GLX_EXT_import_context
PFNGLXQUERYCONTEXTINFOEXTPROC SAGE_glXQueryContextInfoEXT = NULL;
PFNGLXGETCONTEXTIDEXTPROC SAGE_glXGetContextIDEXT = NULL;
PFNGLXIMPORTCONTEXTEXTPROC SAGE_glXImportContextEXT = NULL;
PFNGLXFREECONTEXTEXTPROC SAGE_glXFreeContextEXT = NULL;
#endif
#ifdef SAGE_GLX_SGIX_fbconfig
PFNGLXGETFBCONFIGATTRIBSGIXPROC SAGE_glXGetFBConfigAttribSGIX = NULL;
PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC SAGE_glXCreateGLXPixmapWithConfigSGIX = NULL;
PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC SAGE_glXCreateContextWithConfigSGIX = NULL;
PFNGLXGETFBCONFIGFROMVISUALSGIXPROC SAGE_glXGetFBConfigFromVisualSGIX = NULL;
#endif
#ifdef SAGE_GLX_SGIX_pbuffer
PFNGLXCREATEGLXPBUFFERSGIXPROC SAGE_glXCreateGLXPbufferSGIX = NULL;
PFNGLXDESTROYGLXPBUFFERSGIXPROC SAGE_glXDestroyGLXPbufferSGIX = NULL;
PFNGLXQUERYGLXPBUFFERSGIXPROC SAGE_glXQueryGLXPbufferSGIX = NULL;
PFNGLXSELECTEVENTSGIXPROC SAGE_glXSelectEventSGIX = NULL;
PFNGLXGETSELECTEDEVENTSGIXPROC SAGE_glXGetSelectedEventSGIX = NULL;
#endif
#ifdef SAGE_GLX_SGI_cushion
PFNGLXCUSHIONSGIPROC SAGE_glXCushionSGI = NULL;
#endif
#ifdef SAGE_GLX_SGIX_video_resize
PFNGLXBINDCHANNELTOWINDOWSGIXPROC SAGE_glXBindChannelToWindowSGIX = NULL;
PFNGLXCHANNELRECTSGIXPROC SAGE_glXChannelRectSGIX = NULL;
PFNGLXQUERYCHANNELRECTSGIXPROC SAGE_glXQueryChannelRectSGIX = NULL;
PFNGLXQUERYCHANNELDELTASSGIXPROC SAGE_glXQueryChannelDeltasSGIX = NULL;
PFNGLXCHANNELRECTSYNCSGIXPROC SAGE_glXChannelRectSyncSGIX = NULL;
#endif
#ifdef SAGE_GLX_SGIX_dmbuffer
PFNGLXASSOCIATEDMPBUFFERSGIXPROC SAGE_glXAssociateDMPbufferSGIX = NULL;
#endif
#ifdef SAGE_GLX_SGIX_swap_group
PFNGLXJOINSWAPGROUPSGIXPROC SAGE_glXJoinSwapGroupSGIX = NULL;
#endif
#ifdef SAGE_GLX_SGIX_swap_barrier
PFNGLXBINDSWAPBARRIERSGIXPROC SAGE_glXBindSwapBarrierSGIX = NULL;
PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC SAGE_glXQueryMaxSwapBarriersSGIX = NULL;
#endif
#ifdef SAGE_GLX_SUN_get_transparent_index
PFNGLXGETTRANSPARENTINDEXSUNPROC SAGE_glXGetTransparentIndexSUN = NULL;
#endif
#ifdef SAGE_GLX_MESA_copy_sub_buffer
PFNGLXCOPYSUBBUFFERMESAPROC SAGE_glXCopySubBufferMESA = NULL;
#endif
#ifdef SAGE_GLX_MESA_pixmap_colormap
PFNGLXCREATEGLXPIXMAPMESAPROC SAGE_glXCreateGLXPixmapMESA = NULL;
#endif
#ifdef SAGE_GLX_MESA_release_buffers
PFNGLXRELEASEBUFFERSMESAPROC SAGE_glXReleaseBuffersMESA = NULL;
#endif
#ifdef SAGE_GLX_MESA_set_3dfx_mode
PFNGLXSET3DFXMODEMESAPROC SAGE_glXSet3DfxModeMESA = NULL;
#endif
#ifdef SAGE_GLX_SGIX_visual_select_group
#endif
#ifdef SAGE_GLX_OML_swap_method
#endif
#ifdef SAGE_GLX_OML_sync_control
PFNGLXGETSYNCVALUESOMLPROC SAGE_glXGetSyncValuesOML = NULL;
PFNGLXGETMSCRATEOMLPROC SAGE_glXGetMscRateOML = NULL;
PFNGLXWAITFORMSCOMLPROC SAGE_glXWaitForMscOML = NULL;
PFNGLXWAITFORSBCOMLPROC SAGE_glXWaitForSbcOML = NULL;
#endif

int sage_glx_ext[SAGE_GLX_LAST_EXTENSION];

void sage_glx_init(void) {
#ifdef SAGE_GLX_VERSION_1_3
  SAGE_glXGetFBConfigAttrib = (PFNGLXGETFBCONFIGATTRIBPROC)SDL_GL_GetProcAddress("glXGetFBConfigAttrib");
  SAGE_glXCreateWindow = (PFNGLXCREATEWINDOWPROC)SDL_GL_GetProcAddress("glXCreateWindow");
  SAGE_glXDestroyWindow = (PFNGLXDESTROYWINDOWPROC)SDL_GL_GetProcAddress("glXDestroyWindow");
  SAGE_glXCreatePixmap = (PFNGLXCREATEPIXMAPPROC)SDL_GL_GetProcAddress("glXCreatePixmap");
  SAGE_glXDestroyPixmap = (PFNGLXDESTROYPIXMAPPROC)SDL_GL_GetProcAddress("glXDestroyPixmap");
  SAGE_glXCreatePbuffer = (PFNGLXCREATEPBUFFERPROC)SDL_GL_GetProcAddress("glXCreatePbuffer");
  SAGE_glXDestroyPbuffer = (PFNGLXDESTROYPBUFFERPROC)SDL_GL_GetProcAddress("glXDestroyPbuffer");
  SAGE_glXQueryDrawable = (PFNGLXQUERYDRAWABLEPROC)SDL_GL_GetProcAddress("glXQueryDrawable");
  SAGE_glXCreateNewContext = (PFNGLXCREATENEWCONTEXTPROC)SDL_GL_GetProcAddress("glXCreateNewContext");
  SAGE_glXMakeContextCurrent = (PFNGLXMAKECONTEXTCURRENTPROC)SDL_GL_GetProcAddress("glXMakeContextCurrent");
  SAGE_glXGetCurrentReadDrawable = (PFNGLXGETCURRENTREADDRAWABLEPROC)SDL_GL_GetProcAddress("glXGetCurrentReadDrawable");
  SAGE_glXQueryContext = (PFNGLXQUERYCONTEXTPROC)SDL_GL_GetProcAddress("glXQueryContext");
  SAGE_glXSelectEvent = (PFNGLXSELECTEVENTPROC)SDL_GL_GetProcAddress("glXSelectEvent");
  SAGE_glXGetSelectedEvent = (PFNGLXGETSELECTEDEVENTPROC)SDL_GL_GetProcAddress("glXGetSelectedEvent");
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
  SAGE_glXSwapIntervalSGI = (PFNGLXSWAPINTERVALSGIPROC)SDL_GL_GetProcAddress("glXSwapIntervalSGI");
#endif
#ifdef SAGE_GLX_SGI_video_sync
  SAGE_glXGetVideoSyncSGI = (PFNGLXGETVIDEOSYNCSGIPROC)SDL_GL_GetProcAddress("glXGetVideoSyncSGI");
  SAGE_glXWaitVideoSyncSGI = (PFNGLXWAITVIDEOSYNCSGIPROC)SDL_GL_GetProcAddress("glXWaitVideoSyncSGI");
#endif
#ifdef SAGE_GLX_SGI_make_current_read
  SAGE_glXMakeCurrentReadSGI = (PFNGLXMAKECURRENTREADSGIPROC)SDL_GL_GetProcAddress("glXMakeCurrentReadSGI");
  SAGE_glXGetCurrentReadDrawableSGI = (PFNGLXGETCURRENTREADDRAWABLESGIPROC)SDL_GL_GetProcAddress("glXGetCurrentReadDrawableSGI");
#endif
#ifdef SAGE_GLX_SGIX_video_source
  SAGE_glXCreateGLXVideoSourceSGIX = (PFNGLXCREATEGLXVIDEOSOURCESGIXPROC)SDL_GL_GetProcAddress("glXCreateGLXVideoSourceSGIX");
  SAGE_glXDestroyGLXVideoSourceSGIX = (PFNGLXDESTROYGLXVIDEOSOURCESGIXPROC)SDL_GL_GetProcAddress("glXDestroyGLXVideoSourceSGIX");
#endif
#ifdef SAGE_GLX_EXT_visual_rating
#endif
#ifdef SAGE_GLX_EXT_import_context
  SAGE_glXQueryContextInfoEXT = (PFNGLXQUERYCONTEXTINFOEXTPROC)SDL_GL_GetProcAddress("glXQueryContextInfoEXT");
  SAGE_glXGetContextIDEXT = (PFNGLXGETCONTEXTIDEXTPROC)SDL_GL_GetProcAddress("glXGetContextIDEXT");
  SAGE_glXImportContextEXT = (PFNGLXIMPORTCONTEXTEXTPROC)SDL_GL_GetProcAddress("glXImportContextEXT");
  SAGE_glXFreeContextEXT = (PFNGLXFREECONTEXTEXTPROC)SDL_GL_GetProcAddress("glXFreeContextEXT");
#endif
#ifdef SAGE_GLX_SGIX_fbconfig
  SAGE_glXGetFBConfigAttribSGIX = (PFNGLXGETFBCONFIGATTRIBSGIXPROC)SDL_GL_GetProcAddress("glXGetFBConfigAttribSGIX");
  SAGE_glXCreateGLXPixmapWithConfigSGIX = (PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC)SDL_GL_GetProcAddress("glXCreateGLXPixmapWithConfigSGIX");
  SAGE_glXCreateContextWithConfigSGIX = (PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC)SDL_GL_GetProcAddress("glXCreateContextWithConfigSGIX");
  SAGE_glXGetFBConfigFromVisualSGIX = (PFNGLXGETFBCONFIGFROMVISUALSGIXPROC)SDL_GL_GetProcAddress("glXGetFBConfigFromVisualSGIX");
#endif
#ifdef SAGE_GLX_SGIX_pbuffer
  SAGE_glXCreateGLXPbufferSGIX = (PFNGLXCREATEGLXPBUFFERSGIXPROC)SDL_GL_GetProcAddress("glXCreateGLXPbufferSGIX");
  SAGE_glXDestroyGLXPbufferSGIX = (PFNGLXDESTROYGLXPBUFFERSGIXPROC)SDL_GL_GetProcAddress("glXDestroyGLXPbufferSGIX");
  SAGE_glXQueryGLXPbufferSGIX = (PFNGLXQUERYGLXPBUFFERSGIXPROC)SDL_GL_GetProcAddress("glXQueryGLXPbufferSGIX");
  SAGE_glXSelectEventSGIX = (PFNGLXSELECTEVENTSGIXPROC)SDL_GL_GetProcAddress("glXSelectEventSGIX");
  SAGE_glXGetSelectedEventSGIX = (PFNGLXGETSELECTEDEVENTSGIXPROC)SDL_GL_GetProcAddress("glXGetSelectedEventSGIX");
#endif
#ifdef SAGE_GLX_SGI_cushion
  SAGE_glXCushionSGI = (PFNGLXCUSHIONSGIPROC)SDL_GL_GetProcAddress("glXCushionSGI");
#endif
#ifdef SAGE_GLX_SGIX_video_resize
  SAGE_glXBindChannelToWindowSGIX = (PFNGLXBINDCHANNELTOWINDOWSGIXPROC)SDL_GL_GetProcAddress("glXBindChannelToWindowSGIX");
  SAGE_glXChannelRectSGIX = (PFNGLXCHANNELRECTSGIXPROC)SDL_GL_GetProcAddress("glXChannelRectSGIX");
  SAGE_glXQueryChannelRectSGIX = (PFNGLXQUERYCHANNELRECTSGIXPROC)SDL_GL_GetProcAddress("glXQueryChannelRectSGIX");
  SAGE_glXQueryChannelDeltasSGIX = (PFNGLXQUERYCHANNELDELTASSGIXPROC)SDL_GL_GetProcAddress("glXQueryChannelDeltasSGIX");
  SAGE_glXChannelRectSyncSGIX = (PFNGLXCHANNELRECTSYNCSGIXPROC)SDL_GL_GetProcAddress("glXChannelRectSyncSGIX");
#endif
#ifdef SAGE_GLX_SGIX_dmbuffer
  SAGE_glXAssociateDMPbufferSGIX = (PFNGLXASSOCIATEDMPBUFFERSGIXPROC)SDL_GL_GetProcAddress("glXAssociateDMPbufferSGIX");
#endif
#ifdef SAGE_GLX_SGIX_swap_group
  SAGE_glXJoinSwapGroupSGIX = (PFNGLXJOINSWAPGROUPSGIXPROC)SDL_GL_GetProcAddress("glXJoinSwapGroupSGIX");
#endif
#ifdef SAGE_GLX_SGIX_swap_barrier
  SAGE_glXBindSwapBarrierSGIX = (PFNGLXBINDSWAPBARRIERSGIXPROC)SDL_GL_GetProcAddress("glXBindSwapBarrierSGIX");
  SAGE_glXQueryMaxSwapBarriersSGIX = (PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC)SDL_GL_GetProcAddress("glXQueryMaxSwapBarriersSGIX");
#endif
#ifdef SAGE_GLX_SUN_get_transparent_index
  SAGE_glXGetTransparentIndexSUN = (PFNGLXGETTRANSPARENTINDEXSUNPROC)SDL_GL_GetProcAddress("glXGetTransparentIndexSUN");
#endif
#ifdef SAGE_GLX_MESA_copy_sub_buffer
  SAGE_glXCopySubBufferMESA = (PFNGLXCOPYSUBBUFFERMESAPROC)SDL_GL_GetProcAddress("glXCopySubBufferMESA");
#endif
#ifdef SAGE_GLX_MESA_pixmap_colormap
  SAGE_glXCreateGLXPixmapMESA = (PFNGLXCREATEGLXPIXMAPMESAPROC)SDL_GL_GetProcAddress("glXCreateGLXPixmapMESA");
#endif
#ifdef SAGE_GLX_MESA_release_buffers
  SAGE_glXReleaseBuffersMESA = (PFNGLXRELEASEBUFFERSMESAPROC)SDL_GL_GetProcAddress("glXReleaseBuffersMESA");
#endif
#ifdef SAGE_GLX_MESA_set_3dfx_mode
  SAGE_glXSet3DfxModeMESA = (PFNGLXSET3DFXMODEMESAPROC)SDL_GL_GetProcAddress("glXSet3DfxModeMESA");
#endif
#ifdef SAGE_GLX_SGIX_visual_select_group
#endif
#ifdef SAGE_GLX_OML_swap_method
#endif
#ifdef SAGE_GLX_OML_sync_control
  SAGE_glXGetSyncValuesOML = (PFNGLXGETSYNCVALUESOMLPROC)SDL_GL_GetProcAddress("glXGetSyncValuesOML");
  SAGE_glXGetMscRateOML = (PFNGLXGETMSCRATEOMLPROC)SDL_GL_GetProcAddress("glXGetMscRateOML");
  SAGE_glXWaitForMscOML = (PFNGLXWAITFORMSCOMLPROC)SDL_GL_GetProcAddress("glXWaitForMscOML");
  SAGE_glXWaitForSbcOML = (PFNGLXWAITFORSBCOMLPROC)SDL_GL_GetProcAddress("glXWaitForSbcOML");
#endif
 sage_glx_ext[GLX_VERSION_1_3] = isExtensionSupported("GLX_VERSION_1_3");
 sage_glx_ext[GLX_VERSION_1_4] = isExtensionSupported("GLX_VERSION_1_4");
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
