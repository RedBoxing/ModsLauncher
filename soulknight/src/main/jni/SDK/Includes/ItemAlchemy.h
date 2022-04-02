#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemAlchemy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemAlchemy"));
	}


	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemAlchemy*, uintptr_t))(Il2CppBase() + 0x1A52B58))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemAlchemy*, uintptr_t))(Il2CppBase() + 0x1A52C3C))(this, P0);
	}

};

}
