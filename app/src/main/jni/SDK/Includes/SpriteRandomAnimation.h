#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpriteRandomAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteRandomAnimation"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& frameRate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _animTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& _frameDuration() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _currentIndex() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SpriteRandomAnimation*))(Il2CppBase() + 0x42980A0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SpriteRandomAnimation*))(Il2CppBase() + 0x42981D0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SpriteRandomAnimation*))(Il2CppBase() + 0x4298100))(this);
	}

};

}
