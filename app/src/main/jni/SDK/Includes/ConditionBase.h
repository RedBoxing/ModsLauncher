#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ConditionBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConditionBase"));
	}

	template <typename T = bool> T& inverse() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(ConditionBase*))(Il2CppBase() + 0x4275638))(this);
	}

};

}
