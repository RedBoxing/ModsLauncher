#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IWeaponSpecial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWeaponSpecial"));
	}


	template <typename T = bool> T get_isSpecial() {
		return ((T (*)(IWeaponSpecial*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T WeaponSpecial(bool isDown) {
		return ((T (*)(IWeaponSpecial*, bool))(Il2CppBase() + 0x0))(this, isDown);
	}

};

}
