#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunCoin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunCoin"));
	}

	template <typename T = int32_t> T& normal_count() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& normal_time_interval() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& speed_correction() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = int32_t> T& silver_consume() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& gold_consume() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& shake_audio() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& probability() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = int32_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = int32_t> T& single_consume() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}

	template <typename T = int32_t> T get_silver_atk() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248D5E4))(this);
	}
	template <typename T = uintptr_t> T get_bullet_silver() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248D69C))(this);
	}
	template <typename T = uintptr_t> T get_bullet_gold() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248D754))(this);
	}
	template <typename T = float> T get_gold_bullet_speed() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248D80C))(this);
	}
	template <typename T = int32_t> T get_gold_atk() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248D8C4))(this);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248D97C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248D9DC))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunCoin*, bool, bool))(Il2CppBase() + 0x248DA4C))(this, value1, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248DBCC))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248E4F4))(this);
	}
	template <typename T = void> T AttackNormal() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248DC64))(this);
	}
	template <typename T = uintptr_t> T CreateBulletContinuous(uintptr_t bullet, int32_t atk, float bullet_speed) {
		return ((T (*)(GunCoin*, uintptr_t, int32_t, float))(Il2CppBase() + 0x248E554))(this, bullet, atk, bullet_speed);
	}
	template <typename T = void> T AttackGold() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248E038))(this);
	}
	template <typename T = void> T AttackSilver() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248DDF8))(this);
	}
	template <typename T = void> T CreateBullet(uintptr_t bullet, int32_t atk, float bullet_speed, float angles) {
		return ((T (*)(GunCoin*, uintptr_t, int32_t, float, float))(Il2CppBase() + 0x248E6A0))(this, bullet, atk, bullet_speed, angles);
	}
	template <typename T = void> T ChangeMode() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248E1C4))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248E8CC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_icons() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248EA5C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248EB88))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248EEF8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248EF00))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunCoin*, bool, bool))(Il2CppBase() + 0x248EF08))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248EF18))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_icons() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248EF20))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunCoin*))(Il2CppBase() + 0x248EF28))(this);
	}

};

}
