#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Multiplayer {

class RealTimeMultiplayerListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Multiplayer", "RealTimeMultiplayerListener"));
	}


	template <typename T = void> T OnRoomSetupProgress(float percent) {
		return ((T (*)(RealTimeMultiplayerListener*, float))(Il2CppBase() + 0x0))(this, percent);
	}
	template <typename T = void> T OnRoomConnected(bool success) {
		return ((T (*)(RealTimeMultiplayerListener*, bool))(Il2CppBase() + 0x0))(this, success);
	}
	template <typename T = void> T OnLeftRoom() {
		return ((T (*)(RealTimeMultiplayerListener*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnParticipantLeft(uintptr_t participant) {
		return ((T (*)(RealTimeMultiplayerListener*, uintptr_t))(Il2CppBase() + 0x0))(this, participant);
	}
	template <typename T = void> T OnPeersConnected(Il2CppArray<uintptr_t>* participantIds) {
		return ((T (*)(RealTimeMultiplayerListener*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, participantIds);
	}
	template <typename T = void> T OnPeersDisconnected(Il2CppArray<uintptr_t>* participantIds) {
		return ((T (*)(RealTimeMultiplayerListener*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, participantIds);
	}
	template <typename T = void> T OnRealTimeMessageReceived(bool isReliable, Il2CppString* senderId, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(RealTimeMultiplayerListener*, bool, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, isReliable, senderId, data);
	}

};

}
