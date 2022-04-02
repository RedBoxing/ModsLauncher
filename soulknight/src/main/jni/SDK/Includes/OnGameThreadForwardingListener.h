#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnGameThreadForwardingListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnGameThreadForwardingListener"));
	}

	template <typename T = uintptr_t> T& mListener() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T RoomSetupProgress(float percent) {
		return ((T (*)(OnGameThreadForwardingListener*, float))(Il2CppBase() + 0x282D620))(this, percent);
	}
	template <typename T = void> T RoomConnected(bool success) {
		return ((T (*)(OnGameThreadForwardingListener*, bool))(Il2CppBase() + 0x282B260))(this, success);
	}
	template <typename T = void> T LeftRoom() {
		return ((T (*)(OnGameThreadForwardingListener*))(Il2CppBase() + 0x282CADC))(this);
	}
	template <typename T = void> T PeersConnected(Il2CppArray<uintptr_t>* participantIds) {
		return ((T (*)(OnGameThreadForwardingListener*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x282C750))(this, participantIds);
	}
	template <typename T = void> T PeersDisconnected(Il2CppArray<uintptr_t>* participantIds) {
		return ((T (*)(OnGameThreadForwardingListener*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x282C87C))(this, participantIds);
	}
	template <typename T = void> T RealTimeMessageReceived(bool isReliable, Il2CppString* senderId, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(OnGameThreadForwardingListener*, bool, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x282FB78))(this, isReliable, senderId, data);
	}
	template <typename T = void> T ParticipantLeft(uintptr_t participant) {
		return ((T (*)(OnGameThreadForwardingListener*, uintptr_t))(Il2CppBase() + 0x282E254))(this, participant);
	}
	template <typename T = void> T LeftRoomb__4_0() {
		return ((T (*)(OnGameThreadForwardingListener*))(Il2CppBase() + 0x283099C))(this);
	}

};

}
