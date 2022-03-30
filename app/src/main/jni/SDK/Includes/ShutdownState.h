#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShutdownState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShutdownState"));
	}

	template <typename T = uintptr_t> T& mSession() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T IsActive() {
		return ((T (*)(ShutdownState*))(Il2CppBase() + 0x2831498))(this);
	}
	template <typename T = void> T LeaveRoom() {
		return ((T (*)(ShutdownState*))(Il2CppBase() + 0x28314F8))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsActive() {
		return ((T (*)(ShutdownState*))(Il2CppBase() + 0x283157C))(this);
	}
	template <typename T = void> T iFixBaseProxy_LeaveRoom() {
		return ((T (*)(ShutdownState*))(Il2CppBase() + 0x2831580))(this);
	}

};

}
