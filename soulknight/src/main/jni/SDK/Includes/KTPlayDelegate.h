#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTPlayDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTPlayDelegate"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(KTPlayDelegate*))(Il2CppBase() + 0x21B2CE0))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(KTPlayDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B50F0))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(KTPlayDelegate*, uintptr_t))(Il2CppBase() + 0x21B5124))(this, result);
	}

};

}
