#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MoveSpeedUpWeaponBulletSpliter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveSpeedUpWeaponBulletSpliter"));
	}

	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& speedFactor() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(MoveSpeedUpWeaponBulletSpliter*))(Il2CppBase() + 0x41FAD00))(this);
	}
	template <typename T = void> T StartSplit(void* splitConfigGetter) {
		return ((T (*)(MoveSpeedUpWeaponBulletSpliter*, void*))(Il2CppBase() + 0x41FAD98))(this, splitConfigGetter);
	}
	template <typename T = void> T EndSplit() {
		return ((T (*)(MoveSpeedUpWeaponBulletSpliter*))(Il2CppBase() + 0x41FAF88))(this);
	}

};

}
