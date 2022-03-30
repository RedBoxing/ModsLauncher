#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LavaSummonEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LavaSummonEffect"));
	}

	template <typename T = uintptr_t> T& _particleSystem() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _idleParticleSystem() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T EffectStop() {
		return ((T (*)(LavaSummonEffect*))(Il2CppBase() + 0x425B780))(this);
	}
	template <typename T = void> T EffectInit() {
		return ((T (*)(LavaSummonEffect*))(Il2CppBase() + 0x425B7F4))(this);
	}
	template <typename T = void> T IdleEffectStart() {
		return ((T (*)(LavaSummonEffect*))(Il2CppBase() + 0x425B920))(this);
	}
	template <typename T = void> T EffectOnSummon(uintptr_t summonTransform) {
		return ((T (*)(LavaSummonEffect*, uintptr_t))(Il2CppBase() + 0x425B994))(this, summonTransform);
	}

};

}
