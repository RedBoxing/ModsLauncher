#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LightningEffector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LightningEffector"));
	}

	template <typename T = uintptr_t> T& thunder() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& thunderLifeTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& boostBuff() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& extraCount() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& distance() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& coldDownTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = void*> T& aimSet() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& currentCount() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& currentMaxCount() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& lightningTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hitCache() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(LightningEffector*))(Il2CppBase() + 0x425DF20))(this);
	}
	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(LightningEffector*, uintptr_t, bool, bool))(Il2CppBase() + 0x425DF84))(this, other, isCritic, canThrough);
	}
	template <typename T = void> T LightningInit() {
		return ((T (*)(LightningEffector*))(Il2CppBase() + 0x425E10C))(this);
	}
	template <typename T = void> T Lightning(uintptr_t sourceController) {
		return ((T (*)(LightningEffector*, uintptr_t))(Il2CppBase() + 0x425E204))(this, sourceController);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(LightningEffector*))(Il2CppBase() + 0x425ED00))(this);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWith(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(LightningEffector*, uintptr_t, bool, bool))(Il2CppBase() + 0x425ED08))(this, P0, P1, P2);
	}

};

}
