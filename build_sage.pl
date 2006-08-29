#! /usr/bin/perl -w

# This file generates three source files required to build sage
# This first part of this file extracts the extension names, the #defines
# and the function names. This process also creates a cutsom glext.h file 
# for use in sage The remaining parts of the file write the header and 
# code file.

# Input Filenames
$GLEXT_FILE="glext.h";
# Output Filenames
$GLEXT_SAGE_FILE="sage/sage_fptr.h";
$SAGE_HEADER_FILE="sage/sage.h";
$SAGE_CODE_FILE="sage/sage.c";
$LICENSE_FILE="templates/license";

#regular expressions
$FUNCTION_REGEXP="([A-Za-z*]*) APIENTRY ([a-zA-Z0-9]*) (.*)";
$DEFINE_REGEXP="\#define (GL_[A-Za-z0-9_]*) 1\$";
$VERSION_REGEXP="\#ifndef (GL_[A-Za-z0-9_]*)";
$TOKEN_REGEXP="\#define (GL_[A-Za-z0-9_]*)[ \t]*((0x[0-9A-F]*)\|(GL_.*))\$";
$TYPES_REGEXP="typedef ([ A-Za-z0-9_*]*)[ \t]*(GL[A-Za-z0-9_]*);";

#flag checking whether we need to add an endif or not
$WAIT_FOR_ENDIF="false";

# Open glext.h for input
open (GLEXT, "<$GLEXT_FILE") or die "Cannot open $GLEXT_FILE\n";
#loop through every line in glext.h
while (<GLEXT>) {
  if  ($_ =~ m|$VERSION_REGEXP|) {
    push(@FUNCTION_HEADER_DEF, $_); # write into header
    $WAIT_FOR_ENDIF="true"; # we now need to write a corresponding endif when its next found
  } elsif  ($_ =~ m|$TYPES_REGEXP|) {
    push(@FUNCTION_HEADER_DEF, $_); # write into header
    $WAIT_FOR_ENDIF="true"; # we now need to write a corresponding endif when its next found
  } elsif ($_ =~ m|$FUNCTION_REGEXP|) {
    ($RET, $FUNCTION, $ARGS) = ($_ =~ m|$FUNCTION_REGEXP|); # Extract function name
    $PFN_FUNCTION = "SAGE_PFN".uc($FUNCTION)."PROC"; # make the typedef name
    push(@TYPEDEFS, "typedef $RET (APIENTRYP $PFN_FUNCTION) $ARGS\n");

    push(@FUNCTION_HEADER_FPTR , "SAGEAPI $PFN_FUNCTION SAGE_$FUNCTION;\n"); # declare function for header
    push(@FUNCTION_HEADER_DEF, "#ifndef $FUNCTION\n");
    push(@FUNCTION_HEADER_DEF, "#define $FUNCTION SAGE_$FUNCTION\n");
    push(@FUNCTION_HEADER_DEF, "#endif\n\n");
#    push (@FUNCTION_CODE, "$PFN_FUNCTION SAGE_$FUNCTION = NULL;\n"); # declaraion of function in c file
    push (@FUNCTION_CODE, "$PFN_FUNCTION SAGE_$FUNCTION = ($PFN_FUNCTION)&badfunc;\n"); # declaraion of function in c file
#    push (@FUNCTION_INIT,"  SAGE_$FUNCTION = ($PFN_FUNCTION)SDL_GL_GetProcAddress(\"$FUNCTION\");\n"); # linkup function ptr 
    push (@FUNCTION_INIT,"  SAGE_$FUNCTION = ($PFN_FUNCTION)getPtr(\"$FUNCTION\");\n"); # linkup function ptr 
  # Grab #defines
  } elsif  ($_ =~ m|$DEFINE_REGEXP|) {
    ($DEF) = ($_ =~ m|$DEFINE_REGEXP|); # extract #define name
    if ($DEF =~ m|GL_VERSION|) {
      # ignore GL_VERSION for BOOLS def
    } else  {
      push (@BOOLS, $DEF);
    }
    push(@FUNCTION_HEADER_DEF, $_); # write into header
  } elsif  ($_ =~ m|$TOKEN_REGEXP|) {
    push(@FUNCTION_HEADER_DEF, $_); # write into header
  # grab endif if required
  } elsif ($_ =~ m|\#endif|) { # write the endif now we have it
    if ($WAIT_FOR_ENDIF eq "true") {
      $WAIT_FOR_ENDIF="false";
      push(@FUNCTION_HEADER_DEF, "#endif\n\n");
    }
  }
}
#copy into two arrays - we use this twice (prob a better way to do this)
for (@BOOLS) {
  push(@BOOLS_DEF, $_);
  push(@BOOLS_ENUM, $_);
}


## Begin writing output files


## This header file just contains the function pointer prototypes.
print "Writing $GLEXT_SAGE_FILE\n";
# Open our glext.h for output
open (GLEXT_SAGE, ">$GLEXT_SAGE_FILE") or die "Cannot open $GLEXT_SAGE_FILE\n";


print GLEXT_SAGE "/* This file is autogenerated by build_sage.pl */\n";
open (LICENSE, "<$LICENSE_FILE") or die "Can't open: $LICENSE_FILE\n";
while(<LICENSE>) { print GLEXT_SAGE $_; }
close LICENSE;

print GLEXT_SAGE "\n";
print GLEXT_SAGE "#ifndef GLEXT_SAGE_H\n";
print GLEXT_SAGE "#define GLEXT_SAGE_H 1\n";
print GLEXT_SAGE "\n";

print GLEXT_SAGE "#ifndef APIENTRY\n";
print GLEXT_SAGE "#define APIENTRY\n";
print GLEXT_SAGE "#endif\n\n";

print GLEXT_SAGE "#ifndef APIENTRYP\n";
print GLEXT_SAGE "#define APIENTRYP APIENTRY *\n";
print GLEXT_SAGE "#endif\n\n";

for (@TYPEDEFS) {
  print GLEXT_SAGE $_;
}

print GLEXT_SAGE "#endif\n";
close GLEXT_SAGE;

# This file contains all the definitions from glext.h
# This file is reponsible for defining the numeric constants used by applications
# to determine whether a particular extension has been found.
# This file also transparently #defines normal function names as the functio npointer
# if is not already defined. Some care needs to be taken to ensure that standard functions
# are properly guarded against by version number rather than name.

open (SAGE_HEADER, ">$SAGE_HEADER_FILE") or die "Can't open: $SAGE_HEADER_FILE\n";
print "Writing $SAGE_HEADER_FILE\n";
#Write autogen comment
print SAGE_HEADER "/* This file is autogenerated by build_sage.pl */\n";

#Write license header
open (LICENSE, "<$LICENSE_FILE") or die "Can't open: $LICENSE_FILE\n";
while(<LICENSE>) { print SAGE_HEADER $_; }
close LICENSE;
print SAGE_HEADER "\n";

# Write header check
print SAGE_HEADER "#ifndef SAGE_H\n";
print SAGE_HEADER "#define SAGE_H 1\n";
print SAGE_HEADER "\n";

print SAGE_HEADER "#ifdef __glext_h_ \n";
print SAGE_HEADER "#error glext.h has already been included.\n";
print SAGE_HEADER "#endif\n\n";

print SAGE_HEADER "#define __glext_h_ 1\n\n";

# Write defines for use in extensions array
$INDEX = 0; # Set counter to zero
for (@BOOLS_ENUM) {
  print SAGE_HEADER "#define ".uc($_)." $INDEX\n"; # write a #define
  $INDEX = $INDEX + 1; # increment counter
}
# This allows use to determine the size of the extensions array
print SAGE_HEADER "#define SAGE_LAST_EXTENSION ".$INDEX."\n\n";

#include the SAGEAPI stuff
print SAGE_HEADER "#include <sage/header.h>\n";
print SAGE_HEADER "#include <sage/GL.h>\n";
# This is required to define ptrdiff_t
print SAGE_HEADER "#include <stddef.h>\n";
#define the extensions array
print SAGE_HEADER "SAGEAPI int sage_ext[SAGE_LAST_EXTENSION];\n\n";


#print all the token definitions
for (@FUNCTION_HEADER_DEF) {
  print SAGE_HEADER $_;
}

## Include prototypes.
## By now all the OpenGL types should have been defined.
printf SAGE_HEADER "\n";
print SAGE_HEADER "#include <$GLEXT_SAGE_FILE>\n\n";
printf SAGE_HEADER "\n";

#print the function declarations and #if's generated from glext.h
for (@FUNCTION_HEADER_FPTR) {
  print SAGE_HEADER $_;
}

#add the init function prototype
print SAGE_HEADER "\nSAGEAPI int sage_init(void);\n\n";
#endif for header check
print SAGE_HEADER "#endif\n";
#close file handle
close SAGE_HEADER;

# Write the code file

#open code file for writing
open (SAGE_CODE, ">$SAGE_CODE_FILE") or die "Can't open: $SAGE_CODE_FILE\n";
print "Writing $SAGE_CODE_FILE\n";

#Write autogen comment
print SAGE_CODE "/* This file is autogenerated by build_sage.pl */\n";

#Write license header
open (LICENSE, "<$LICENSE_FILE") or die "Can't open: $LICENSE_FILE\n";
while(<LICENSE>) { print SAGE_CODE $_; }
close LICENSE;
print SAGE_CODE "\n";

#write the #includes
print SAGE_CODE "#include <$SAGE_HEADER_FILE>\n";
print SAGE_CODE "#include \"SDL.h\"\n";
print SAGE_CODE "#include <sage/utility.h>\n";
print SAGE_CODE "#include <stdlib.h>\n";
print SAGE_CODE "\n";
print SAGE_CODE "static void badfunc(void*v, ...) {\n";
print SAGE_CODE "  fprintf(stderr, \"Error: You have tried to call a sage function pointer that is NULL.\\n\");\n";
print SAGE_CODE "  fflush(stderr);\n";
print SAGE_CODE "  abort();\n";
print SAGE_CODE "}\n";
print SAGE_CODE "\n";
print SAGE_CODE "static void* getPtr(const char *func) {\n";
print SAGE_CODE "  void *p = SDL_GL_GetProcAddress(func);\n";
print SAGE_CODE "  if (p == NULL) p = &badfunc;\n";
print SAGE_CODE "  return p;\n";
print SAGE_CODE "}\n";
print SAGE_CODE "\n";

#start writing the function pointer declarations
for (@FUNCTION_CODE) {
  print SAGE_CODE $_;
}
print SAGE_CODE "\n";

# declare the extension array
print SAGE_CODE "int sage_ext[SAGE_LAST_EXTENSION];\n\n";

#start writing the init function
print SAGE_CODE "int sage_init(void) {\n";
## Gets the glExtension string each time init is called.
print SAGE_CODE "  GLubyte *ext_str = (GLubyte*)glGetString(GL_EXTENSIONS);\n";
print SAGE_CODE "  if (ext_str == NULL) {\n";
print SAGE_CODE "    fprintf(stderr, \"Sage Error: Could not get extension string\\n\");\n";
print SAGE_CODE "    return 1;\n";
print SAGE_CODE "  }\n";
## Write the code to hook up the function pointers.
for (@FUNCTION_INIT) {
  print SAGE_CODE $_;
}

# start writing the extension check code
for (@BOOLS_DEF) {
  print SAGE_CODE "  sage_ext[".uc($_)."] = isExtensionSupported(\"$_\", ext_str);\n";
}
#write closing brace for function
print SAGE_CODE "  return 0;\n";
print SAGE_CODE "}\n";
#close file handle
close SAGE_CODE;

