#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI06
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI06"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& ball_childs() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = uintptr_t> T& ball_obj() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& bullet02() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = uintptr_t> T& bullet03() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& bullet04() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = uintptr_t> T& angry_body() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& angry_circle() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& angry_child1() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& angry_child2() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> T& body_dead() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& ball_group() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = int32_t> T& atk2_value() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = float> T& atk2_invoke_time() {
		return *(T*)((uintptr_t)this + 0x324);
	}
	template <typename T = bool> T& child_infree() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = bool> T& atk2_shooting() {
		return *(T*)((uintptr_t)this + 0x329);
	}
	template <typename T = bool> T& atk3_shooting() {
		return *(T*)((uintptr_t)this + 0x32A);
	}
	template <typename T = bool> T& ball_group_rotation() {
		return *(T*)((uintptr_t)this + 0x32B);
	}
	template <typename T = uintptr_t> T& _attack1Pattern() {
		return *(T*)((uintptr_t)this + 0x330);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E97E7C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E981BC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E985F4))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E986D8))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E98978))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E989E8))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI06*, int32_t))(Il2CppBase() + 0x2E98B34))(this, index);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E991D0))(this);
	}
	template <typename T = void> T ForceFixedRotation() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E99564))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI06*, int32_t, uintptr_t))(Il2CppBase() + 0x2E9964C))(this, damage, source_object);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E997C8))(this);
	}
	template <typename T = void> T StartAtk01() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E98C08))(this);
	}
	template <typename T = void> T StartAtk02() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E98DD8))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E99F98))(this);
	}
	template <typename T = void> T ChildsCreateBullet0() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9A3B0))(this);
	}
	template <typename T = void> T ChildsCreateBullet1() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9A4EC))(this);
	}
	template <typename T = void> T ChildsCreateBullet2() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9A628))(this);
	}
	template <typename T = void> T EndAtk02() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9A864))(this);
	}
	template <typename T = void> T StartAtk03() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E98FC8))(this);
	}
	template <typename T = void> T EndAtk03() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9AB4C))(this);
	}
	template <typename T = void> T Atk1() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E99A48))(this);
	}
	template <typename T = void> T Attack1CreateBullet(int32_t index, float angle) {
		return ((T (*)(BossAI06*, int32_t, float))(Il2CppBase() + 0x2E9AD30))(this, index, angle);
	}
	template <typename T = void> T Atk2() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E99B44))(this);
	}
	template <typename T = void> T Atk3() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E99E3C))(this);
	}
	template <typename T = void> T Atk3CreateBullet() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9AFC8))(this);
	}
	template <typename T = void> T EndAtk3() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9B348))(this);
	}
	template <typename T = void> T Child1CreateBullet() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9A708))(this);
	}
	template <typename T = void> T Child2CreateBullet() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9B3A8))(this);
	}
	template <typename T = void> T Child3CreateBullet() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9B448))(this);
	}
	template <typename T = void> T Child4CreateBullet() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9B4E8))(this);
	}
	template <typename T = void> T Child5CreateBullet() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9B588))(this);
	}
	template <typename T = void> T BossAngry() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9B628))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9BE14))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9BE1C))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9BE24))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9BE2C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9BE34))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI06*, int32_t))(Il2CppBase() + 0x2E9BE3C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9BE44))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI06*, int32_t, uintptr_t))(Il2CppBase() + 0x2E9BE4C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9BE54))(this);
	}
	template <typename T = void> T iFixBaseProxy_BossAngry() {
		return ((T (*)(BossAI06*))(Il2CppBase() + 0x2E9BE5C))(this);
	}

};

}
