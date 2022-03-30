#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C01Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C01Controller"));
	}

	template <typename T = uintptr_t> T& hand2() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& hand3() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = void*> T& onKnightSkillStart() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& onKnightSkillEnd() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> T& onDualWieldEnd() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = float> T& canCreateCount() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = float> T& bulletAddCount() {
		return *(T*)((uintptr_t)this + 0x31C);
	}
	template <typename T = uintptr_t> T& _skillUpdateCounter() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = int32_t> static T& energyRescueCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T add_onKnightSkillStart(void* value) {
		return ((T (*)(C01Controller*, void*))(Il2CppBase() + 0x1DF7284))(this, value);
	}
	template <typename T = void> T remove_onKnightSkillStart(void* value) {
		return ((T (*)(C01Controller*, void*))(Il2CppBase() + 0x1DF7374))(this, value);
	}
	template <typename T = void> T add_onKnightSkillEnd(uintptr_t value) {
		return ((T (*)(C01Controller*, uintptr_t))(Il2CppBase() + 0x1DF7464))(this, value);
	}
	template <typename T = void> T remove_onKnightSkillEnd(uintptr_t value) {
		return ((T (*)(C01Controller*, uintptr_t))(Il2CppBase() + 0x1DF7554))(this, value);
	}
	template <typename T = bool> T get_doubleHand() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DF7644))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DF76BC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DF77F4))(this);
	}
	template <typename T = void> T SetUpChar() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DF7898))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DF79D0))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DF7B4C))(this);
	}
	template <typename T = void> T AutoLock() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DF7BE4))(this);
	}
	template <typename T = void> T SwitchWeapon() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DF7DF8))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DF7E84))(this);
	}
	template <typename T = uintptr_t> T GetSkillEffectBySkinIndex(int32_t skinIdx) {
		return ((T (*)(C01Controller*, int32_t))(Il2CppBase() + 0x1DF8C68))(this, skinIdx);
	}
	template <typename T = uintptr_t> T GetAudioClipBySkinIndex(int32_t skinIdx) {
		return ((T (*)(C01Controller*, int32_t))(Il2CppBase() + 0x1DF8BB4))(this, skinIdx);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DF8DB4))(this);
	}
	template <typename T = void> T RoleAtk(bool value) {
		return ((T (*)(C01Controller*, bool))(Il2CppBase() + 0x1DF96EC))(this, value);
	}
	template <typename T = void> T BtnSpecialClick(bool isDown, uintptr_t btnType) {
		return ((T (*)(C01Controller*, bool, uintptr_t))(Il2CppBase() + 0x1DF9CCC))(this, isDown, btnType);
	}
	template <typename T = uintptr_t> T DelaySpecial(int32_t handIndex, bool isDown) {
		return ((T (*)(C01Controller*, int32_t, bool))(Il2CppBase() + 0x1DF9DB0))(this, handIndex, isDown);
	}
	template <typename T = void> T ChaosBulletCreated(uintptr_t bullet) {
		return ((T (*)(C01Controller*, uintptr_t))(Il2CppBase() + 0x1DF9EDC))(this, bullet);
	}
	template <typename T = void> T DeadChild() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DFA38C))(this);
	}
	template <typename T = void> T KillSomeOne(uintptr_t other) {
		return ((T (*)(C01Controller*, uintptr_t))(Il2CppBase() + 0x1DFA504))(this, other);
	}
	template <typename T = void> T OnKillSomeOneInSkill() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DFA588))(this);
	}
	template <typename T = void> T Hand2Atk() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DFA724))(this);
	}
	template <typename T = void> T Hand2AtkStop() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DF95FC))(this);
	}
	template <typename T = void> T Hand3Atk() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DFA79C))(this);
	}
	template <typename T = void> T Hand3AtkStop() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DF9674))(this);
	}
	template <typename T = void> T Dizzy(float the_time) {
		return ((T (*)(C01Controller*, float))(Il2CppBase() + 0x1DFA814))(this, the_time);
	}
	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DFA8E0))(this);
	}
	template <typename T = uintptr_t> T DropWeapon(bool autoSwitchWeapon) {
		return ((T (*)(C01Controller*, bool))(Il2CppBase() + 0x1DFA940))(this, autoSwitchWeapon);
	}
	template <typename T = uintptr_t> T GetPhatomWeapon(uintptr_t phatomStaff) {
		return ((T (*)(C01Controller*, uintptr_t))(Il2CppBase() + 0x1DFA9E8))(this, phatomStaff);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponsData() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DFABD0))(this);
	}
	template <typename T = void> T OnMount(bool isMount) {
		return ((T (*)(C01Controller*, bool))(Il2CppBase() + 0x1DFAC48))(this, isMount);
	}
	template <typename T = void> T TriggerItem() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DFACF4))(this);
	}
	template <typename T = void> T OnSkillChanged() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DFAEB8))(this);
	}
	template <typename T = void> T DoSkinChanged(int32_t skinIndex) {
		return ((T (*)(C01Controller*, int32_t))(Il2CppBase() + 0x1DFAFA4))(this, skinIndex);
	}
	template <typename T = bool> T WeaponOnHands(uintptr_t weapon) {
		return ((T (*)(C01Controller*, uintptr_t))(Il2CppBase() + 0x1DFB0A8))(this, weapon);
	}
	template <typename T = void> T SkillUpdate() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DF7A64))(this);
	}
	template <typename T = uintptr_t> T GetHand(int32_t idx) {
		return ((T (*)(C01Controller*, int32_t))(Il2CppBase() + 0x1DFB2A0))(this, idx);
	}
	template <typename T = void> T iFixBaseProxy_SetUpChar() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DFB3E8))(this);
	}
	template <typename T = void> T iFixBaseProxy_AutoLock() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DFB3F0))(this);
	}
	template <typename T = void> T iFixBaseProxy_SwitchWeapon() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DFB3F8))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DFB400))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DFB408))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleAtk(bool P0) {
		return ((T (*)(C01Controller*, bool))(Il2CppBase() + 0x1DFB410))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_BtnSpecialClick(bool P0, uintptr_t P1) {
		return ((T (*)(C01Controller*, bool, uintptr_t))(Il2CppBase() + 0x1DFB41C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_DeadChild() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DFB428))(this);
	}
	template <typename T = void> T iFixBaseProxy_KillSomeOne(uintptr_t P0) {
		return ((T (*)(C01Controller*, uintptr_t))(Il2CppBase() + 0x1DFB430))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0) {
		return ((T (*)(C01Controller*, float))(Il2CppBase() + 0x1DFB438))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DFB440))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_DropWeapon(bool P0) {
		return ((T (*)(C01Controller*, bool))(Il2CppBase() + 0x1DFB448))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetPhatomWeapon(uintptr_t P0) {
		return ((T (*)(C01Controller*, uintptr_t))(Il2CppBase() + 0x1DFB454))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T iFixBaseProxy_GetWeaponsData() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DFB45C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnMount(bool P0) {
		return ((T (*)(C01Controller*, bool))(Il2CppBase() + 0x1DFB464))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_TriggerItem() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DFB470))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSkillChanged() {
		return ((T (*)(C01Controller*))(Il2CppBase() + 0x1DFB478))(this);
	}
	template <typename T = void> T iFixBaseProxy_DoSkinChanged(int32_t P0) {
		return ((T (*)(C01Controller*, int32_t))(Il2CppBase() + 0x1DFB480))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHand(int32_t P0) {
		return ((T (*)(C01Controller*, int32_t))(Il2CppBase() + 0x1DFB488))(this, P0);
	}

};

}
