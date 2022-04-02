#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ContradictFactorPair
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContradictFactorPair"));
	}

	template <typename T = uintptr_t> T& factor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& factor2() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
