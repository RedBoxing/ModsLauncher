#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HireMercenaryEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HireMercenaryEvent"));
	}

	template <typename T = uintptr_t> T& mercenary() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& character() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
