#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponMaterial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponMaterial"));
	}

	template <typename T = float> T& materialFactor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& materials() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& extraMaterials() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T GetMaterials() {
		return ((T (*)(WeaponMaterial*))(Il2CppBase() + 0x45FAC98))(this);
	}

};

}
