#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemTrashCan
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemTrashCan"));
	}


	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemTrashCan*, uintptr_t))(Il2CppBase() + 0x219D4A0))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemTrashCan*, uintptr_t))(Il2CppBase() + 0x219D8D0))(this, P0);
	}

};

}
