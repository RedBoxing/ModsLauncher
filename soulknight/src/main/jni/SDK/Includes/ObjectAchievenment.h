#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectAchievenment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectAchievenment"));
	}


	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectAchievenment*, uintptr_t))(Il2CppBase() + 0x453B20C))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectAchievenment*, uintptr_t))(Il2CppBase() + 0x453B3E4))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectAchievenment*, uintptr_t))(Il2CppBase() + 0x453B570))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectAchievenment*))(Il2CppBase() + 0x453B6CC))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectAchievenment*))(Il2CppBase() + 0x453B72C))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectAchievenment*))(Il2CppBase() + 0x453B7B8))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectAchievenment*))(Il2CppBase() + 0x453B818))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectAchievenment*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x453B878))(this, controller, ext_info);
	}

};

}
