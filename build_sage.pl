#! /usr/bin/perl -w

$GLEXT_SAGE="sage/glext_sage.h";

open (GLEXT, "<glext.h") or die "Cannot open glext.h\n";
open (GLEXT_O, ">".$GLEXT_SAGE) or die "Cannot open glext.h\n";

$WAIT_FOR_ENDIF="false";

while (<GLEXT>) {
  print GLEXT_O $_;
  # This mayt require GLAPI at the start of the rtegexp for some glext.h files
  if ($_ =~ m|[A-Za-z]* APIENTRY [a-zA-Z0-9]* .*|) {
    ( $FUNC ) = ($_ =~ m|[A-Za-z]* APIENTRY ([a-zA-Z0-9]*) .*|);
    $PFNFUNC = "PFN" . uc($FUNC) . "PROC";
    push(@FUNC_DECLS_H , "SAGEAPI $PFNFUNC $FUNC;\n");
    push (@FUNC_DECLS_C, "$PFNFUNC $FUNC = 0;\n");
    push (@FUNC_LINKUP,"  $FUNC = ($PFNFUNC)SDL_GL_GetProcAddress(\"$FUNC\");\n");
  } elsif  ($_ =~ m|\#define GL_[A-Za-z0-9_]* 1$|) {
    ($DEF) = ($_ =~ m|\#define (GL_[A-Za-z0-9_]*) 1$|);
    push(@FUNC_DECLS_H, $_);
    push (@FUNC_DECLS_H, "#ifdef SAGE_".$DEF."\n");
    push (@FUNC_DECLS_C, "#ifdef SAGE_".$DEF."\n");
    push (@FUNC_LINKUP, "#ifdef SAGE_".$DEF."\n");
    print GLEXT_O "#define SAGE_".$DEF." 1\n";
    $WAIT_FOR_ENDIF="true";
  } elsif ($_ =~ m|\#endif|) {
    if ($WAIT_FOR_ENDIF eq "true") {
      push(@FUNC_DECLS_H, "#endif\n");
      push(@FUNC_DECLS_C, "#endif\n");
      push(@FUNC_LINKUP, "#endif\n");
      $WAIT_FOR_ENDIF="false";
    }
  }
}

$FUNC_HEADER_FILE="sage/sage.h";
#Write header file
open (HEADER_FILE, ">".$FUNC_HEADER_FILE) or die "Can't open:" . $FUNC_HEADER_FILE . "\n";
open (LICENSE, "<templates/license") or die "Can't open: templates/license\n";
open (HEADER, "<templates/header") or die "Can't open: templates/header\n";
print "Writing $FUNC_HEADER_FILE\n";
#Write license header
while(<LICENSE>) { print HEADER_FILE $_; }

print HEADER_FILE "\n";
print HEADER_FILE "#ifndef SAGE_H\n";
print HEADER_FILE "#define SAGE_H 1\n";
print HEADER_FILE "\n";
while(<HEADER>) { print HEADER_FILE $_; }
print HEADER_FILE "#include <$GLEXT_SAGE>\n";
for (@FUNC_DECLS_H) {
  print HEADER_FILE $_;
#  next;
}
print HEADER_FILE "#endif\n";

close HEADER_FILE;
close LICENSE;
close HEADER;

open (LICENSE, "<templates/license") or die "Can't open: templates/license\n";
#Write c file
$FUNC_CODE_FILE="sage/sage.c";
#Write header file
open (CODE, ">".$FUNC_CODE_FILE) or die "Can't open:" . $FUNC_CODE_FILE . "\n";
print "Writing $FUNC_CODE_FILE\n";
#Write license header

while(<LICENSE>) { print CODE $_; }
print CODE "\n";
print CODE "#include <$FUNC_HEADER_FILE>\n";
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
close CODE;
