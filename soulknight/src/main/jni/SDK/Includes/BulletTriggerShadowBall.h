#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletTriggerShadowBall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletTriggerShadowBall"));
	}

	template <typename T = bool> T& healTarget() {
		return *(T*)((uintptr_t)this + 0xA1);
	}
	template <typename T = bool> T& castBuff() {
		return *(T*)((uintptr_t)this + 0xA2);
	}
	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = uintptr_t> T get_shadowBall() {
		return ((T (*)(BulletTriggerShadowBall*))(Il2CppBase() + 0x1DF41C0))(this);
	}
	template <typename T = bool> T IsTargetValid(uintptr_t hit) {
		return ((T (*)(BulletTriggerShadowBall*, uintptr_t))(Il2CppBase() + 0x1DF428C))(this, hit);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(BulletTriggerShadowBall*, uintptr_t))(Il2CppBase() + 0x1DF43E0))(this, other);
	}
	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(BulletTriggerShadowBall*, uintptr_t, bool))(Il2CppBase() + 0x1DF4A2C))(this, other, isCritic);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(BulletTriggerShadowBall*, uintptr_t))(Il2CppBase() + 0x1DF4AF0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnHit(uintptr_t P0, bool P1) {
		return ((T (*)(BulletTriggerShadowBall*, uintptr_t, bool))(Il2CppBase() + 0x1DF4AF8))(this, P0, P1);
	}

};

}
