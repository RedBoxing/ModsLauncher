#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C12Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C12Controller"));
	}

	template <typename T = uintptr_t> T& skill_obj1() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& skill_obj2() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skill_clips() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skill2_clips() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> T& skillMarkBuff() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& the_wolf_obj1() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = uintptr_t> T& the_wolf_obj2() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = uintptr_t> T& bear() {
		return *(T*)((uintptr_t)this + 0x328);
	}

	template <typename T = bool> T get_is_master() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2E570))(this);
	}
	template <typename T = bool> T get_is_master2() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2E5E0))(this);
	}
	template <typename T = bool> T get_is_opera() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2E650))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2E6C0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2E724))(this);
	}
	template <typename T = void> T DoDestroy() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2E86C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2E950))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2E9D4))(this);
	}
	template <typename T = void> T ForceDesotrySkillObj() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2EA40))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2EB98))(this);
	}
	template <typename T = void> T RoleSkill0() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2EC3C))(this);
	}
	template <typename T = void> T OnHandCutHitEnemy(uintptr_t e) {
		return ((T (*)(C12Controller*, uintptr_t))(Il2CppBase() + 0x1F2F358))(this, e);
	}
	template <typename T = uintptr_t> T CreateWolf() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2F2A4))(this);
	}
	template <typename T = void> T RoleSkill1() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2EDE8))(this);
	}
	template <typename T = uintptr_t> T CreatingVines() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2F7EC))(this);
	}
	template <typename T = Il2CppVector2> T GetValidPosition() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2F8CC))(this);
	}
	template <typename T = void> T RoleSkill2() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2F100))(this);
	}
	template <typename T = uintptr_t> T CreateBear() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2FDB0))(this);
	}
	template <typename T = void> T OperaTalk() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2FE90))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2FF58))(this);
	}
	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F2FFE8))(this);
	}
	template <typename T = void> T iFixBaseProxy_ForceDesotrySkillObj() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F300B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F300B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F300C0))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C12Controller*))(Il2CppBase() + 0x1F300C8))(this);
	}

};

}
