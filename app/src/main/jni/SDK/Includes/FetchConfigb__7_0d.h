#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FetchConfigb70d
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<<FetchConfig>b__7_0>d"));
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
	template <typename T = void*> T& u__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(FetchConfigb70d*))(Il2CppBase() + 0x16F3284))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(FetchConfigb70d*, uintptr_t))(Il2CppBase() + 0x16F328C))(this, stateMachine);
	}

};

}
