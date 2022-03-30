#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComComplex
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComComplex"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& list() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T OnAddToPart(uintptr_t p) {
		return ((T (*)(WeaponComComplex*, uintptr_t))(Il2CppBase() + 0x20240A0))(this, p);
	}
	template <typename T = void> T OnDeleteFromPart() {
		return ((T (*)(WeaponComComplex*))(Il2CppBase() + 0x2024190))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComComplex*))(Il2CppBase() + 0x2024270))(this);
	}
	template <typename T = uintptr_t> T OnSwitchWeapon(bool front) {
		return ((T (*)(WeaponComComplex*, bool))(Il2CppBase() + 0x2024354))(this, front);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComComplex*))(Il2CppBase() + 0x2024448))(this);
	}
	template <typename T = void> T OnAttach(uintptr_t w) {
		return ((T (*)(WeaponComComplex*, uintptr_t))(Il2CppBase() + 0x202452C))(this, w);
	}
	template <typename T = void> T OnDetach() {
		return ((T (*)(WeaponComComplex*))(Il2CppBase() + 0x202461C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponComComplex*))(Il2CppBase() + 0x20246FC))(this);
	}
	template <typename T = uintptr_t> T OnAttackVerify(uintptr_t atkType, bool start) {
		return ((T (*)(WeaponComComplex*, uintptr_t, bool))(Il2CppBase() + 0x20247DC))(this, atkType, start);
	}
	template <typename T = uintptr_t> T OnAttackBegin(uintptr_t attackType) {
		return ((T (*)(WeaponComComplex*, uintptr_t))(Il2CppBase() + 0x20248D8))(this, attackType);
	}
	template <typename T = uintptr_t> T OnAttackEnd(uintptr_t attackType) {
		return ((T (*)(WeaponComComplex*, uintptr_t))(Il2CppBase() + 0x20249BC))(this, attackType);
	}
	template <typename T = uintptr_t> T OnAttackActionStart(uintptr_t attackType) {
		return ((T (*)(WeaponComComplex*, uintptr_t))(Il2CppBase() + 0x2024AA0))(this, attackType);
	}
	template <typename T = uintptr_t> T OnAttackKeyEvent(uintptr_t attackType, int32_t atkSequence) {
		return ((T (*)(WeaponComComplex*, uintptr_t, int32_t))(Il2CppBase() + 0x2024B84))(this, attackType, atkSequence);
	}
	template <typename T = uintptr_t> T OnAttackActionEnd(uintptr_t attackType) {
		return ((T (*)(WeaponComComplex*, uintptr_t))(Il2CppBase() + 0x2024C80))(this, attackType);
	}
	template <typename T = uintptr_t> T OnUseSpecialPower() {
		return ((T (*)(WeaponComComplex*))(Il2CppBase() + 0x2024D64))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnAddToPart(uintptr_t P0) {
		return ((T (*)(WeaponComComplex*, uintptr_t))(Il2CppBase() + 0x2024E44))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnDeleteFromPart() {
		return ((T (*)(WeaponComComplex*))(Il2CppBase() + 0x2024E4C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComComplex*))(Il2CppBase() + 0x2024E54))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnSwitchWeapon(bool P0) {
		return ((T (*)(WeaponComComplex*, bool))(Il2CppBase() + 0x2024E5C))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComComplex*))(Il2CppBase() + 0x2024E68))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnAttach(uintptr_t P0) {
		return ((T (*)(WeaponComComplex*, uintptr_t))(Il2CppBase() + 0x2024E70))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnDetach() {
		return ((T (*)(WeaponComComplex*))(Il2CppBase() + 0x2024E78))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(WeaponComComplex*))(Il2CppBase() + 0x2024E80))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackVerify(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponComComplex*, uintptr_t, bool))(Il2CppBase() + 0x2024E88))(this, P0, P1);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackBegin(uintptr_t P0) {
		return ((T (*)(WeaponComComplex*, uintptr_t))(Il2CppBase() + 0x2024E94))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackEnd(uintptr_t P0) {
		return ((T (*)(WeaponComComplex*, uintptr_t))(Il2CppBase() + 0x2024E9C))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackActionStart(uintptr_t P0) {
		return ((T (*)(WeaponComComplex*, uintptr_t))(Il2CppBase() + 0x2024EA4))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackKeyEvent(uintptr_t P0, int32_t P1) {
		return ((T (*)(WeaponComComplex*, uintptr_t, int32_t))(Il2CppBase() + 0x2024EAC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackActionEnd(uintptr_t P0) {
		return ((T (*)(WeaponComComplex*, uintptr_t))(Il2CppBase() + 0x2024EB4))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnUseSpecialPower() {
		return ((T (*)(WeaponComComplex*))(Il2CppBase() + 0x2024EBC))(this);
	}

};

}
