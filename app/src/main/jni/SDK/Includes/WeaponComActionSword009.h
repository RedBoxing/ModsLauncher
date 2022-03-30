#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComActionSword009
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComActionSword009"));
	}

	template <typename T = int32_t> T& _atkTimes() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = int32_t> T& _curAtkSeqNo() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = int32_t> T& maxAddAtkTimes() {
		return *(T*)((uintptr_t)this + 0x138);
	}

	template <typename T = void> T AttackStart() {
		return ((T (*)(WeaponComActionSword009*))(Il2CppBase() + 0x2017C38))(this);
	}
	template <typename T = void> T AttackEnd() {
		return ((T (*)(WeaponComActionSword009*))(Il2CppBase() + 0x2017D1C))(this);
	}
	template <typename T = void> T OnSetAtkSeqNo(int32_t n) {
		return ((T (*)(WeaponComActionSword009*, int32_t))(Il2CppBase() + 0x2017D90))(this, n);
	}
	template <typename T = uintptr_t> T OnChargeAttackStart(uintptr_t specifiedAttackType) {
		return ((T (*)(WeaponComActionSword009*, uintptr_t))(Il2CppBase() + 0x2017E10))(this, specifiedAttackType);
	}
	template <typename T = void> T OnResetChargeAmount() {
		return ((T (*)(WeaponComActionSword009*))(Il2CppBase() + 0x2017F9C))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(WeaponComActionSword009*))(Il2CppBase() + 0x2018024))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackEnd() {
		return ((T (*)(WeaponComActionSword009*))(Il2CppBase() + 0x2018028))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSetAtkSeqNo(int32_t P0) {
		return ((T (*)(WeaponComActionSword009*, int32_t))(Il2CppBase() + 0x201802C))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnChargeAttackStart(uintptr_t P0) {
		return ((T (*)(WeaponComActionSword009*, uintptr_t))(Il2CppBase() + 0x2018030))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnResetChargeAmount() {
		return ((T (*)(WeaponComActionSword009*))(Il2CppBase() + 0x2018038))(this);
	}

};

}
