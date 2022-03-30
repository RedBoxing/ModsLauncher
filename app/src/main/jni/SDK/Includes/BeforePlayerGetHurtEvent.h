#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BeforePlayerGetHurtEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BeforePlayerGetHurtEvent"));
	}

	template <typename T = uintptr_t> T& rgController() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
