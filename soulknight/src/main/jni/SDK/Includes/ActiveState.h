#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ActiveState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActiveState"));
	}


	template <typename T = void> T OnStateEntered() {
		return ((T (*)(ActiveState*))(Il2CppBase() + 0x282B70C))(this);
	}
	template <typename T = bool> T IsRoomConnected() {
		return ((T (*)(ActiveState*))(Il2CppBase() + 0x282B7F0))(this);
	}
	template <typename T = uintptr_t> T GetParticipant(Il2CppString* participantId) {
		return ((T (*)(ActiveState*, Il2CppString*))(Il2CppBase() + 0x282B850))(this, participantId);
	}
	template <typename T = uintptr_t> T GetSelf() {
		return ((T (*)(ActiveState*))(Il2CppBase() + 0x282B98C))(this);
	}
	template <typename T = void> T HandleConnectedSetChanged(uintptr_t room) {
		return ((T (*)(ActiveState*, uintptr_t))(Il2CppBase() + 0x282BC28))(this, room);
	}
	template <typename T = void> T LeaveRoom() {
		return ((T (*)(ActiveState*))(Il2CppBase() + 0x282C9A8))(this);
	}
	template <typename T = void> T LeaveRoomb__6_0() {
		return ((T (*)(ActiveState*))(Il2CppBase() + 0x282CA9C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnStateEntered() {
		return ((T (*)(ActiveState*))(Il2CppBase() + 0x282CBB0))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsRoomConnected() {
		return ((T (*)(ActiveState*))(Il2CppBase() + 0x282CCA0))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetParticipant(Il2CppString* P0) {
		return ((T (*)(ActiveState*, Il2CppString*))(Il2CppBase() + 0x282CD98))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetSelf() {
		return ((T (*)(ActiveState*))(Il2CppBase() + 0x282CEA4))(this);
	}
	template <typename T = void> T iFixBaseProxy_HandleConnectedSetChanged(uintptr_t P0) {
		return ((T (*)(ActiveState*, uintptr_t))(Il2CppBase() + 0x282CF9C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_LeaveRoom() {
		return ((T (*)(ActiveState*))(Il2CppBase() + 0x282D010))(this);
	}

};

}
