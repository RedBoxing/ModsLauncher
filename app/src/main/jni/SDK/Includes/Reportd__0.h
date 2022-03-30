#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Reportd0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Report>d__0"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& reportType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& targetMemberInfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(Reportd0*))(Il2CppBase() + 0x16F3674))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(Reportd0*, uintptr_t))(Il2CppBase() + 0x16F367C))(this, stateMachine);
	}

};

}
