#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SellMysteryNpcInit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SellMysteryNpcInit"));
	}

	template <typename T = uintptr_t> T& characterEnterSorting() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnNpcInit(uintptr_t npcObject) {
		return ((T (*)(SellMysteryNpcInit*, uintptr_t))(Il2CppBase() + 0x1822470))(this, npcObject);
	}

};

}
