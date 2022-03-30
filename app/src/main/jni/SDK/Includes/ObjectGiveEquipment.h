#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectGiveEquipment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectGiveEquipment"));
	}

	template <typename T = uintptr_t> T& special_item() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& give_talk() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& given_clip() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& given() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& the_obj() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& collider() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& weaponItemFactory() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& no_suitable_weapon_text() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector3> T& instantiate_position() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& success_clip() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ObjectGiveEquipment*))(Il2CppBase() + 0x1D5E30C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ObjectGiveEquipment*))(Il2CppBase() + 0x1D5E3F0))(this);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectGiveEquipment*, uintptr_t))(Il2CppBase() + 0x1D5E494))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectGiveEquipment*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D5EAF4))(this, controller, ext_info);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectGiveEquipment*, uintptr_t))(Il2CppBase() + 0x1D5EDFC))(this, other);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ObjectGiveEquipment*, uintptr_t))(Il2CppBase() + 0x1D5EE98))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ObjectGiveEquipment*, uintptr_t))(Il2CppBase() + 0x1D5F2B4))(this, controller);
	}
	template <typename T = void> T SetObjPos() {
		return ((T (*)(ObjectGiveEquipment*))(Il2CppBase() + 0x1D5F340))(this);
	}
	template <typename T = void> T SingleControllerTrigger(uintptr_t controller) {
		return ((T (*)(ObjectGiveEquipment*, uintptr_t))(Il2CppBase() + 0x1D5E864))(this, controller);
	}
	template <typename T = bool> T CanGetWeaponItem(uintptr_t controller) {
		return ((T (*)(ObjectGiveEquipment*, uintptr_t))(Il2CppBase() + 0x1D5E990))(this, controller);
	}
	template <typename T = void> T CreateWeaponItem() {
		return ((T (*)(ObjectGiveEquipment*))(Il2CppBase() + 0x1D5EF50))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ObjectGiveEquipment*))(Il2CppBase() + 0x1D5F618))(this);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(ObjectGiveEquipment*, uintptr_t))(Il2CppBase() + 0x1D5F620))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SyncItemTrigger(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(ObjectGiveEquipment*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D5F628))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ObjectGiveEquipment*, uintptr_t))(Il2CppBase() + 0x1D5F630))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ObjectGiveEquipment*, uintptr_t))(Il2CppBase() + 0x1D5F638))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ObjectGiveEquipment*, uintptr_t))(Il2CppBase() + 0x1D5F640))(this, P0);
	}

};

}
