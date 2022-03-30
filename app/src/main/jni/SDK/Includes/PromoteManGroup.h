#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PromoteManGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PromoteManGroup"));
	}


	template <typename T = void> T Awake() {
		return ((T (*)(PromoteManGroup*))(Il2CppBase() + 0x1BA0904))(this);
	}
	template <typename T = bool> T ShowSpecified() {
		return ((T (*)(PromoteManGroup*))(Il2CppBase() + 0x1BA0A28))(this);
	}
	template <typename T = bool> T ShowNotVisited() {
		return ((T (*)(PromoteManGroup*))(Il2CppBase() + 0x1BA0BCC))(this);
	}
	template <typename T = void> T ShowRandom() {
		return ((T (*)(PromoteManGroup*))(Il2CppBase() + 0x1BA0EF4))(this);
	}

};

}
