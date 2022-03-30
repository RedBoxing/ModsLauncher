#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass332
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass33_2"));
	}

	template <typename T = uintptr_t> T& p() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T CreatePipesb__1(uintptr_t other) {
		return ((T (*)(cDisplayClass332*, uintptr_t))(Il2CppBase() + 0x1A52968))(this, other);
	}

};

}
