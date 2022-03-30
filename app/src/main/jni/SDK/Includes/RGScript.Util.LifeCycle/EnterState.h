#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util.LifeCycle {

class EnterState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util.LifeCycle", "EnterState"));
	}

	template <typename T = uintptr_t> T& Context() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Context() {
		return ((T (*)(EnterState*))(Il2CppBase() + 0x4554C6C))(this);
	}
	template <typename T = void> T set_Context(uintptr_t value) {
		return ((T (*)(EnterState*, uintptr_t))(Il2CppBase() + 0x4554C74))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EnterState*))(Il2CppBase() + 0x4554C7C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EnterState*))(Il2CppBase() + 0x4554D9C))(this);
	}
	template <typename T = void> T End() {
		return ((T (*)(EnterState*))(Il2CppBase() + 0x4554DF8))(this);
	}

};

}
