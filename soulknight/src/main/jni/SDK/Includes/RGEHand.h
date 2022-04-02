#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGEHand
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGEHand"));
	}

	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGEHand*))(Il2CppBase() + 0x2233C58))(this);
	}
	template <typename T = void> T UpdateWeapon() {
		return ((T (*)(RGEHand*))(Il2CppBase() + 0x2233CB8))(this);
	}
	template <typename T = void> T SetWeaponFacing(int32_t facing) {
		return ((T (*)(RGEHand*, int32_t))(Il2CppBase() + 0x2233DAC))(this, facing);
	}
	template <typename T = void> T SetAttack(bool value1) {
		return ((T (*)(RGEHand*, bool))(Il2CppBase() + 0x22323A8))(this, value1);
	}
	template <typename T = void> T SetAttackTrigger() {
		return ((T (*)(RGEHand*))(Il2CppBase() + 0x2233E30))(this);
	}
	template <typename T = void> T DestroyWeapon() {
		return ((T (*)(RGEHand*))(Il2CppBase() + 0x2233EA8))(this);
	}
	template <typename T = void> T ShowWeapon() {
		return ((T (*)(RGEHand*))(Il2CppBase() + 0x222DA34))(this);
	}
	template <typename T = void> T HideWeapon() {
		return ((T (*)(RGEHand*))(Il2CppBase() + 0x2233FBC))(this);
	}

};

}
