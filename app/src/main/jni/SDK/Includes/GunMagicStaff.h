#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunMagicStaff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunMagicStaff"));
	}

	template <typename T = Il2CppString*> T& word() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& currCollision() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t collision) {
		return ((T (*)(GunMagicStaff*, uintptr_t))(Il2CppBase() + 0x2281DBC))(this, collision);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t collision) {
		return ((T (*)(GunMagicStaff*, uintptr_t))(Il2CppBase() + 0x22820E8))(this, collision);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunMagicStaff*))(Il2CppBase() + 0x228229C))(this);
	}
	template <typename T = void> T SetAttack(bool isAttack, bool manual) {
		return ((T (*)(GunMagicStaff*, bool, bool))(Il2CppBase() + 0x2282480))(this, isAttack, manual);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunMagicStaff*))(Il2CppBase() + 0x22825F0))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunMagicStaff*, bool, bool))(Il2CppBase() + 0x22825F8))(this, P0, P1);
	}

};

}
