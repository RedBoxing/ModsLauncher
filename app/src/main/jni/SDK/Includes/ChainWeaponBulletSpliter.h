#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChainWeaponBulletSpliter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChainWeaponBulletSpliter"));
	}

	template <typename T = uintptr_t> T& chainWeapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ChainWeaponBulletSpliter*))(Il2CppBase() + 0x186FC48))(this);
	}
	template <typename T = void> T StartSplit(void* splitConfigGetter) {
		return ((T (*)(ChainWeaponBulletSpliter*, void*))(Il2CppBase() + 0x186FCE0))(this, splitConfigGetter);
	}
	template <typename T = void> T EndSplit() {
		return ((T (*)(ChainWeaponBulletSpliter*))(Il2CppBase() + 0x186FDA4))(this);
	}

};

}
