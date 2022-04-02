#pragma once
#include "Il2Cpp/Il2Cpp.h"

class QueryDatad62
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<QueryData>d__6`2"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& api() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& args() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& 8__1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& result5__2() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(QueryDatad62*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(QueryDatad62*, uintptr_t))(Il2CppBase() + 0x0))(this, stateMachine);
	}

};

}
