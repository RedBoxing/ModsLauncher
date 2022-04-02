#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FishChipStore {

class SellingItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FishChipStore", "SellingItem"));
	}

	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& cost() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
