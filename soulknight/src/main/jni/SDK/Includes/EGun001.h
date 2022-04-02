#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EGun001
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EGun001"));
	}

	template <typename T = uintptr_t> T& onAttack() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& has_trail() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EGun001*))(Il2CppBase() + 0x22A2A5C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EGun001*))(Il2CppBase() + 0x22A2C58))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(EGun001*))(Il2CppBase() + 0x22A2D40))(this);
	}
	template <typename T = void> T CheckMode() {
		return ((T (*)(EGun001*))(Il2CppBase() + 0x22A32A8))(this);
	}

};

}
