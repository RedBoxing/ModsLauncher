#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FishChipStore {

class StoreItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FishChipStore", "StoreItem"));
	}

	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& price() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& customContents() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
