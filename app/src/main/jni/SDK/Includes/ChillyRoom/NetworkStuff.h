#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom {

class NetworkStuff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom", "NetworkStuff"));
	}

	template <typename T = uintptr_t> static T& defaultClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T LazyInit() {
		return ((T (*)(void *))(Il2CppBase() + 0x187DF04))(0);
	}
	template <typename T = bool> static T IsWifiConnected() {
		return ((T (*)(void *))(Il2CppBase() + 0x187DFC8))(0);
	}
	template <typename T = Il2CppString*> static T GetSubnet() {
		return ((T (*)(void *))(Il2CppBase() + 0x187E098))(0);
	}
	template <typename T = Il2CppString*> static T GetIPAddress() {
		return ((T (*)(void *))(Il2CppBase() + 0x187E168))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetSubnetAsInts() {
		return ((T (*)(void *))(Il2CppBase() + 0x187E238))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetIPAddressAsInts() {
		return ((T (*)(void *))(Il2CppBase() + 0x187E4E0))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T AddrStrToInts(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x187E294))(0, str);
	}

};

}
