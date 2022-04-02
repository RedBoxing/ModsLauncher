#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FactorViewParent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FactorViewParent"));
	}


	template <typename T = void> T UpdateFactorDesc(uintptr_t factor) {
		return ((T (*)(FactorViewParent*, uintptr_t))(Il2CppBase() + 0x0))(this, factor);
	}

};

}
