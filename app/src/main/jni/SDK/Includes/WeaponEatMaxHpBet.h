#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponEatMaxHpBet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponEatMaxHpBet"));
	}

	template <typename T = float> T& successPossibility() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& hpUpAmount() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& extraHpAmount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Start() {
		return ((T (*)(WeaponEatMaxHpBet*))(Il2CppBase() + 0x449A060))(this);
	}
	template <typename T = void> T TestMakeEffect() {
		return ((T (*)(WeaponEatMaxHpBet*))(Il2CppBase() + 0x449A128))(this);
	}
	template <typename T = void> T MakeEffect(uintptr_t controller) {
		return ((T (*)(WeaponEatMaxHpBet*, uintptr_t))(Il2CppBase() + 0x449A200))(this, controller);
	}

};

}
