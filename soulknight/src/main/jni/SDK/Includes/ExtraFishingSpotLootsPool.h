#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExtraFishingSpotLootsPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExtraFishingSpotLootsPool"));
	}

	template <typename T = uintptr_t> T& C_Pool() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& B_Pool() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& A_Pool() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& S_Pool() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& Spec_Pool() {
		return *(T*)((uintptr_t)this + 0x78);
	}


};

}
