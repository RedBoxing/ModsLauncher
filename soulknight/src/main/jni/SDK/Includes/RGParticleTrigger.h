#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGParticleTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGParticleTrigger"));
	}

	template <typename T = float> T& fire_probability() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& buff_fire() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& speed_slow_rate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& rate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& repel() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T initCollider(int32_t damage, float speed_slow_rate, float rate, float repel, float fire_probability, uintptr_t buff_fire, uintptr_t source_object) {
		return ((T (*)(RGParticleTrigger*, int32_t, float, float, float, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B7BC44))(this, damage, speed_slow_rate, rate, repel, fire_probability, buff_fire, source_object);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGParticleTrigger*, uintptr_t))(Il2CppBase() + 0x1B7BD1C))(this, other);
	}
	template <typename T = void> T EnemyHurt(uintptr_t enemy) {
		return ((T (*)(RGParticleTrigger*, uintptr_t))(Il2CppBase() + 0x1B7BF5C))(this, enemy);
	}
	template <typename T = void> T EnemyFire(uintptr_t enemy) {
		return ((T (*)(RGParticleTrigger*, uintptr_t))(Il2CppBase() + 0x1B7C0E4))(this, enemy);
	}

};

}
