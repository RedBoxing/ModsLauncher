#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemySummonEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemySummonEffect"));
	}


	template <typename T = void> T EffectStop() {
		return ((T (*)(EnemySummonEffect*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T EffectInit() {
		return ((T (*)(EnemySummonEffect*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T IdleEffectStart() {
		return ((T (*)(EnemySummonEffect*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T EffectOnSummon(uintptr_t summonTransform) {
		return ((T (*)(EnemySummonEffect*, uintptr_t))(Il2CppBase() + 0x0))(this, summonTransform);
	}

};

}
