#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SelectableSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelectableSettings"));
	}

	template <typename T = uintptr_t> T& _imageSettings() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = uintptr_t> T get_imageSettings() {
		return ((T (*)(SelectableSettings*))(Il2CppBase() + 0x1BDEC14))(this);
	}
	template <typename T = void> T Apply(uintptr_t item) {
		return ((T (*)(SelectableSettings*, uintptr_t))(Il2CppBase() + 0x1BDEC74))(this, item);
	}
	template <typename T = void> T iFixBaseProxy_Apply(uintptr_t P0) {
		return ((T (*)(SelectableSettings*, uintptr_t))(Il2CppBase() + 0x1BDEDCC))(this, P0);
	}

};

}
