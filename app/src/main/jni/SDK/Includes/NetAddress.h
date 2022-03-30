#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NetAddress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetAddress"));
	}


	template <typename T = Il2CppString*> static T IpAddressTransfer(Il2CppString* host) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4387F00))(0, host);
	}
	template <typename T = Il2CppString*> static T UrlTransfer(Il2CppString* url) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4387F60))(0, url);
	}

};

}
