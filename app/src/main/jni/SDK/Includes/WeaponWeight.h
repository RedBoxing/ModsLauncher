#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponWeight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponWeight"));
	}

	template <typename T = Il2CppList<int32_t>*> T& levels() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& weight() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
