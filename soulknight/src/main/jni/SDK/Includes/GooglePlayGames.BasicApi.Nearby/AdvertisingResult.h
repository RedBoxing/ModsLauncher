#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Nearby {

class AdvertisingResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Nearby", "AdvertisingResult"));
	}

	template <typename T = uintptr_t> T& mStatus() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& mLocalEndpointName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T get_Succeeded() {
		return ((T (*)(AdvertisingResult*))(Il2CppBase() + 0x153ABD0))(this);
	}
	template <typename T = uintptr_t> T get_Status() {
		return ((T (*)(AdvertisingResult*))(Il2CppBase() + 0x153ABD8))(this);
	}
	template <typename T = Il2CppString*> T get_LocalEndpointName() {
		return ((T (*)(AdvertisingResult*))(Il2CppBase() + 0x153ABE0))(this);
	}

};

}
