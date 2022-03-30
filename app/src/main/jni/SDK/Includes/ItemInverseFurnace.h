#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemInverseFurnace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemInverseFurnace"));
	}

	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& weaponSortOrder() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& drop_clip() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& rise_clip() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& oldWeapon() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ItemInverseFurnace*))(Il2CppBase() + 0x1DAAF14))(this);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemInverseFurnace*, uintptr_t))(Il2CppBase() + 0x1DAAFD0))(this, controller);
	}
	template <typename T = void> T OnItemTriggerState(uintptr_t controller, int32_t state) {
		return ((T (*)(ItemInverseFurnace*, uintptr_t, int32_t))(Il2CppBase() + 0x1DAB0B0))(this, controller, state);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemInverseFurnace*, uintptr_t))(Il2CppBase() + 0x1DAB17C))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemInverseFurnace*, uintptr_t))(Il2CppBase() + 0x1DAB2F0))(this, controller);
	}
	template <typename T = void> T DropWeaponComplete() {
		return ((T (*)(ItemInverseFurnace*))(Il2CppBase() + 0x1DAB7DC))(this);
	}
	template <typename T = void> T RiseWeaponComplete() {
		return ((T (*)(ItemInverseFurnace*))(Il2CppBase() + 0x1DAC530))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemInverseFurnace*, uintptr_t))(Il2CppBase() + 0x1DAC930))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerState(uintptr_t P0, int32_t P1) {
		return ((T (*)(ItemInverseFurnace*, uintptr_t, int32_t))(Il2CppBase() + 0x1DAC938))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemInverseFurnace*, uintptr_t))(Il2CppBase() + 0x1DAC940))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemInverseFurnace*, uintptr_t))(Il2CppBase() + 0x1DAC948))(this, P0);
	}

};

}
