#pragma once
#include "Il2Cpp/Il2Cpp.h"

class InitViewb152d
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<<InitView>b__15_2>d"));
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

	template <typename T = void> T MoveNext() {
		return ((T (*)(InitViewb152d*))(Il2CppBase() + 0x16F2E34))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(InitViewb152d*, uintptr_t))(Il2CppBase() + 0x16F2E3C))(this, stateMachine);
	}

};

}
