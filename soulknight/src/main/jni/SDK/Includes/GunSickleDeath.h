#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunSickleDeath
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunSickleDeath"));
	}


	template <typename T = void> T Awake() {
		return ((T (*)(GunSickleDeath*))(Il2CppBase() + 0x2176D30))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunSickleDeath*, bool, bool))(Il2CppBase() + 0x2176D94))(this, value1, manual);
	}
	template <typename T = void> T CreateBullet(bool reverse) {
		return ((T (*)(GunSickleDeath*, bool))(Il2CppBase() + 0x2176F50))(this, reverse);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunSickleDeath*))(Il2CppBase() + 0x2176FCC))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunSickleDeath*))(Il2CppBase() + 0x2177338))(this);
	}
	template <typename T = void> T AxeAttack() {
		return ((T (*)(GunSickleDeath*))(Il2CppBase() + 0x2177398))(this);
	}
	template <typename T = void> T CreateMobileAxe() {
		return ((T (*)(GunSickleDeath*))(Il2CppBase() + 0x217702C))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunSickleDeath*))(Il2CppBase() + 0x21773F8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_icons() {
		return ((T (*)(GunSickleDeath*))(Il2CppBase() + 0x21775EC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunSickleDeath*))(Il2CppBase() + 0x2177718))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunSickleDeath*))(Il2CppBase() + 0x2177D5C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunSickleDeath*, bool, bool))(Il2CppBase() + 0x2177D64))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_CreateBullet(bool P0) {
		return ((T (*)(GunSickleDeath*, bool))(Il2CppBase() + 0x2177D74))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Attack() {
		return ((T (*)(GunSickleDeath*))(Il2CppBase() + 0x2177D80))(this);
	}
	template <typename T = void> T iFixBaseProxy_Attack2() {
		return ((T (*)(GunSickleDeath*))(Il2CppBase() + 0x2177D84))(this);
	}
	template <typename T = void> T iFixBaseProxy_AxeAttack() {
		return ((T (*)(GunSickleDeath*))(Il2CppBase() + 0x2177D88))(this);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunSickleDeath*))(Il2CppBase() + 0x2177D8C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_icons() {
		return ((T (*)(GunSickleDeath*))(Il2CppBase() + 0x2177D94))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunSickleDeath*))(Il2CppBase() + 0x2177D9C))(this);
	}

};

}
