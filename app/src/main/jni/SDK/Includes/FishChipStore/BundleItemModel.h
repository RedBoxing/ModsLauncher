#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FishChipStore {

class BundleItemModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FishChipStore", "BundleItemModel"));
	}

	template <typename T = Il2CppString*> T& materialId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& materialCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
