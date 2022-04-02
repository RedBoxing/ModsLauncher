#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SeasonUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonUtil"));
	}


	template <typename T = uintptr_t> static T TryConvertFactor2Season(uintptr_t factor) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x181F9B0))(0, factor);
	}
	template <typename T = uintptr_t> static T TryConvertSeason2Factor(uintptr_t season) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x181FB90))(0, season);
	}

};

}
