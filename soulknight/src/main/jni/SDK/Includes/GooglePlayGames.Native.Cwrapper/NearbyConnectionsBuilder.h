#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class NearbyConnectionsBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "NearbyConnectionsBuilder"));
	}


	template <typename T = void> static T NearbyConnections_Builder_SetOnInitializationFinished(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3573830))(0, self, callback, callback_arg);
	}
	template <typename T = uintptr_t> static T NearbyConnections_Builder_Construct() {
		return ((T (*)(void *))(Il2CppBase() + 0x35738EC))(0);
	}
	template <typename T = void> static T NearbyConnections_Builder_SetClientId(uintptr_t self, int64_t client_id) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x3573978))(0, self, client_id);
	}
	template <typename T = void> static T NearbyConnections_Builder_SetOnLog(uintptr_t self, uintptr_t callback, uintptr_t callback_arg, uintptr_t min_level) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3573A24))(0, self, callback, callback_arg, min_level);
	}
	template <typename T = void> static T NearbyConnections_Builder_SetDefaultOnLog(uintptr_t self, uintptr_t min_level) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3573AF0))(0, self, min_level);
	}
	template <typename T = uintptr_t> static T NearbyConnections_Builder_Create(uintptr_t self, uintptr_t platform) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3573B9C))(0, self, platform);
	}
	template <typename T = void> static T NearbyConnections_Builder_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3573C48))(0, self);
	}

};

}
