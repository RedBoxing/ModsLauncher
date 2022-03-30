#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CommandListExecution
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CommandListExecution"));
	}

	template <typename T = uintptr_t> T& cmdList() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T SetParallel(bool parallel) {
		return ((T (*)(CommandListExecution*, bool))(Il2CppBase() + 0x4272810))(this, parallel);
	}
	template <typename T = void> T Add(uintptr_t cmd) {
		return ((T (*)(CommandListExecution*, uintptr_t))(Il2CppBase() + 0x4272898))(this, cmd);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CommandListExecution*))(Il2CppBase() + 0x42729E4))(this);
	}

};

}
