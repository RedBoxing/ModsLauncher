#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Nearby {

class EndpointDetails
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Nearby", "EndpointDetails"));
	}

	template <typename T = Il2CppString*> T& mEndpointId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& mName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& mServiceId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T get_EndpointId() {
		return ((T (*)(EndpointDetails*))(Il2CppBase() + 0x153B084))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(EndpointDetails*))(Il2CppBase() + 0x153B08C))(this);
	}
	template <typename T = Il2CppString*> T get_ServiceId() {
		return ((T (*)(EndpointDetails*))(Il2CppBase() + 0x153B094))(this);
	}

};

}
