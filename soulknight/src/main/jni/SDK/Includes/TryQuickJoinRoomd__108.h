#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TryQuickJoinRoomd108
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<TryQuickJoinRoom>d__108"));
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
	template <typename T = uintptr_t> T& args() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& success5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& payload5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& u__1() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& u__2() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(TryQuickJoinRoomd108*))(Il2CppBase() + 0x16F3380))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(TryQuickJoinRoomd108*, uintptr_t))(Il2CppBase() + 0x16F3388))(this, stateMachine);
	}

};

}
