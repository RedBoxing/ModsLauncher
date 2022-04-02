#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ParseParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ParseParam"));
	}


	template <typename T = void> T Invoke(uintptr_t buf) {
		return ((T (*)(ParseParam*, uintptr_t))(Il2CppBase() + 0x1807744))(this, buf);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t buf, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ParseParam*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x18088BC))(this, buf, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ParseParam*, uintptr_t))(Il2CppBase() + 0x18088E0))(this, result);
	}

};

}
