#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class TurnBasedMultiplayerManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "TurnBasedMultiplayerManager"));
	}


	template <typename T = void> static T TurnBasedMultiplayerManager_ShowPlayerSelectUI(uintptr_t self, uint32_t minimum_players, uint32_t maximum_players, bool allow_automatch, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uint32_t, uint32_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x3585BD8))(0, self, minimum_players, maximum_players, allow_automatch, callback, callback_arg);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_CancelMatch(uintptr_t self, uintptr_t match, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3585CC0))(0, self, match, callback, callback_arg);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_DismissMatch(uintptr_t self, uintptr_t match) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3585D8C))(0, self, match);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_ShowMatchInboxUI(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3585E38))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_SynchronizeData(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3585EF4))(0, self);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_Rematch(uintptr_t self, uintptr_t match, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3585F90))(0, self, match, callback, callback_arg);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_DismissInvitation(uintptr_t self, uintptr_t invitation) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x358605C))(0, self, invitation);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_FetchMatch(uintptr_t self, Il2CppString* match_id, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3586108))(0, self, match_id, callback, callback_arg);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_DeclineInvitation(uintptr_t self, uintptr_t invitation) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x35861E8))(0, self, invitation);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_FinishMatchDuringMyTurn(uintptr_t self, uintptr_t match, Il2CppArray<uintptr_t>* match_data, uintptr_t match_data_size, uintptr_t results, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3586294))(0, self, match, match_data, match_data_size, results, callback, callback_arg);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_FetchMatches(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x358638C))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_CreateTurnBasedMatch(uintptr_t self, uintptr_t config, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3586448))(0, self, config, callback, callback_arg);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_AcceptInvitation(uintptr_t self, uintptr_t invitation, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3586514))(0, self, invitation, callback, callback_arg);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_TakeMyTurn(uintptr_t self, uintptr_t match, Il2CppArray<uintptr_t>* match_data, uintptr_t match_data_size, uintptr_t results, uintptr_t next_participant, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35865E0))(0, self, match, match_data, match_data_size, results, next_participant, callback, callback_arg);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_ConfirmPendingCompletion(uintptr_t self, uintptr_t match, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35866E8))(0, self, match, callback, callback_arg);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_LeaveMatchDuringMyTurn(uintptr_t self, uintptr_t match, uintptr_t next_participant, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35867B4))(0, self, match, next_participant, callback, callback_arg);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_LeaveMatchDuringTheirTurn(uintptr_t self, uintptr_t match, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3586888))(0, self, match, callback, callback_arg);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_TurnBasedMatchResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3586954))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMultiplayerManager_TurnBasedMatchResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35869F0))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMultiplayerManager_TurnBasedMatchResponse_GetMatch(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3586A8C))(0, self);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_TurnBasedMatchesResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3586B28))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3586BC4))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_Length(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3586C60))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_GetElement(uintptr_t self, uintptr_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3586CFC))(0, self, index);
	}
	template <typename T = uintptr_t> static T TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_Length(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3586DA8))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_GetElement(uintptr_t self, uintptr_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3586E44))(0, self, index);
	}
	template <typename T = uintptr_t> static T TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_Length(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3586EF0))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_GetElement(uintptr_t self, uintptr_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3586F8C))(0, self, index);
	}
	template <typename T = uintptr_t> static T TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_Length(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3587038))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_GetElement(uintptr_t self, uintptr_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x35870D4))(0, self, index);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_MatchInboxUIResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3587180))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMultiplayerManager_MatchInboxUIResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x358721C))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMultiplayerManager_MatchInboxUIResponse_GetMatch(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35872B8))(0, self);
	}
	template <typename T = void> static T TurnBasedMultiplayerManager_PlayerSelectUIResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3587354))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35873F0))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetPlayerIds_Length(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x358748C))(0, self);
	}
	template <typename T = uintptr_t> static T TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetPlayerIds_GetElement(uintptr_t self, uintptr_t index, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x3587528))(0, self, index, out_arg, out_size);
	}
	template <typename T = uint32_t> static T TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetMinimumAutomatchingPlayers(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35875F4))(0, self);
	}
	template <typename T = uint32_t> static T TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetMaximumAutomatchingPlayers(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3587690))(0, self);
	}

};

}
