#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OtherPlyerSelectHeroEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OtherPlyerSelectHeroEvent"));
	}

	template <typename T = uint32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
