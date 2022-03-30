#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlantGrowItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlantGrowItem"));
	}

	template <typename T = uintptr_t> T& targetItem() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& randomItem() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(PlantGrowItem*, uintptr_t))(Il2CppBase() + 0x4397FC8))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(PlantGrowItem*, uintptr_t))(Il2CppBase() + 0x4398180))(this, P0);
	}

};

}
