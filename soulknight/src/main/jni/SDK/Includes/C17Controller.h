#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C17Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C17Controller"));
	}

	template <typename T = uintptr_t> T& skill1FadeShader() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = int32_t> static T& FadeShaderFadeRadiusId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FadeShaderSmoothId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& ShaderSaturatorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_funnels() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F45E60))(this);
	}
	template <typename T = uintptr_t> T get_handTaoist() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F45ED4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F45F98))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F45FFC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F46100))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F46184))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F461F0))(this);
	}
	template <typename T = void> T RoleSkill0() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F462D8))(this);
	}
	template <typename T = uintptr_t> T CreatingSword() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F4713C))(this);
	}
	template <typename T = void> T RoleSkill1() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F463A0))(this);
	}
	template <typename T = void> T RoleSkill1Animation(uintptr_t shield, float showTime, float maxTime) {
		return ((T (*)(C17Controller*, uintptr_t, float, float))(Il2CppBase() + 0x1F4721C))(this, shield, showTime, maxTime);
	}
	template <typename T = void> T RoleSkill2() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F469E8))(this);
	}
	template <typename T = uintptr_t> T CreatingLighting() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F473AC))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F4748C))(this);
	}
	template <typename T = void> T RoleSkillEnd1() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F47560))(this);
	}
	template <typename T = void> T RoleSkillEnd2() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F475BC))(this);
	}
	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F476D0))(this);
	}
	template <typename T = void> T DeadChild() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F47730))(this);
	}
	template <typename T = void> T DoReborn(bool uiReborn) {
		return ((T (*)(C17Controller*, bool))(Il2CppBase() + 0x1F477B4))(this, uiReborn);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponsData() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F47850))(this);
	}
	template <typename T = void> T OnMount(bool isMount) {
		return ((T (*)(C17Controller*, bool))(Il2CppBase() + 0x1F47978))(this, isMount);
	}
	template <typename T = void> T OnSkillChanged() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F47A24))(this);
	}
	template <typename T = void> T DoSkinChanged(int32_t skinIndex) {
		return ((T (*)(C17Controller*, int32_t))(Il2CppBase() + 0x1F47B10))(this, skinIndex);
	}
	template <typename T = void> T OnBuffChanged(uintptr_t buff, bool isGet) {
		return ((T (*)(C17Controller*, uintptr_t, bool))(Il2CppBase() + 0x1F47C14))(this, buff, isGet);
	}
	template <typename T = void> T DropWeaponOnBack(uintptr_t weapon) {
		return ((T (*)(C17Controller*, uintptr_t))(Il2CppBase() + 0x1F47D2C))(this, weapon);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F48024))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F4802C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F48034))(this);
	}
	template <typename T = void> T iFixBaseProxy_DeadChild() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F4803C))(this);
	}
	template <typename T = void> T iFixBaseProxy_DoReborn(bool P0) {
		return ((T (*)(C17Controller*, bool))(Il2CppBase() + 0x1F48044))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T iFixBaseProxy_GetWeaponsData() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F48050))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnMount(bool P0) {
		return ((T (*)(C17Controller*, bool))(Il2CppBase() + 0x1F48058))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnSkillChanged() {
		return ((T (*)(C17Controller*))(Il2CppBase() + 0x1F48064))(this);
	}
	template <typename T = void> T iFixBaseProxy_DoSkinChanged(int32_t P0) {
		return ((T (*)(C17Controller*, int32_t))(Il2CppBase() + 0x1F4806C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnBuffChanged(uintptr_t P0, bool P1) {
		return ((T (*)(C17Controller*, uintptr_t, bool))(Il2CppBase() + 0x1F48074))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_DropWeaponOnBack(uintptr_t P0) {
		return ((T (*)(C17Controller*, uintptr_t))(Il2CppBase() + 0x1F48080))(this, P0);
	}

};

}
