#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossArmorChangeEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossArmorChangeEvent"));
	}

	template <typename T = int32_t> T& prevArmor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& currentArmor() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& maxArmor() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
