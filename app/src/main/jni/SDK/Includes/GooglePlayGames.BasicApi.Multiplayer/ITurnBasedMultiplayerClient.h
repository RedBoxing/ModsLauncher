#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Multiplayer {

class ITurnBasedMultiplayerClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Multiplayer", "ITurnBasedMultiplayerClient"));
	}


	template <typename T = void> T CreateQuickMatch(uint32_t minOpponents, uint32_t maxOpponents, uint32_t variant, void* callback) {
		return ((T (*)(ITurnBasedMultiplayerClient*, uint32_t, uint32_t, uint32_t, void*))(Il2CppBase() + 0x0))(this, minOpponents, maxOpponents, variant, callback);
	}
	template <typename T = void> T CreateQuickMatch_1(uint32_t minOpponents, uint32_t maxOpponents, uint32_t variant, uint64_t exclusiveBitmask, void* callback) {
		return ((T (*)(ITurnBasedMultiplayerClient*, uint32_t, uint32_t, uint32_t, uint64_t, void*))(Il2CppBase() + 0x0))(this, minOpponents, maxOpponents, variant, exclusiveBitmask, callback);
	}
	template <typename T = void> T CreateWithInvitationScreen(uint32_t minOpponents, uint32_t maxOpponents, uint32_t variant, void* callback) {
		return ((T (*)(ITurnBasedMultiplayerClient*, uint32_t, uint32_t, uint32_t, void*))(Il2CppBase() + 0x0))(this, minOpponents, maxOpponents, variant, callback);
	}
	template <typename T = void> T CreateWithInvitationScreen_1(uint32_t minOpponents, uint32_t maxOpponents, uint32_t variant, void* callback) {
		return ((T (*)(ITurnBasedMultiplayerClient*, uint32_t, uint32_t, uint32_t, void*))(Il2CppBase() + 0x0))(this, minOpponents, maxOpponents, variant, callback);
	}
	template <typename T = void> T GetAllInvitations(void* callback) {
		return ((T (*)(ITurnBasedMultiplayerClient*, void*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T GetAllMatches(void* callback) {
		return ((T (*)(ITurnBasedMultiplayerClient*, void*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T GetMatch(Il2CppString* matchId, void* callback) {
		return ((T (*)(ITurnBasedMultiplayerClient*, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, matchId, callback);
	}
	template <typename T = void> T AcceptFromInbox(void* callback) {
		return ((T (*)(ITurnBasedMultiplayerClient*, void*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T AcceptInvitation(Il2CppString* invitationId, void* callback) {
		return ((T (*)(ITurnBasedMultiplayerClient*, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, invitationId, callback);
	}
	template <typename T = void> T RegisterMatchDelegate(uintptr_t del) {
		return ((T (*)(ITurnBasedMultiplayerClient*, uintptr_t))(Il2CppBase() + 0x0))(this, del);
	}
	template <typename T = void> T TakeTurn(uintptr_t match, Il2CppArray<uintptr_t>* data, Il2CppString* pendingParticipantId, void* callback) {
		return ((T (*)(ITurnBasedMultiplayerClient*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, match, data, pendingParticipantId, callback);
	}
	template <typename T = int32_t> T GetMaxMatchDataSize() {
		return ((T (*)(ITurnBasedMultiplayerClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Finish(uintptr_t match, Il2CppArray<uintptr_t>* data, uintptr_t outcome, void* callback) {
		return ((T (*)(ITurnBasedMultiplayerClient*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, void*))(Il2CppBase() + 0x0))(this, match, data, outcome, callback);
	}
	template <typename T = void> T AcknowledgeFinished(uintptr_t match, void* callback) {
		return ((T (*)(ITurnBasedMultiplayerClient*, uintptr_t, void*))(Il2CppBase() + 0x0))(this, match, callback);
	}
	template <typename T = void> T Leave(uintptr_t match, void* callback) {
		return ((T (*)(ITurnBasedMultiplayerClient*, uintptr_t, void*))(Il2CppBase() + 0x0))(this, match, callback);
	}
	template <typename T = void> T LeaveDuringTurn(uintptr_t match, Il2CppString* pendingParticipantId, void* callback) {
		return ((T (*)(ITurnBasedMultiplayerClient*, uintptr_t, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, match, pendingParticipantId, callback);
	}
	template <typename T = void> T Cancel(uintptr_t match, void* callback) {
		return ((T (*)(ITurnBasedMultiplayerClient*, uintptr_t, void*))(Il2CppBase() + 0x0))(this, match, callback);
	}
	template <typename T = void> T Dismiss(uintptr_t match) {
		return ((T (*)(ITurnBasedMultiplayerClient*, uintptr_t))(Il2CppBase() + 0x0))(this, match);
	}
	template <typename T = void> T Rematch(uintptr_t match, void* callback) {
		return ((T (*)(ITurnBasedMultiplayerClient*, uintptr_t, void*))(Il2CppBase() + 0x0))(this, match, callback);
	}
	template <typename T = void> T DeclineInvitation(Il2CppString* invitationId) {
		return ((T (*)(ITurnBasedMultiplayerClient*, Il2CppString*))(Il2CppBase() + 0x0))(this, invitationId);
	}

};

}
