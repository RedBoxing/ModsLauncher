#pragma once
#include "Il2Cpp/Il2Cpp.h"

class testArenad2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<testArena>d__2"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& client5__2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& u__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(testArenad2*))(Il2CppBase() + 0x16F27B8))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(testArenad2*, uintptr_t))(Il2CppBase() + 0x16F27C0))(this, stateMachine);
	}

};

}
