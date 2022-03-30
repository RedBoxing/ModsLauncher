#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IWeaponBulletSpliter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWeaponBulletSpliter"));
	}


	template <typename T = void> T StartSplit(void* splitConfigGetter) {
		return ((T (*)(IWeaponBulletSpliter*, void*))(Il2CppBase() + 0x0))(this, splitConfigGetter);
	}
	template <typename T = void> T EndSplit() {
		return ((T (*)(IWeaponBulletSpliter*))(Il2CppBase() + 0x0))(this);
	}

};

}
