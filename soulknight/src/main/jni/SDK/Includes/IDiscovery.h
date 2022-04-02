#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IDiscovery
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDiscovery"));
	}


	template <typename T = void> T OnValidHost(Il2CppString* addr, int32_t port, Il2CppString* msg) {
		return ((T (*)(IDiscovery*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, addr, port, msg);
	}

};

}
