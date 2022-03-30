#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Nearby {

class NearbyConnectionConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Nearby", "NearbyConnectionConfiguration"));
	}

	template <typename T = int32_t> static T& MaxUnreliableMessagePayloadLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxReliableMessagePayloadLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& mInitializationCallback() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& mLocalClientId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int64_t> T get_LocalClientId() {
		return ((T (*)(NearbyConnectionConfiguration*))(Il2CppBase() + 0x153B148))(this);
	}
	template <typename T = void*> T get_InitializationCallback() {
		return ((T (*)(NearbyConnectionConfiguration*))(Il2CppBase() + 0x153B150))(this);
	}

};

}
