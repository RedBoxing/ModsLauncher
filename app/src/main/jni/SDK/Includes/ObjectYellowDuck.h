#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectYellowDuck
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectYellowDuck"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& audioClips() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectYellowDuck*, uintptr_t))(Il2CppBase() + 0x1DCE674))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectYellowDuck*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1DCE7AC))(this, controller, ext_info);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectYellowDuck*))(Il2CppBase() + 0x1DCE8EC))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectYellowDuck*))(Il2CppBase() + 0x1DCE94C))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectYellowDuck*))(Il2CppBase() + 0x1DCE9AC))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectYellowDuck*))(Il2CppBase() + 0x1DCEA0C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(ObjectYellowDuck*, uintptr_t))(Il2CppBase() + 0x1DCEB00))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(ObjectYellowDuck*))(Il2CppBase() + 0x1DCEB08))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(ObjectYellowDuck*))(Il2CppBase() + 0x1DCEB10))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemLevel() {
		return ((T (*)(ObjectYellowDuck*))(Il2CppBase() + 0x1DCEB18))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ObjectYellowDuck*))(Il2CppBase() + 0x1DCEB20))(this);
	}

};

}
