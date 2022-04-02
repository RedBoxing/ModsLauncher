#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomCreationPendingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomCreationPendingState"));
	}

	template <typename T = uintptr_t> T& mContainingSession() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T HandleRoomResponse(uintptr_t response) {
		return ((T (*)(RoomCreationPendingState*, uintptr_t))(Il2CppBase() + 0x2830FC8))(this, response);
	}
	template <typename T = bool> T IsActive() {
		return ((T (*)(RoomCreationPendingState*))(Il2CppBase() + 0x2831144))(this);
	}
	template <typename T = void> T LeaveRoom() {
		return ((T (*)(RoomCreationPendingState*))(Il2CppBase() + 0x28311A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_HandleRoomResponse(uintptr_t P0) {
		return ((T (*)(RoomCreationPendingState*, uintptr_t))(Il2CppBase() + 0x283128C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_IsActive() {
		return ((T (*)(RoomCreationPendingState*))(Il2CppBase() + 0x2831290))(this);
	}
	template <typename T = void> T iFixBaseProxy_LeaveRoom() {
		return ((T (*)(RoomCreationPendingState*))(Il2CppBase() + 0x2831294))(this);
	}

};

}
