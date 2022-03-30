#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UnlockBossRushCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockBossRushCondition"));
	}


	template <typename T = bool> T IsValid() {
		return ((T (*)(UnlockBossRushCondition*))(Il2CppBase() + 0x4400F20))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(UnlockBossRushCondition*))(Il2CppBase() + 0x4401120))(this);
	}

};

}
