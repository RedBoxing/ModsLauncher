#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util.LifeCycle {

class WaitLoginState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util.LifeCycle", "WaitLoginState"));
	}

	template <typename T = uintptr_t> T& Context() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Context() {
		return ((T (*)(WaitLoginState*))(Il2CppBase() + 0x4558F34))(this);
	}
	template <typename T = void> T set_Context(uintptr_t value) {
		return ((T (*)(WaitLoginState*, uintptr_t))(Il2CppBase() + 0x4558F3C))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(WaitLoginState*))(Il2CppBase() + 0x4558F44))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WaitLoginState*))(Il2CppBase() + 0x4559134))(this);
	}
	template <typename T = void> T End() {
		return ((T (*)(WaitLoginState*))(Il2CppBase() + 0x4559404))(this);
	}
	template <typename T = void> T OnAccountLogin(Il2CppString* accountId) {
		return ((T (*)(WaitLoginState*, Il2CppString*))(Il2CppBase() + 0x4559540))(this, accountId);
	}

};

}
