#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponStatisticInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponStatisticInfo"));
	}

	template <typename T = uintptr_t> T& passLevel() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
