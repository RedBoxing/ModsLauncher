#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CoinEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CoinEntry"));
	}

	template <typename T = Il2CppString*> T& display() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& coinCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& productIdent() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
