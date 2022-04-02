#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AdConst
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdConst"));
	}

	template <typename T = int32_t> static T& MAX_DAILY_COIN_TIMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
