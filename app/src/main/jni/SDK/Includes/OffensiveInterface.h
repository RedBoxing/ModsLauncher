#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OffensiveInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OffensiveInterface"));
	}


	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(OffensiveInterface*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(OffensiveInterface*))(Il2CppBase() + 0x0))(this);
	}

};

}
