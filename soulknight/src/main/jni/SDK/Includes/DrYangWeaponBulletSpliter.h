#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DrYangWeaponBulletSpliter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DrYangWeaponBulletSpliter"));
	}

	template <typename T = uintptr_t> T& chainWeapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& spliter() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DrYangWeaponBulletSpliter*))(Il2CppBase() + 0x42EEAB8))(this);
	}
	template <typename T = void> T StartSplit(void* splitConfigGetter) {
		return ((T (*)(DrYangWeaponBulletSpliter*, void*))(Il2CppBase() + 0x42EEB50))(this, splitConfigGetter);
	}
	template <typename T = void> T EndSplit() {
		return ((T (*)(DrYangWeaponBulletSpliter*))(Il2CppBase() + 0x42EEC98))(this);
	}
	template <typename T = void> T OnBulletCreate(uintptr_t bullet) {
		return ((T (*)(DrYangWeaponBulletSpliter*, uintptr_t))(Il2CppBase() + 0x42EEDD4))(this, bullet);
	}

};

}
