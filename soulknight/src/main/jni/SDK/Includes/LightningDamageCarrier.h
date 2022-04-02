#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LightningDamageCarrier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LightningDamageCarrier"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& chainInfoList() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& lightningPrefab() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& lightningEfxLifeTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& lightningWidth() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& targetLayer() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& visibleHitCache() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cached() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(LightningDamageCarrier*))(Il2CppBase() + 0x425CCE8))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bInfo, uintptr_t dInfo) {
		return ((T (*)(LightningDamageCarrier*, uintptr_t, uintptr_t))(Il2CppBase() + 0x425D8D8))(this, bInfo, dInfo);
	}
	template <typename T = void> T CreateLightning(uintptr_t source, int32_t idx, void* hittedTargets) {
		return ((T (*)(LightningDamageCarrier*, uintptr_t, int32_t, void*))(Il2CppBase() + 0x425CDA8))(this, source, idx, hittedTargets);
	}
	template <typename T = void> T DealDamage(uintptr_t target, bool isCrit, int32_t damage) {
		return ((T (*)(LightningDamageCarrier*, uintptr_t, bool, int32_t))(Il2CppBase() + 0x425D9DC))(this, target, isCrit, damage);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(LightningDamageCarrier*, uintptr_t, uintptr_t))(Il2CppBase() + 0x425DEC8))(this, P0, P1);
	}

};

}
