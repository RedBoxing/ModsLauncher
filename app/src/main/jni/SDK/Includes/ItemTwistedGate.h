#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemTwistedGate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemTwistedGate"));
	}


	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemTwistedGate*, uintptr_t))(Il2CppBase() + 0x219DAE0))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemTwistedGate*, uintptr_t))(Il2CppBase() + 0x219DBC4))(this, P0);
	}

};

}
