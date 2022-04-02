#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WildPetRandomInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WildPetRandomInfo"));
	}

	template <typename T = uintptr_t> T& PetIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Weight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& NeedUnLockPet() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FoodInfos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsOpen() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
