#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunRace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunRace"));
	}

	template <typename T = float> T& force() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& angleForce() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& maxSpeed() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& slowDownSpeed() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& the_bullet() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& direct() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}

	template <typename T = uintptr_t> T get_raceController() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x217026C))(this);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x2170330))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x2170390))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x2170448))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunRace*, bool, bool))(Il2CppBase() + 0x21704AC))(this, value1, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x217075C))(this);
	}
	template <typename T = void> T StartAttack() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x2170818))(this);
	}
	template <typename T = void> T EndAttack() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x2170640))(this);
	}
	template <typename T = uintptr_t> T Dashing() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x2170A4C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x2170B2C))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x2170E3C))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x2170FCC))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x2171100))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x2171184))(this);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x21711E4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x217127C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x2171284))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x217128C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunRace*, bool, bool))(Il2CppBase() + 0x2171294))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x21712A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x21712AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x21712B4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x21712BC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnReborn() {
		return ((T (*)(GunRace*))(Il2CppBase() + 0x21712C4))(this);
	}

};

}
