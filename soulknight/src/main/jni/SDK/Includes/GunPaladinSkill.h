#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunPaladinSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunPaladinSkill"));
	}

	template <typename T = int32_t> T& defence() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = bool> T& defenceAdded() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& paladin() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& destroyed() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunPaladinSkill*))(Il2CppBase() + 0x216B03C))(this);
	}
	template <typename T = void> T Setup(uintptr_t paladin, float scale, bool upgraded) {
		return ((T (*)(GunPaladinSkill*, uintptr_t, float, bool))(Il2CppBase() + 0x216B0B4))(this, paladin, scale, upgraded);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunPaladinSkill*))(Il2CppBase() + 0x216B208))(this);
	}
	template <typename T = void> T ModifyDefence(bool isAdd) {
		return ((T (*)(GunPaladinSkill*, bool))(Il2CppBase() + 0x216B54C))(this, isAdd);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunPaladinSkill*))(Il2CppBase() + 0x216B644))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunPaladinSkill*))(Il2CppBase() + 0x216B6B4))(this);
	}
	template <typename T = void> T DestroySelf(bool isAttack) {
		return ((T (*)(GunPaladinSkill*, bool))(Il2CppBase() + 0x216B424))(this, isAttack);
	}
	template <typename T = void> T Attackb__5_0(float flyTime) {
		return ((T (*)(GunPaladinSkill*, float))(Il2CppBase() + 0x216B754))(this, flyTime);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunPaladinSkill*))(Il2CppBase() + 0x216B794))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunPaladinSkill*))(Il2CppBase() + 0x216B79C))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunPaladinSkill*))(Il2CppBase() + 0x216B7A4))(this);
	}

};

}
