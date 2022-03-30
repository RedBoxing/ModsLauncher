#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MouseState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MouseState"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_TrackedButtons() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T AnyPressesThisFrame() {
		return ((T (*)(MouseState*))(Il2CppBase() + 0x26924E8))(this);
	}
	template <typename T = bool> T AnyReleasesThisFrame() {
		return ((T (*)(MouseState*))(Il2CppBase() + 0x2692614))(this);
	}
	template <typename T = uintptr_t> T GetButtonState(int32_t button) {
		return ((T (*)(MouseState*, int32_t))(Il2CppBase() + 0x2692740))(this, button);
	}
	template <typename T = void> T SetButtonState(int32_t button, uintptr_t stateForMouseButton, uintptr_t data) {
		return ((T (*)(MouseState*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2690668))(this, button, stateForMouseButton, data);
	}

};

}
