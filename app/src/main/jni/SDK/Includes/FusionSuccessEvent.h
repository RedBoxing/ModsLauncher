#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FusionSuccessEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FusionSuccessEvent"));
	}

	template <typename T = Il2CppString*> T& targetName() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
