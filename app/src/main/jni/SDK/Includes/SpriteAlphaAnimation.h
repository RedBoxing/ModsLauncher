#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpriteAlphaAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteAlphaAnimation"));
	}

	template <typename T = float> T& period() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& alphaRange() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Update() {
		return ((T (*)(SpriteAlphaAnimation*))(Il2CppBase() + 0x4295CC4))(this);
	}

};

}
