#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpriteAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteAnimation"));
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
	template <typename T = int32_t> T& _frameIdxOffset() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& randomStartIdx() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& hideSpriteWhenFinished() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = bool> T& _play() {
		return *(T*)((uintptr_t)this + 0x46);
	}

	template <typename T = bool> T get_playOnce() {
		return ((T (*)(SpriteAnimation*))(Il2CppBase() + 0x4295E30))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SpriteAnimation*))(Il2CppBase() + 0x4295E98))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(SpriteAnimation*))(Il2CppBase() + 0x4295F00))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SpriteAnimation*))(Il2CppBase() + 0x4295F68))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SpriteAnimation*))(Il2CppBase() + 0x4296110))(this);
	}

};

}
