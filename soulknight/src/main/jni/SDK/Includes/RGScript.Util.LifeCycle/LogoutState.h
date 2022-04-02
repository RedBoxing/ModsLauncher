#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util.LifeCycle {

class LogoutState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util.LifeCycle", "LogoutState"));
	}

	template <typename T = uintptr_t> T& Context() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Context() {
		return ((T (*)(LogoutState*))(Il2CppBase() + 0x4557F90))(this);
	}
	template <typename T = void> T set_Context(uintptr_t value) {
		return ((T (*)(LogoutState*, uintptr_t))(Il2CppBase() + 0x4557F98))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(LogoutState*))(Il2CppBase() + 0x4557FA0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LogoutState*))(Il2CppBase() + 0x45580C0))(this);
	}
	template <typename T = void> T End() {
		return ((T (*)(LogoutState*))(Il2CppBase() + 0x455811C))(this);
	}

};

}
