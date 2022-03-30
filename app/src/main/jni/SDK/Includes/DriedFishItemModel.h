#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DriedFishItemModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DriedFishItemModel"));
	}

	template <typename T = uintptr_t> T& driedFishCountText() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& driedFishPriceText() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
