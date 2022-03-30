#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChargeWeaponInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChargeWeaponInterface"));
	}


	template <typename T = float> T GetMaxChargeTime() {
		return ((T (*)(ChargeWeaponInterface*))(Il2CppBase() + 0x0))(this);
	}

};

}
