#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass1150
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass115_0"));
	}

	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = float> T FromScalingAnimationCurveb__0(float c, float s, float e, float d) {
		return ((T (*)(cDisplayClass1150*, float, float, float, float))(Il2CppBase() + 0x46414F4))(this, c, s, e, d);
	}

};

}
