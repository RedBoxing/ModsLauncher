#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunChainsaw
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunChainsaw"));
	}

	template <typename T = uintptr_t> T& bulletDrillRef() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}

	template <typename T = void> T Attack() {
		return ((T (*)(GunChainsaw*))(Il2CppBase() + 0x25891A4))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunChainsaw*))(Il2CppBase() + 0x25895C0))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunChainsaw*, bool, bool))(Il2CppBase() + 0x258962C))(this, value1, manual);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunChainsaw*))(Il2CppBase() + 0x25898B0))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunChainsaw*))(Il2CppBase() + 0x2589A40))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunChainsaw*))(Il2CppBase() + 0x2589B74))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunChainsaw*))(Il2CppBase() + 0x2589BF8))(this);
	}
	template <typename T = void> T EndAttack() {
		return ((T (*)(GunChainsaw*))(Il2CppBase() + 0x25897B4))(this);
	}
	template <typename T = void> T StartAttack() {
		return ((T (*)(GunChainsaw*))(Il2CppBase() + 0x258926C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunChainsaw*, bool, bool))(Il2CppBase() + 0x2589C60))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunChainsaw*))(Il2CppBase() + 0x2589C70))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunChainsaw*))(Il2CppBase() + 0x2589C78))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunChainsaw*))(Il2CppBase() + 0x2589C80))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunChainsaw*))(Il2CppBase() + 0x2589C88))(this);
	}

};

}
