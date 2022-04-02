#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PumpkinSummonEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PumpkinSummonEffect"));
	}

	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& Atk1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PumpkinSummonEffect*))(Il2CppBase() + 0x1BA1394))(this);
	}
	template <typename T = void> T EffectStop() {
		return ((T (*)(PumpkinSummonEffect*))(Il2CppBase() + 0x1BA142C))(this);
	}
	template <typename T = void> T EffectInit() {
		return ((T (*)(PumpkinSummonEffect*))(Il2CppBase() + 0x1BA1488))(this);
	}
	template <typename T = void> T IdleEffectStart() {
		return ((T (*)(PumpkinSummonEffect*))(Il2CppBase() + 0x1BA14E4))(this);
	}
	template <typename T = void> T EffectOnSummon(uintptr_t summonTransform) {
		return ((T (*)(PumpkinSummonEffect*, uintptr_t))(Il2CppBase() + 0x1BA1540))(this, summonTransform);
	}

};

}
