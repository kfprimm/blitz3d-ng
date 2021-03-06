// AUTOGENERATED. DO NOT EDIT.
// RUN `ruby src/bindings/luajit/generate.rb` TO UPDATE.

#include <bb/enet/commands.h>

#if defined(BB_WIN32) || defined(BB_WIN64) || defined(BB_MINGW32) || defined(BB_MACOS) || defined(BB_LINUX)
#define BB_ENET_ENABLED

static int l_enet_CreateNetPlayer( lua_State *L ){
  BBStr * __name = _bbStrConst( luaL_checkstring( L,1 ) );
  lua_pushnumber( L,(bb_int_t)bbCreateNetPlayer( __name ) );
  return 1;
}

static int l_enet_HostNetGame( lua_State *L ){
  BBStr * __game_name = _bbStrConst( luaL_checkstring( L,1 ) );
  lua_pushnumber( L,(bb_int_t)bbHostNetGame( __game_name ) );
  return 1;
}

static int l_enet_JoinNetGame( lua_State *L ){
  BBStr * __game_name = _bbStrConst( luaL_checkstring( L,1 ) );
  BBStr * __ip_address = _bbStrConst( luaL_checkstring( L,2 ) );
  lua_pushnumber( L,(bb_int_t)bbJoinNetGame( __game_name,__ip_address ) );
  return 1;
}

static int l_enet_NetMsgData( lua_State *L ){
  lua_pushstring( L,bbNetMsgData(  ) );
  return 1;
}

static int l_enet_NetMsgFrom( lua_State *L ){
  lua_pushnumber( L,(bb_int_t)bbNetMsgFrom(  ) );
  return 1;
}

static int l_enet_NetMsgTo( lua_State *L ){
  lua_pushnumber( L,(bb_int_t)bbNetMsgTo(  ) );
  return 1;
}

static int l_enet_NetMsgType( lua_State *L ){
  lua_pushnumber( L,(bb_int_t)bbNetMsgType(  ) );
  return 1;
}

static int l_enet_RecvNetMsg( lua_State *L ){
  lua_pushnumber( L,(bb_int_t)bbRecvNetMsg(  ) );
  return 1;
}

static int l_enet_SendNetMsg( lua_State *L ){
  bb_int_t __type = luaL_checknumber( L,1 );
  BBStr * __msg = _bbStrConst( luaL_checkstring( L,2 ) );
  bb_int_t __from_player = luaL_checknumber( L,3 );
  bb_int_t __to_player;
  if( lua_gettop( L ) > 3 ){
    __to_player = luaL_checknumber( L,4 );
  }else{
   __to_player = 0;
  }
  bb_int_t __reliable;
  if( lua_gettop( L ) > 4 ){
    __reliable = luaL_checknumber( L,5 );
  }else{
   __reliable = 1;
  }
  lua_pushnumber( L,(bb_int_t)bbSendNetMsg( __type,__msg,__from_player,__to_player,__reliable ) );
  return 1;
}

#endif
