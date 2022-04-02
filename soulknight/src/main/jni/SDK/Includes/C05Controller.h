#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C05Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C05Controller"));
	}

	template <typename T = uintptr_t> T& skill0UpdateBottle() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = int32_t> T& bottleIndex() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}

	template <typename T = bool> T get_is_master() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0AECC))(this);
	}
	template <typename T = bool> T get_is_master2() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0AF3C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0AFAC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0B010))(this);
	}
	template <typename T = void> T SetUpChar() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0B09C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0B43C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0B4C0))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0B52C))(this);
	}
	template <typename T = void> T RoleSkill0() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0B5D0))(this);
	}
	template <typename T = void> T Skill0BulletExtraProcess(uintptr_t explodeEffectTrigger, uintptr_t obj) {
		return ((T (*)(C05Controller*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E0C9A8))(this, explodeEffectTrigger, obj);
	}
	template <typename T = void> T RoleSkill1() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0BC78))(this);
	}
	template <typename T = void> T Skill1BulletExtraProcess(uintptr_t explodeEffectTrigger, uintptr_t bulletObject) {
		return ((T (*)(C05Controller*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E0CE08))(this, explodeEffectTrigger, bulletObject);
	}
	template <typename T = void> T RoleSkill2() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0C390))(this);
	}
	template <typename T = void> T MixComplete() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0D298))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0D318))(this);
	}
	template <typename T = void> T RoleSkillEnd0() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0D3A4))(this);
	}
	template <typename T = void> T RoleSkillEnd1() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0D438))(this);
	}
	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0D4CC))(this);
	}
	template <typename T = void> T OnAdditionLevelChanged() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0D52C))(this);
	}
	template <typename T = void> T OnBuffChanged(uintptr_t buff, bool isGet) {
		return ((T (*)(C05Controller*, uintptr_t, bool))(Il2CppBase() + 0x1E0D644))(this, buff, isGet);
	}
	template <typename T = void> T iFixBaseProxy_SetUpChar() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0D810))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0D818))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0D820))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0D828))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnAdditionLevelChanged() {
		return ((T (*)(C05Controller*))(Il2CppBase() + 0x1E0D830))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnBuffChanged(uintptr_t P0, bool P1) {
		return ((T (*)(C05Controller*, uintptr_t, bool))(Il2CppBase() + 0x1E0D838))(this, P0, P1);
	}

};

}
