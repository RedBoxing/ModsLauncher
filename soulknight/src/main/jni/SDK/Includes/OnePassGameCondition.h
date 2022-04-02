#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnePassGameCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnePassGameCondition"));
	}


	template <typename T = bool> T IsValid() {
		return ((T (*)(OnePassGameCondition*))(Il2CppBase() + 0x1DD0A60))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(OnePassGameCondition*))(Il2CppBase() + 0x1DD0B4C))(this);
	}

};

}
