#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpriteRandomZAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteRandomZAnimation"));
	}

	template <typename T = float> T& rotateDuration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& rotateTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& transforms() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& rotateMode() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SpriteRandomZAnimation*))(Il2CppBase() + 0x4298764))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SpriteRandomZAnimation*))(Il2CppBase() + 0x42987CC))(this);
	}

};

}
