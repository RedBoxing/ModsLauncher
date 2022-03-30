#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectCellar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectCellar"));
	}

	template <typename T = bool> T& has_create() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> static T& plus_speed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectCellar*, uintptr_t))(Il2CppBase() + 0x1D50C64))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectCellar*, uintptr_t))(Il2CppBase() + 0x1D50E3C))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectCellar*, uintptr_t))(Il2CppBase() + 0x1D50FC8))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectCellar*))(Il2CppBase() + 0x1D512A8))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectCellar*))(Il2CppBase() + 0x1D51308))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectCellar*))(Il2CppBase() + 0x1D51394))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectCellar*))(Il2CppBase() + 0x1D513F4))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectCellar*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D51454))(this, controller, ext_info);
	}
	template <typename T = uintptr_t> T EnteringCeller(uintptr_t controller) {
		return ((T (*)(ObjectCellar*, uintptr_t))(Il2CppBase() + 0x1D511C8))(this, controller);
	}

};

}
