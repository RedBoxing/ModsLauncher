#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI15
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI15"));
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
	template <typename T = int32_t> T& atk6_index() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = int32_t> T& ghost_count() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = int32_t> T& spawn_count() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& bulletPoly() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& gravity() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> T& head_point() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& eye_left() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = uintptr_t> T& eye_right() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = uintptr_t> T& mouth_point() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = int32_t> T& layerMask() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = int32_t> T& atk1count() {
		return *(T*)((uintptr_t)this + 0x334);
	}
	template <typename T = bool> T& dashing() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = bool> T& attacked4() {
		return *(T*)((uintptr_t)this + 0x339);
	}

	template <typename T = bool> T get_fade() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x2947C94))(this);
	}
	template <typename T = void> T set_fade(bool value) {
		return ((T (*)(BossAI15*, bool))(Il2CppBase() + 0x2947D38))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x2947E8C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x2948148))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x29484C4))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x2948548))(this);
	}
	template <typename T = void> T SpawnGhost() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x2948648))(this);
	}
	template <typename T = void> T Attack(bool isShowAtk) {
		return ((T (*)(BossAI15*, bool))(Il2CppBase() + 0x2948B90))(this, isShowAtk);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x2948F50))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI15*, int32_t, uintptr_t))(Il2CppBase() + 0x2949288))(this, damage, source_object);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x2949404))(this);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x29495A0))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x2949A8C))(this);
	}
	template <typename T = uintptr_t> T Attakcing02() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x2949AFC))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x2948E48))(this);
	}
	template <typename T = void> T CastPoly() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x2949BDC))(this);
	}
	template <typename T = uintptr_t> T Attacking03() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x2949D98))(this);
	}
	template <typename T = void> T EndAtk03() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x2949E78))(this);
	}
	template <typename T = void> T InAtk04() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x2949F60))(this);
	}
	template <typename T = uintptr_t> T Attacking4() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x2949FD0))(this);
	}
	template <typename T = uintptr_t> T Dashing() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x294A0B0))(this);
	}
	template <typename T = void> T CreateDashBullet() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x294A190))(this);
	}
	template <typename T = void> T InAtk05() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x2948EE0))(this);
	}
	template <typename T = uintptr_t> T ShootingBullet05() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x294A510))(this);
	}
	template <typename T = void> T IntAtkIn() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x294A5F0))(this);
	}
	template <typename T = void> T InAtkOut() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x294A6F8))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x294A80C))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x294A814))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x294A81C))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x294A824))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI15*, int32_t, uintptr_t))(Il2CppBase() + 0x294A82C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(BossAI15*))(Il2CppBase() + 0x294A834))(this);
	}

};

}
