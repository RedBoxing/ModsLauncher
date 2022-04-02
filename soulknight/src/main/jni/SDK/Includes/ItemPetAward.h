#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemPetAward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemPetAward"));
	}

	template <typename T = uintptr_t> T& pet() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
