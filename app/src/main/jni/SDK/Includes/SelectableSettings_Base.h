#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SelectableSettingsBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelectableSettings_Base"));
	}

	template <typename T = uintptr_t> T& _transition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _colors() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _spriteState() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _animationTriggers() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = uintptr_t> T get_transition() {
		return ((T (*)(SelectableSettingsBase*))(Il2CppBase() + 0x1BDEDD0))(this);
	}
	template <typename T = uintptr_t> T get_selectableColors() {
		return ((T (*)(SelectableSettingsBase*))(Il2CppBase() + 0x1BDEE30))(this);
	}
	template <typename T = uintptr_t> T get_spriteState() {
		return ((T (*)(SelectableSettingsBase*))(Il2CppBase() + 0x1BDEEAC))(this);
	}
	template <typename T = uintptr_t> T get_animationTriggers() {
		return ((T (*)(SelectableSettingsBase*))(Il2CppBase() + 0x1BDEF34))(this);
	}
	template <typename T = void> T Apply(uintptr_t item) {
		return ((T (*)(SelectableSettingsBase*, uintptr_t))(Il2CppBase() + 0x1BDE5EC))(this, item);
	}

};

}
