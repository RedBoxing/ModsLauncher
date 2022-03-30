#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass1140
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass114_0"));
	}

	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = float> T FromVerticalScalingAnimationCurveb__0(float c, float s, float e, float d) {
		return ((T (*)(cDisplayClass1140*, float, float, float, float))(Il2CppBase() + 0x4641420))(this, c, s, e, d);
	}

};

}
