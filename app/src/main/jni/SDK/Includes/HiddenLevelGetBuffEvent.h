#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HiddenLevelGetBuffEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HiddenLevelGetBuffEvent"));
	}

	template <typename T = uintptr_t> T& factor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& customContent() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
