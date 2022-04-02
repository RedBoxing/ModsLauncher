#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnterMultiGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnterMultiGame"));
	}

	template <typename T = bool> T& IsHost() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
