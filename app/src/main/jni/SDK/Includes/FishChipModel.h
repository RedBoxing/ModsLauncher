#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FishChipModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishChipModel"));
	}

	template <typename T = int32_t> T& fishChipAmount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& purchaseId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& sprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
