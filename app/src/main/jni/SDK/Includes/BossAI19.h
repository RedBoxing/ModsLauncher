#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI19
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI19"));
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
	template <typename T = uintptr_t> T& bullet07() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& bullet08() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& bullet09() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& bullet10() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = float> T& big_egg_offset_y() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = int32_t> T& call_egg_count() {
		return *(T*)((uintptr_t)this + 0x314);
	}
	template <typename T = uintptr_t> T& point_1() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = uintptr_t> T& back_point() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bullet_list() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& enemy_list() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& angry_enemy_list() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& egg_dic() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = int32_t> T& atk_fire_ball_count() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = Il2CppVector3> T& tmp_pos() {
		return *(T*)((uintptr_t)this + 0x34C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x2954660))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x2954AE8))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x2954B58))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI19*, int32_t))(Il2CppBase() + 0x2954C20))(this, index);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x2954D04))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI19*, int32_t, uintptr_t))(Il2CppBase() + 0x2955080))(this, damage, source_object);
	}
	template <typename T = void> T ShowDeadAnimation() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x29551FC))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x2955320))(this);
	}
	template <typename T = void> T Dead(uintptr_t source_object, bool sync) {
		return ((T (*)(BossAI19*, uintptr_t, bool))(Il2CppBase() + 0x2955380))(this, source_object, sync);
	}
	template <typename T = uintptr_t> T MoveToTarget() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x295526C))(this);
	}
	template <typename T = void> T EndMoveToTarget() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x295545C))(this);
	}
	template <typename T = void> T UpdateEggDic() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x29555AC))(this);
	}
	template <typename T = void> T AddCallEgg(uintptr_t obj, uintptr_t rge_ctrl) {
		return ((T (*)(BossAI19*, uintptr_t, uintptr_t))(Il2CppBase() + 0x29558F8))(this, obj, rge_ctrl);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x2955A00))(this);
	}
	template <typename T = void> T StartAtk01() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x295627C))(this);
	}
	template <typename T = void> T EndAtk01() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x2956374))(this);
	}
	template <typename T = uintptr_t> T GetRandomBullet() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x2956120))(this);
	}
	template <typename T = void> T SpawnFireBall(Il2CppVector3 spawn_pos) {
		return ((T (*)(BossAI19*, Il2CppVector3))(Il2CppBase() + 0x29563E4))(this, spawn_pos);
	}
	template <typename T = void> T CreateFireBall() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x2956484))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x2956830))(this);
	}
	template <typename T = uintptr_t> T CreatingBullet() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x29569B4))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x2956A94))(this);
	}
	template <typename T = void> T EndAtk02() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x2956DE4))(this);
	}
	template <typename T = void> T TrunWeaponLock() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x2956E94))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x2956F4C))(this);
	}
	template <typename T = void> T EndAtk03() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x2956FA8))(this);
	}
	template <typename T = void> T InAtk04() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x2957100))(this);
	}
	template <typename T = void> T EndAtk04() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x29571F4))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x295739C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x29573A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI19*, int32_t))(Il2CppBase() + 0x29573AC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x29573B4))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI19*, int32_t, uintptr_t))(Il2CppBase() + 0x29573BC))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ShowDeadAnimation() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x29573C4))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(BossAI19*))(Il2CppBase() + 0x29573CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dead(uintptr_t P0, bool P1) {
		return ((T (*)(BossAI19*, uintptr_t, bool))(Il2CppBase() + 0x29573D4))(this, P0, P1);
	}

};

}
