#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ReboundEffectTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReboundEffectTrigger"));
	}

	template <typename T = int32_t> T& max_rebound_count() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _max_rebound_count() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& rebound_count() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& circle() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(ReboundEffectTrigger*))(Il2CppBase() + 0x42B0660))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ReboundEffectTrigger*))(Il2CppBase() + 0x42B086C))(this);
	}
	template <typename T = void> T OnCollisionEnter2D(uintptr_t collision) {
		return ((T (*)(ReboundEffectTrigger*, uintptr_t))(Il2CppBase() + 0x42B0B00))(this, collision);
	}
	template <typename T = uintptr_t> T SpeedDetect() {
		return ((T (*)(ReboundEffectTrigger*))(Il2CppBase() + 0x42B07B8))(this);
	}
	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(ReboundEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x42B1638))(this, other, isCritic, canThrough);
	}
	template <typename T = void> T HitBox(uintptr_t other) {
		return ((T (*)(ReboundEffectTrigger*, uintptr_t))(Il2CppBase() + 0x42B0DC8))(this, other);
	}
	template <typename T = void> T DestroyBullet(uintptr_t other) {
		return ((T (*)(ReboundEffectTrigger*, uintptr_t))(Il2CppBase() + 0x42B1288))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ReboundEffectTrigger*))(Il2CppBase() + 0x42B17D8))(this);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWith(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(ReboundEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x42B17E0))(this, P0, P1, P2);
	}

};

}
