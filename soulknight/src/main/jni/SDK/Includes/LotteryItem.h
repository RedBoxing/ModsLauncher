#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LotteryItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LotteryItem"));
	}

	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& weight() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
