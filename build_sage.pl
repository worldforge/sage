#! /usr/bin/perl -w

#write headers

open (GLEXT, "<glext.h") or die "Cannout open glext.h\n";
open (GLEXT_O, ">glext_new.h") or die "Cannout open glext.h\n";

$WAIT_FOR_ENDIF="false";

while (<GLEXT>) {
#  print GLEXT_O $_;
  if ($_ =~ m|GLAPI [A-Za-z]* APIENTRY [a-zA-Z0-9]* .*|) {
    ( $FUNC ) = ($_ =~ m|GLAPI [A-Za-z]* APIENTRY ([a-zA-Z0-9]*) .*|);
    $PFNFUNC = "PFN" . uc($FUNC) . "PROC";
    push(@FUNC_DECLS_H , "SAGEAPI $PFNFUNC $FUNC;\n");
    push (@FUNC_DECLS_C, "$PFNFUNC $FUNC = 0;\n");
    push (@FUNC_LINKUP,"  $FUNC = ($PFNFUNC)SDL_GL_GetProcAddress(\"$FUNC\");\n");
  } elsif  ($_ =~ m|\#define GL_[A-Za-z0-9_]* 1$|) {
    ($DEF) = ($_ =~ m|\#define (GL_[A-Za-z0-9_]*) 1$|);
#    push(@FUNC_DECLS_H, $_);
    push (@FUNC_DECLS_H, "#ifdef SAGE_".$DEF."\n");
    push (@FUNC_DECLS_C, "#ifdef SAGE_".$DEF."\n");
    push (@FUNC_LINKUP, "#ifdef SAGE_".$DEF."\n");
    #   print GLEXT_O "#define SAGE_".$DEF." 1\n";
    $WAIT_FOR_ENDIF="true";
  } elsif ($_ =~ m|\#endif|) {
    if ($WAIT_FOR_ENDIF eq "true") {
      push(@FUNC_DECLS_H, "#endif\n");
      push(@FUNC_DECLS_C, "#endif\n");
      push(@FUNC_LINKUP, "#endif\n");
      $WAIT_FOR_ENDIF="false";
    }
  } elsif ($_ =~ m|\#ifndef GL_[A-Za-z0-9_]*|) {
#    push(@FUNC_DECLS_H, $_);
  }
}

$FUNC_HEADER_FILE="func_decls.h";
#Write header file
open (HEADER, ">".$FUNC_HEADER_FILE) or die "Can't open:" . $FUNC_HEADER_FILE . "\n";
#Write license header
print HEADER "// This file may be redistributed and modified only under the terms of\n";
print HEADER "// the GNU Lesser General Public License (See COPYING for details).\n";
print HEADER "// Copyright (C) 2003 Simon Goodall\n";
print HEADER "\n";
print HEADER "#ifndef SAGE_FUNC_DECLS_H\n";
print HEADER "#define SAGE_DUNC_DECLS_H 1\n";
print HEADER "#include \"GL/gl.h\"\n";
print HEADER "#include \"glext.h\"\n";
for (@FUNC_DECLS_H) {
  print HEADER $_;
#  next;
}
print HEADER "#endif\n";
#Write c file
$FUNC_CODE_FILE="func_decls.c";
#Write header file
open (CODE, ">".$FUNC_CODE_FILE) or die "Can't open:" . $FUNC_CODE_FILE . "\n";
#Write license header
print CODE "// This file may be redistributed and modified only under the terms of\n";
print CODE "// the GNU Lesser General Public License (See COPYING for details).\n";
print CODE "// Copyright (C) 2003 Simon Goodall\n";
print CODE "\n";
print CODE "#include \"$FUNC_HEADER_FILE\"\n";
print CODE "#include  \"SDL.h\"\n";
for (@FUNC_DECLS_C) {
  print CODE $_;
}
print CODE "\n";
print CODE "void sage_init(void) {\n";
for (@FUNC_LINKUP) {
  print CODE $_;
}
print CODE "}\n";
