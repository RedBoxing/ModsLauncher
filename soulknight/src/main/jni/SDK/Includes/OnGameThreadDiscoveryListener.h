#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnGameThreadDiscoveryListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnGameThreadDiscoveryListener"));
	}

	template <typename T = uintptr_t> T& mListener() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T OnEndpointFound(uintptr_t discoveredEndpoint) {
		return ((T (*)(OnGameThreadDiscoveryListener*, uintptr_t))(Il2CppBase() + 0x2824EC8))(this, discoveredEndpoint);
	}
	template <typename T = void> T OnEndpointLost(Il2CppString* lostEndpointId) {
		return ((T (*)(OnGameThreadDiscoveryListener*, Il2CppString*))(Il2CppBase() + 0x2825054))(this, lostEndpointId);
	}

};

}
