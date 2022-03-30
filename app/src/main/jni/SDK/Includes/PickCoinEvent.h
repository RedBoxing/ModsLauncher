#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PickCoinEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PickCoinEvent"));
	}

	template <typename T = uintptr_t> T& rgController() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& coinValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& newCoinValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
