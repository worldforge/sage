lib_LTLIBRARIES = libsage.la

libsage_la_LDFLAGS = -version-info @SAGE_VERSION_INFO@

if BUILD_DLL
libsage_la_CFLAGS=-DBUILD_SAGE_DLL
endif


libsage_la_SOURCES = \
	check_extension.c \
	sage.c
	
libsagedir = $(includedir)/sage

libsage_HEADERS=\
	sage.h \
	utility.h \
	glext_sage.h
