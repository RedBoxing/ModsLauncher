#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FishChipStore {

class ConfirmWindowNormalView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FishChipStore", "ConfirmWindowNormalView"));
	}

	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& image() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& imageRectTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& descText() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
