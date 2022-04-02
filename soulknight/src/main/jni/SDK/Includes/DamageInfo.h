#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DamageInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageInfo"));
	}

	template <typename T = uintptr_t> T& damageType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& throughCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& critic() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& repel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& damageInterval() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T SetUp(uintptr_t bullet, int32_t damage, int32_t critic, int32_t repel, int32_t camp) {
		return ((T (*)(DamageInfo*, uintptr_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x16F23E8))(this, bullet, damage, critic, repel, camp);
	}
	template <typename T = uintptr_t> T SetBullet(uintptr_t bullet) {
		return ((T (*)(DamageInfo*, uintptr_t))(Il2CppBase() + 0x16F23F0))(this, bullet);
	}
	template <typename T = uintptr_t> T SetDamage(int32_t damage) {
		return ((T (*)(DamageInfo*, int32_t))(Il2CppBase() + 0x16F23F8))(this, damage);
	}
	template <typename T = uintptr_t> T SetDamageInterval(float damageInterval) {
		return ((T (*)(DamageInfo*, float))(Il2CppBase() + 0x16F2400))(this, damageInterval);
	}
	template <typename T = uintptr_t> T SetCritic(int32_t critic) {
		return ((T (*)(DamageInfo*, int32_t))(Il2CppBase() + 0x16F2408))(this, critic);
	}
	template <typename T = uintptr_t> T SetThrough(bool throughable) {
		return ((T (*)(DamageInfo*, bool))(Il2CppBase() + 0x16F2410))(this, throughable);
	}
	template <typename T = uintptr_t> T SetRepel(int32_t repel) {
		return ((T (*)(DamageInfo*, int32_t))(Il2CppBase() + 0x16F241C))(this, repel);
	}
	template <typename T = uintptr_t> T SetThroughCount(int32_t throughCount) {
		return ((T (*)(DamageInfo*, int32_t))(Il2CppBase() + 0x16F2424))(this, throughCount);
	}
	template <typename T = uintptr_t> T SetCamp(int32_t camp) {
		return ((T (*)(DamageInfo*, int32_t))(Il2CppBase() + 0x16F242C))(this, camp);
	}

};

}
