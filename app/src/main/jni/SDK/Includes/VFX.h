#pragma once
#include "Il2Cpp/Il2Cpp.h"

class VFX
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VFX"));
	}


	template <typename T = void> T OnStart(uintptr_t creator) {
		return ((T (*)(VFX*, uintptr_t))(Il2CppBase() + 0x0))(this, creator);
	}
	template <typename T = void> T OnFinish(uintptr_t creator) {
		return ((T (*)(VFX*, uintptr_t))(Il2CppBase() + 0x0))(this, creator);
	}

};

}
