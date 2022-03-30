#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemMaterialChest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemMaterialChest"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemMaterialChest*, uintptr_t))(Il2CppBase() + 0x1DAE1B8))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemMaterialChest*, uintptr_t))(Il2CppBase() + 0x1DAE328))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemMaterialChest*, uintptr_t))(Il2CppBase() + 0x1DAE794))(this, controller);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ItemMaterialChest*, uintptr_t))(Il2CppBase() + 0x1DAE870))(this, other);
	}
	template <typename T = bool> T HoldingTicket(uintptr_t controller) {
		return ((T (*)(ItemMaterialChest*, uintptr_t))(Il2CppBase() + 0x1DAE24C))(this, controller);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemMaterialChest*, uintptr_t))(Il2CppBase() + 0x1DAEA04))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemMaterialChest*, uintptr_t))(Il2CppBase() + 0x1DAEA0C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemMaterialChest*, uintptr_t))(Il2CppBase() + 0x1DAEA14))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ItemMaterialChest*, uintptr_t))(Il2CppBase() + 0x1DAEA1C))(this, P0);
	}

};

}
