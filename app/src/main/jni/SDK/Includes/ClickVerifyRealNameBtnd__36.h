#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ClickVerifyRealNameBtnd36
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ClickVerifyRealNameBtn>d__36"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(ClickVerifyRealNameBtnd36*))(Il2CppBase() + 0x16F2E5C))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(ClickVerifyRealNameBtnd36*, uintptr_t))(Il2CppBase() + 0x16F2E64))(this, stateMachine);
	}

};

}
