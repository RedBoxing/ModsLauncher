#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectProbabilityConditional
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectProbabilityConditional"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& conditions() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(ObjectProbabilityConditional*))(Il2CppBase() + 0x1DBCDDC))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(ObjectProbabilityConditional*))(Il2CppBase() + 0x1DBCEC4))(this);
	}

};

}
