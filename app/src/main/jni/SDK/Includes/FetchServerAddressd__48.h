#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FetchServerAddressd48
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FetchServerAddress>d__48"));
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
	template <typename T = uintptr_t> T& serverType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& onFetchAddress() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& u__2() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(FetchServerAddressd48*))(Il2CppBase() + 0x16F2550))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(FetchServerAddressd48*, uintptr_t))(Il2CppBase() + 0x16F2558))(this, stateMachine);
	}

};

}
