#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UnlockHeroCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockHeroCondition"));
	}

	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(UnlockHeroCondition*))(Il2CppBase() + 0x4401128))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(UnlockHeroCondition*))(Il2CppBase() + 0x44011AC))(this);
	}

};

}
