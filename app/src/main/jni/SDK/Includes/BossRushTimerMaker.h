#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossRushTimerMaker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossRushTimerMaker"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& object_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BossRushTimerMaker*))(Il2CppBase() + 0x1DEEC70))(this);
	}

};

}
