#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass690
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass69_0"));
	}

	template <typename T = uintptr_t> T& desc() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T RegisterTargetb__0(uintptr_t x) {
		return ((T (*)(cDisplayClass690*, uintptr_t))(Il2CppBase() + 0x45E1740))(this, x);
	}

};

}
