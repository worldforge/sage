SUBDIRS=templates sage

EXTRA_DIST = sage.spec sage.pc autogen.sh

sage.dll:
	$(DLLWRAP) -o sage.dll -dllname sage.dll sage/*.o -lSDL -lopengl32 -L $(CROSS_TOOLS)lib

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = sage.pc
