#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGJoyBtnSpecial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGJoyBtnSpecial"));
	}

	template <typename T = uintptr_t> T& joy_controller() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGJoyBtnSpecial*))(Il2CppBase() + 0x1B6250C))(this);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(RGJoyBtnSpecial*, uintptr_t))(Il2CppBase() + 0x1B625BC))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(RGJoyBtnSpecial*, uintptr_t))(Il2CppBase() + 0x1B627C8))(this, eventData);
	}

};

}
