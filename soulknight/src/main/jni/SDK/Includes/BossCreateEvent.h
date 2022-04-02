#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossCreateEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossCreateEvent"));
	}

	template <typename T = uintptr_t> T& bossInstance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& bossName() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
