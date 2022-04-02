#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IDoubleWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDoubleWeapon"));
	}


	template <typename T = uintptr_t> T DoubleWeaponBoostStart(uintptr_t* result) {
		return ((T (*)(IDoubleWeapon*, uintptr_t*))(Il2CppBase() + 0x0))(this, result);
	}
	template <typename T = void> T DoubleWeaponBoostEnd() {
		return ((T (*)(IDoubleWeapon*))(Il2CppBase() + 0x0))(this);
	}

};

}
