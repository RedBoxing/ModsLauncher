#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpriteFlipAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteFlipAnimation"));
	}

	template <typename T = uintptr_t> T& flipMode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& flipDuration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& _flipTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SpriteFlipAnimation*))(Il2CppBase() + 0x42965C0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SpriteFlipAnimation*))(Il2CppBase() + 0x4296664))(this);
	}

};

}
