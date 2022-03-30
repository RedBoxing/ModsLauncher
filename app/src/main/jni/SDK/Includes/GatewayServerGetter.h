#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GatewayServerGetter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GatewayServerGetter"));
	}


	template <typename T = bool> static T get_CanRenewGatewayServer() {
		return ((T (*)(void *))(Il2CppBase() + 0x4434088))(0);
	}
	template <typename T = Il2CppString*> static T get_GatewayAddress() {
		return ((T (*)(void *))(Il2CppBase() + 0x4434184))(0);
	}
	template <typename T = void> static T set_GatewayAddress(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4434220))(0, value);
	}
	template <typename T = void> static T FetchGatewayAddress(void* onFetch, bool forceRequest) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0x44342B4))(0, onFetch, forceRequest);
	}

};

}
