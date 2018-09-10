// AUTOGENERATED. DO NOT EDIT.
// RUN `bin/blitz3d config` TO UPDATE.

#include <bb/stub/stub.h>


#include "../../stdutil/stdutil.h"

BBMODULE_DECL( math );
BBMODULE_DECL( blitz );
BBMODULE_DECL( string );
BBMODULE_DECL( stdio );
BBMODULE_DECL( stream );
BBMODULE_DECL( sockets );
BBMODULE_DECL( hook );
BBMODULE_DECL( enet );
BBMODULE_DECL( runtime );
BBMODULE_DECL( system );
BBMODULE_DECL( bank );
BBMODULE_DECL( system_windows );
BBMODULE_DECL( filesystem );
BBMODULE_DECL( filesystem_windows );
BBMODULE_DECL( timer_windows );
BBMODULE_DECL( input );
BBMODULE_DECL( input_directinput8 );
BBMODULE_DECL( audio );
BBMODULE_DECL( audio_fmod );
BBMODULE_DECL( pixmap );
BBMODULE_DECL( blitz2d );
BBMODULE_DECL( blitz3d );
BBMODULE_DECL( graphics );
BBMODULE_DECL( userlibs );
BBMODULE_DECL( event );
BBMODULE_DECL( runtime_console );
BBMODULE_DECL( unit_test );

class BBRuntime;
BBRuntime *bbCreateConsoleRuntime();
BBRuntime *bbCreateRuntime(){
	return bbCreateConsoleRuntime();
}

#ifdef WIN32
void bbruntime_link( void (*link)( const char *sym,void *pc ) ){
	math_link( link );
	blitz_link( link );
	string_link( link );
	stdio_link( link );
	stream_link( link );
	sockets_link( link );
	enet_link( link );
	runtime_link( link );
	system_link( link );
	bank_link( link );
	system_windows_link( link );
	filesystem_link( link );
	input_link( link );
	audio_link( link );
	blitz2d_link( link );
	blitz3d_link( link );
	graphics_link( link );
	unit_test_link( link );
}
#endif
bool bbruntime_create(){
	if( math_create() ){
				if( blitz_create() ){
						if( string_create() ){
								if( stdio_create() ){
										if( stream_create() ){
												if( sockets_create() ){
														if( hook_create() ){
																if( enet_create() ){
																		if( runtime_create() ){
																				if( system_create() ){
																						if( bank_create() ){
																								if( system_windows_create() ){
																										if( filesystem_create() ){
																												if( filesystem_windows_create() ){
																														if( timer_windows_create() ){
																																if( input_create() ){
																																		if( input_directinput8_create() ){
																																				if( audio_create() ){
																																						if( audio_fmod_create() ){
																																								if( pixmap_create() ){
																																										if( blitz2d_create() ){
																																												if( blitz3d_create() ){
																																														if( graphics_create() ){
																																																if( userlibs_create() ){
																																																		if( event_create() ){
																																																				if( runtime_console_create() ){
																																																						if( unit_test_create() ){
																																																								return true;
																											}else sue( "unit_test_create failed" );
																											runtime_console_destroy();
																										}else sue( "runtime_console_create failed" );
																										event_destroy();
																									}else sue( "event_create failed" );
																									userlibs_destroy();
																								}else sue( "userlibs_create failed" );
																								graphics_destroy();
																							}else sue( "graphics_create failed" );
																							blitz3d_destroy();
																						}else sue( "blitz3d_create failed" );
																						blitz2d_destroy();
																					}else sue( "blitz2d_create failed" );
																					pixmap_destroy();
																				}else sue( "pixmap_create failed" );
																				audio_fmod_destroy();
																			}else sue( "audio_fmod_create failed" );
																			audio_destroy();
																		}else sue( "audio_create failed" );
																		input_directinput8_destroy();
																	}else sue( "input_directinput8_create failed" );
																	input_destroy();
																}else sue( "input_create failed" );
																timer_windows_destroy();
															}else sue( "timer_windows_create failed" );
															filesystem_windows_destroy();
														}else sue( "filesystem_windows_create failed" );
														filesystem_destroy();
													}else sue( "filesystem_create failed" );
													system_windows_destroy();
												}else sue( "system_windows_create failed" );
												bank_destroy();
											}else sue( "bank_create failed" );
											system_destroy();
										}else sue( "system_create failed" );
										runtime_destroy();
									}else sue( "runtime_create failed" );
									enet_destroy();
								}else sue( "enet_create failed" );
								hook_destroy();
							}else sue( "hook_create failed" );
							sockets_destroy();
						}else sue( "sockets_create failed" );
						stream_destroy();
					}else sue( "stream_create failed" );
					stdio_destroy();
				}else sue( "stdio_create failed" );
				string_destroy();
			}else sue( "string_create failed" );
			blitz_destroy();
		}else sue( "blitz_create failed" );
		math_destroy();
	}else sue( "math_create failed" );
	return false;
}

bool bbruntime_destroy(){
	unit_test_destroy();
	runtime_console_destroy();
	event_destroy();
	userlibs_destroy();
	graphics_destroy();
	blitz3d_destroy();
	blitz2d_destroy();
	pixmap_destroy();
	audio_fmod_destroy();
	audio_destroy();
	input_directinput8_destroy();
	input_destroy();
	timer_windows_destroy();
	filesystem_windows_destroy();
	filesystem_destroy();
	system_windows_destroy();
	bank_destroy();
	system_destroy();
	runtime_destroy();
	enet_destroy();
	hook_destroy();
	sockets_destroy();
	stream_destroy();
	stdio_destroy();
	string_destroy();
	blitz_destroy();
	math_destroy();
	return true;
}
