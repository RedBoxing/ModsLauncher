#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DuridSkill3Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DuridSkill3Data"));
	}

	template <typename T = uintptr_t> T& showEffect() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& bearPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& delayCreateBearTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
