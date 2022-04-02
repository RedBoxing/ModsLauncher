#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class TurnBasedManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "TurnBasedManager"));
	}

	template <typename T = uintptr_t> T& mGameServices() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T GetMatch(Il2CppString* matchId, void* callback) {
		return ((T (*)(TurnBasedManager*, Il2CppString*, void*))(Il2CppBase() + 0x4609C14))(this, matchId, callback);
	}
	template <typename T = void> static T InternalTurnBasedMatchCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x460969C))(0, response, data);
	}
	template <typename T = void> T CreateMatch(uintptr_t config, void* callback) {
		return ((T (*)(TurnBasedManager*, uintptr_t, void*))(Il2CppBase() + 0x4609E14))(this, config, callback);
	}
	template <typename T = void> T ShowPlayerSelectUI(uint32_t minimumPlayers, uint32_t maxiumPlayers, bool allowAutomatching, void* callback) {
		return ((T (*)(TurnBasedManager*, uint32_t, uint32_t, bool, void*))(Il2CppBase() + 0x4609F4C))(this, minimumPlayers, maxiumPlayers, allowAutomatching, callback);
	}
	template <typename T = void> static T InternalPlayerSelectUIcallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x460976C))(0, response, data);
	}
	template <typename T = void> T GetAllTurnbasedMatches(void* callback) {
		return ((T (*)(TurnBasedManager*, void*))(Il2CppBase() + 0x460A0EC))(this, callback);
	}
	template <typename T = void> static T InternalTurnBasedMatchesCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x460983C))(0, response, data);
	}
	template <typename T = void> T AcceptInvitation(uintptr_t invitation, void* callback) {
		return ((T (*)(TurnBasedManager*, uintptr_t, void*))(Il2CppBase() + 0x460A25C))(this, invitation, callback);
	}
	template <typename T = void> T DeclineInvitation(uintptr_t invitation) {
		return ((T (*)(TurnBasedManager*, uintptr_t))(Il2CppBase() + 0x460A560))(this, invitation);
	}
	template <typename T = void> T TakeTurn(uintptr_t match, Il2CppArray<uintptr_t>* data, uintptr_t nextParticipant, void* callback) {
		return ((T (*)(TurnBasedManager*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, void*))(Il2CppBase() + 0x460A61C))(this, match, data, nextParticipant, callback);
	}
	template <typename T = void> static T InternalMatchInboxUICallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x460990C))(0, response, data);
	}
	template <typename T = void> T ShowInboxUI(void* callback) {
		return ((T (*)(TurnBasedManager*, void*))(Il2CppBase() + 0x460A7FC))(this, callback);
	}
	template <typename T = void> static T InternalMultiplayerStatusCallback(uintptr_t status, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x46099DC))(0, status, data);
	}
	template <typename T = void> T LeaveDuringMyTurn(uintptr_t match, uintptr_t nextParticipant, void* callback) {
		return ((T (*)(TurnBasedManager*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x460AAA4))(this, match, nextParticipant, callback);
	}
	template <typename T = void> T FinishMatchDuringMyTurn(uintptr_t match, Il2CppArray<uintptr_t>* data, uintptr_t results, void* callback) {
		return ((T (*)(TurnBasedManager*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, void*))(Il2CppBase() + 0x460AC28))(this, match, data, results, callback);
	}
	template <typename T = void> T ConfirmPendingCompletion(uintptr_t match, void* callback) {
		return ((T (*)(TurnBasedManager*, uintptr_t, void*))(Il2CppBase() + 0x460ADD4))(this, match, callback);
	}
	template <typename T = void> T LeaveMatchDuringTheirTurn(uintptr_t match, void* callback) {
		return ((T (*)(TurnBasedManager*, uintptr_t, void*))(Il2CppBase() + 0x460AF0C))(this, match, callback);
	}
	template <typename T = void> T CancelMatch(uintptr_t match, void* callback) {
		return ((T (*)(TurnBasedManager*, uintptr_t, void*))(Il2CppBase() + 0x460B068))(this, match, callback);
	}
	template <typename T = void> T DismissMatch(uintptr_t match) {
		return ((T (*)(TurnBasedManager*, uintptr_t))(Il2CppBase() + 0x460B1C4))(this, match);
	}
	template <typename T = void> T Rematch(uintptr_t match, void* callback) {
		return ((T (*)(TurnBasedManager*, uintptr_t, void*))(Il2CppBase() + 0x460B280))(this, match, callback);
	}
	template <typename T = uintptr_t> static T ToCallbackPointer(void* callback) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4609D2C))(0, callback);
	}

};

}
