#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunChain
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunChain"));
	}

	template <typename T = int32_t> T& reflectCount() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& justAttack() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunChain*))(Il2CppBase() + 0x25884C4))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunChain*))(Il2CppBase() + 0x2588524))(this);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(GunChain*))(Il2CppBase() + 0x2588580))(this);
	}
	template <typename T = uintptr_t> T EndJustAttack() {
		return ((T (*)(GunChain*))(Il2CppBase() + 0x25886EC))(this);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(GunChain*))(Il2CppBase() + 0x25887CC))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunChain*))(Il2CppBase() + 0x2588A90))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunChain*))(Il2CppBase() + 0x2588C88))(this);
	}
	template <typename T = void> T OnWeaponSpeedChanged() {
		return ((T (*)(GunChain*))(Il2CppBase() + 0x2588CE8))(this);
	}
	template <typename T = void> T OnTypicalChange() {
		return ((T (*)(GunChain*))(Il2CppBase() + 0x2588DFC))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunChain*))(Il2CppBase() + 0x258903C))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(GunChain*))(Il2CppBase() + 0x2589044))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(GunChain*))(Il2CppBase() + 0x258904C))(this);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunChain*))(Il2CppBase() + 0x2589054))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunChain*))(Il2CppBase() + 0x258905C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnWeaponSpeedChanged() {
		return ((T (*)(GunChain*))(Il2CppBase() + 0x2589064))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTypicalChange() {
		return ((T (*)(GunChain*))(Il2CppBase() + 0x258906C))(this);
	}

};

}
