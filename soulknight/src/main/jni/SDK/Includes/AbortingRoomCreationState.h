#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AbortingRoomCreationState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AbortingRoomCreationState"));
	}

	template <typename T = uintptr_t> T& mSession() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T IsActive() {
		return ((T (*)(AbortingRoomCreationState*))(Il2CppBase() + 0x282AF7C))(this);
	}
	template <typename T = void> T HandleRoomResponse(uintptr_t response) {
		return ((T (*)(AbortingRoomCreationState*, uintptr_t))(Il2CppBase() + 0x282AFDC))(this, response);
	}
	template <typename T = void> T HandleRoomResponseb__3_0() {
		return ((T (*)(AbortingRoomCreationState*))(Il2CppBase() + 0x282B440))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsActive() {
		return ((T (*)(AbortingRoomCreationState*))(Il2CppBase() + 0x282B484))(this);
	}
	template <typename T = void> T iFixBaseProxy_HandleRoomResponse(uintptr_t P0) {
		return ((T (*)(AbortingRoomCreationState*, uintptr_t))(Il2CppBase() + 0x282B57C))(this, P0);
	}

};

}
