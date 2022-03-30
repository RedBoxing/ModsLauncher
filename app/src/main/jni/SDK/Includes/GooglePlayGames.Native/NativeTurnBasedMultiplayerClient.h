#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native {

class NativeTurnBasedMultiplayerClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native", "NativeTurnBasedMultiplayerClient"));
	}

	template <typename T = uintptr_t> T& mTurnBasedManager() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mNativeClient() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& mMatchDelegate() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CreateQuickMatch(uint32_t minOpponents, uint32_t maxOpponents, uint32_t variant, void* callback) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, uint32_t, uint32_t, uint32_t, void*))(Il2CppBase() + 0x283542C))(this, minOpponents, maxOpponents, variant, callback);
	}
	template <typename T = void> T CreateQuickMatch_1(uint32_t minOpponents, uint32_t maxOpponents, uint32_t variant, uint64_t exclusiveBitmask, void* callback) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, uint32_t, uint32_t, uint32_t, uint64_t, void*))(Il2CppBase() + 0x28354D8))(this, minOpponents, maxOpponents, variant, exclusiveBitmask, callback);
	}
	template <typename T = void> T CreateWithInvitationScreen(uint32_t minOpponents, uint32_t maxOpponents, uint32_t variant, void* callback) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, uint32_t, uint32_t, uint32_t, void*))(Il2CppBase() + 0x2835A24))(this, minOpponents, maxOpponents, variant, callback);
	}
	template <typename T = void> T CreateWithInvitationScreen_1(uint32_t minOpponents, uint32_t maxOpponents, uint32_t variant, void* callback) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, uint32_t, uint32_t, uint32_t, void*))(Il2CppBase() + 0x2835B58))(this, minOpponents, maxOpponents, variant, callback);
	}
	template <typename T = void> T GetAllInvitations(void* callback) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, void*))(Il2CppBase() + 0x2835D38))(this, callback);
	}
	template <typename T = void> T GetAllMatches(void* callback) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, void*))(Il2CppBase() + 0x2835E50))(this, callback);
	}
	template <typename T = void> T GetMatch(Il2CppString* matchId, void* callback) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, Il2CppString*, void*))(Il2CppBase() + 0x2835F80))(this, matchId, callback);
	}
	template <typename T = void*> T BridgeMatchToUserCallback(void* userCallback) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, void*))(Il2CppBase() + 0x2835914))(this, userCallback);
	}
	template <typename T = void> T AcceptFromInbox(void* callback) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, void*))(Il2CppBase() + 0x28360F8))(this, callback);
	}
	template <typename T = void> T AcceptInvitation(Il2CppString* invitationId, void* callback) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, Il2CppString*, void*))(Il2CppBase() + 0x2836288))(this, invitationId, callback);
	}
	template <typename T = void> T FindInvitationWithId(Il2CppString* invitationId, void* callback) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, Il2CppString*, void*))(Il2CppBase() + 0x2836448))(this, invitationId, callback);
	}
	template <typename T = void> T RegisterMatchDelegate(uintptr_t del) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, uintptr_t))(Il2CppBase() + 0x2836580))(this, del);
	}
	template <typename T = void> T HandleMatchEvent(uintptr_t eventType, Il2CppString* matchId, uintptr_t match) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x28366E4))(this, eventType, matchId, match);
	}
	template <typename T = uintptr_t> T WaitForLogin(uintptr_t method) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, uintptr_t))(Il2CppBase() + 0x2836A48))(this, method);
	}
	template <typename T = void> T TakeTurn(uintptr_t match, Il2CppArray<uintptr_t>* data, Il2CppString* pendingParticipantId, void* callback) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppString*, void*))(Il2CppBase() + 0x2836BFC))(this, match, data, pendingParticipantId, callback);
	}
	template <typename T = void> T FindEqualVersionMatch(uintptr_t match, void* onFailure, void* onVersionMatch) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, uintptr_t, void*, void*))(Il2CppBase() + 0x2836F94))(this, match, onFailure, onVersionMatch);
	}
	template <typename T = void> T FindEqualVersionMatchWithParticipant(uintptr_t match, Il2CppString* participantId, void* onFailure, void* onFoundParticipantAndMatch) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, uintptr_t, Il2CppString*, void*, void*))(Il2CppBase() + 0x2836E14))(this, match, participantId, onFailure, onFoundParticipantAndMatch);
	}
	template <typename T = int32_t> T GetMaxMatchDataSize() {
		return ((T (*)(NativeTurnBasedMultiplayerClient*))(Il2CppBase() + 0x2837138))(this);
	}
	template <typename T = void> T Finish(uintptr_t match, Il2CppArray<uintptr_t>* data, uintptr_t outcome, void* callback) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, void*))(Il2CppBase() + 0x28371E4))(this, match, data, outcome, callback);
	}
	template <typename T = uintptr_t> static T ResultToMatchResult(uintptr_t result) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x28373D0))(0, result);
	}
	template <typename T = void> T AcknowledgeFinished(uintptr_t match, void* callback) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, uintptr_t, void*))(Il2CppBase() + 0x28374E0))(this, match, callback);
	}
	template <typename T = void> T Leave(uintptr_t match, void* callback) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, uintptr_t, void*))(Il2CppBase() + 0x283768C))(this, match, callback);
	}
	template <typename T = void> T LeaveDuringTurn(uintptr_t match, Il2CppString* pendingParticipantId, void* callback) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, uintptr_t, Il2CppString*, void*))(Il2CppBase() + 0x2837838))(this, match, pendingParticipantId, callback);
	}
	template <typename T = void> T Cancel(uintptr_t match, void* callback) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, uintptr_t, void*))(Il2CppBase() + 0x28379F0))(this, match, callback);
	}
	template <typename T = void> T Dismiss(uintptr_t match) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, uintptr_t))(Il2CppBase() + 0x2837B9C))(this, match);
	}
	template <typename T = void> T Rematch(uintptr_t match, void* callback) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, uintptr_t, void*))(Il2CppBase() + 0x2837D04))(this, match, callback);
	}
	template <typename T = void> T DeclineInvitation(Il2CppString* invitationId) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, Il2CppString*))(Il2CppBase() + 0x2837ED0))(this, invitationId);
	}
	template <typename T = void> T DeclineInvitationb__30_0(uintptr_t invitation) {
		return ((T (*)(NativeTurnBasedMultiplayerClient*, uintptr_t))(Il2CppBase() + 0x2837FA4))(this, invitation);
	}

};

}
