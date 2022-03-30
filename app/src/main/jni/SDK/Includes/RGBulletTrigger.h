#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBulletTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBulletTrigger"));
	}

	template <typename T = bool> T& show_zero_dmg() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& can_through() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = int32_t> T& _through_count() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& rigid2d() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& destory_parent() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& stop_parent() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = uintptr_t> T& onBulletHit() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _bullet() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& makeDamage() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = int32_t> T get_through_count() {
		return ((T (*)(RGBulletTrigger*))(Il2CppBase() + 0x19D2C5C))(this);
	}
	template <typename T = void> T set_through_count(int32_t value) {
		return ((T (*)(RGBulletTrigger*, int32_t))(Il2CppBase() + 0x19D2CBC))(this, value);
	}
	template <typename T = uintptr_t> T get_the_bullet() {
		return ((T (*)(RGBulletTrigger*))(Il2CppBase() + 0x19D2D3C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGBulletTrigger*))(Il2CppBase() + 0x19D2EE0))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGBulletTrigger*, uintptr_t))(Il2CppBase() + 0x19D2F58))(this, other);
	}
	template <typename T = void> T CheckRestoreEnergy(uintptr_t other) {
		return ((T (*)(RGBulletTrigger*, uintptr_t))(Il2CppBase() + 0x19D48C0))(this, other);
	}
	template <typename T = void> T ReboundBullet(int32_t reboundCamp, uintptr_t source, uintptr_t other) {
		return ((T (*)(RGBulletTrigger*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x19D4AE8))(this, reboundCamp, source, other);
	}
	template <typename T = void> T ReboundBullet_1(int32_t sourceCamp, uintptr_t sourceObject, bool changeDirection) {
		return ((T (*)(RGBulletTrigger*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x19D4FB4))(this, sourceCamp, sourceObject, changeDirection);
	}
	template <typename T = void> T SetInfo(int32_t damage, int32_t camp, bool can_through, int32_t repel, int32_t critical) {
		return ((T (*)(RGBulletTrigger*, int32_t, int32_t, bool, int32_t, int32_t))(Il2CppBase() + 0x19D5144))(this, damage, camp, can_through, repel, critical);
	}
	template <typename T = void> T SetInfo_1(int32_t damage, int32_t camp, int32_t through_count, int32_t repel, int32_t critical) {
		return ((T (*)(RGBulletTrigger*, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x19D5258))(this, damage, camp, through_count, repel, critical);
	}
	template <typename T = void> T SetInfo_2(uintptr_t info) {
		return ((T (*)(RGBulletTrigger*, uintptr_t))(Il2CppBase() + 0x19D5334))(this, info);
	}
	template <typename T = void> T AddAttribuet(uintptr_t property, float value) {
		return ((T (*)(RGBulletTrigger*, uintptr_t, float))(Il2CppBase() + 0x19CEDC8))(this, property, value);
	}
	template <typename T = void> T AddDamage(int32_t value) {
		return ((T (*)(RGBulletTrigger*, int32_t))(Il2CppBase() + 0x19D5628))(this, value);
	}
	template <typename T = void> T ResetCriticFactor() {
		return ((T (*)(RGBulletTrigger*))(Il2CppBase() + 0x19D5430))(this);
	}
	template <typename T = int32_t> T GetFinalDamage() {
		return ((T (*)(RGBulletTrigger*))(Il2CppBase() + 0x19D46B0))(this);
	}
	template <typename T = float> T GetDamageFactor() {
		return ((T (*)(RGBulletTrigger*))(Il2CppBase() + 0x19D483C))(this);
	}
	template <typename T = void> T CreateHitEffect(uintptr_t other, bool hasCritic) {
		return ((T (*)(RGBulletTrigger*, uintptr_t, bool))(Il2CppBase() + 0x19D56A4))(this, other, hasCritic);
	}
	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(RGBulletTrigger*, uintptr_t, bool))(Il2CppBase() + 0x19D59E8))(this, other, isCritic);
	}
	template <typename T = void> T CheckDestroyState() {
		return ((T (*)(RGBulletTrigger*))(Il2CppBase() + 0x19D5A60))(this);
	}
	template <typename T = void> T DestroyBullet(uintptr_t other) {
		return ((T (*)(RGBulletTrigger*, uintptr_t))(Il2CppBase() + 0x19D5C18))(this, other);
	}
	template <typename T = void> T ChangeColor(uintptr_t targetColor, uintptr_t hitObject) {
		return ((T (*)(RGBulletTrigger*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19D5EB8))(this, targetColor, hitObject);
	}
	template <typename T = void> T iFixBaseProxy_DestroyBullet(uintptr_t P0) {
		return ((T (*)(RGBulletTrigger*, uintptr_t))(Il2CppBase() + 0x19D6098))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetInfo(uintptr_t P0) {
		return ((T (*)(RGBulletTrigger*, uintptr_t))(Il2CppBase() + 0x19D60A0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_ChangeColor(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RGBulletTrigger*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19D60D4))(this, P0, P1);
	}

};

}
