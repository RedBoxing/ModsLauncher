#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PriestWeaponBulletSpliter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PriestWeaponBulletSpliter"));
	}

	template <typename T = uintptr_t> T& chainWeapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PriestWeaponBulletSpliter*))(Il2CppBase() + 0x43A6CD4))(this);
	}
	template <typename T = void> T StartSplit(void* splitConfigGetter) {
		return ((T (*)(PriestWeaponBulletSpliter*, void*))(Il2CppBase() + 0x43A6D6C))(this, splitConfigGetter);
	}
	template <typename T = void> T EndSplit() {
		return ((T (*)(PriestWeaponBulletSpliter*))(Il2CppBase() + 0x43A6E10))(this);
	}

};

}
