#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectBarricade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectBarricade"));
	}

	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectBarricade*, uintptr_t))(Il2CppBase() + 0x1D48508))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectBarricade*, uintptr_t))(Il2CppBase() + 0x1D48740))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectBarricade*, uintptr_t))(Il2CppBase() + 0x1D48938))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectBarricade*))(Il2CppBase() + 0x1D48C80))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectBarricade*))(Il2CppBase() + 0x1D48CE0))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectBarricade*))(Il2CppBase() + 0x1D48D6C))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectBarricade*))(Il2CppBase() + 0x1D48DCC))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectBarricade*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D48E2C))(this, controller, ext_info);
	}

};

}
