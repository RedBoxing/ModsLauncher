#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponBowPartTag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponBowPartTag"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& parts() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T GetTags() {
		return ((T (*)(WeaponBowPartTag*))(Il2CppBase() + 0x20158C4))(this);
	}

};

}
