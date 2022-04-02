#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NpcWeaponMasterDefence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NpcWeaponMasterDefence"));
	}

	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& forgingClip() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& tapValue() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& forgingWeapon() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& usingController() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(NpcWeaponMasterDefence*, uintptr_t))(Il2CppBase() + 0x45396C8))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(NpcWeaponMasterDefence*, uintptr_t))(Il2CppBase() + 0x4539804))(this, other);
	}
	template <typename T = void> T OnItemTriggerState(uintptr_t controller, int32_t state) {
		return ((T (*)(NpcWeaponMasterDefence*, uintptr_t, int32_t))(Il2CppBase() + 0x4539980))(this, controller, state);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(NpcWeaponMasterDefence*, uintptr_t))(Il2CppBase() + 0x4539BD8))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(NpcWeaponMasterDefence*, uintptr_t))(Il2CppBase() + 0x4539F0C))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(NpcWeaponMasterDefence*, uintptr_t))(Il2CppBase() + 0x453A1B0))(this, controller);
	}
	template <typename T = bool> T MoneyEnough() {
		return ((T (*)(NpcWeaponMasterDefence*))(Il2CppBase() + 0x453A0D4))(this);
	}
	template <typename T = void> T CreateWeaponItem() {
		return ((T (*)(NpcWeaponMasterDefence*))(Il2CppBase() + 0x453A358))(this);
	}
	template <typename T = void> T WeaponLevelUp() {
		return ((T (*)(NpcWeaponMasterDefence*))(Il2CppBase() + 0x4539E30))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(NpcWeaponMasterDefence*))(Il2CppBase() + 0x453A3B4))(this);
	}
	template <typename T = void> T RefreshTap() {
		return ((T (*)(NpcWeaponMasterDefence*))(Il2CppBase() + 0x4539A98))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(NpcWeaponMasterDefence*))(Il2CppBase() + 0x453A4DC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(NpcWeaponMasterDefence*, uintptr_t))(Il2CppBase() + 0x453A75C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(NpcWeaponMasterDefence*, uintptr_t))(Il2CppBase() + 0x453A764))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerState(uintptr_t P0, int32_t P1) {
		return ((T (*)(NpcWeaponMasterDefence*, uintptr_t, int32_t))(Il2CppBase() + 0x453A76C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(NpcWeaponMasterDefence*, uintptr_t))(Il2CppBase() + 0x453A774))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(NpcWeaponMasterDefence*, uintptr_t))(Il2CppBase() + 0x453A77C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(NpcWeaponMasterDefence*, uintptr_t))(Il2CppBase() + 0x453A784))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(NpcWeaponMasterDefence*))(Il2CppBase() + 0x453A78C))(this);
	}

};

}
