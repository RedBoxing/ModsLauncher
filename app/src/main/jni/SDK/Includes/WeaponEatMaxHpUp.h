#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponEatMaxHpUp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponEatMaxHpUp"));
	}

	template <typename T = int32_t> T& hpValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& extraValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T MakeEffect(uintptr_t controller) {
		return ((T (*)(WeaponEatMaxHpUp*, uintptr_t))(Il2CppBase() + 0x449A71C))(this, controller);
	}

};

}