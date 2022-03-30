#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Testd7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Test>d__7"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& tryCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(Testd7*))(Il2CppBase() + 0x16F2E0C))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(Testd7*, uintptr_t))(Il2CppBase() + 0x16F2E14))(this, stateMachine);
	}

};

}
