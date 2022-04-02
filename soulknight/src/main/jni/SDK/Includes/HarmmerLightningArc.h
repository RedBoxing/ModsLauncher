#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HarmmerLightningArc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HarmmerLightningArc"));
	}

	template <typename T = uintptr_t> T& thunderObject() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& triggerAudioClip() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& thunderTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& triggerDistance() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& triggerCount() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& triggerInterval() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& lifeTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}

	template <typename T = void> T Init(float lifeTime, float triggerInterval, int32_t triggerCount, float triggerDistance) {
		return ((T (*)(HarmmerLightningArc*, float, float, int32_t, float))(Il2CppBase() + 0x1A31A80))(this, lifeTime, triggerInterval, triggerCount, triggerDistance);
	}
	template <typename T = void> T CopyFrom(uintptr_t other) {
		return ((T (*)(HarmmerLightningArc*, uintptr_t))(Il2CppBase() + 0x1A31264))(this, other);
	}
	template <typename T = void> T Start() {
		return ((T (*)(HarmmerLightningArc*))(Il2CppBase() + 0x1A31BA8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(HarmmerLightningArc*))(Il2CppBase() + 0x1A3271C))(this);
	}
	template <typename T = void> T TriggerEnemy() {
		return ((T (*)(HarmmerLightningArc*))(Il2CppBase() + 0x1A31C08))(this);
	}
	template <typename T = void> T FlushInfo() {
		return ((T (*)(HarmmerLightningArc*))(Il2CppBase() + 0x1A31194))(this);
	}

};

}
