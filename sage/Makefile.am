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
	glext_sage.h \
	header.h
bin_SCRIPTS= @SAGE_DLL@
EXTRA_SCRIPTS = sage.dll

%.dll : lib%.la
	$(DLLWRAP) --output-def $*.def --driver-name=g++ -o $@ `ar t .libs/lib$*.a` $(LDFLAGS) $(LIBS)
	echo $(DLLTOOL)
	$(DLLTOOL) --dllname $@ --def $*.def --output-lib .libs/lib$*.a

clean-local:
	rm -f sage.dll sage.def
