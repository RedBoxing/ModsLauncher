#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C19Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C19Controller"));
	}

	template <typename T = float> T& restoreEnergyPerSecond() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& steleManager() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}

	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C19Controller*))(Il2CppBase() + 0x1F4AA60))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(C19Controller*))(Il2CppBase() + 0x1F4AAC0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C19Controller*))(Il2CppBase() + 0x1F4AB70))(this);
	}
	template <typename T = void> T SetUpChar() {
		return ((T (*)(C19Controller*))(Il2CppBase() + 0x1F4ABF0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C19Controller*))(Il2CppBase() + 0x1F4AE80))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C19Controller*))(Il2CppBase() + 0x1F4AF04))(this);
	}
	template <typename T = uintptr_t> T RestoringEnergy() {
		return ((T (*)(C19Controller*))(Il2CppBase() + 0x1F4ADCC))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C19Controller*))(Il2CppBase() + 0x1F4B018))(this);
	}
	template <typename T = void> T OnAdditionLevelChanged() {
		return ((T (*)(C19Controller*))(Il2CppBase() + 0x1F4BB9C))(this);
	}
	template <typename T = Il2CppVector2> T GetValidPosition() {
		return ((T (*)(C19Controller*))(Il2CppBase() + 0x1F4B6B8))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(C19Controller*))(Il2CppBase() + 0x1F4BCB4))(this);
	}
	template <typename T = void> T SteleManagerUpdate() {
		return ((T (*)(C19Controller*))(Il2CppBase() + 0x1F4AF78))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C19Controller*))(Il2CppBase() + 0x1F4BDB8))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpChar() {
		return ((T (*)(C19Controller*))(Il2CppBase() + 0x1F4BDC0))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C19Controller*))(Il2CppBase() + 0x1F4BDC8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnAdditionLevelChanged() {
		return ((T (*)(C19Controller*))(Il2CppBase() + 0x1F4BDD0))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(C19Controller*))(Il2CppBase() + 0x1F4BDD8))(this);
	}

};

}
