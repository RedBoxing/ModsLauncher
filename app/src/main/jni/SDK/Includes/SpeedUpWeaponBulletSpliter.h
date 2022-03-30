#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpeedUpWeaponBulletSpliter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpeedUpWeaponBulletSpliter"));
	}

	template <typename T = float> T& speedFactor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SpeedUpWeaponBulletSpliter*))(Il2CppBase() + 0x4295AF4))(this);
	}
	template <typename T = void> T StartSplit(void* splitConfigGetter) {
		return ((T (*)(SpeedUpWeaponBulletSpliter*, void*))(Il2CppBase() + 0x4295B8C))(this, splitConfigGetter);
	}
	template <typename T = void> T EndSplit() {
		return ((T (*)(SpeedUpWeaponBulletSpliter*))(Il2CppBase() + 0x4295C2C))(this);
	}

};

}
