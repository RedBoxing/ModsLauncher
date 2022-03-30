#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayedQueueItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayedQueueItem"));
	}

	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& action() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
