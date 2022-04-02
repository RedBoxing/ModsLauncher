#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native {

class NativeRealtimeMultiplayerClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native", "NativeRealtimeMultiplayerClient"));
	}

	template <typename T = uintptr_t> T& mSessionLock() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mNativeClient() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mRealtimeManager() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mCurrentSession() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T GetTerminatedSession() {
		return ((T (*)(NativeRealtimeMultiplayerClient*))(Il2CppBase() + 0x282594C))(this);
	}
	template <typename T = void> T CreateQuickGame(uint32_t minOpponents, uint32_t maxOpponents, uint32_t variant, uintptr_t listener) {
		return ((T (*)(NativeRealtimeMultiplayerClient*, uint32_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2825DAC))(this, minOpponents, maxOpponents, variant, listener);
	}
	template <typename T = void> T CreateQuickGame_1(uint32_t minOpponents, uint32_t maxOpponents, uint32_t variant, uint64_t exclusiveBitMask, uintptr_t listener) {
		return ((T (*)(NativeRealtimeMultiplayerClient*, uint32_t, uint32_t, uint32_t, uint64_t, uintptr_t))(Il2CppBase() + 0x2825E58))(this, minOpponents, maxOpponents, variant, exclusiveBitMask, listener);
	}
	template <typename T = uintptr_t> static T HelperForSession(uintptr_t session) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2826954))(0, session);
	}
	template <typename T = void> T HandleAppPausing(bool paused) {
		return ((T (*)(NativeRealtimeMultiplayerClient*, bool))(Il2CppBase() + 0x2826DDC))(this, paused);
	}
	template <typename T = void> T CreateWithInvitationScreen(uint32_t minOpponents, uint32_t maxOppponents, uint32_t variant, uintptr_t listener) {
		return ((T (*)(NativeRealtimeMultiplayerClient*, uint32_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2826F30))(this, minOpponents, maxOppponents, variant, listener);
	}
	template <typename T = void> T ShowWaitingRoomUI() {
		return ((T (*)(NativeRealtimeMultiplayerClient*))(Il2CppBase() + 0x28272DC))(this);
	}
	template <typename T = void> T GetAllInvitations(void* callback) {
		return ((T (*)(NativeRealtimeMultiplayerClient*, void*))(Il2CppBase() + 0x282745C))(this, callback);
	}
	template <typename T = void> T AcceptFromInbox(uintptr_t listener) {
		return ((T (*)(NativeRealtimeMultiplayerClient*, uintptr_t))(Il2CppBase() + 0x2827574))(this, listener);
	}
	template <typename T = void> T AcceptInvitation(Il2CppString* invitationId, uintptr_t listener) {
		return ((T (*)(NativeRealtimeMultiplayerClient*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x282782C))(this, invitationId, listener);
	}
	template <typename T = uintptr_t> T GetInvitation() {
		return ((T (*)(NativeRealtimeMultiplayerClient*))(Il2CppBase() + 0x2827B18))(this);
	}
	template <typename T = void> T LeaveRoom() {
		return ((T (*)(NativeRealtimeMultiplayerClient*))(Il2CppBase() + 0x2826EBC))(this);
	}
	template <typename T = void> T SendMessageToAll(bool reliable, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(NativeRealtimeMultiplayerClient*, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2827BEC))(this, reliable, data);
	}
	template <typename T = void> T SendMessageToAll_1(bool reliable, Il2CppArray<uintptr_t>* data, int32_t offset, int32_t length) {
		return ((T (*)(NativeRealtimeMultiplayerClient*, bool, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2827D1C))(this, reliable, data, offset, length);
	}
	template <typename T = void> T SendMessage(bool reliable, Il2CppString* participantId, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(NativeRealtimeMultiplayerClient*, bool, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2827EA0))(this, reliable, participantId, data);
	}
	template <typename T = void> T SendMessage_1(bool reliable, Il2CppString* participantId, Il2CppArray<uintptr_t>* data, int32_t offset, int32_t length) {
		return ((T (*)(NativeRealtimeMultiplayerClient*, bool, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2828000))(this, reliable, participantId, data, offset, length);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetConnectedParticipants() {
		return ((T (*)(NativeRealtimeMultiplayerClient*))(Il2CppBase() + 0x28281B0))(this);
	}
	template <typename T = uintptr_t> T GetSelf() {
		return ((T (*)(NativeRealtimeMultiplayerClient*))(Il2CppBase() + 0x28282A4))(this);
	}
	template <typename T = uintptr_t> T GetParticipant(Il2CppString* participantId) {
		return ((T (*)(NativeRealtimeMultiplayerClient*, Il2CppString*))(Il2CppBase() + 0x2828320))(this, participantId);
	}
	template <typename T = bool> T IsRoomConnected() {
		return ((T (*)(NativeRealtimeMultiplayerClient*))(Il2CppBase() + 0x28283B4))(this);
	}
	template <typename T = void> T DeclineInvitation(Il2CppString* invitationId) {
		return ((T (*)(NativeRealtimeMultiplayerClient*, Il2CppString*))(Il2CppBase() + 0x2828430))(this, invitationId);
	}
	template <typename T = uintptr_t> static T WithDefault(uintptr_t presented, uintptr_t defaultValue) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, presented, defaultValue);
	}

};

}
