// AUTOGENERATED. DO NOT EDIT.
// RUN `bin/blitz3d config` TO UPDATE.

#include <bb/blitz/module.h>
#include <bb/stdio/stdio.h>

#ifdef WIN32
BBMODULE_LINK( stdio ){
	rtSym( "WriteStderr$str",bbWriteStderr );
	rtSym( "WriteStdout$str",bbWriteStdout );
}
#endif
