#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass331
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass33_1"));
	}

	template <typename T = uintptr_t> T& p() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T CreatePipesb__0(uintptr_t other) {
		return ((T (*)(cDisplayClass331*, uintptr_t))(Il2CppBase() + 0x1A528CC))(this, other);
	}

};

}
