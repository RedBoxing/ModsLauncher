#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponEatHpAndEnergyRestore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponEatHpAndEnergyRestore"));
	}

	template <typename T = int32_t> T& energyValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& extraEnergyValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& hpValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& extraHpValue() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T MakeEffect(uintptr_t controller) {
		return ((T (*)(WeaponEatHpAndEnergyRestore*, uintptr_t))(Il2CppBase() + 0x4499C20))(this, controller);
	}

};

}
