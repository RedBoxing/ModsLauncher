#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MessagingEnabledState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessagingEnabledState"));
	}

	template <typename T = uintptr_t> T& mSession() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mRoom() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& mNativeParticipants() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& mParticipants() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T UpdateCurrentRoom(uintptr_t room) {
		return ((T (*)(MessagingEnabledState*, uintptr_t))(Il2CppBase() + 0x282EEF8))(this, room);
	}
	template <typename T = void> T OnRoomStatusChanged(uintptr_t room) {
		return ((T (*)(MessagingEnabledState*, uintptr_t))(Il2CppBase() + 0x282F208))(this, room);
	}
	template <typename T = void> T HandleRoomStatusChanged(uintptr_t room) {
		return ((T (*)(MessagingEnabledState*, uintptr_t))(Il2CppBase() + 0x282F298))(this, room);
	}
	template <typename T = void> T OnConnectedSetChanged(uintptr_t room) {
		return ((T (*)(MessagingEnabledState*, uintptr_t))(Il2CppBase() + 0x282F308))(this, room);
	}
	template <typename T = void> T HandleConnectedSetChanged(uintptr_t room) {
		return ((T (*)(MessagingEnabledState*, uintptr_t))(Il2CppBase() + 0x282CFA0))(this, room);
	}
	template <typename T = void> T OnParticipantStatusChanged(uintptr_t room, uintptr_t participant) {
		return ((T (*)(MessagingEnabledState*, uintptr_t, uintptr_t))(Il2CppBase() + 0x282F398))(this, room, participant);
	}
	template <typename T = void> T HandleParticipantStatusChanged(uintptr_t room, uintptr_t participant) {
		return ((T (*)(MessagingEnabledState*, uintptr_t, uintptr_t))(Il2CppBase() + 0x282EB80))(this, room, participant);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetConnectedParticipants() {
		return ((T (*)(MessagingEnabledState*))(Il2CppBase() + 0x282F434))(this);
	}
	template <typename T = void> T SendToSpecificRecipient(Il2CppString* recipientId, Il2CppArray<uintptr_t>* data, int32_t offset, int32_t length, bool isReliable) {
		return ((T (*)(MessagingEnabledState*, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t, int32_t, bool))(Il2CppBase() + 0x282F5CC))(this, recipientId, data, offset, length, isReliable);
	}
	template <typename T = void> T SendToAll(Il2CppArray<uintptr_t>* data, int32_t offset, int32_t length, bool isReliable) {
		return ((T (*)(MessagingEnabledState*, Il2CppArray<uintptr_t>*, int32_t, int32_t, bool))(Il2CppBase() + 0x282F874))(this, data, offset, length, isReliable);
	}
	template <typename T = void> T OnDataReceived(uintptr_t room, uintptr_t sender, Il2CppArray<uintptr_t>* data, bool isReliable) {
		return ((T (*)(MessagingEnabledState*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x282FA90))(this, room, sender, data, isReliable);
	}
	template <typename T = void> T iFixBaseProxy_OnRoomStatusChanged(uintptr_t P0) {
		return ((T (*)(MessagingEnabledState*, uintptr_t))(Il2CppBase() + 0x282FCF0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnConnectedSetChanged(uintptr_t P0) {
		return ((T (*)(MessagingEnabledState*, uintptr_t))(Il2CppBase() + 0x282FDF4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnParticipantStatusChanged(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(MessagingEnabledState*, uintptr_t, uintptr_t))(Il2CppBase() + 0x282FEF8))(this, P0, P1);
	}
	template <typename T = Il2CppList<uintptr_t>*> T iFixBaseProxy_GetConnectedParticipants() {
		return ((T (*)(MessagingEnabledState*))(Il2CppBase() + 0x2830004))(this);
	}
	template <typename T = void> T iFixBaseProxy_SendToSpecificRecipient(Il2CppString* P0, Il2CppArray<uintptr_t>* P1, int32_t P2, int32_t P3, bool P4) {
		return ((T (*)(MessagingEnabledState*, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t, int32_t, bool))(Il2CppBase() + 0x2830120))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T iFixBaseProxy_SendToAll(Il2CppArray<uintptr_t>* P0, int32_t P1, int32_t P2, bool P3) {
		return ((T (*)(MessagingEnabledState*, Il2CppArray<uintptr_t>*, int32_t, int32_t, bool))(Il2CppBase() + 0x2830260))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T iFixBaseProxy_OnDataReceived(uintptr_t P0, uintptr_t P1, Il2CppArray<uintptr_t>* P2, bool P3) {
		return ((T (*)(MessagingEnabledState*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x283038C))(this, P0, P1, P2, P3);
	}

};

}
