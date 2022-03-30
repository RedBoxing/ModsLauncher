#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UICanvasFishChipController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UICanvasFishChipController"));
	}

	template <typename T = uintptr_t> T& fishChipText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& fishChipPurchaseController() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& parentTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Update() {
		return ((T (*)(UICanvasFishChipController*))(Il2CppBase() + 0x41B3244))(this);
	}
	template <typename T = void> T FishChipBtnClick() {
		return ((T (*)(UICanvasFishChipController*))(Il2CppBase() + 0x41B32FC))(this);
	}
	template <typename T = uintptr_t> static T ShowView(uintptr_t parent, Il2CppString* from) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x41B33E4))(0, parent, from);
	}

};

}
