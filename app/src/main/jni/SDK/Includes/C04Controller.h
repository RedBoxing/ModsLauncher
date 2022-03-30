#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C04Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C04Controller"));
	}

	template <typename T = uintptr_t> T& trail() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& trail_color() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = bool> T& in_skill_effect() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = int32_t> T& _skill0AtkCount() {
		return *(T*)((uintptr_t)this + 0x304);
	}
	template <typename T = float> T& _skill0CutTime() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = int32_t> T& combo() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = uintptr_t> T& sword_obj() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& sword_obj_opera() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& skill2_effect_anims() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = uintptr_t> T& skillEffectObj() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = uintptr_t> T& skillEffectAnimator() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = uintptr_t> T& body_tf() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = uintptr_t> T& normal_color_mat() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = uintptr_t> T& the_skill_effect() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = int32_t> T& phantomHpRatio() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = int32_t> T& phantomsIndex() {
		return *(T*)((uintptr_t)this + 0x354);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& phantoms() {
		return *(T*)((uintptr_t)this + 0x358);
	}
	template <typename T = int32_t> T& call_phantoms_count() {
		return *(T*)((uintptr_t)this + 0x360);
	}

	template <typename T = bool> T get_hasCut() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E04FC0))(this);
	}
	template <typename T = int32_t> T get_Skill0AtkCountMax() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E05048))(this);
	}
	template <typename T = bool> T get_Skill0CanCut() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E050A8))(this);
	}
	template <typename T = bool> T get_Skill0CanCombo() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E0513C))(this);
	}
	template <typename T = bool> T get_is_opera() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E051C0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E05230))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E052F0))(this);
	}
	template <typename T = void> T SetUpChar() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E0537C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E05858))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E058DC))(this);
	}
	template <typename T = void> T ForceDesotrySkillObj() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E05948))(this);
	}
	template <typename T = void> T AutoLock() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E05AF8))(this);
	}
	template <typename T = void> T ShowTrail(bool show) {
		return ((T (*)(C04Controller*, bool))(Il2CppBase() + 0x1E061AC))(this, show);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E062A4))(this);
	}
	template <typename T = void> T RoleSkill0() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E06348))(this);
	}
	template <typename T = void> T RoleSkill1() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E06898))(this);
	}
	template <typename T = uintptr_t> T CreatePhantom() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E08368))(this);
	}
	template <typename T = void> T RoleSkill2() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E06C10))(this);
	}
	template <typename T = void> static T BulletStrength(uintptr_t bulletGo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E08460))(0, bulletGo);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E0870C))(this);
	}
	template <typename T = void> T EndSkillEffect() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E087A4))(this);
	}
	template <typename T = void> T ShowSkillEffect() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E08A7C))(this);
	}
	template <typename T = void> T HideSkillEffect() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E08950))(this);
	}
	template <typename T = void> T RoleAtk(bool value) {
		return ((T (*)(C04Controller*, bool))(Il2CppBase() + 0x1E08C00))(this, value);
	}
	template <typename T = void> T KillSomeOne(uintptr_t other) {
		return ((T (*)(C04Controller*, uintptr_t))(Il2CppBase() + 0x1E09068))(this, other);
	}
	template <typename T = void> T AtkCut(int32_t atk) {
		return ((T (*)(C04Controller*, int32_t))(Il2CppBase() + 0x1E05D00))(this, atk);
	}
	template <typename T = void> T ResetCombo() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E0918C))(this);
	}
	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E091EC))(this);
	}
	template <typename T = uintptr_t> T GetSkillClip(int32_t skinIdx) {
		return ((T (*)(C04Controller*, int32_t))(Il2CppBase() + 0x1E0571C))(this, skinIdx);
	}
	template <typename T = void> T iFixBaseProxy_SetUpChar() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E092EC))(this);
	}
	template <typename T = void> T iFixBaseProxy_ForceDesotrySkillObj() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E092F4))(this);
	}
	template <typename T = void> T iFixBaseProxy_AutoLock() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E092FC))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E09304))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E0930C))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleAtk(bool P0) {
		return ((T (*)(C04Controller*, bool))(Il2CppBase() + 0x1E09314))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_KillSomeOne(uintptr_t P0) {
		return ((T (*)(C04Controller*, uintptr_t))(Il2CppBase() + 0x1E09320))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C04Controller*))(Il2CppBase() + 0x1E09328))(this);
	}

};

}
