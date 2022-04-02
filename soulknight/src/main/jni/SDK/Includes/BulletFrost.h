#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletFrost
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletFrost"));
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
	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& damage_radius() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& hit_player() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& hit_enemy() {
		return *(T*)((uintptr_t)this + 0xD1);
	}
	template <typename T = int32_t> T& duration() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& hit_invert() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& hitIndex() {
		return *(T*)((uintptr_t)this + 0xF0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BulletFrost*))(Il2CppBase() + 0x45B4BF0))(this);
	}
	template <typename T = void> T FlushScale() {
		return ((T (*)(BulletFrost*))(Il2CppBase() + 0x45B4C50))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BulletFrost*))(Il2CppBase() + 0x45B4E54))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletFrost*))(Il2CppBase() + 0x45B4F04))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(BulletFrost*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45B4FBC))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BulletFrost*, uintptr_t))(Il2CppBase() + 0x45B50C4))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BulletFrost*))(Il2CppBase() + 0x45B5374))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BulletFrost*))(Il2CppBase() + 0x45B53D4))(this);
	}
	template <typename T = void> T TurnCanHit() {
		return ((T (*)(BulletFrost*))(Il2CppBase() + 0x45B520C))(this);
	}
	template <typename T = void> T GasEnd() {
		return ((T (*)(BulletFrost*))(Il2CppBase() + 0x45B6168))(this);
	}
	template <typename T = void> T DestroySelf(float totalTime) {
		return ((T (*)(BulletFrost*, float))(Il2CppBase() + 0x45B52AC))(this, totalTime);
	}
	template <typename T = uintptr_t> T Destroying(float totalTime) {
		return ((T (*)(BulletFrost*, float))(Il2CppBase() + 0x45B62A0))(this, totalTime);
	}
	template <typename T = void> T EnemyAddBuff(uintptr_t target) {
		return ((T (*)(BulletFrost*, uintptr_t))(Il2CppBase() + 0x45B59EC))(this, target);
	}
	template <typename T = void> T PlayerAddBuff(uintptr_t target) {
		return ((T (*)(BulletFrost*, uintptr_t))(Il2CppBase() + 0x45B5DAC))(this, target);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BulletFrost*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45B6400))(this, P0, P1);
	}

};

}
