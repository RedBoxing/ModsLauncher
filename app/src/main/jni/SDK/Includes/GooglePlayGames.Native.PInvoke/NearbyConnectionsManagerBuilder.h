#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NearbyConnectionsManagerBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NearbyConnectionsManagerBuilder"));
	}


	template <typename T = uintptr_t> T SetOnInitializationFinished(void* callback) {
		return ((T (*)(NearbyConnectionsManagerBuilder*, void*))(Il2CppBase() + 0x2AF9CC4))(this, callback);
	}
	template <typename T = void> static T InternalOnInitializationFinishedCallback(uintptr_t status, uintptr_t userData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AF9A38))(0, status, userData);
	}
	template <typename T = uintptr_t> T SetLocalClientId(int64_t localClientId) {
		return ((T (*)(NearbyConnectionsManagerBuilder*, int64_t))(Il2CppBase() + 0x2AF9DEC))(this, localClientId);
	}
	template <typename T = uintptr_t> T SetDefaultLogLevel(uintptr_t minLevel) {
		return ((T (*)(NearbyConnectionsManagerBuilder*, uintptr_t))(Il2CppBase() + 0x2AF9E78))(this, minLevel);
	}
	template <typename T = uintptr_t> T Build(uintptr_t configuration) {
		return ((T (*)(NearbyConnectionsManagerBuilder*, uintptr_t))(Il2CppBase() + 0x2AF9F04))(this, configuration);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NearbyConnectionsManagerBuilder*, uintptr_t))(Il2CppBase() + 0x2AFA000))(this, selfPointer);
	}

};

}
