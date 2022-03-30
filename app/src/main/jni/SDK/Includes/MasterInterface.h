#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MasterInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MasterInterface"));
	}


	template <typename T = void> T AddDestroyCb(uintptr_t act) {
		return ((T (*)(MasterInterface*, uintptr_t))(Il2CppBase() + 0x0))(this, act);
	}
	template <typename T = void> T MasterDestroy() {
		return ((T (*)(MasterInterface*))(Il2CppBase() + 0x0))(this);
	}

};

}
