#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PriestSetParent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PriestSetParent"));
	}

	template <typename T = bool> T& shouldFollow() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Update() {
		return ((T (*)(PriestSetParent*))(Il2CppBase() + 0x43A5544))(this);
	}
	template <typename T = void> T Follow(bool shouldFollow) {
		return ((T (*)(PriestSetParent*, bool))(Il2CppBase() + 0x43A5660))(this, shouldFollow);
	}
	template <typename T = void> T SetParent() {
		return ((T (*)(PriestSetParent*))(Il2CppBase() + 0x43A56D8))(this);
	}

};

}
