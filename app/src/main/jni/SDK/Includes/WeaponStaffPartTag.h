#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponStaffPartTag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponStaffPartTag"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& parts() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T GetTags() {
		return ((T (*)(WeaponStaffPartTag*))(Il2CppBase() + 0x46005F0))(this);
	}

};

}
