#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsContext"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _contextObjects() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(fsContext*))(Il2CppBase() + 0x2D14E64))(this);
	}
	template <typename T = void> T Set(uintptr_t obj) {
		return ((T (*)(fsContext*, uintptr_t))(Il2CppBase() + 0x0))(this, obj);
	}
	template <typename T = bool> T Has() {
		return ((T (*)(fsContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T Get() {
		return ((T (*)(fsContext*))(Il2CppBase() + 0x0))(this);
	}

};

}
