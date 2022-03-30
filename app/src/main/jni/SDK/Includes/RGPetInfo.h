#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGPetInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGPetInfo"));
	}

	template <typename T = bool> T& unlock() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& unlock_gem() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skin_list() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
