#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ISandboxSerializable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISandboxSerializable"));
	}


	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T GetSerializedData() {
		return ((T (*)(ISandboxSerializable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T SetSerializedData(Il2CppDictionary<Il2CppString*, Il2CppString*>* dic) {
		return ((T (*)(ISandboxSerializable*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x0))(this, dic);
	}

};

}
