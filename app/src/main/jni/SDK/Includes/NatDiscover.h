#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NatDiscover
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NatDiscover"));
	}

	template <typename T = uintptr_t> static T& m_svr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Reset(uintptr_t svr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43836C4))(0, svr);
	}
	template <typename T = void> static T JoinNet(Il2CppString* subip) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4383758))(0, subip);
	}
	template <typename T = void> static T ExitNet(Il2CppString* subip) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x438387C))(0, subip);
	}
	template <typename T = void> static T GetIps(void* ips) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x43839A0))(0, ips);
	}
	template <typename T = Il2CppString*> static T GetSubnet() {
		return ((T (*)(void *))(Il2CppBase() + 0x4383B58))(0);
	}

};

}
