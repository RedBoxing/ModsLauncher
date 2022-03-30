#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletGas
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletGas"));
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
	template <typename T = bool> T& hit_player() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& hit_enemy() {
		return *(T*)((uintptr_t)this + 0xC5);
	}
	template <typename T = int32_t> T& duration() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& stopParticleInAdvance() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& hit_invert() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& clip() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& volume() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& speedDownTime() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _circleCollider() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BulletGas*))(Il2CppBase() + 0x2376808))(this);
	}
	template <typename T = void> T FlushScale() {
		return ((T (*)(BulletGas*))(Il2CppBase() + 0x23768A8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BulletGas*))(Il2CppBase() + 0x2376AB0))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletGas*))(Il2CppBase() + 0x2376E64))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BulletGas*, uintptr_t))(Il2CppBase() + 0x2376C10))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BulletGas*))(Il2CppBase() + 0x2377080))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(BulletGas*, uintptr_t, uintptr_t))(Il2CppBase() + 0x23770E0))(this, bulletInfo, damageInfo);
	}
	template <typename T = bool> T IsImmune() {
		return ((T (*)(BulletGas*))(Il2CppBase() + 0x23771E8))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BulletGas*))(Il2CppBase() + 0x23772C0))(this);
	}
	template <typename T = void> T TurnCanHit() {
		return ((T (*)(BulletGas*))(Il2CppBase() + 0x2376F18))(this);
	}
	template <typename T = void> T GasEnd() {
		return ((T (*)(BulletGas*))(Il2CppBase() + 0x2377F38))(this);
	}
	template <typename T = void> T StopParticle() {
		return ((T (*)(BulletGas*))(Il2CppBase() + 0x2378024))(this);
	}
	template <typename T = void> T DestroySelf(float totalTime) {
		return ((T (*)(BulletGas*, float))(Il2CppBase() + 0x2376FB8))(this, totalTime);
	}
	template <typename T = uintptr_t> T Destroying(float totalTime) {
		return ((T (*)(BulletGas*, float))(Il2CppBase() + 0x237812C))(this, totalTime);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BulletGas*, uintptr_t, uintptr_t))(Il2CppBase() + 0x23782C8))(this, P0, P1);
	}

};

}
