#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GetIsShowLogd27
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetIsShowLog>d__27"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& queryTask5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& u__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(GetIsShowLogd27*))(Il2CppBase() + 0x16F1F2C))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(GetIsShowLogd27*, uintptr_t))(Il2CppBase() + 0x16F1F34))(this, stateMachine);
	}

};

}
