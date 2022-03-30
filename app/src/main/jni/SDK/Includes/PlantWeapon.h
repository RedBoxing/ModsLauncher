#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlantWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlantWeapon"));
	}

	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& youngWeapon() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = uintptr_t> T get_info() {
		return ((T (*)(PlantWeapon*))(Il2CppBase() + 0x439926C))(this);
	}
	template <typename T = void> T set_info(uintptr_t value) {
		return ((T (*)(PlantWeapon*, uintptr_t))(Il2CppBase() + 0x43992CC))(this, value);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(PlantWeapon*, uintptr_t))(Il2CppBase() + 0x4399398))(this, controller);
	}
	template <typename T = bool> T get_isYoung() {
		return ((T (*)(PlantWeapon*))(Il2CppBase() + 0x4399710))(this);
	}
	template <typename T = uintptr_t> T get_targetWeapon() {
		return ((T (*)(PlantWeapon*))(Il2CppBase() + 0x4399644))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(PlantWeapon*))(Il2CppBase() + 0x4399790))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_info() {
		return ((T (*)(PlantWeapon*))(Il2CppBase() + 0x4399860))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_info(uintptr_t P0) {
		return ((T (*)(PlantWeapon*, uintptr_t))(Il2CppBase() + 0x4399868))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(PlantWeapon*, uintptr_t))(Il2CppBase() + 0x4399870))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(PlantWeapon*))(Il2CppBase() + 0x4399878))(this);
	}

};

}
