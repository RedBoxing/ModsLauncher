#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsOption1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsOption`1"));
	}

	template <typename T = bool> T& _hasValue() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _value() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> static T& Empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_HasValue() {
		return ((T (*)(fsOption1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsEmpty() {
		return ((T (*)(fsOption1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(fsOption1*))(Il2CppBase() + 0x0))(this);
	}

};

}
