#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DivePirateInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DivePirateInfo"));
	}

	template <typename T = uintptr_t> T& enemy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& wait() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
