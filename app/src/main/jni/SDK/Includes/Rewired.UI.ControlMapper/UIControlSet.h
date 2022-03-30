#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class UIControlSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "UIControlSet"));
	}

	template <typename T = uintptr_t> T& title() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& _controls() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T get_controls() {
		return ((T (*)(UIControlSet*))(Il2CppBase() + 0x1BDFB08))(this);
	}
	template <typename T = void> T SetTitle(Il2CppString* text) {
		return ((T (*)(UIControlSet*, Il2CppString*))(Il2CppBase() + 0x1BDFBBC))(this, text);
	}
	template <typename T = uintptr_t> T GetControl(int32_t uniqueId) {
		return ((T (*)(UIControlSet*, int32_t))(Il2CppBase() + 0x0))(this, uniqueId);
	}
	template <typename T = uintptr_t> T CreateSlider(uintptr_t prefab, uintptr_t icon, float minValue, float maxValue, void* valueChangedCallback, void* cancelCallback) {
		return ((T (*)(UIControlSet*, uintptr_t, uintptr_t, float, float, void*, void*))(Il2CppBase() + 0x1BDFCBC))(this, prefab, icon, minValue, maxValue, valueChangedCallback, cancelCallback);
	}

};

}
