#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectStatistics
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectStatistics"));
	}

	template <typename T = uintptr_t> T& exhibiteType() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectStatistics*, uintptr_t))(Il2CppBase() + 0x1DC4B68))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectStatistics*, uintptr_t))(Il2CppBase() + 0x1DC4D40))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectStatistics*, uintptr_t))(Il2CppBase() + 0x1DC4ECC))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectStatistics*))(Il2CppBase() + 0x1DC5100))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectStatistics*))(Il2CppBase() + 0x1DC5160))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectStatistics*))(Il2CppBase() + 0x1DC51EC))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectStatistics*))(Il2CppBase() + 0x1DC524C))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectStatistics*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1DC52AC))(this, controller, ext_info);
	}

};

}
