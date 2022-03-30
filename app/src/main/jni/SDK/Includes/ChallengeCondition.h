#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChallengeCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChallengeCondition"));
	}

	template <typename T = uintptr_t> T& challenge() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(ChallengeCondition*))(Il2CppBase() + 0x186FE68))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(ChallengeCondition*))(Il2CppBase() + 0x186FF40))(this);
	}

};

}
