#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponEatMaxEnergyUp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponEatMaxEnergyUp"));
	}

	template <typename T = int32_t> T& energyValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& extraValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T MakeEffect(uintptr_t controller) {
		return ((T (*)(WeaponEatMaxEnergyUp*, uintptr_t))(Il2CppBase() + 0x4499F58))(this, controller);
	}

};

}
