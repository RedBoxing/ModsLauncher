#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CustomWeaponMaterial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomWeaponMaterial"));
	}

	template <typename T = bool> T& isAddtional() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& materials() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T GetMaterials() {
		return ((T (*)(CustomWeaponMaterial*))(Il2CppBase() + 0x4284A54))(this);
	}

};

}
