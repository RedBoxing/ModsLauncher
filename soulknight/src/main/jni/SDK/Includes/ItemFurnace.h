#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemFurnace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemFurnace"));
	}

	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& item_rise() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& weaponSortOrder() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& drop_clip() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& rise_clip() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& special_weapon() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& use_count() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& oldWeapon() {
		return *(T*)((uintptr_t)this + 0xF0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ItemFurnace*))(Il2CppBase() + 0x1DA6594))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemFurnace*, uintptr_t))(Il2CppBase() + 0x1DA6684))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ItemFurnace*, uintptr_t))(Il2CppBase() + 0x1DA6814))(this, other);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemFurnace*, uintptr_t))(Il2CppBase() + 0x1DA6948))(this, controller);
	}
	template <typename T = void> T OnItemTriggerState(uintptr_t controller, int32_t state) {
		return ((T (*)(ItemFurnace*, uintptr_t, int32_t))(Il2CppBase() + 0x1DA6AEC))(this, controller, state);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemFurnace*, uintptr_t))(Il2CppBase() + 0x1DA6C7C))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemFurnace*, uintptr_t))(Il2CppBase() + 0x1DA6EE0))(this, controller);
	}
	template <typename T = void> T DropWeaponComplete() {
		return ((T (*)(ItemFurnace*))(Il2CppBase() + 0x1DA7540))(this);
	}
	template <typename T = void> T RiseWeaponComplete() {
		return ((T (*)(ItemFurnace*))(Il2CppBase() + 0x1DA7BD4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemFurnace*, uintptr_t))(Il2CppBase() + 0x1DA7D84))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ItemFurnace*, uintptr_t))(Il2CppBase() + 0x1DA7D8C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemFurnace*, uintptr_t))(Il2CppBase() + 0x1DA7D94))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerState(uintptr_t P0, int32_t P1) {
		return ((T (*)(ItemFurnace*, uintptr_t, int32_t))(Il2CppBase() + 0x1DA7D9C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemFurnace*, uintptr_t))(Il2CppBase() + 0x1DA7DA4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemFurnace*, uintptr_t))(Il2CppBase() + 0x1DA7DAC))(this, P0);
	}

};

}
