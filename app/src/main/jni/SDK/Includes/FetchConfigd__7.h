#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FetchConfigd7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FetchConfig>d__7"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(FetchConfigd7*))(Il2CppBase() + 0x16F3294))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(FetchConfigd7*, uintptr_t))(Il2CppBase() + 0x16F329C))(this, stateMachine);
	}

};

}
