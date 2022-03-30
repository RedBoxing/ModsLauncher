#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CoinChangeEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CoinChangeEvent"));
	}

	template <typename T = int32_t> T& curCoinVal() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
