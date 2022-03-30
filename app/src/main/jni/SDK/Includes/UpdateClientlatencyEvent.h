#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UpdateClientlatencyEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateClientlatencyEvent"));
	}

	template <typename T = int32_t> T& latency() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
