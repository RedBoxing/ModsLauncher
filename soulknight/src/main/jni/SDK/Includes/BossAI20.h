#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI20
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI20"));
	}

	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = uintptr_t> T& bullet02() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = uintptr_t> T& bullet03() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& bullet04() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = uintptr_t> T& bullet05() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& bullet06() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = uintptr_t> T& slime_proto() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& reload_clip() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& the_reload_clip() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = int32_t> T& max_count_slim() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = bool> T& has_hurt() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& slime_dic() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = int32_t> T& hurt_count() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = uintptr_t> T& img_tf() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = uintptr_t> T& point1_tf() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = uintptr_t> T& bottom_tf() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = float> T& angle() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = int32_t> T& min() {
		return *(T*)((uintptr_t)this + 0x33C);
	}
	template <typename T = int32_t> T& max() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = int32_t> T& increase() {
		return *(T*)((uintptr_t)this + 0x344);
	}
	template <typename T = float> T& unit_angle() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x34C);
	}
	template <typename T = bool> T& in_atk01() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = float> T& rnd_angle() {
		return *(T*)((uintptr_t)this + 0x354);
	}
	template <typename T = int32_t> T& atk03_count() {
		return *(T*)((uintptr_t)this + 0x358);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x2957F14))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x2958318))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x295842C))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI20*, int32_t))(Il2CppBase() + 0x2958524))(this, index);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x29586A8))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x2958AEC))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI20*, int32_t, uintptr_t))(Il2CppBase() + 0x2958C44))(this, damage, source_object);
	}
	template <typename T = void> T CreateSlime() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x295900C))(this);
	}
	template <typename T = void> T UpdateSlimeDic() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x295932C))(this);
	}
	template <typename T = void> T CreateExplode() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x2958E0C))(this);
	}
	template <typename T = void> T CreateDeadExplode() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x2959640))(this);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x2959898))(this);
	}
	template <typename T = void> T CreateAtk1Bullet() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x29599F4))(this);
	}
	template <typename T = void> T EndAtk1Bullet() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x2959F78))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x295A084))(this);
	}
	template <typename T = void> T IntAtk03() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x295A654))(this);
	}
	template <typename T = void> T CreateAtk3Bullet() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x295A6B4))(this);
	}
	template <typename T = void> T EndAtk03() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x295B204))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x295B33C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x295B344))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI20*, int32_t))(Il2CppBase() + 0x295B34C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x295B354))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(BossAI20*))(Il2CppBase() + 0x295B35C))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI20*, int32_t, uintptr_t))(Il2CppBase() + 0x295B364))(this, P0, P1);
	}

};

}
