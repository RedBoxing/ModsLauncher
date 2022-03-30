#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TSPriest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TSPriest"));
	}

	template <typename T = int32_t> T& hpRestore() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T RoleSkill() {
		return ((T (*)(TSPriest*))(Il2CppBase() + 0x18CC86C))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(TSPriest*))(Il2CppBase() + 0x18CD588))(this);
	}

};

}
