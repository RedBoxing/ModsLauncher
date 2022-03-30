#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EGun012
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EGun012"));
	}

	template <typename T = bool> T& has_trail() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& weaponSprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EGun012*))(Il2CppBase() + 0x22A9088))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EGun012*))(Il2CppBase() + 0x22A92F8))(this);
	}
	template <typename T = void> T CheckMode() {
		return ((T (*)(EGun012*))(Il2CppBase() + 0x22A93E0))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(EGun012*))(Il2CppBase() + 0x22A943C))(this);
	}
	template <typename T = float> T GetThrowAngle() {
		return ((T (*)(EGun012*))(Il2CppBase() + 0x22A9990))(this);
	}
	template <typename T = void> T Prepare() {
		return ((T (*)(EGun012*))(Il2CppBase() + 0x22A9C10))(this);
	}

};

}
