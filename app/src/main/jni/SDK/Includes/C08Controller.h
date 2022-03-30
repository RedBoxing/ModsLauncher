#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C08Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C08Controller"));
	}

	template <typename T = int32_t> T& shield_value() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = int32_t> T& shield_rot_speed() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = uintptr_t> T& shield_tf() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& shield_rotate_root() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skill1Scale() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = float> T& _skill0InitMaxTime() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = float> T& _skill1InitMaxTime() {
		return *(T*)((uintptr_t)this + 0x314);
	}
	template <typename T = uintptr_t> T& jumpShield() {
		return *(T*)((uintptr_t)this + 0x318);
	}

	template <typename T = bool> T get_is_master2() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EEE340))(this);
	}
	template <typename T = bool> T get_is_opera() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EEE3B0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EEE420))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EEE50C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EEE610))(this);
	}
	template <typename T = void> T ChangeToBreakShieldImage() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EEE714))(this);
	}
	template <typename T = void> T ChangeToOriginShieldImage() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EEE814))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EEE914))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EEE9B4))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EEEC60))(this);
	}
	template <typename T = void> T UpdateShadowLock() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EEECCC))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(C08Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1EEEF18))(this, damage, source_object);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EEF144))(this);
	}
	template <typename T = void> T RoleSkill0() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EEF1E8))(this);
	}
	template <typename T = void> T RoleSkill1() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EEF774))(this);
	}
	template <typename T = void> T RoleSkill2() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EEFD7C))(this);
	}
	template <typename T = void> T RestoreArmorAndEnergy(uintptr_t ctrl, int32_t armor, int32_t energy) {
		return ((T (*)(C08Controller*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1EF0AB0))(this, ctrl, armor, energy);
	}
	template <typename T = void> T OnShieldDestroy(bool isAttack) {
		return ((T (*)(C08Controller*, bool))(Il2CppBase() + 0x1EF0CDC))(this, isAttack);
	}
	template <typename T = void> T OnShieldReturn(float flyTime) {
		return ((T (*)(C08Controller*, float))(Il2CppBase() + 0x1EF0E7C))(this, flyTime);
	}
	template <typename T = bool> T get_isShieldShow() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EEEE3C))(this);
	}
	template <typename T = void> T set_isShieldShow(bool value) {
		return ((T (*)(C08Controller*, bool))(Il2CppBase() + 0x1EF0940))(this, value);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EF11F8))(this);
	}
	template <typename T = void> T RoleSkillEnd0() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EF1290))(this);
	}
	template <typename T = void> T TryCloseShield() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EF1620))(this);
	}
	template <typename T = void> T RoleSkillEnd1() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EF13C4))(this);
	}
	template <typename T = void> T OnMount(bool isMount) {
		return ((T (*)(C08Controller*, bool))(Il2CppBase() + 0x1EF1738))(this, isMount);
	}
	template <typename T = void> T OnSkillChanged() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EF1870))(this);
	}
	template <typename T = void> T DeadChild() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EF1AE8))(this);
	}
	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EF1B7C))(this);
	}
	template <typename T = void> T RoleSkillEnd1b__35_0() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EF1C50))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEnable() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EF1CE8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDisable() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EF1CF0))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateShadowLock() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EF1CF8))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(C08Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1EF1D00))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EF1D08))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EF1D10))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnMount(bool P0) {
		return ((T (*)(C08Controller*, bool))(Il2CppBase() + 0x1EF1D18))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnSkillChanged() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EF1D24))(this);
	}
	template <typename T = void> T iFixBaseProxy_DeadChild() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EF1D2C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C08Controller*))(Il2CppBase() + 0x1EF1D34))(this);
	}

};

}
