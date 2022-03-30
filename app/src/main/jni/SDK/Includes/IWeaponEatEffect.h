#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IWeaponEatEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWeaponEatEffect"));
	}


	template <typename T = void> T MakeEffect(uintptr_t controller) {
		return ((T (*)(IWeaponEatEffect*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}

};

}
