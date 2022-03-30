#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunStaffWizard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunStaffWizard"));
	}

	template <typename T = float> T& speed_correction() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& bullet1() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& bullet2() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& bullet3() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}

	template <typename T = void> T Attack() {
		return ((T (*)(GunStaffWizard*))(Il2CppBase() + 0x217D258))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunStaffWizard*))(Il2CppBase() + 0x217D5F8))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunStaffWizard*))(Il2CppBase() + 0x217D6BC))(this);
	}

};

}
