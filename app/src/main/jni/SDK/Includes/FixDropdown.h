#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FixDropdown
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FixDropdown"));
	}

	template <typename T = uintptr_t> T& drop() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& inputField() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& lastIndex() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& action() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnSelect(uintptr_t eventData) {
		return ((T (*)(FixDropdown*, uintptr_t))(Il2CppBase() + 0x450F87C))(this, eventData);
	}

};

}
