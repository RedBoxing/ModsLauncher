#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EGun007
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EGun007"));
	}

	template <typename T = float> T& destory_time() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& can_atk() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& target_offset() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EGun007*))(Il2CppBase() + 0x22A6898))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EGun007*))(Il2CppBase() + 0x22A69F4))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(EGun007*))(Il2CppBase() + 0x22A6ADC))(this);
	}
	template <typename T = void> T TurnCanAtk() {
		return ((T (*)(EGun007*))(Il2CppBase() + 0x22A6DF4))(this);
	}

};

}
