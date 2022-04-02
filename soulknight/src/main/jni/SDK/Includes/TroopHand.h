#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TroopHand
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TroopHand"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T SetUpWeapon(Il2CppList<uintptr_t>* weapons) {
		return ((T (*)(TroopHand*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x440F14C))(this, weapons);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t w, bool temporarily, bool asFirstSibling) {
		return ((T (*)(TroopHand*, uintptr_t, bool, bool))(Il2CppBase() + 0x440F348))(this, w, temporarily, asFirstSibling);
	}
	template <typename T = void> T PickUpItem(uintptr_t new_weapon_tf, bool fusion, bool showText) {
		return ((T (*)(TroopHand*, uintptr_t, bool, bool))(Il2CppBase() + 0x440F470))(this, new_weapon_tf, fusion, showText);
	}
	template <typename T = uintptr_t> T AtkCut(int32_t facing, int32_t atk, int32_t critical, bool skillHandCut) {
		return ((T (*)(TroopHand*, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x440F604))(this, facing, atk, critical, skillHandCut);
	}
	template <typename T = bool> T NeedLock() {
		return ((T (*)(TroopHand*))(Il2CppBase() + 0x440F9BC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_SetUpWeapon(Il2CppList<uintptr_t>* P0) {
		return ((T (*)(TroopHand*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x440FA24))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(TroopHand*, uintptr_t, bool, bool))(Il2CppBase() + 0x440FA2C))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_PickUpItem(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(TroopHand*, uintptr_t, bool, bool))(Il2CppBase() + 0x440FA3C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_AtkCut(int32_t P0, int32_t P1, int32_t P2, bool P3) {
		return ((T (*)(TroopHand*, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x440FA4C))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T iFixBaseProxy_NeedLock() {
		return ((T (*)(TroopHand*))(Il2CppBase() + 0x440FA58))(this);
	}

};

}
