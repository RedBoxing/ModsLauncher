#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass4560
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass456_0"));
	}

	template <typename T = uintptr_t> T& aem() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T ShowSwapButtonb__0(uintptr_t x) {
		return ((T (*)(cDisplayClass4560*, uintptr_t))(Il2CppBase() + 0x21DDFAC))(this, x);
	}

};

}
