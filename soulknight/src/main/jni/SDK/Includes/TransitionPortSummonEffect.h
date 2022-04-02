#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TransitionPortSummonEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransitionPortSummonEffect"));
	}

	template <typename T = Il2CppVector3> T& effectPosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& effectPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& delayTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& effectScale() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T EffectStop() {
		return ((T (*)(TransitionPortSummonEffect*))(Il2CppBase() + 0x4406EAC))(this);
	}
	template <typename T = void> T EffectInit() {
		return ((T (*)(TransitionPortSummonEffect*))(Il2CppBase() + 0x4406F08))(this);
	}
	template <typename T = void> T IdleEffectStart() {
		return ((T (*)(TransitionPortSummonEffect*))(Il2CppBase() + 0x4406F64))(this);
	}
	template <typename T = void> T EffectOnSummon(uintptr_t summonTransform) {
		return ((T (*)(TransitionPortSummonEffect*, uintptr_t))(Il2CppBase() + 0x4406FC0))(this, summonTransform);
	}
	template <typename T = uintptr_t> T ShowEffect(Il2CppVector3 position) {
		return ((T (*)(TransitionPortSummonEffect*, Il2CppVector3))(Il2CppBase() + 0x4407104))(this, position);
	}

};

}
