#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C11Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C11Controller"));
	}

	template <typename T = uintptr_t> T& skill_obj() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& wingAnimator() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& feather_particle() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& backTF() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> T& shadowBallRoot() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& _skill3BodyEffect() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = uintptr_t> T& _skill3Pointer() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = uintptr_t> T& _shadowMaterial() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = uintptr_t> T& _normalMaterial() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = bool> T& shadowMode() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = float> T& _shadowTimer() {
		return *(T*)((uintptr_t)this + 0x33C);
	}
	template <typename T = float> T& shadowInterval() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = float> T& lightInterval() {
		return *(T*)((uintptr_t)this + 0x344);
	}

	template <typename T = bool> T get_is_master() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F02C64))(this);
	}
	template <typename T = bool> T get_is_master2() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F02CD4))(this);
	}
	template <typename T = bool> T get_is_opera() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F02D44))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F02DB4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F02EC8))(this);
	}
	template <typename T = void> T SetUpChar() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F03298))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F035F4))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F03678))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F038D0))(this);
	}
	template <typename T = void> T RoleSkill0() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F03974))(this);
	}
	template <typename T = void> T RoleSkill1() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F04218))(this);
	}
	template <typename T = uintptr_t> T get_shadowMaterial() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F051B0))(this);
	}
	template <typename T = uintptr_t> T get_normalMaterial() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F0528C))(this);
	}
	template <typename T = void> T RoleSkill2() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F050F0))(this);
	}
	template <typename T = void> T ShadowMode() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F05368))(this);
	}
	template <typename T = void> T NormalMode() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F06430))(this);
	}
	template <typename T = int32_t> T get_maxBallCount() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F05B88))(this);
	}
	template <typename T = void> T FixedUpdateShadowBall() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F036EC))(this);
	}
	template <typename T = void> T CreateShadowBall(bool ignoreMaxCount) {
		return ((T (*)(C11Controller*, bool))(Il2CppBase() + 0x1F05C24))(this, ignoreMaxCount);
	}
	template <typename T = void> T EndSkillEffect() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F06BDC))(this);
	}
	template <typename T = void> T CloseWing() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F030E4))(this);
	}
	template <typename T = void> T DeadChild() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F06C3C))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F06E00))(this);
	}
	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F06EB0))(this);
	}
	template <typename T = void> T DoReborn(bool uiReborn) {
		return ((T (*)(C11Controller*, bool))(Il2CppBase() + 0x1F06F10))(this, uiReborn);
	}
	template <typename T = void> T OnBuffChanged(uintptr_t buff, bool isGet) {
		return ((T (*)(C11Controller*, uintptr_t, bool))(Il2CppBase() + 0x1F0707C))(this, buff, isGet);
	}
	template <typename T = void> T CreateShadowBallb__37_0() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F07240))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpChar() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F07308))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F07310))(this);
	}
	template <typename T = void> T iFixBaseProxy_DeadChild() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F07318))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F07320))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C11Controller*))(Il2CppBase() + 0x1F07328))(this);
	}
	template <typename T = void> T iFixBaseProxy_DoReborn(bool P0) {
		return ((T (*)(C11Controller*, bool))(Il2CppBase() + 0x1F07330))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnBuffChanged(uintptr_t P0, bool P1) {
		return ((T (*)(C11Controller*, uintptr_t, bool))(Il2CppBase() + 0x1F0733C))(this, P0, P1);
	}

};

}
