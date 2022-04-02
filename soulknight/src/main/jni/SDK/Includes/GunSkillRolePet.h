#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunSkillRolePet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunSkillRolePet"));
	}

	template <typename T = uintptr_t> T& weaponType() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& cd() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunSkillRolePet*))(Il2CppBase() + 0x21781A8))(this);
	}
	template <typename T = void> T AttackKeyDown(bool manual) {
		return ((T (*)(GunSkillRolePet*, bool))(Il2CppBase() + 0x21782B4))(this, manual);
	}
	template <typename T = void> T HideWeapon() {
		return ((T (*)(GunSkillRolePet*))(Il2CppBase() + 0x2178C5C))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunSkillRolePet*))(Il2CppBase() + 0x2178538))(this);
	}
	template <typename T = bool> T Attackable() {
		return ((T (*)(GunSkillRolePet*))(Il2CppBase() + 0x21783DC))(this);
	}
	template <typename T = uintptr_t> T FindNearestTarget(float range, bool findDead) {
		return ((T (*)(GunSkillRolePet*, float, bool))(Il2CppBase() + 0x2178CDC))(this, range, findDead);
	}
	template <typename T = Il2CppList<uintptr_t>*> T FindTroops(float range) {
		return ((T (*)(GunSkillRolePet*, float))(Il2CppBase() + 0x2179520))(this, range);
	}
	template <typename T = Il2CppList<uintptr_t>*> T FindPlayers(float range) {
		return ((T (*)(GunSkillRolePet*, float))(Il2CppBase() + 0x2178F90))(this, range);
	}
	template <typename T = uintptr_t> T CreatingIceWall(int32_t count, int32_t length, uintptr_t source) {
		return ((T (*)(GunSkillRolePet*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x21793FC))(this, count, length, source);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunSkillRolePet*))(Il2CppBase() + 0x21798C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyDown(bool P0) {
		return ((T (*)(GunSkillRolePet*, bool))(Il2CppBase() + 0x21798C4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HideWeapon() {
		return ((T (*)(GunSkillRolePet*))(Il2CppBase() + 0x21798D0))(this);
	}

};

}
