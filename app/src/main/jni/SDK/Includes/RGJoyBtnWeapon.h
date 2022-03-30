#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGJoyBtnWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGJoyBtnWeapon"));
	}

	template <typename T = uintptr_t> T& joy_controller() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGJoyBtnWeapon*))(Il2CppBase() + 0x1B62858))(this);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(RGJoyBtnWeapon*, uintptr_t))(Il2CppBase() + 0x1B62938))(this, eventData);
	}

};

}
