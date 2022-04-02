#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpriteColorAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteColorAnimation"));
	}

	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& targetColor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& playOnAwake() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& _isPlaying() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = float> T& _startTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _initColor() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SpriteColorAnimation*))(Il2CppBase() + 0x429637C))(this);
	}
	template <typename T = void> T StartAnimation() {
		return ((T (*)(SpriteColorAnimation*))(Il2CppBase() + 0x42963F0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SpriteColorAnimation*))(Il2CppBase() + 0x4296484))(this);
	}

};

}
