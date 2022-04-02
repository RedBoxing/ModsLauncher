#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class RealTimeMultiplayerManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "RealTimeMultiplayerManager"));
	}


	template <typename T = void> static T RealTimeMultiplayerManager_CreateRealTimeRoom(uintptr_t self, uintptr_t config, uintptr_t helper, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3579D84))(0, self, config, helper, callback, callback_arg);
	}
	template <typename T = void> static T RealTimeMultiplayerManager_LeaveRoom(uintptr_t self, uintptr_t room, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3579E58))(0, self, room, callback, callback_arg);
	}
	template <typename T = void> static T RealTimeMultiplayerManager_SendUnreliableMessage(uintptr_t self, uintptr_t room, Il2CppArray<uintptr_t>* participants, uintptr_t participants_size, Il2CppArray<uintptr_t>* data, uintptr_t data_size) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3579F24))(0, self, room, participants, participants_size, data, data_size);
	}
	template <typename T = void> static T RealTimeMultiplayerManager_ShowWaitingRoomUI(uintptr_t self, uintptr_t room, uint32_t min_participants_to_start, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x357A00C))(0, self, room, min_participants_to_start, callback, callback_arg);
	}
	template <typename T = void> static T RealTimeMultiplayerManager_ShowPlayerSelectUI(uintptr_t self, uint32_t minimum_players, uint32_t maximum_players, bool allow_automatch, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uint32_t, uint32_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x357A0E0))(0, self, minimum_players, maximum_players, allow_automatch, callback, callback_arg);
	}
	template <typename T = void> static T RealTimeMultiplayerManager_DismissInvitation(uintptr_t self, uintptr_t invitation) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x357A1C8))(0, self, invitation);
	}
	template <typename T = void> static T RealTimeMultiplayerManager_DeclineInvitation(uintptr_t self, uintptr_t invitation) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x357A274))(0, self, invitation);
	}
	template <typename T = void> static T RealTimeMultiplayerManager_SendReliableMessage(uintptr_t self, uintptr_t room, uintptr_t participant, Il2CppArray<uintptr_t>* data, uintptr_t data_size, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x357A320))(0, self, room, participant, data, data_size, callback, callback_arg);
	}
	template <typename T = void> static T RealTimeMultiplayerManager_AcceptInvitation(uintptr_t self, uintptr_t invitation, uintptr_t helper, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x357A418))(0, self, invitation, helper, callback, callback_arg);
	}
	template <typename T = void> static T RealTimeMultiplayerManager_FetchInvitations(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x357A4EC))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T RealTimeMultiplayerManager_SendUnreliableMessageToOthers(uintptr_t self, uintptr_t room, Il2CppArray<uintptr_t>* data, uintptr_t data_size) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x357A5A8))(0, self, room, data, data_size);
	}
	template <typename T = void> static T RealTimeMultiplayerManager_ShowRoomInboxUI(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x357A674))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T RealTimeMultiplayerManager_RealTimeRoomResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357A730))(0, self);
	}
	template <typename T = uintptr_t> static T RealTimeMultiplayerManager_RealTimeRoomResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357A7CC))(0, self);
	}
	template <typename T = uintptr_t> static T RealTimeMultiplayerManager_RealTimeRoomResponse_GetRoom(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357A868))(0, self);
	}
	template <typename T = void> static T RealTimeMultiplayerManager_RoomInboxUIResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357A904))(0, self);
	}
	template <typename T = uintptr_t> static T RealTimeMultiplayerManager_RoomInboxUIResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357A9A0))(0, self);
	}
	template <typename T = uintptr_t> static T RealTimeMultiplayerManager_RoomInboxUIResponse_GetInvitation(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357AA3C))(0, self);
	}
	template <typename T = void> static T RealTimeMultiplayerManager_WaitingRoomUIResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357AAD8))(0, self);
	}
	template <typename T = uintptr_t> static T RealTimeMultiplayerManager_WaitingRoomUIResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357AB74))(0, self);
	}
	template <typename T = uintptr_t> static T RealTimeMultiplayerManager_WaitingRoomUIResponse_GetRoom(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357AC10))(0, self);
	}
	template <typename T = void> static T RealTimeMultiplayerManager_FetchInvitationsResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357ACAC))(0, self);
	}
	template <typename T = uintptr_t> static T RealTimeMultiplayerManager_FetchInvitationsResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357AD48))(0, self);
	}
	template <typename T = uintptr_t> static T RealTimeMultiplayerManager_FetchInvitationsResponse_GetInvitations_Length(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357ADE4))(0, self);
	}
	template <typename T = uintptr_t> static T RealTimeMultiplayerManager_FetchInvitationsResponse_GetInvitations_GetElement(uintptr_t self, uintptr_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x357AE80))(0, self, index);
	}

};

}
