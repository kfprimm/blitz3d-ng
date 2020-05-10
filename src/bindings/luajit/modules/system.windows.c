// AUTOGENERATED. DO NOT EDIT.
// RUN `ruby bindings/luajit/generate.rb` TO UPDATE.

#include <bb/system.windows/commands.h>

#if defined(BB_WIN32) || defined(BB_WIN64) || defined(BB_MINGW32)
#define BB_SYSTEM_WINDOWS_ENABLED

static int l_system_windows_CallDLL( lua_State *L ){
  BBStr * __dll_name = _bbStrConst( luaL_checkstring( L,1 ) );
  BBStr * __func_name = _bbStrConst( luaL_checkstring( L,2 ) );
  bb_int_t __in_bank;
  if( lua_gettop( L ) > 2 ){
    __in_bank = luaL_checknumber( L,3 );
  }else{
   __in_bank = 0;
  }
  bb_int_t __out_bank;
  if( lua_gettop( L ) > 3 ){
    __out_bank = luaL_checknumber( L,4 );
  }else{
   __out_bank = 0;
  }
  bbCallDLL( __dll_name,__func_name,__in_bank,__out_bank );
  return 0;
}

#endif