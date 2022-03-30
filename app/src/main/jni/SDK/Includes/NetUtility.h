#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NetUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetUtility"));
	}


	template <typename T = Il2CppString*> static T GetMD5HashFromFile(Il2CppString* fileName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44605F8))(0, fileName);
	}
	template <typename T = bool> static T IsIPAddressValid(Il2CppString* ip) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44607F0))(0, ip);
	}

};

}
