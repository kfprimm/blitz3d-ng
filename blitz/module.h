#ifndef BBMODULE_H
#define BBMODULE_H

#define BBCALL __stdcall

#define BBMODULE_FUNC_NAME( name,action ) name##_##action

#define BBMODULE_CREATE( name )  bool BBMODULE_FUNC_NAME( name, create )()
#define BBMODULE_DESTROY( name ) bool BBMODULE_FUNC_NAME( name, destroy )()
#define BBMODULE_LINK( name )    void BBMODULE_FUNC_NAME( name, link )( void (*rtSym)( const char *sym,void *pc ) )

#define BBMODULE_DECL( name ) \
	BBMODULE_CREATE( name ); \
	BBMODULE_DESTROY( name ); \
	BBMODULE_LINK( name );

#endif