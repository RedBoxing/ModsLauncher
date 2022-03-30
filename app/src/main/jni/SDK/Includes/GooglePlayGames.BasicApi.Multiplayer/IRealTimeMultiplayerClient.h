#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Multiplayer {

class IRealTimeMultiplayerClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Multiplayer", "IRealTimeMultiplayerClient"));
	}


	template <typename T = void> T CreateQuickGame(uint32_t minOpponents, uint32_t maxOpponents, uint32_t variant, uintptr_t listener) {
		return ((T (*)(IRealTimeMultiplayerClient*, uint32_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x0))(this, minOpponents, maxOpponents, variant, listener);
	}
	template <typename T = void> T CreateQuickGame_1(uint32_t minOpponents, uint32_t maxOpponents, uint32_t variant, uint64_t exclusiveBitMask, uintptr_t listener) {
		return ((T (*)(IRealTimeMultiplayerClient*, uint32_t, uint32_t, uint32_t, uint64_t, uintptr_t))(Il2CppBase() + 0x0))(this, minOpponents, maxOpponents, variant, exclusiveBitMask, listener);
	}
	template <typename T = void> T CreateWithInvitationScreen(uint32_t minOpponents, uint32_t maxOppponents, uint32_t variant, uintptr_t listener) {
		return ((T (*)(IRealTimeMultiplayerClient*, uint32_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x0))(this, minOpponents, maxOppponents, variant, listener);
	}
	template <typename T = void> T ShowWaitingRoomUI() {
		return ((T (*)(IRealTimeMultiplayerClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T GetAllInvitations(void* callback) {
		return ((T (*)(IRealTimeMultiplayerClient*, void*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T AcceptFromInbox(uintptr_t listener) {
		return ((T (*)(IRealTimeMultiplayerClient*, uintptr_t))(Il2CppBase() + 0x0))(this, listener);
	}
	template <typename T = void> T AcceptInvitation(Il2CppString* invitationId, uintptr_t listener) {
		return ((T (*)(IRealTimeMultiplayerClient*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, invitationId, listener);
	}
	template <typename T = void> T SendMessageToAll(bool reliable, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(IRealTimeMultiplayerClient*, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, reliable, data);
	}
	template <typename T = void> T SendMessageToAll_1(bool reliable, Il2CppArray<uintptr_t>* data, int32_t offset, int32_t length) {
		return ((T (*)(IRealTimeMultiplayerClient*, bool, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, reliable, data, offset, length);
	}
	template <typename T = void> T SendMessage(bool reliable, Il2CppString* participantId, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(IRealTimeMultiplayerClient*, bool, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, reliable, participantId, data);
	}
	template <typename T = void> T SendMessage_1(bool reliable, Il2CppString* participantId, Il2CppArray<uintptr_t>* data, int32_t offset, int32_t length) {
		return ((T (*)(IRealTimeMultiplayerClient*, bool, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, reliable, participantId, data, offset, length);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetConnectedParticipants() {
		return ((T (*)(IRealTimeMultiplayerClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetSelf() {
		return ((T (*)(IRealTimeMultiplayerClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetParticipant(Il2CppString* participantId) {
		return ((T (*)(IRealTimeMultiplayerClient*, Il2CppString*))(Il2CppBase() + 0x0))(this, participantId);
	}
	template <typename T = uintptr_t> T GetInvitation() {
		return ((T (*)(IRealTimeMultiplayerClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T LeaveRoom() {
		return ((T (*)(IRealTimeMultiplayerClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsRoomConnected() {
		return ((T (*)(IRealTimeMultiplayerClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T DeclineInvitation(Il2CppString* invitationId) {
		return ((T (*)(IRealTimeMultiplayerClient*, Il2CppString*))(Il2CppBase() + 0x0))(this, invitationId);
	}

};

}
