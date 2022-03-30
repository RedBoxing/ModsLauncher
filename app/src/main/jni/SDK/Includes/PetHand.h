#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PetHand
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetHand"));
	}

	template <typename T = Il2CppString*> T& default_weapon_name() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& weapon_sorting_order() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PetHand*))(Il2CppBase() + 0x4577084))(this);
	}
	template <typename T = void> T SetUpWeapon(uintptr_t info) {
		return ((T (*)(PetHand*, uintptr_t))(Il2CppBase() + 0x45770F4))(this, info);
	}
	template <typename T = void> T UpdateWeapon() {
		return ((T (*)(PetHand*))(Il2CppBase() + 0x457786C))(this);
	}
	template <typename T = void> T SetAttack(bool value1) {
		return ((T (*)(PetHand*, bool))(Il2CppBase() + 0x457797C))(this, value1);
	}
	template <typename T = void> T StopAttackDelay(float delayTime) {
		return ((T (*)(PetHand*, float))(Il2CppBase() + 0x4577A98))(this, delayTime);
	}
	template <typename T = void> T StopAttack() {
		return ((T (*)(PetHand*))(Il2CppBase() + 0x4577B54))(this);
	}
	template <typename T = void> T SetAttackTrigger() {
		return ((T (*)(PetHand*))(Il2CppBase() + 0x4577C3C))(this);
	}
	template <typename T = void> T PickWeapon(uintptr_t weapon) {
		return ((T (*)(PetHand*, uintptr_t))(Il2CppBase() + 0x4577D40))(this, weapon);
	}
	template <typename T = void> T DropWeapon() {
		return ((T (*)(PetHand*))(Il2CppBase() + 0x45781D8))(this);
	}
	template <typename T = void> T DropWeapon_1(uintptr_t w) {
		return ((T (*)(PetHand*, uintptr_t))(Il2CppBase() + 0x45780B4))(this, w);
	}
	template <typename T = void> T SetWeapon(uintptr_t w, bool save) {
		return ((T (*)(PetHand*, uintptr_t, bool))(Il2CppBase() + 0x45774DC))(this, w, save);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(PetHand*))(Il2CppBase() + 0x4578244))(this);
	}
	template <typename T = void> T LockedWeaponProcess(float fixed_angle) {
		return ((T (*)(PetHand*, float))(Il2CppBase() + 0x4578324))(this, fixed_angle);
	}
	template <typename T = void> T SetWeaponController(uintptr_t controller) {
		return ((T (*)(PetHand*, uintptr_t))(Il2CppBase() + 0x4578420))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(PetHand*))(Il2CppBase() + 0x457858C))(this);
	}

};

}
