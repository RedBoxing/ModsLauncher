#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NoopListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NoopListener"));
	}


	template <typename T = void> T OnRoomSetupProgress(float percent) {
		return ((T (*)(NoopListener*, float))(Il2CppBase() + 0x28305E4))(this, percent);
	}
	template <typename T = void> T OnRoomConnected(bool success) {
		return ((T (*)(NoopListener*, bool))(Il2CppBase() + 0x2830654))(this, success);
	}
	template <typename T = void> T OnLeftRoom() {
		return ((T (*)(NoopListener*))(Il2CppBase() + 0x28306C4))(this);
	}
	template <typename T = void> T OnParticipantLeft(uintptr_t participant) {
		return ((T (*)(NoopListener*, uintptr_t))(Il2CppBase() + 0x2830720))(this, participant);
	}
	template <typename T = void> T OnPeersConnected(Il2CppArray<uintptr_t>* participantIds) {
		return ((T (*)(NoopListener*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2830790))(this, participantIds);
	}
	template <typename T = void> T OnPeersDisconnected(Il2CppArray<uintptr_t>* participantIds) {
		return ((T (*)(NoopListener*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2830800))(this, participantIds);
	}
	template <typename T = void> T OnRealTimeMessageReceived(bool isReliable, Il2CppString* senderId, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(NoopListener*, bool, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2830870))(this, isReliable, senderId, data);
	}

};

}
