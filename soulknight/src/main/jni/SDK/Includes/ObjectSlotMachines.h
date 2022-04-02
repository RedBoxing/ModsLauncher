#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectSlotMachines
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectSlotMachines"));
	}

	template <typename T = uintptr_t> T& slot_ui() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& lottery_ui() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T get_allowSlot() {
		return ((T (*)(ObjectSlotMachines*))(Il2CppBase() + 0x1DC3A84))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ObjectSlotMachines*))(Il2CppBase() + 0x1DC3AE4))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectSlotMachines*, uintptr_t))(Il2CppBase() + 0x1DC3B74))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectSlotMachines*, uintptr_t))(Il2CppBase() + 0x1DC3D60))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectSlotMachines*, uintptr_t))(Il2CppBase() + 0x1DC3EEC))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectSlotMachines*))(Il2CppBase() + 0x1DC41A8))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectSlotMachines*))(Il2CppBase() + 0x1DC4208))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectSlotMachines*))(Il2CppBase() + 0x1DC4294))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectSlotMachines*))(Il2CppBase() + 0x1DC42F4))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectSlotMachines*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1DC4354))(this, controller, ext_info);
	}

};

}
