#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletSpliter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletSpliter"));
	}

	template <typename T = uintptr_t> T& weaponBulletSpliter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& defaultWeaponBulletSpliter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T StartSplitBullet(uintptr_t weapon, void* splitConfigGetter) {
		return ((T (*)(BulletSpliter*, uintptr_t, void*))(Il2CppBase() + 0x2392500))(this, weapon, splitConfigGetter);
	}
	template <typename T = void> T EndSplitBullet() {
		return ((T (*)(BulletSpliter*))(Il2CppBase() + 0x2392708))(this);
	}

};

}
