#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponBatteryTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponBatteryTrigger"));
	}


	template <typename T = uintptr_t> T get_battery() {
		return ((T (*)(WeaponBatteryTrigger*))(Il2CppBase() + 0x4368E38))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(WeaponBatteryTrigger*, uintptr_t))(Il2CppBase() + 0x4368EC8))(this, other);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(WeaponBatteryTrigger*))(Il2CppBase() + 0x43690C8))(this);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(WeaponBatteryTrigger*, uintptr_t))(Il2CppBase() + 0x4369124))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(WeaponBatteryTrigger*, uintptr_t))(Il2CppBase() + 0x4369254))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(WeaponBatteryTrigger*, uintptr_t))(Il2CppBase() + 0x4369448))(this, controller);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(WeaponBatteryTrigger*))(Il2CppBase() + 0x43695A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(WeaponBatteryTrigger*, uintptr_t))(Il2CppBase() + 0x4369698))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(WeaponBatteryTrigger*, uintptr_t))(Il2CppBase() + 0x43696A0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(WeaponBatteryTrigger*, uintptr_t))(Il2CppBase() + 0x43696A8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(WeaponBatteryTrigger*, uintptr_t))(Il2CppBase() + 0x43696B0))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(WeaponBatteryTrigger*))(Il2CppBase() + 0x43696B8))(this);
	}

};

}
