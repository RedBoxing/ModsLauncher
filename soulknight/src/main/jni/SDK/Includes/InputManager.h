#pragma once
#include "Il2Cpp/Il2Cpp.h"

class InputManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& forceObjects() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x1A4328C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x1A432E8))(this);
	}
	template <typename T = void> T CallVibration(uintptr_t type, bool stop) {
		return ((T (*)(InputManager*, uintptr_t, bool))(Il2CppBase() + 0x1A43344))(this, type, stop);
	}
	template <typename T = bool> T UpdatePadState() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x1A433BC))(this);
	}
	template <typename T = bool> T IsPassMenuKey() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x1A4341C))(this);
	}
	template <typename T = bool> T IsPassSubmitKey() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x1A434AC))(this);
	}
	template <typename T = bool> T IsPassCancelKey() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x1A4353C))(this);
	}

};

}
