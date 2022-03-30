#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComBow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComBow"));
	}

	template <typename T = uintptr_t> T& drawAudioClip() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& defaultBowEmitter() {
		return *(T*)((uintptr_t)this + 0x138);
	}

	template <typename T = uintptr_t> T OnChargeStart(uintptr_t specifiedAttackType) {
		return ((T (*)(WeaponComBow*, uintptr_t))(Il2CppBase() + 0x201D6AC))(this, specifiedAttackType);
	}
	template <typename T = uintptr_t> T OnChargeAttackStart(uintptr_t specifiedAttackType) {
		return ((T (*)(WeaponComBow*, uintptr_t))(Il2CppBase() + 0x201DBA4))(this, specifiedAttackType);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComBow*))(Il2CppBase() + 0x201DE8C))(this);
	}
	template <typename T = void> T OnResetChargeAmount() {
		return ((T (*)(WeaponComBow*))(Il2CppBase() + 0x201E054))(this);
	}
	template <typename T = void> T UpdateInfo() {
		return ((T (*)(WeaponComBow*))(Il2CppBase() + 0x201E0B0))(this);
	}
	template <typename T = void> T OnChargeStartb__2_0() {
		return ((T (*)(WeaponComBow*))(Il2CppBase() + 0x201E290))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnChargeStart(uintptr_t P0) {
		return ((T (*)(WeaponComBow*, uintptr_t))(Il2CppBase() + 0x201E294))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnChargeAttackStart(uintptr_t P0) {
		return ((T (*)(WeaponComBow*, uintptr_t))(Il2CppBase() + 0x201E29C))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComBow*))(Il2CppBase() + 0x201E2A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnResetChargeAmount() {
		return ((T (*)(WeaponComBow*))(Il2CppBase() + 0x201E2AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo() {
		return ((T (*)(WeaponComBow*))(Il2CppBase() + 0x201E2B0))(this);
	}

};

}
