#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunHoldSword
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunHoldSword"));
	}

	template <typename T = uintptr_t> T& clip_hold() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& hold() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& a_time() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& max_time() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& reload_obj() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& the_reload_obj() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunHoldSword*))(Il2CppBase() + 0x24A59E0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunHoldSword*))(Il2CppBase() + 0x2492FE8))(this);
	}
	template <typename T = void> T HoldMax() {
		return ((T (*)(GunHoldSword*))(Il2CppBase() + 0x24A5A40))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunHoldSword*))(Il2CppBase() + 0x24A5A9C))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunHoldSword*, bool, bool))(Il2CppBase() + 0x2493BFC))(this, value1, manual);
	}
	template <typename T = void> T OnAtk() {
		return ((T (*)(GunHoldSword*))(Il2CppBase() + 0x24A5B40))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunHoldSword*))(Il2CppBase() + 0x24A5C74))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunHoldSword*))(Il2CppBase() + 0x24A5E84))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunHoldSword*))(Il2CppBase() + 0x24A60CC))(this);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(GunHoldSword*))(Il2CppBase() + 0x24A612C))(this);
	}
	template <typename T = float> T GetMaxChargeTime() {
		return ((T (*)(GunHoldSword*))(Il2CppBase() + 0x24A6230))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunHoldSword*))(Il2CppBase() + 0x24A6290))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunHoldSword*))(Il2CppBase() + 0x24A6298))(this);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunHoldSword*))(Il2CppBase() + 0x24A62A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunHoldSword*, bool, bool))(Il2CppBase() + 0x24A62A8))(this, P0, P1);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunHoldSword*))(Il2CppBase() + 0x24A62B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnReborn() {
		return ((T (*)(GunHoldSword*))(Il2CppBase() + 0x24A62C0))(this);
	}

};

}
