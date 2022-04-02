#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LevelMapCreateCompleteEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LevelMapCreateCompleteEvent"));
	}

	template <typename T = uintptr_t> T& mapManager() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
