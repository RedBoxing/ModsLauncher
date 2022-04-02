#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PetWeaponController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetWeaponController"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(PetWeaponController*))(Il2CppBase() + 0x438D534))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(PetWeaponController*))(Il2CppBase() + 0x438D81C))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage) {
		return ((T (*)(PetWeaponController*, int32_t))(Il2CppBase() + 0x438DDC4))(this, damage);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(PetWeaponController*))(Il2CppBase() + 0x438E024))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(PetWeaponController*))(Il2CppBase() + 0x438E02C))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0) {
		return ((T (*)(PetWeaponController*, int32_t))(Il2CppBase() + 0x438E034))(this, P0);
	}

};

}
