#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ContinuousDamageTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContinuousDamageTrigger"));
	}

	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& radius() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& interval() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& hit_enemy() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& hit_player() {
		return *(T*)((uintptr_t)this + 0x85);
	}
	template <typename T = int32_t> T& max_mul_time() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& tmp_damage() {
		return *(T*)((uintptr_t)this + 0x8C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ContinuousDamageTrigger*))(Il2CppBase() + 0x427B254))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(ContinuousDamageTrigger*))(Il2CppBase() + 0x427B2C0))(this);
	}
	template <typename T = uintptr_t> T Damaging() {
		return ((T (*)(ContinuousDamageTrigger*))(Il2CppBase() + 0x427B364))(this);
	}
	template <typename T = void> T OnMakeDamage(uintptr_t player) {
		return ((T (*)(ContinuousDamageTrigger*, uintptr_t))(Il2CppBase() + 0x427B444))(this, player);
	}
	template <typename T = void> T OnMakeDamage_1(uintptr_t enemey) {
		return ((T (*)(ContinuousDamageTrigger*, uintptr_t))(Il2CppBase() + 0x427B4B4))(this, enemey);
	}
	template <typename T = void> T OnLoop() {
		return ((T (*)(ContinuousDamageTrigger*))(Il2CppBase() + 0x427B524))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ContinuousDamageTrigger*))(Il2CppBase() + 0x427B5A8))(this);
	}

};

}
