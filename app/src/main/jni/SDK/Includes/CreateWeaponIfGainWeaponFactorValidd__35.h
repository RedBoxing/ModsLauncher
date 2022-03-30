#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateWeaponIfGainWeaponFactorValidd35
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateWeaponIfGainWeaponFactorValid>d__35"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& weaponPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateWeaponIfGainWeaponFactorValidd35*))(Il2CppBase() + 0x1C4E99C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateWeaponIfGainWeaponFactorValidd35*))(Il2CppBase() + 0x1C4E9A0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateWeaponIfGainWeaponFactorValidd35*))(Il2CppBase() + 0x1C4ED00))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateWeaponIfGainWeaponFactorValidd35*))(Il2CppBase() + 0x1C4ED08))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateWeaponIfGainWeaponFactorValidd35*))(Il2CppBase() + 0x1C4ED70))(this);
	}

};

}
