// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::LuaBuffer>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::Utopia::LuaBuffer>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"ptr", &Ubpa::Utopia::LuaBuffer::ptr},
		Field{"size", &Ubpa::Utopia::LuaBuffer::size},
		Field{Name::constructor, WrapConstructor<Ubpa::Utopia::LuaBuffer()>()},
		Field{Name::constructor, WrapConstructor<Ubpa::Utopia::LuaBuffer(void*, uint64_t)>()},
		Field{Name::constructor, WrapConstructor<Ubpa::Utopia::LuaBuffer(UECS::Entity*, size_t)>()},
		Field{"GetEntity", &Ubpa::Utopia::LuaBuffer::GetEntity},
		Field{"SetEntity", &Ubpa::Utopia::LuaBuffer::SetEntity},
		Field{"GetPointer", &Ubpa::Utopia::LuaBuffer::GetPointer},
		Field{"SetPointer", &Ubpa::Utopia::LuaBuffer::SetPointer},
		Field{"GetBuffer",
			static_cast<Ubpa::Utopia::LuaBuffer(Ubpa::Utopia::LuaBuffer::*)(size_t)const>
			(&Ubpa::Utopia::LuaBuffer::GetBuffer)
		},
		Field{"SetBuffer",
			static_cast<void(Ubpa::Utopia::LuaBuffer::*)(size_t, Ubpa::Utopia::LuaBuffer)>
			(&Ubpa::Utopia::LuaBuffer::SetBuffer),
		},
		Field{"GetBuffer",
			static_cast<Ubpa::Utopia::LuaBuffer(Ubpa::Utopia::LuaBuffer::*)(size_t, uint64_t)const>
			(&Ubpa::Utopia::LuaBuffer::GetBuffer),
		},
		Field{"SetBuffer",
			static_cast<void(Ubpa::Utopia::LuaBuffer::*)(size_t, void*, size_t)>
			(&Ubpa::Utopia::LuaBuffer::SetBuffer),
		},
		Field{"GetBool", &Ubpa::Utopia::LuaBuffer::GetBool},
		Field{"SetBool", &Ubpa::Utopia::LuaBuffer::SetBool},
		Field{"GetInt8", &Ubpa::Utopia::LuaBuffer::GetInt8},
		Field{"SetInt8", &Ubpa::Utopia::LuaBuffer::SetInt8},
		Field{"GetInt16", &Ubpa::Utopia::LuaBuffer::GetInt16},
		Field{"SetInt16", &Ubpa::Utopia::LuaBuffer::SetInt16},
		Field{"GetInt32", &Ubpa::Utopia::LuaBuffer::GetInt32},
		Field{"SetInt32", &Ubpa::Utopia::LuaBuffer::SetInt32},
		Field{"GetInt64", &Ubpa::Utopia::LuaBuffer::GetInt64},
		Field{"SetInt64", &Ubpa::Utopia::LuaBuffer::SetInt64},
		Field{"GetUInt8", &Ubpa::Utopia::LuaBuffer::GetUInt8},
		Field{"SetUInt8", &Ubpa::Utopia::LuaBuffer::SetUInt8},
		Field{"GetUInt16", &Ubpa::Utopia::LuaBuffer::GetUInt16},
		Field{"SetUInt16", &Ubpa::Utopia::LuaBuffer::SetUInt16},
		Field{"GetUInt32", &Ubpa::Utopia::LuaBuffer::GetUInt32},
		Field{"SetUInt32", &Ubpa::Utopia::LuaBuffer::SetUInt32},
		Field{"GetUInt64", &Ubpa::Utopia::LuaBuffer::GetUInt64},
		Field{"SetUInt64", &Ubpa::Utopia::LuaBuffer::SetUInt64},
		Field{"GetFloat", &Ubpa::Utopia::LuaBuffer::GetFloat},
		Field{"SetFloat", &Ubpa::Utopia::LuaBuffer::SetFloat},
		Field{"GetDouble", &Ubpa::Utopia::LuaBuffer::GetDouble},
		Field{"SetDouble", &Ubpa::Utopia::LuaBuffer::SetDouble},
		Field{"GetCString", &Ubpa::Utopia::LuaBuffer::GetCString},
		Field{"SetCString", &Ubpa::Utopia::LuaBuffer::SetCString},
	};
};

