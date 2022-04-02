#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class RealtimeManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "RealtimeManager"));
	}

	template <typename T = uintptr_t> T& mGameServices() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CreateRoom(uintptr_t config, uintptr_t helper, void* callback) {
		return ((T (*)(RealtimeManager*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x2AFED8C))(this, config, helper, callback);
	}
	template <typename T = void> T ShowPlayerSelectUI(uint32_t minimumPlayers, uint32_t maxiumPlayers, bool allowAutomatching, void* callback) {
		return ((T (*)(RealtimeManager*, uint32_t, uint32_t, bool, void*))(Il2CppBase() + 0x2AFEFD0))(this, minimumPlayers, maxiumPlayers, allowAutomatching, callback);
	}
	template <typename T = void> static T InternalPlayerSelectUIcallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AFE534))(0, response, data);
	}
	template <typename T = void> static T InternalRealTimeRoomCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AFE604))(0, response, data);
	}
	template <typename T = void> static T InternalRoomInboxUICallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AFE6D4))(0, response, data);
	}
	template <typename T = void> T ShowRoomInboxUI(void* callback) {
		return ((T (*)(RealtimeManager*, void*))(Il2CppBase() + 0x2AFF16C))(this, callback);
	}
	template <typename T = void> T ShowWaitingRoomUI(uintptr_t room, uint32_t minimumParticipantsBeforeStarting, void* callback) {
		return ((T (*)(RealtimeManager*, uintptr_t, uint32_t, void*))(Il2CppBase() + 0x2AFF2D8))(this, room, minimumParticipantsBeforeStarting, callback);
	}
	template <typename T = void> static T InternalWaitingRoomUICallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AFE7A4))(0, response, data);
	}
	template <typename T = void> static T InternalFetchInvitationsCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AFE874))(0, response, data);
	}
	template <typename T = void> T FetchInvitations(void* callback) {
		return ((T (*)(RealtimeManager*, void*))(Il2CppBase() + 0x2AFF49C))(this, callback);
	}
	template <typename T = void> static T InternalLeaveRoomCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AFE944))(0, response, data);
	}
	template <typename T = void> T LeaveRoom(uintptr_t room, void* callback) {
		return ((T (*)(RealtimeManager*, uintptr_t, void*))(Il2CppBase() + 0x2AFF608))(this, room, callback);
	}
	template <typename T = void> T AcceptInvitation(uintptr_t invitation, uintptr_t listener, void* callback) {
		return ((T (*)(RealtimeManager*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x2AFF760))(this, invitation, listener, callback);
	}
	template <typename T = void> T DeclineInvitation(uintptr_t invitation) {
		return ((T (*)(RealtimeManager*, uintptr_t))(Il2CppBase() + 0x2AFF8BC))(this, invitation);
	}
	template <typename T = void> T SendReliableMessage(uintptr_t room, uintptr_t participant, Il2CppArray<uintptr_t>* data, void* callback) {
		return ((T (*)(RealtimeManager*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x2AFF974))(this, room, participant, data, callback);
	}
	template <typename T = void> static T InternalSendReliableMessageCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AFEB14))(0, response, data);
	}
	template <typename T = void> T SendUnreliableMessageToAll(uintptr_t room, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(RealtimeManager*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2AFFB5C))(this, room, data);
	}
	template <typename T = void> T SendUnreliableMessageToSpecificParticipants(uintptr_t room, Il2CppList<uintptr_t>* recipients, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(RealtimeManager*, uintptr_t, Il2CppList<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2AFFC84))(this, room, recipients, data);
	}
	template <typename T = uintptr_t> static T ToCallbackPointer(void* callback) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2AFEEE8))(0, callback);
	}

};

}
