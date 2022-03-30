#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunOnePunch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunOnePunch"));
	}

	template <typename T = uintptr_t> T& onChangeToNormal() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& clip_hold() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& a_time() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& max_time() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& reload_obj() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& the_reload_obj() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = int32_t> T& force() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = float> T& swordScale() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = bool> T& hold() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}

	template <typename T = void> T add_onChangeToNormal(uintptr_t value) {
		return ((T (*)(GunOnePunch*, uintptr_t))(Il2CppBase() + 0x2169A78))(this, value);
	}
	template <typename T = void> T remove_onChangeToNormal(uintptr_t value) {
		return ((T (*)(GunOnePunch*, uintptr_t))(Il2CppBase() + 0x2169B68))(this, value);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunOnePunch*))(Il2CppBase() + 0x2169C58))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunOnePunch*, bool, bool))(Il2CppBase() + 0x2169F78))(this, value1, manual);
	}
	template <typename T = void> T AttackKeyUp(bool manual) {
		return ((T (*)(GunOnePunch*, bool))(Il2CppBase() + 0x216A028))(this, manual);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(GunOnePunch*))(Il2CppBase() + 0x216A23C))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunOnePunch*))(Il2CppBase() + 0x216A304))(this);
	}
	template <typename T = void> T OnAtk() {
		return ((T (*)(GunOnePunch*))(Il2CppBase() + 0x216A0F4))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunOnePunch*))(Il2CppBase() + 0x216A3A8))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunOnePunch*))(Il2CppBase() + 0x216A934))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunOnePunch*))(Il2CppBase() + 0x216A99C))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunOnePunch*))(Il2CppBase() + 0x216AB88))(this);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(GunOnePunch*))(Il2CppBase() + 0x216ABE8))(this);
	}
	template <typename T = float> T GetMaxChargeTime() {
		return ((T (*)(GunOnePunch*))(Il2CppBase() + 0x216ACEC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunOnePunch*, bool, bool))(Il2CppBase() + 0x216AD80))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyUp(bool P0) {
		return ((T (*)(GunOnePunch*, bool))(Il2CppBase() + 0x216AD90))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(GunOnePunch*))(Il2CppBase() + 0x216AD9C))(this);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunOnePunch*))(Il2CppBase() + 0x216ADA4))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunOnePunch*))(Il2CppBase() + 0x216ADAC))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunOnePunch*))(Il2CppBase() + 0x216ADB4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunOnePunch*))(Il2CppBase() + 0x216ADBC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnReborn() {
		return ((T (*)(GunOnePunch*))(Il2CppBase() + 0x216ADC4))(this);
	}

};

}
