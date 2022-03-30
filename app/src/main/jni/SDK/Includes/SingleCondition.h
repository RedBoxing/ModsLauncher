#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SingleCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SingleCondition"));
	}


	template <typename T = bool> T IsValid() {
		return ((T (*)(SingleCondition*))(Il2CppBase() + 0x1831520))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(SingleCondition*))(Il2CppBase() + 0x1831608))(this);
	}

};

}
