#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EntranceInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntranceInfo"));
	}

	template <typename T = uintptr_t> T& direction() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& aisle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& door() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
