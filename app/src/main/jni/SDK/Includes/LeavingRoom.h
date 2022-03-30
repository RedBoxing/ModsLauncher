#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LeavingRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LeavingRoom"));
	}

	template <typename T = uintptr_t> T& mSession() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mRoomToLeave() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mLeavingCompleteCallback() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T IsActive() {
		return ((T (*)(LeavingRoom*))(Il2CppBase() + 0x282ED00))(this);
	}
	template <typename T = void> T OnStateEntered() {
		return ((T (*)(LeavingRoom*))(Il2CppBase() + 0x282ED60))(this);
	}
	template <typename T = void> T OnStateEnteredb__5_0(uintptr_t status) {
		return ((T (*)(LeavingRoom*, uintptr_t))(Il2CppBase() + 0x282EE60))(this, status);
	}
	template <typename T = bool> T iFixBaseProxy_IsActive() {
		return ((T (*)(LeavingRoom*))(Il2CppBase() + 0x282EEF0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnStateEntered() {
		return ((T (*)(LeavingRoom*))(Il2CppBase() + 0x282EEF4))(this);
	}

};

}
