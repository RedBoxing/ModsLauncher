#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponItemStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponItemStore"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& forging_clip() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& success_clip() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& success_text() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& no_money_text() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& no_suitable_weapon_text() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppVector3> T& instantiate_position() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& level_weight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& weapon_item() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& collider() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& weaponItemFactory() {
		return *(T*)((uintptr_t)this + 0xF0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponItemStore*))(Il2CppBase() + 0x45F9590))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(WeaponItemStore*))(Il2CppBase() + 0x45F9670))(this);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(WeaponItemStore*, uintptr_t))(Il2CppBase() + 0x45F982C))(this, controller);
	}
	template <typename T = void> T SingleControllerTrigger(uintptr_t controller) {
		return ((T (*)(WeaponItemStore*, uintptr_t))(Il2CppBase() + 0x45F9C0C))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(WeaponItemStore*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x45FA090))(this, controller, ext_info);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(WeaponItemStore*, uintptr_t))(Il2CppBase() + 0x45FA510))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(WeaponItemStore*, uintptr_t))(Il2CppBase() + 0x45FA59C))(this, controller);
	}
	template <typename T = void> T CreateWeaponItem() {
		return ((T (*)(WeaponItemStore*))(Il2CppBase() + 0x45FA6EC))(this);
	}
	template <typename T = bool> T CanGetWeaponItem(uintptr_t controller) {
		return ((T (*)(WeaponItemStore*, uintptr_t))(Il2CppBase() + 0x45F9FFC))(this, controller);
	}
	template <typename T = bool> T CanGetWeaponItem_1(Il2CppString* weaponName) {
		return ((T (*)(WeaponItemStore*, Il2CppString*))(Il2CppBase() + 0x45FA3AC))(this, weaponName);
	}
	template <typename T = bool> T CanGetWeaponItem_2(uintptr_t weapon) {
		return ((T (*)(WeaponItemStore*, uintptr_t))(Il2CppBase() + 0x45FAA4C))(this, weapon);
	}
	template <typename T = bool> T HasEnoughMoney(uintptr_t controller) {
		return ((T (*)(WeaponItemStore*, uintptr_t))(Il2CppBase() + 0x45F9EA8))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(WeaponItemStore*))(Il2CppBase() + 0x45FAC70))(this);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(WeaponItemStore*, uintptr_t))(Il2CppBase() + 0x45FAC78))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SyncItemTrigger(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(WeaponItemStore*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x45FAC80))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(WeaponItemStore*, uintptr_t))(Il2CppBase() + 0x45FAC88))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(WeaponItemStore*, uintptr_t))(Il2CppBase() + 0x45FAC90))(this, P0);
	}

};

}
