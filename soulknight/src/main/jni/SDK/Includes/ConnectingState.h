#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ConnectingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConnectingState"));
	}

	template <typename T = float> static T& InitialPercentComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& FailedStatuses() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& mConnectedParticipants() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& mPercentComplete() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& mPercentPerParticipant() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T OnStateEntered() {
		return ((T (*)(ConnectingState*))(Il2CppBase() + 0x282D588))(this);
	}
	template <typename T = void> T HandleConnectedSetChanged(uintptr_t room) {
		return ((T (*)(ConnectingState*, uintptr_t))(Il2CppBase() + 0x282D74C))(this, room);
	}
	template <typename T = void> T HandleParticipantStatusChanged(uintptr_t room, uintptr_t participant) {
		return ((T (*)(ConnectingState*, uintptr_t, uintptr_t))(Il2CppBase() + 0x282E08C))(this, room, participant);
	}
	template <typename T = void> T LeaveRoom() {
		return ((T (*)(ConnectingState*))(Il2CppBase() + 0x282E380))(this);
	}
	template <typename T = void> T ShowWaitingRoomUI(uint32_t minimumParticipantsBeforeStarting) {
		return ((T (*)(ConnectingState*, uint32_t))(Il2CppBase() + 0x282E474))(this, minimumParticipantsBeforeStarting);
	}
	template <typename T = void> T LeaveRoomb__9_0() {
		return ((T (*)(ConnectingState*))(Il2CppBase() + 0x282E6DC))(this);
	}
	template <typename T = void> T ShowWaitingRoomUIb__10_0(uintptr_t response) {
		return ((T (*)(ConnectingState*, uintptr_t))(Il2CppBase() + 0x282E720))(this, response);
	}
	template <typename T = void> T iFixBaseProxy_OnStateEntered() {
		return ((T (*)(ConnectingState*))(Il2CppBase() + 0x282EB74))(this);
	}
	template <typename T = void> T iFixBaseProxy_HandleConnectedSetChanged(uintptr_t P0) {
		return ((T (*)(ConnectingState*, uintptr_t))(Il2CppBase() + 0x282EB78))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HandleParticipantStatusChanged(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ConnectingState*, uintptr_t, uintptr_t))(Il2CppBase() + 0x282EB7C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_LeaveRoom() {
		return ((T (*)(ConnectingState*))(Il2CppBase() + 0x282EBF8))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowWaitingRoomUI(uint32_t P0) {
		return ((T (*)(ConnectingState*, uint32_t))(Il2CppBase() + 0x282EBFC))(this, P0);
	}

};

}
