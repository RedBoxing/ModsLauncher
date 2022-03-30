#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ConditionsAny
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConditionsAny"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& subConditions() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(ConditionsAny*))(Il2CppBase() + 0x4275908))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(ConditionsAny*))(Il2CppBase() + 0x4275A10))(this);
	}

};

}
