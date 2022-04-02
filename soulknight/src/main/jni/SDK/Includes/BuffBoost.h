#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffBoost
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffBoost"));
	}

	template <typename T = uintptr_t> T& boostType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& buffType() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& value() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
