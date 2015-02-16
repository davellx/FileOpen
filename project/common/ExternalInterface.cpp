#ifndef STATIC_LINK
#define IMPLEMENT_API
#endif

#if defined(HX_WINDOWS) || defined(HX_MACOS) || defined(HX_LINUX)
#define NEKO_COMPATIBLE
#endif


#include <hx/CFFI.h>
#include "Utils.h"


using namespace openfile;



static value openfile_file_open (const char* path, const char* type) {
	
	OpenFile(path, type);
	
}
DEFINE_PRIM (openfile_file_open, 1);



extern "C" void openfile_main () {
	
	val_int(0); // Fix Neko init
	
}
DEFINE_ENTRY_POINT (openfile_main);



extern "C" int openfile_register_prims () { return 0; }