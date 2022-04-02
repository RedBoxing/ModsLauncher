#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChestContentCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestContentCreator"));
	}


	template <typename T = void> T OnOpen(uintptr_t itemParent, uintptr_t controller, int32_t chestLevel) {
		return ((T (*)(ChestContentCreator*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, itemParent, controller, chestLevel);
	}

};

}
