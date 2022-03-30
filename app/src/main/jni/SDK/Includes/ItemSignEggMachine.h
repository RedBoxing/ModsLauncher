#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemSignEggMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemSignEggMachine"));
	}


	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemSignEggMachine*, uintptr_t))(Il2CppBase() + 0x1CE75B0))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemSignEggMachine*, uintptr_t))(Il2CppBase() + 0x1CE7738))(this, P0);
	}

};

}
