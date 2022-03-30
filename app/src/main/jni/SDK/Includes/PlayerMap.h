#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlayerMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerMap"));
	}

	template <typename T = int32_t> T& rewiredPlayerId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& gamePlayerId() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
