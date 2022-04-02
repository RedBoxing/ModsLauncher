#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LightningRodEffectTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LightningRodEffectTrigger"));
	}

	template <typename T = uintptr_t> T& rodExtra() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _rendererMaterial() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _lightningEffect() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& saturator() {
		return *(T*)((uintptr_t)this + 0x94);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LightningRodEffectTrigger*))(Il2CppBase() + 0x42614B8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LightningRodEffectTrigger*))(Il2CppBase() + 0x4261604))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(LightningRodEffectTrigger*))(Il2CppBase() + 0x42616EC))(this);
	}
	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(LightningRodEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x42617F0))(this, other, isCritic, canThrough);
	}
	template <typename T = void> T PlayParticle() {
		return ((T (*)(LightningRodEffectTrigger*))(Il2CppBase() + 0x425F990))(this);
	}
	template <typename T = void> T StopParticleEffect() {
		return ((T (*)(LightningRodEffectTrigger*))(Il2CppBase() + 0x425F878))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(LightningRodEffectTrigger*))(Il2CppBase() + 0x4261974))(this);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWith(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(LightningRodEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x426197C))(this, P0, P1, P2);
	}

};

}
