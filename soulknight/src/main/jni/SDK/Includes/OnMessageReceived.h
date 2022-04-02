#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnMessageReceived
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnMessageReceived"));
	}


	template <typename T = void> T Invoke(int64_t localClientId, Il2CppString* remoteEndpointId, Il2CppArray<uintptr_t>* data, bool isReliable) {
		return ((T (*)(OnMessageReceived*, int64_t, Il2CppString*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x2AF25F8))(this, localClientId, remoteEndpointId, data, isReliable);
	}
	template <typename T = uintptr_t> T BeginInvoke(int64_t localClientId, Il2CppString* remoteEndpointId, Il2CppArray<uintptr_t>* data, bool isReliable, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnMessageReceived*, int64_t, Il2CppString*, Il2CppArray<uintptr_t>*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AF2BEC))(this, localClientId, remoteEndpointId, data, isReliable, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnMessageReceived*, uintptr_t))(Il2CppBase() + 0x2AF2CB0))(this, result);
	}

};

}
