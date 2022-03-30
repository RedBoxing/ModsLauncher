#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomSession
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomSession"));
	}

	template <typename T = uintptr_t> T& mLifecycleLock() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mListener() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mManager() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& mCurrentPlayerId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mState() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& mStillPreRoomCreation() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& mInvitation() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& mShowingUI() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& mMinPlayersToStart() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = bool> T get_ShowingUI() {
		return ((T (*)(RoomSession*))(Il2CppBase() + 0x2831298))(this);
	}
	template <typename T = void> T set_ShowingUI(bool value) {
		return ((T (*)(RoomSession*, bool))(Il2CppBase() + 0x2827260))(this, value);
	}
	template <typename T = uint32_t> T get_MinPlayersToStart() {
		return ((T (*)(RoomSession*))(Il2CppBase() + 0x282A290))(this);
	}
	template <typename T = void> T set_MinPlayersToStart(uint32_t value) {
		return ((T (*)(RoomSession*, uint32_t))(Il2CppBase() + 0x28268D0))(this, value);
	}
	template <typename T = uintptr_t> T Manager() {
		return ((T (*)(RoomSession*))(Il2CppBase() + 0x282E5A8))(this);
	}
	template <typename T = bool> T IsActive() {
		return ((T (*)(RoomSession*))(Il2CppBase() + 0x28266EC))(this);
	}
	template <typename T = Il2CppString*> T SelfPlayerId() {
		return ((T (*)(RoomSession*))(Il2CppBase() + 0x282BBC0))(this);
	}
	template <typename T = void> T SetInvitation(uintptr_t invitation) {
		return ((T (*)(RoomSession*, uintptr_t))(Il2CppBase() + 0x28297B4))(this, invitation);
	}
	template <typename T = uintptr_t> T GetInvitation() {
		return ((T (*)(RoomSession*))(Il2CppBase() + 0x2827B8C))(this);
	}
	template <typename T = uintptr_t> T OnGameThreadListener() {
		return ((T (*)(RoomSession*))(Il2CppBase() + 0x282B200))(this);
	}
	template <typename T = void> T EnterState(uintptr_t handler) {
		return ((T (*)(RoomSession*, uintptr_t))(Il2CppBase() + 0x282B184))(this, handler);
	}
	template <typename T = void> T EnterState_1(uintptr_t handler, bool fireStateEnteredEvent) {
		return ((T (*)(RoomSession*, uintptr_t, bool))(Il2CppBase() + 0x2825BB8))(this, handler, fireStateEnteredEvent);
	}
	template <typename T = void> T LeaveRoom() {
		return ((T (*)(RoomSession*))(Il2CppBase() + 0x2826768))(this);
	}
	template <typename T = void> T ShowWaitingRoomUI() {
		return ((T (*)(RoomSession*))(Il2CppBase() + 0x28273D0))(this);
	}
	template <typename T = void> T StartRoomCreation(Il2CppString* currentPlayerId, uintptr_t createRoom) {
		return ((T (*)(RoomSession*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2826B6C))(this, currentPlayerId, createRoom);
	}
	template <typename T = void> T OnRoomStatusChanged(uintptr_t room) {
		return ((T (*)(RoomSession*, uintptr_t))(Il2CppBase() + 0x282ADF8))(this, room);
	}
	template <typename T = void> T OnConnectedSetChanged(uintptr_t room) {
		return ((T (*)(RoomSession*, uintptr_t))(Il2CppBase() + 0x282ACB8))(this, room);
	}
	template <typename T = void> T OnParticipantStatusChanged(uintptr_t room, uintptr_t participant) {
		return ((T (*)(RoomSession*, uintptr_t, uintptr_t))(Il2CppBase() + 0x282AB64))(this, room, participant);
	}
	template <typename T = void> T HandleRoomResponse(uintptr_t response) {
		return ((T (*)(RoomSession*, uintptr_t))(Il2CppBase() + 0x28296A8))(this, response);
	}
	template <typename T = void> T OnDataReceived(uintptr_t room, uintptr_t sender, Il2CppArray<uintptr_t>* data, bool isReliable) {
		return ((T (*)(RoomSession*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x282AA5C))(this, room, sender, data, isReliable);
	}
	template <typename T = void> T SendMessageToAll(bool reliable, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(RoomSession*, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2827C84))(this, reliable, data);
	}
	template <typename T = void> T SendMessageToAll_1(bool reliable, Il2CppArray<uintptr_t>* data, int32_t offset, int32_t length) {
		return ((T (*)(RoomSession*, bool, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2827DD8))(this, reliable, data, offset, length);
	}
	template <typename T = void> T SendMessage(bool reliable, Il2CppString* participantId, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(RoomSession*, bool, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2827F50))(this, reliable, participantId, data);
	}
	template <typename T = void> T SendMessage_1(bool reliable, Il2CppString* participantId, Il2CppArray<uintptr_t>* data, int32_t offset, int32_t length) {
		return ((T (*)(RoomSession*, bool, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x28280D4))(this, reliable, participantId, data, offset, length);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetConnectedParticipants() {
		return ((T (*)(RoomSession*))(Il2CppBase() + 0x2828224))(this);
	}
	template <typename T = uintptr_t> T GetSelf() {
		return ((T (*)(RoomSession*))(Il2CppBase() + 0x2831300))(this);
	}
	template <typename T = uintptr_t> T GetParticipant(Il2CppString* participantId) {
		return ((T (*)(RoomSession*, Il2CppString*))(Il2CppBase() + 0x2831380))(this, participantId);
	}
	template <typename T = bool> T IsRoomConnected() {
		return ((T (*)(RoomSession*))(Il2CppBase() + 0x2831418))(this);
	}

};

}
