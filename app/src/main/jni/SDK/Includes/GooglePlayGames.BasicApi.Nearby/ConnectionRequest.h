#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Nearby {

class ConnectionRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Nearby", "ConnectionRequest"));
	}

	template <typename T = uintptr_t> T& mRemoteEndpoint() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mPayload() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_RemoteEndpoint() {
		return ((T (*)(ConnectionRequest*))(Il2CppBase() + 0x153AE84))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Payload() {
		return ((T (*)(ConnectionRequest*))(Il2CppBase() + 0x153AE8C))(this);
	}

};

}
