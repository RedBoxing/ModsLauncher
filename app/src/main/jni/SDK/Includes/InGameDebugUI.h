#pragma once
#include "Il2Cpp/Il2Cpp.h"

class InGameDebugUI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InGameDebugUI"));
	}

	template <typename T = uintptr_t> T& confirmButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& inputField() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(InGameDebugUI*))(Il2CppBase() + 0x19C7104))(this);
	}
	template <typename T = void> T Awakeb__2_0() {
		return ((T (*)(InGameDebugUI*))(Il2CppBase() + 0x19C71F8))(this);
	}

};

}
