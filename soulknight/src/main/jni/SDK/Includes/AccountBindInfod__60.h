#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AccountBindInfod60
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AccountBindInfo>d__60"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& newAccount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& forceBind() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& 8__1() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(AccountBindInfod60*))(Il2CppBase() + 0x16F247C))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(AccountBindInfod60*, uintptr_t))(Il2CppBase() + 0x16F2484))(this, stateMachine);
	}

};

}
