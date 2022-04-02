#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RewardCompleteModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardCompleteModel"));
	}

	template <typename T = Il2CppString*> T& localizationKey() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& previewSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& textColor() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
