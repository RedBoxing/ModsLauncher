#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGJoyBtnSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGJoyBtnSkill"));
	}

	template <typename T = uintptr_t> T& joy_controller() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGJoyBtnSkill*))(Il2CppBase() + 0x1B62224))(this);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(RGJoyBtnSkill*, uintptr_t))(Il2CppBase() + 0x1B62304))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(RGJoyBtnSkill*, uintptr_t))(Il2CppBase() + 0x1B6247C))(this, eventData);
	}

};

}
