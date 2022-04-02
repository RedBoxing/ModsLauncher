#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletGasEnhance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletGasEnhance"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& can_hit() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& is_end() {
		return *(T*)((uintptr_t)this + 0xB9);
	}
	template <typename T = bool> T& autoStart() {
		return *(T*)((uintptr_t)this + 0xBA);
	}
	template <typename T = float> T& damage_radius() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& stopParticleInAdvance() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& hit_invert() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& clip() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& volume() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& speedDownTime() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& normal_hit_count() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& normal_hit_increase() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _circleCollider() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& extraDmg() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& buff_time_slot() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppString*> T& gas_id() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& buff1Prefab() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& buff2Prefab() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& buff3Prefab() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& lastTime() {
		return *(T*)((uintptr_t)this + 0x128);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BulletGasEnhance*))(Il2CppBase() + 0x237A804))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BulletGasEnhance*))(Il2CppBase() + 0x237AB08))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BulletGasEnhance*))(Il2CppBase() + 0x237AE10))(this);
	}
	template <typename T = bool> T IsImmune() {
		return ((T (*)(BulletGasEnhance*))(Il2CppBase() + 0x237B788))(this);
	}
	template <typename T = void> T DoNormalHurt(uintptr_t enemy) {
		return ((T (*)(BulletGasEnhance*, uintptr_t))(Il2CppBase() + 0x237B1BC))(this, enemy);
	}
	template <typename T = void> T AddBuff(uintptr_t buffPrefab, uintptr_t parent, float left_time) {
		return ((T (*)(BulletGasEnhance*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x237B860))(this, buffPrefab, parent, left_time);
	}
	template <typename T = void> T CheckBuff(uintptr_t enemy) {
		return ((T (*)(BulletGasEnhance*, uintptr_t))(Il2CppBase() + 0x237B328))(this, enemy);
	}
	template <typename T = void> T FlushScale() {
		return ((T (*)(BulletGasEnhance*))(Il2CppBase() + 0x237A900))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletGasEnhance*))(Il2CppBase() + 0x237BAE8))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BulletGasEnhance*, uintptr_t))(Il2CppBase() + 0x237AC68))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BulletGasEnhance*))(Il2CppBase() + 0x237BD04))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(BulletGasEnhance*, uintptr_t, uintptr_t))(Il2CppBase() + 0x237BD64))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T TurnCanHit() {
		return ((T (*)(BulletGasEnhance*))(Il2CppBase() + 0x237BB9C))(this);
	}
	template <typename T = void> T GasEnd() {
		return ((T (*)(BulletGasEnhance*))(Il2CppBase() + 0x237BE6C))(this);
	}
	template <typename T = void> T StopParticle() {
		return ((T (*)(BulletGasEnhance*))(Il2CppBase() + 0x237BF58))(this);
	}
	template <typename T = void> T DestroySelf(float totalTime) {
		return ((T (*)(BulletGasEnhance*, float))(Il2CppBase() + 0x237BC3C))(this, totalTime);
	}
	template <typename T = uintptr_t> T Destroying(float totalTime) {
		return ((T (*)(BulletGasEnhance*, float))(Il2CppBase() + 0x237C060))(this, totalTime);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BulletGasEnhance*, uintptr_t, uintptr_t))(Il2CppBase() + 0x237C200))(this, P0, P1);
	}

};

}
