#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Nearby {

class IMessageListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Nearby", "IMessageListener"));
	}


	template <typename T = void> T OnMessageReceived(Il2CppString* remoteEndpointId, Il2CppArray<uintptr_t>* data, bool isReliableMessage) {
		return ((T (*)(IMessageListener*, Il2CppString*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(this, remoteEndpointId, data, isReliableMessage);
	}
	template <typename T = void> T OnRemoteEndpointDisconnected(Il2CppString* remoteEndpointId) {
		return ((T (*)(IMessageListener*, Il2CppString*))(Il2CppBase() + 0x0))(this, remoteEndpointId);
	}

};

}
