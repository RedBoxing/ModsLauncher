#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IWeaponPartTag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWeaponPartTag"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T GetTags() {
		return ((T (*)(IWeaponPartTag*))(Il2CppBase() + 0x0))(this);
	}

};

}
