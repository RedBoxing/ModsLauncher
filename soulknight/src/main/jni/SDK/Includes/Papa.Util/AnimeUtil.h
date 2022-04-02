#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Papa.Util {

class AnimeUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Papa.Util", "AnimeUtil"));
	}


	template <typename T = void> static T SetImageColor(uintptr_t image, uintptr_t color) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x456A9CC))(0, image, color);
	}
	template <typename T = void> static T SetImageAlpha(uintptr_t image, float alpha) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x456AAB0))(0, image, alpha);
	}
	template <typename T = void> static T SetSpriteAlpha(uintptr_t spriteRenderer, float alpha) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x456AB84))(0, spriteRenderer, alpha);
	}
	template <typename T = uintptr_t> static T Animation(float animeTime, void* percentageHandler) {
		return ((T (*)(void *, float, void*))(Il2CppBase() + 0x456AC48))(0, animeTime, percentageHandler);
	}
	template <typename T = uintptr_t> static T AnimationRealTime(float animeTime, void* percentageHandler) {
		return ((T (*)(void *, float, void*))(Il2CppBase() + 0x456AD54))(0, animeTime, percentageHandler);
	}
	template <typename T = void> static T AlphaTween(uintptr_t sr, float targerAlphaVal, float durTime, uintptr_t easeType) {
		return ((T (*)(void *, uintptr_t, float, float, uintptr_t))(Il2CppBase() + 0x456AE60))(0, sr, targerAlphaVal, durTime, easeType);
	}

};

}
