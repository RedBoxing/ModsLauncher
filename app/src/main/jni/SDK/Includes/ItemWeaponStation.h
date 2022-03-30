#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemWeaponStation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemWeaponStation"));
	}

	template <typename T = bool> static T& need_flash_station() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T set_NeedFlashStation(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x219FD88))(0, value);
	}
	template <typename T = bool> static T get_NeedFlashStation() {
		return ((T (*)(void *))(Il2CppBase() + 0x219FE38))(0);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ItemWeaponStation*))(Il2CppBase() + 0x219FEDC))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemWeaponStation*, uintptr_t))(Il2CppBase() + 0x219FF94))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemWeaponStation*, uintptr_t))(Il2CppBase() + 0x21A00F8))(this, controller);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ItemWeaponStation*))(Il2CppBase() + 0x21A01F0))(this);
	}
	template <typename T = void> T FlushStation() {
		return ((T (*)(ItemWeaponStation*))(Il2CppBase() + 0x21A02C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ItemWeaponStation*))(Il2CppBase() + 0x21A04B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemWeaponStation*, uintptr_t))(Il2CppBase() + 0x21A04B8))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemWeaponStation*, uintptr_t))(Il2CppBase() + 0x21A04C0))(this, P0);
	}

};

}
