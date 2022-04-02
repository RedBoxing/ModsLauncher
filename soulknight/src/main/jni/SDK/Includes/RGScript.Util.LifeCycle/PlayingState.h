#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util.LifeCycle {

class PlayingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util.LifeCycle", "PlayingState"));
	}

	template <typename T = uintptr_t> T& Context() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Context() {
		return ((T (*)(PlayingState*))(Il2CppBase() + 0x4558180))(this);
	}
	template <typename T = void> T set_Context(uintptr_t value) {
		return ((T (*)(PlayingState*, uintptr_t))(Il2CppBase() + 0x4558188))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PlayingState*))(Il2CppBase() + 0x4558190))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PlayingState*))(Il2CppBase() + 0x4558370))(this);
	}
	template <typename T = void> T End() {
		return ((T (*)(PlayingState*))(Il2CppBase() + 0x45583CC))(this);
	}
	template <typename T = void> T onAccountLogin(Il2CppString* newAccount) {
		return ((T (*)(PlayingState*, Il2CppString*))(Il2CppBase() + 0x45585AC))(this, newAccount);
	}
	template <typename T = void> T onLogOut() {
		return ((T (*)(PlayingState*))(Il2CppBase() + 0x4558620))(this);
	}

};

}
