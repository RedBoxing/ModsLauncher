#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGLaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGLaser"));
	}

	template <typename T = bool> T& setup() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& hit_object() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& end() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& start() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& end_img() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& start_img() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppVector2> T& direction() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& rate() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& repel() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& shoot_max_time() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = bool> T& need_start_end_scale() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& shoot_time() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& speedFactor() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = bool> T& isReflect() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& scale_factor() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& isSplitted() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& effectTriggers() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& _next_laset() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0x138);
	}

	template <typename T = uintptr_t> T get_next_laser() {
		return ((T (*)(RGLaser*))(Il2CppBase() + 0x1B66824))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGLaser*))(Il2CppBase() + 0x1B66E3C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGLaser*))(Il2CppBase() + 0x1B66FF8))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGLaser*))(Il2CppBase() + 0x1B66C78))(this);
	}
	template <typename T = bool> T get_needComsume() {
		return ((T (*)(RGLaser*))(Il2CppBase() + 0x1B67338))(this);
	}
	template <typename T = void> T ShowCollider() {
		return ((T (*)(RGLaser*))(Il2CppBase() + 0x1B673B0))(this);
	}
	template <typename T = void> T HitBox(uintptr_t box) {
		return ((T (*)(RGLaser*, uintptr_t))(Il2CppBase() + 0x1B67AB4))(this, box);
	}
	template <typename T = void> T HitEnemy(uintptr_t currentHitTransform, float extraDamageFactor) {
		return ((T (*)(RGLaser*, uintptr_t, float))(Il2CppBase() + 0x1B67DF8))(this, currentHitTransform, extraDamageFactor);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RGLaser*))(Il2CppBase() + 0x1B68240))(this);
	}
	template <typename T = void> T DoUpdate(uintptr_t lastCollider) {
		return ((T (*)(RGLaser*, uintptr_t))(Il2CppBase() + 0x1B682B8))(this, lastCollider);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(RGLaser*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B69084))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T EndLaser() {
		return ((T (*)(RGLaser*))(Il2CppBase() + 0x1B691A8))(this);
	}
	template <typename T = void> T DestoryLaser() {
		return ((T (*)(RGLaser*))(Il2CppBase() + 0x1B692E8))(this);
	}
	template <typename T = void> T OnHit(uintptr_t enemy) {
		return ((T (*)(RGLaser*, uintptr_t))(Il2CppBase() + 0x1B69430))(this, enemy);
	}
	template <typename T = void> T FlushInfo() {
		return ((T (*)(RGLaser*))(Il2CppBase() + 0x1B694A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RGLaser*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B69620))(this, P0, P1);
	}

};

}
