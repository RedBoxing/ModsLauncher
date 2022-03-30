#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FishChipStore {

class ConfirmWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FishChipStore", "ConfirmWindowView"));
	}

	template <typename T = uintptr_t> T& confirmWindowObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& canvasGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& skinView() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& normalView() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& bundleView() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& priceText() {
		return *(T*)((uintptr_t)this + 0x38);
	}


};

}
