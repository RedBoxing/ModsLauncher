#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletFire
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletFire"));
	}

	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& hit_player() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& hit_enemy() {
		return *(T*)((uintptr_t)this + 0xB1);
	}
	template <typename T = float> T& circleCastRadius() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& innerScaler() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& hitInterval() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& can_hit() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& is_end() {
		return *(T*)((uintptr_t)this + 0xD1);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BulletFire*))(Il2CppBase() + 0x45AF8FC))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletFire*))(Il2CppBase() + 0x45AFA70))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BulletFire*, uintptr_t))(Il2CppBase() + 0x45AFB38))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BulletFire*))(Il2CppBase() + 0x45AFF8C))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(BulletFire*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45AFFEC))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BulletFire*))(Il2CppBase() + 0x45B0188))(this);
	}
	template <typename T = void> T TurnCanHit() {
		return ((T (*)(BulletFire*))(Il2CppBase() + 0x45AFE24))(this);
	}
	template <typename T = void> T GasEnd() {
		return ((T (*)(BulletFire*))(Il2CppBase() + 0x45B0818))(this);
	}
	template <typename T = void> T DestroySelf(float totalTime) {
		return ((T (*)(BulletFire*, float))(Il2CppBase() + 0x45AFEC4))(this, totalTime);
	}
	template <typename T = uintptr_t> T Destroying(float totalTime) {
		return ((T (*)(BulletFire*, float))(Il2CppBase() + 0x45B0904))(this, totalTime);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BulletFire*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45B0A90))(this, P0, P1);
	}

};

}
