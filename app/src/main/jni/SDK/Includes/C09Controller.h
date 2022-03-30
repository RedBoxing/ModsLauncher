#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C09Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C09Controller"));
	}

	template <typename T = uintptr_t> T& anim_vine() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& aim_p() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& aim() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& the_bullet() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = bool> T& switch_axis_mode() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& clip_arrow() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = uintptr_t> T& vine_sr() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = uintptr_t> T& reload_obj() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = uintptr_t> T& bow_sr() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = uintptr_t> T& vine() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = Il2CppString*> T& s10_special_bow_path() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = Il2CppString*> T& s10_special_bow_name() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = uintptr_t> T& the_reload_obj() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = uintptr_t> T& the_arrow_rain_up() {
		return *(T*)((uintptr_t)this + 0x358);
	}
	template <typename T = uintptr_t> T& fairy() {
		return *(T*)((uintptr_t)this + 0x360);
	}
	template <typename T = int32_t> T& fairyIndex() {
		return *(T*)((uintptr_t)this + 0x368);
	}

	template <typename T = bool> T get_is_master() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF1FFC))(this);
	}
	template <typename T = bool> T get_is_boss() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF206C))(this);
	}
	template <typename T = bool> T get_is_master2() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF20DC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF214C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF2338))(this);
	}
	template <typename T = void> T SetUpChar() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF23DC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF261C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF29BC))(this);
	}
	template <typename T = void> T AimUpDate() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF2A44))(this);
	}
	template <typename T = void> T RoleSkillStart() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF2C88))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF3824))(this);
	}
	template <typename T = void> T RoleSkill0() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF38C8))(this);
	}
	template <typename T = void> T RoleSkill1() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF3F5C))(this);
	}
	template <typename T = uintptr_t> T CreatingArrowRain(int32_t count) {
		return ((T (*)(C09Controller*, int32_t))(Il2CppBase() + 0x1EF5C48))(this, count);
	}
	template <typename T = void> T RoleSkill2() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF45BC))(this);
	}
	template <typename T = uintptr_t> T Thundering() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF5D54))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF5E34))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(C09Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1EF6804))(this, damage, source_object);
	}
	template <typename T = void> T PickUpItem(uintptr_t temp_tf, bool fusion, bool showText) {
		return ((T (*)(C09Controller*, uintptr_t, bool, bool))(Il2CppBase() + 0x1EF6A10))(this, temp_tf, fusion, showText);
	}
	template <typename T = void> T SwitchWeapon() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF6AB8))(this);
	}
	template <typename T = void> T DeadChild() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF6B24))(this);
	}
	template <typename T = void> T SetCameraFocus() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF6BA4))(this);
	}
	template <typename T = bool> T CanTriggerItem() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF6CA8))(this);
	}
	template <typename T = void> T RoleAtk(bool value) {
		return ((T (*)(C09Controller*, bool))(Il2CppBase() + 0x1EF6D30))(this, value);
	}
	template <typename T = void> T CreateArrow(uintptr_t skinData) {
		return ((T (*)(C09Controller*, uintptr_t))(Il2CppBase() + 0x1EF5940))(this, skinData);
	}
	template <typename T = uintptr_t> T CreateS10SpecialBow() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF36EC))(this);
	}
	template <typename T = void> T DestroyS10SpecialBow() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF5AF4))(this);
	}
	template <typename T = void> T ArrowShoot() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF6114))(this);
	}
	template <typename T = void> T Skill0ExtraBulletProcess(uintptr_t theBullet) {
		return ((T (*)(C09Controller*, uintptr_t))(Il2CppBase() + 0x1EF70B8))(this, theBullet);
	}
	template <typename T = void> T KillSomeOne(uintptr_t other) {
		return ((T (*)(C09Controller*, uintptr_t))(Il2CppBase() + 0x1EF72CC))(this, other);
	}
	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF7424))(this);
	}
	template <typename T = bool> T CanUseSkill() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF7484))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpChar() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF7588))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillStart() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF7590))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF7598))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF75A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(C09Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1EF75A8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SwitchWeapon() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF75B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_DeadChild() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF75B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetCameraFocus() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF75C0))(this);
	}
	template <typename T = bool> T iFixBaseProxy_CanTriggerItem() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF75C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleAtk(bool P0) {
		return ((T (*)(C09Controller*, bool))(Il2CppBase() + 0x1EF75D0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_KillSomeOne(uintptr_t P0) {
		return ((T (*)(C09Controller*, uintptr_t))(Il2CppBase() + 0x1EF75DC))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF75E4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_CanUseSkill() {
		return ((T (*)(C09Controller*))(Il2CppBase() + 0x1EF75EC))(this);
	}

};

}
