#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AntiNoCoinCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AntiNoCoinCondition"));
	}


	template <typename T = bool> T IsValid() {
		return ((T (*)(AntiNoCoinCondition*))(Il2CppBase() + 0x1A196F0))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(AntiNoCoinCondition*))(Il2CppBase() + 0x1A19760))(this);
	}

};

}
