#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NoneWeaponBulletSpliter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NoneWeaponBulletSpliter"));
	}


	template <typename T = void> T StartSplit(void* splitConfigGetter) {
		return ((T (*)(NoneWeaponBulletSpliter*, void*))(Il2CppBase() + 0x4524890))(this, splitConfigGetter);
	}
	template <typename T = void> T EndSplit() {
		return ((T (*)(NoneWeaponBulletSpliter*))(Il2CppBase() + 0x4524900))(this);
	}

};

}
