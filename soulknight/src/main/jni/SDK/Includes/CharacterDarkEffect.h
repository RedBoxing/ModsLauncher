#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CharacterDarkEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CharacterDarkEffect"));
	}

	template <typename T = uintptr_t> T& _material() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _camera() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _currentState() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _startTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> static T& InitRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& TargetRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& SoftRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& BrightRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& BrightSoftRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& BrightRadiusRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& BrightRadiusPeriod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& FadeInDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& FadeOutDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& InSceneFadeInDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CenterXid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CenterYId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& RadiusId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& SoftId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& BrigRadiusId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& BrightSoftId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CharacterDarkEffect*))(Il2CppBase() + 0x1874FB4))(this);
	}
	template <typename T = void> T OnRenderImage(uintptr_t src, uintptr_t dest) {
		return ((T (*)(CharacterDarkEffect*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18750EC))(this, src, dest);
	}
	template <typename T = void> T FadeIn() {
		return ((T (*)(CharacterDarkEffect*))(Il2CppBase() + 0x1875584))(this);
	}
	template <typename T = void> T FadeOut() {
		return ((T (*)(CharacterDarkEffect*))(Il2CppBase() + 0x18755F4))(this);
	}
	template <typename T = void> T InSceneFadeIn() {
		return ((T (*)(CharacterDarkEffect*))(Il2CppBase() + 0x1875664))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CharacterDarkEffect*))(Il2CppBase() + 0x18757E8))(this);
	}
	template <typename T = void> T IdleUpdate() {
		return ((T (*)(CharacterDarkEffect*))(Il2CppBase() + 0x1875FE4))(this);
	}
	template <typename T = void> T InSceneFadeInUpdate() {
		return ((T (*)(CharacterDarkEffect*))(Il2CppBase() + 0x1875D28))(this);
	}
	template <typename T = void> T FadeOutUpdate() {
		return ((T (*)(CharacterDarkEffect*))(Il2CppBase() + 0x1875B08))(this);
	}
	template <typename T = void> T FadeInUpdate() {
		return ((T (*)(CharacterDarkEffect*))(Il2CppBase() + 0x18758A8))(this);
	}

};

}
