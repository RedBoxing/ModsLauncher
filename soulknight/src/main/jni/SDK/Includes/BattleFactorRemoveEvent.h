#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BattleFactorRemoveEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattleFactorRemoveEvent"));
	}

	template <typename T = uintptr_t> T& battleFactor() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
