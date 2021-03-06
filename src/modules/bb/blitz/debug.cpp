
#include <bb/runtime/runtime.h>
#include "debug.h"
#include "ex.h"

static Debugger *debugger=0;

BBHook bbOnDebugStop;
BBHook bbOnDebugError;
BBHook bbOnDebugInfo;

void BBCALL bbAttachDebugger( Debugger *d ){
	debugger=d;
}

Debugger * BBCALL bbGetDebugger(){
	return debugger;
}

void BBCALL _bbDebugLog( const char *t ){
	if( debugger ) debugger->debugLog( t );
}

void BBCALL _bbDebugInfo( const char *e ){
	if( debugger ) {
		bbOnDebugInfo.run( (void*)e );
		debugger->debugMsg( e,false );
	}
}

void BBCALL _bbDebugError( const char *e ){
	if( debugger ){
		bbOnDebugInfo.run( (void*)e );
		debugger->debugMsg( e,true );
	}
}

void BBCALL _bbDebugStmt( bb_int_t pos,const char *file ){
	if( debugger ) debugger->debugStmt( pos,file );
	if( !bbRuntimeIdle() ) RTEX( 0 );
}

void BBCALL _bbDebugEnter( void *frame,void *env,const char *func ){
	if( debugger ) debugger->debugEnter( frame,env,func );
}

void BBCALL _bbDebugLeave(){
	if( debugger ) debugger->debugLeave();
}

void BBCALL _bbDebugStop(){
	if( debugger ) {
		bbOnDebugStop.run( 0 );
		debugger->debugStop();
	}
}

void BBCALL _bbDebugRun(){
	if( debugger ) debugger->debugRun();
}

void BBCALL bbDebugLog( BBStr *t ){
	_bbDebugLog( t->c_str() );
	delete t;
}
