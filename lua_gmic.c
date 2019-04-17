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
  bool abort = false;
  float progress;
  options.p_is_abort = &abort;
  options.p_progress = &progress;
  options.interleave_output = false;
  options.no_inplace_processing = true;
  options.output_format = E_FORMAT_FLOAT;
  
  gmic_call(gcom, 0, 0, &options);

  return 0;
}

int luaopen_lua_gmic(lua_State *L){
	lua_register(L,"gmic",gimik);
	return 0;
}
