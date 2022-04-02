#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RandomSeedSyncEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomSeedSyncEvent"));
	}

	template <typename T = uintptr_t> T& msg() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
