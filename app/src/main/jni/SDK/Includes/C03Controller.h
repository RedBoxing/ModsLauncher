#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C03Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C03Controller"));
	}

	template <typename T = uintptr_t> T& thuner_anim() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& master_clip_hit_male() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& staff_sprites() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& staff_sr() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> T& _circleRayCaster() {
		return *(T*)((uintptr_t)this + 0x310);
	}

	template <typename T = bool> T get_is_master2() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E023D8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E02448))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E025F8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E02684))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E02708))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(C03Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1E02774))(this, damage, source_object);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E02874))(this);
	}
	template <typename T = void> T RoleSkill0() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E02918))(this);
	}
	template <typename T = void> T RoleSkill1() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E02DB0))(this);
	}
	template <typename T = uintptr_t> T CreatingIceWall(int32_t count, int32_t length) {
		return ((T (*)(C03Controller*, int32_t, int32_t))(Il2CppBase() + 0x1E036CC))(this, count, length);
	}
	template <typename T = void> T RoleSkill2() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E030B4))(this);
	}
	template <typename T = void> T Skill1ExtraInstantiateBuff(uintptr_t buffObject) {
		return ((T (*)(C03Controller*, uintptr_t))(Il2CppBase() + 0x1E037F4))(this, buffObject);
	}
	template <typename T = void> T CreateTunder() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E03954))(this);
	}
	template <typename T = int32_t> T get_Skill0Damage() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E03D68))(this);
	}
	template <typename T = int32_t> T get_Skill0ExtraJumpCount() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E03DF4))(this);
	}
	template <typename T = void> T Skill0Attack(uintptr_t target) {
		return ((T (*)(C03Controller*, uintptr_t))(Il2CppBase() + 0x1E03A68))(this, target);
	}
	template <typename T = void> T Skill0ExtraInstantiateBuff(uintptr_t obj) {
		return ((T (*)(C03Controller*, uintptr_t))(Il2CppBase() + 0x1E03FE4))(this, obj);
	}
	template <typename T = uintptr_t> T get_ThunderPrefab() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E03EB8))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E040E8))(this);
	}
	template <typename T = void> T DeadChild() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E041F8))(this);
	}
	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E04258))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(C03Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1E04320))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E04328))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E04330))(this);
	}
	template <typename T = void> T iFixBaseProxy_DeadChild() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E04338))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C03Controller*))(Il2CppBase() + 0x1E04340))(this);
	}

};

}
