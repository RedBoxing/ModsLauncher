#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactWeaponChest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactWeaponChest"));
	}


	template <typename T = void> T OnOpen(uintptr_t itemParent, uintptr_t rgController, int32_t chestLevel) {
		return ((T (*)(ArtifactWeaponChest*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1CA9D4C))(this, itemParent, rgController, chestLevel);
	}

};

}
