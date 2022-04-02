#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBTHeart
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBTHeart"));
	}

	template <typename T = int32_t> T& atk() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& bullet_speed() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& destroyed() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(RGBTHeart*))(Il2CppBase() + 0x1BB2C30))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGBTHeart*, uintptr_t))(Il2CppBase() + 0x1BB2C90))(this, other);
	}
	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(RGBTHeart*, uintptr_t, bool))(Il2CppBase() + 0x1BB2D0C))(this, other, isCritic);
	}
	template <typename T = void> T Division() {
		return ((T (*)(RGBTHeart*))(Il2CppBase() + 0x1BB2D9C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(RGBTHeart*, uintptr_t))(Il2CppBase() + 0x1BB3490))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnHit(uintptr_t P0, bool P1) {
		return ((T (*)(RGBTHeart*, uintptr_t, bool))(Il2CppBase() + 0x1BB3498))(this, P0, P1);
	}

};

}
