#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomFog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomFog"));
	}

	template <typename T = float> T& move_speed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& fade_speed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& img() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RoomFog*))(Il2CppBase() + 0x1BF5F40))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RoomFog*))(Il2CppBase() + 0x1BF6140))(this);
	}
	template <typename T = void> T SetWidth(int32_t width) {
		return ((T (*)(RoomFog*, int32_t))(Il2CppBase() + 0x1BF62AC))(this, width);
	}
	template <typename T = void> T FadeIn() {
		return ((T (*)(RoomFog*))(Il2CppBase() + 0x1BF63C0))(this);
	}
	template <typename T = void> T FadeOut(float duration) {
		return ((T (*)(RoomFog*, float))(Il2CppBase() + 0x1BF6338))(this, duration);
	}
	template <typename T = uintptr_t> T FadingIn() {
		return ((T (*)(RoomFog*))(Il2CppBase() + 0x1BF6430))(this);
	}
	template <typename T = uintptr_t> T FadingOut(float duration) {
		return ((T (*)(RoomFog*, float))(Il2CppBase() + 0x1BF64E4))(this, duration);
	}

};

}
