#pragma once
#include "Il2Cpp/Il2Cpp.h"

class InputActionSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputActionSet"));
	}

	template <typename T = int32_t> T& _actionId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _axisRange() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_actionId() {
		return ((T (*)(InputActionSet*))(Il2CppBase() + 0x21E2778))(this);
	}
	template <typename T = uintptr_t> T get_axisRange() {
		return ((T (*)(InputActionSet*))(Il2CppBase() + 0x21E27D8))(this);
	}

};

}
