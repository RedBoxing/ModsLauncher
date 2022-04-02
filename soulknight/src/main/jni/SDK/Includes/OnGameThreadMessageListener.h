#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnGameThreadMessageListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnGameThreadMessageListener"));
	}

	template <typename T = uintptr_t> T& mListener() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T OnMessageReceived(Il2CppString* remoteEndpointId, Il2CppArray<uintptr_t>* data, bool isReliableMessage) {
		return ((T (*)(OnGameThreadMessageListener*, Il2CppString*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x28253D0))(this, remoteEndpointId, data, isReliableMessage);
	}
	template <typename T = void> T OnRemoteEndpointDisconnected(Il2CppString* remoteEndpointId) {
		return ((T (*)(OnGameThreadMessageListener*, Il2CppString*))(Il2CppBase() + 0x2825548))(this, remoteEndpointId);
	}

};

}
