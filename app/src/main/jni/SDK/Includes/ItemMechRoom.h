#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemMechRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemMechRoom"));
	}

	template <typename T = uintptr_t> T& chose_hero() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& container() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ItemMechRoom*))(Il2CppBase() + 0x1DAEA24))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemMechRoom*, uintptr_t))(Il2CppBase() + 0x1DAEB10))(this, other);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemMechRoom*, uintptr_t))(Il2CppBase() + 0x1DAEDB4))(this, controller);
	}
	template <typename T = void> T CreateMech(Il2CppString* mechName) {
		return ((T (*)(ItemMechRoom*, Il2CppString*))(Il2CppBase() + 0x1DAEFE8))(this, mechName);
	}
	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DAF200))(0);
	}
	template <typename T = Il2CppString*> static T GetMechName() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DAF2EC))(0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemMechRoom*, uintptr_t))(Il2CppBase() + 0x1DAF64C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemMechRoom*, uintptr_t))(Il2CppBase() + 0x1DAF654))(this, P0);
	}

};

}
