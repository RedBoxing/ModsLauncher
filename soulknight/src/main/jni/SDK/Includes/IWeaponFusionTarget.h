#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IWeaponFusionTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWeaponFusionTarget"));
	}


	template <typename T = void> T FusionFrom(Il2CppArray<uintptr_t>* sourceWeaponNames) {
		return ((T (*)(IWeaponFusionTarget*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, sourceWeaponNames);
	}

};

}
