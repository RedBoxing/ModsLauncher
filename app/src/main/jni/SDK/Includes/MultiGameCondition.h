#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiGameCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiGameCondition"));
	}


	template <typename T = bool> T IsValid() {
		return ((T (*)(MultiGameCondition*))(Il2CppBase() + 0x41FB564))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(MultiGameCondition*))(Il2CppBase() + 0x41FB5CC))(this);
	}

};

}
