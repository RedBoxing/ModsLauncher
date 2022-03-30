#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectDistributionConditional
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectDistributionConditional"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& conditions() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(ObjectDistributionConditional*))(Il2CppBase() + 0x1D5490C))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(ObjectDistributionConditional*))(Il2CppBase() + 0x1D54A4C))(this);
	}

};

}
