////////////////////////////////////////////////////////////////////////////
//	Module 		: ai_script_space.h
//	Created 	: 22.09.2003
//  Modified 	: 22.09.2003
//	Author		: Dmitriy Iassenev
//	Description : XRay Script space
////////////////////////////////////////////////////////////////////////////

#pragma once

// Lua
#pragma warning(push)
#pragma warning(disable:4244)
#pragma warning(disable:4995)
#pragma warning(disable:4530)
#pragma warning(disable:4267)

extern "C" {
	#include <cs/lua/lua.h>
	#include <cs/lua/lualib.h>
	#include <cs/lua/lauxlib.h>
}

// Lua-bind
#include <luabind/luabind.hpp>
#include <luabind/object.hpp>

#pragma warning(pop)

typedef lua_State CLuaVirtualMachine;

struct SMemberCallback {
	luabind::object	*m_lua_function;
	luabind::object	*m_lua_object;
	shared_str		m_method_name;
};

#include "ai_script_lua_space.h"
