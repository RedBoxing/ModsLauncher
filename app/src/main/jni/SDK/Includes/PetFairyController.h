#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PetFairyController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetFairyController"));
	}

	template <typename T = bool> T& allianceTarget() {
		return *(T*)((uintptr_t)this + 0x258);
	}

	template <typename T = void> T Scout() {
		return ((T (*)(PetFairyController*))(Il2CppBase() + 0x4575630))(this);
	}
	template <typename T = uintptr_t> T FindTarget() {
		return ((T (*)(PetFairyController*))(Il2CppBase() + 0x4575750))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(PetFairyController*))(Il2CppBase() + 0x4575B8C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(PetFairyController*))(Il2CppBase() + 0x4575F20))(this);
	}
	template <typename T = void> T Show(float delayTime) {
		return ((T (*)(PetFairyController*, float))(Il2CppBase() + 0x45763B4))(this, delayTime);
	}
	template <typename T = void> T AddDamage(int32_t deltaDmg) {
		return ((T (*)(PetFairyController*, int32_t))(Il2CppBase() + 0x4576890))(this, deltaDmg);
	}
	template <typename T = void> T FlyAway() {
		return ((T (*)(PetFairyController*))(Il2CppBase() + 0x4576A38))(this);
	}
	template <typename T = uintptr_t> T FlyingAway() {
		return ((T (*)(PetFairyController*))(Il2CppBase() + 0x4576B98))(this);
	}
	template <typename T = void> T Showb__5_0() {
		return ((T (*)(PetFairyController*))(Il2CppBase() + 0x4576C80))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(PetFairyController*))(Il2CppBase() + 0x4576D20))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_FindTarget() {
		return ((T (*)(PetFairyController*))(Il2CppBase() + 0x4576D28))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(PetFairyController*))(Il2CppBase() + 0x4576D30))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(PetFairyController*))(Il2CppBase() + 0x4576D38))(this);
	}

};

}
