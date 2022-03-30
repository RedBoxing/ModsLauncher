#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EGun010
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EGun010"));
	}

	template <typename T = int32_t> T& force() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& bulletSize() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& isBulletOnWeapon() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EGun010*))(Il2CppBase() + 0x22A8070))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EGun010*))(Il2CppBase() + 0x22A81CC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(EGun010*))(Il2CppBase() + 0x22A82B4))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(EGun010*))(Il2CppBase() + 0x22A8460))(this);
	}

};

}
