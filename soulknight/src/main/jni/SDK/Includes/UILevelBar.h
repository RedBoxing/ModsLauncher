#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UILevelBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UILevelBar"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& star_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& img_bg() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& color_list() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UILevelBar*))(Il2CppBase() + 0x433B6B0))(this);
	}
	template <typename T = void> T ShowLevelBar(int32_t level, int32_t color_index) {
		return ((T (*)(UILevelBar*, int32_t, int32_t))(Il2CppBase() + 0x433B830))(this, level, color_index);
	}

};

}
