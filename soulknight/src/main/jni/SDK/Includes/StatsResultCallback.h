#pragma once
#include "Il2Cpp/Il2Cpp.h"

class StatsResultCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatsResultCallback"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnResult(uintptr_t arg_Result_1) {
		return ((T (*)(StatsResultCallback*, uintptr_t))(Il2CppBase() + 0x443F998))(this, arg_Result_1);
	}

};

}
