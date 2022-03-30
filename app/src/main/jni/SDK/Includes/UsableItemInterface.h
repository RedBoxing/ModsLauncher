#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UsableItemInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UsableItemInterface"));
	}


	template <typename T = bool> T Use(uintptr_t controller) {
		return ((T (*)(UsableItemInterface*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}
	template <typename T = void> T SyncUse(uintptr_t controller) {
		return ((T (*)(UsableItemInterface*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}

};

}
