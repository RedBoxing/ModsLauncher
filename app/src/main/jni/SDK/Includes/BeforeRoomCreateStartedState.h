#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BeforeRoomCreateStartedState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BeforeRoomCreateStartedState"));
	}

	template <typename T = uintptr_t> T& mContainingSession() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T LeaveRoom() {
		return ((T (*)(BeforeRoomCreateStartedState*))(Il2CppBase() + 0x282D3B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_LeaveRoom() {
		return ((T (*)(BeforeRoomCreateStartedState*))(Il2CppBase() + 0x282D4C8))(this);
	}

};

}
