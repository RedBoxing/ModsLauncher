#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UpdateArenaTryCountd17
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateArenaTryCount>d__17"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& updateArgs() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& tryCount5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(UpdateArenaTryCountd17*))(Il2CppBase() + 0x16F2A30))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(UpdateArenaTryCountd17*, uintptr_t))(Il2CppBase() + 0x16F2A38))(this, stateMachine);
	}

};

}
