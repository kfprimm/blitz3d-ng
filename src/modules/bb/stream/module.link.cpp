// AUTOGENERATED. DO NOT EDIT.
// RUN `bin/blitz3d config` TO UPDATE.

#include <bb/blitz/module.h>
#include <bb/stream/stream.h>

#ifdef WIN32
BBMODULE_LINK( stream ){
	rtSym( "CopyStream%src_stream%dest_stream%buffer_size=16384",bbCopyStream );
	rtSym( "%Eof%stream",bbEof );
	rtSym( "%ReadAvail%stream",bbReadAvail );
	rtSym( "%ReadByte%stream",bbReadByte );
	rtSym( "#ReadFloat%stream",bbReadFloat );
	rtSym( "%ReadInt%stream",bbReadInt );
	rtSym( "$ReadLine%stream",bbReadLine );
	rtSym( "%ReadShort%stream",bbReadShort );
	rtSym( "$ReadString%stream",bbReadString );
	rtSym( "%WriteByte%stream%byte",bbWriteByte );
	rtSym( "%WriteFloat%stream#float",bbWriteFloat );
	rtSym( "%WriteInt%stream%int",bbWriteInt );
	rtSym( "%WriteLine%stream$string",bbWriteLine );
	rtSym( "%WriteShort%stream%short",bbWriteShort );
	rtSym( "%WriteString%stream$string",bbWriteString );
}
#endif
