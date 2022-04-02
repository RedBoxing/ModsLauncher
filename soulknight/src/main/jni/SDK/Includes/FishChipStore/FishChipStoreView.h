#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FishChipStore {

class FishChipStoreView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FishChipStore", "FishChipStoreView"));
	}

	template <typename T = uintptr_t> T& mainTransform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& fishCountText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& countDownText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& itemViews() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& confirmWindowView() {
		return *(T*)((uintptr_t)this + 0x30);
	}


};

}
