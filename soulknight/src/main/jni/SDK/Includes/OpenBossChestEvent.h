#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OpenBossChestEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenBossChestEvent"));
	}

	template <typename T = uintptr_t> T& chestObj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& overrided() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
