#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IWeaponCustomDisplay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWeaponCustomDisplay"));
	}


	template <typename T = void> T DisplayUIObj(uintptr_t parent, uintptr_t onClean) {
		return ((T (*)(IWeaponCustomDisplay*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, parent, onClean);
	}
	template <typename T = void> T HideUIObj() {
		return ((T (*)(IWeaponCustomDisplay*))(Il2CppBase() + 0x0))(this);
	}

};

}
