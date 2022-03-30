#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class ScrollRectSelectableChild
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "ScrollRectSelectableChild"));
	}

	template <typename T = bool> T& useCustomEdgePadding() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& customEdgePadding() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& parentScrollRect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _selectable() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_parentScrollRectContentTransform() {
		return ((T (*)(ScrollRectSelectableChild*))(Il2CppBase() + 0x21F6288))(this);
	}
	template <typename T = uintptr_t> T get_selectable() {
		return ((T (*)(ScrollRectSelectableChild*))(Il2CppBase() + 0x21F62FC))(this);
	}
	template <typename T = uintptr_t> T get_rectTransform() {
		return ((T (*)(ScrollRectSelectableChild*))(Il2CppBase() + 0x21F639C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ScrollRectSelectableChild*))(Il2CppBase() + 0x21F6444))(this);
	}
	template <typename T = void> T OnSelect(uintptr_t eventData) {
		return ((T (*)(ScrollRectSelectableChild*, uintptr_t))(Il2CppBase() + 0x21F6568))(this, eventData);
	}

};

}
