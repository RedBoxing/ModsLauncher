#pragma once
#include "Il2Cpp/Il2Cpp.h"

class QuickMatchJoind106
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<QuickMatchJoin>d__106"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isBadass() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isBossrush() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& hasNormalFactor() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = uintptr_t> T& u__1() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(QuickMatchJoind106*))(Il2CppBase() + 0x16F336C))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(QuickMatchJoind106*, uintptr_t))(Il2CppBase() + 0x16F3374))(this, stateMachine);
	}

};

}
