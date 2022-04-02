#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TryShowDialogsd5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<TryShowDialogs>d__5"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& datas() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(TryShowDialogsd5*))(Il2CppBase() + 0x16F3860))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(TryShowDialogsd5*, uintptr_t))(Il2CppBase() + 0x16F3868))(this, stateMachine);
	}

};

}
