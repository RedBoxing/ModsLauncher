#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EntranceModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntranceModel"));
	}

	template <typename T = int32_t> T& xIndex() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& yIndex() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& entranceDirection() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& bossDirection() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
