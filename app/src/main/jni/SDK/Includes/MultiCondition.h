#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiCondition"));
	}

	template <typename T = int32_t> T& leastPlayer() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(MultiCondition*))(Il2CppBase() + 0x41FB470))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(MultiCondition*))(Il2CppBase() + 0x41FB55C))(this);
	}

};

}
