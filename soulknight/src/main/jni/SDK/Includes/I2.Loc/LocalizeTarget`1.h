#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizeTarget1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizeTarget`1"));
	}

	template <typename T = uintptr_t> T& mTarget() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T IsValid(uintptr_t cmp) {
		return ((T (*)(LocalizeTarget1*, uintptr_t))(Il2CppBase() + 0x0))(this, cmp);
	}

};

}
