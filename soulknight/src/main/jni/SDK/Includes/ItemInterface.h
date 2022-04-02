#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemInterface"));
	}


	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ItemInterface*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ItemInterface*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, controller, ext_info);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ItemInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ItemInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ItemInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ItemInterface*))(Il2CppBase() + 0x0))(this);
	}

};

}
