#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa {

class UnlockInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa", "UnlockInfo"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& unlock_hero_list() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<int32_t>*> T& unlock_pet_index_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
