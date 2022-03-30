#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIMechItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIMechItem"));
	}

	template <typename T = uintptr_t> T& lineImage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& lightImage() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& emptyImage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& fillImage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isAnime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& EaseOutBounce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T ItemFadeIn(float fadeInTime) {
		return ((T (*)(UIMechItem*, float))(Il2CppBase() + 0x4348764))(this, fadeInTime);
	}
	template <typename T = uintptr_t> T FadeIn(float fadeInTime) {
		return ((T (*)(UIMechItem*, float))(Il2CppBase() + 0x4349FE4))(this, fadeInTime);
	}
	template <typename T = void> T InitReference() {
		return ((T (*)(UIMechItem*))(Il2CppBase() + 0x43487EC))(this);
	}
	template <typename T = void> T SetColor(uintptr_t color) {
		return ((T (*)(UIMechItem*, uintptr_t))(Il2CppBase() + 0x4349034))(this, color);
	}
	template <typename T = void> T Toggle_1(float toggleTime, float maxAlpha) {
		return ((T (*)(UIMechItem*, float, float))(Il2CppBase() + 0x4349D44))(this, toggleTime, maxAlpha);
	}
	template <typename T = uintptr_t> T FillAnime(float toggleTime, float maxAlpha) {
		return ((T (*)(UIMechItem*, float, float))(Il2CppBase() + 0x434A0F0))(this, toggleTime, maxAlpha);
	}
	template <typename T = uintptr_t> T FillAlphaAnime(float from, float to, float animeTime) {
		return ((T (*)(UIMechItem*, float, float, float))(Il2CppBase() + 0x434A218))(this, from, to, animeTime);
	}
	template <typename T = void> T FadeInb__7_0(float percentage) {
		return ((T (*)(UIMechItem*, float))(Il2CppBase() + 0x434A3C4))(this, percentage);
	}

};

}
