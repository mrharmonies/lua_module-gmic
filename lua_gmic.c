#include "lualib.h"
#include "lauxlib.h"
#include "lua.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "gmic_libc.h"

int gimik(lua_State *L) {
  char *gcom=lua_tostring(L,-1);
  gmic_interface_options options;
  memset(&options,0,sizeof(gmic_interface_options));
  options.ignore_stdlib = false; 
  gmic_call(gcom, 0, 0, &options);
  return 0;
}

int luaopen_lua_gmic(lua_State *L){
	lua_register(L,"gmic",gimik);
	return 0;
}
