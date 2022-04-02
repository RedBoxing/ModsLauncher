#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UpdateNetTimed3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateNetTime>d__3"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& 8__1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& u__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(UpdateNetTimed3*))(Il2CppBase() + 0x16F3274))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(UpdateNetTimed3*, uintptr_t))(Il2CppBase() + 0x16F327C))(this, stateMachine);
	}

};

}
