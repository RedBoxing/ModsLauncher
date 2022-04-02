#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiRemoteCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiRemoteCondition"));
	}


	template <typename T = bool> T IsValid() {
		return ((T (*)(MultiRemoteCondition*))(Il2CppBase() + 0x41F62F0))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(MultiRemoteCondition*))(Il2CppBase() + 0x41F6358))(this);
	}

};

}
