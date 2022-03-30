#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponItemBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponItemBase"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& supportWeaponList() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& byWeapon() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& processName() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& owner() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> static T& i_weapon_item_notfit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& i_weapon_item_already() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& col() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& item_level() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& show_level() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& weapon_item_sprite() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& weapon_id() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponItemBase*))(Il2CppBase() + 0x45F5418))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(WeaponItemBase*))(Il2CppBase() + 0x45F5520))(this);
	}
	template <typename T = void> T OnHide() {
		return ((T (*)(WeaponItemBase*))(Il2CppBase() + 0x45F5658))(this);
	}
	template <typename T = void> T SetWeapon(uintptr_t weapon, bool isSetup) {
		return ((T (*)(WeaponItemBase*, uintptr_t, bool))(Il2CppBase() + 0x45F56D8))(this, weapon, isSetup);
	}
	template <typename T = void> T Drop(Il2CppVector2 position) {
		return ((T (*)(WeaponItemBase*, Il2CppVector2))(Il2CppBase() + 0x45F5B6C))(this, position);
	}
	template <typename T = uintptr_t> T dropMove(Il2CppVector3 initPosition, Il2CppVector3 targetPosition) {
		return ((T (*)(WeaponItemBase*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x45F65E8))(this, initPosition, targetPosition);
	}
	template <typename T = void> T SetWeaponId(uintptr_t weapon) {
		return ((T (*)(WeaponItemBase*, uintptr_t))(Il2CppBase() + 0x45F57C8))(this, weapon);
	}
	template <typename T = bool> T IsSupport(uintptr_t weapon, uintptr_t* suit_state) {
		return ((T (*)(WeaponItemBase*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x45F674C))(this, weapon, suit_state);
	}
	template <typename T = void> T MakeEffect(bool isSetup) {
		return ((T (*)(WeaponItemBase*, bool))(Il2CppBase() + 0x45F68C4))(this, isSetup);
	}
	template <typename T = void> T RemoveEffect() {
		return ((T (*)(WeaponItemBase*))(Il2CppBase() + 0x45F6934))(this);
	}
	template <typename T = void> T ShowItemInfo() {
		return ((T (*)(WeaponItemBase*))(Il2CppBase() + 0x45F6990))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(WeaponItemBase*, uintptr_t))(Il2CppBase() + 0x45F6A70))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(WeaponItemBase*, uintptr_t))(Il2CppBase() + 0x45F6CC8))(this, other);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(WeaponItemBase*, uintptr_t))(Il2CppBase() + 0x45F6EA8))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(WeaponItemBase*, uintptr_t))(Il2CppBase() + 0x45F705C))(this, controller);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(WeaponItemBase*))(Il2CppBase() + 0x45F7240))(this);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(WeaponItemBase*, uintptr_t))(Il2CppBase() + 0x45F729C))(this, controller);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(WeaponItemBase*))(Il2CppBase() + 0x45F7408))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(WeaponItemBase*))(Il2CppBase() + 0x45F74B8))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(WeaponItemBase*))(Il2CppBase() + 0x45F7518))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(WeaponItemBase*))(Il2CppBase() + 0x45F75B4))(this);
	}
	template <typename T = bool> T get_shouldShowNameAfterEquiped() {
		return ((T (*)(WeaponItemBase*))(Il2CppBase() + 0x45F7620))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(WeaponItemBase*, uintptr_t))(Il2CppBase() + 0x45F7774))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(WeaponItemBase*, uintptr_t))(Il2CppBase() + 0x45F777C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(WeaponItemBase*, uintptr_t))(Il2CppBase() + 0x45F7784))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(WeaponItemBase*, uintptr_t))(Il2CppBase() + 0x45F778C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(WeaponItemBase*, uintptr_t))(Il2CppBase() + 0x45F7794))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(WeaponItemBase*))(Il2CppBase() + 0x45F779C))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(WeaponItemBase*))(Il2CppBase() + 0x45F77A4))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(WeaponItemBase*))(Il2CppBase() + 0x45F77AC))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemLevel() {
		return ((T (*)(WeaponItemBase*))(Il2CppBase() + 0x45F77B4))(this);
	}

};

}
