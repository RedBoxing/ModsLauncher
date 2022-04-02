#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GetParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "_GetParam"));
	}


	template <typename T = uintptr_t> T Invoke(Il2CppString* param) {
		return ((T (*)(GetParam*, Il2CppString*))(Il2CppBase() + 0x45DB504))(this, param);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* param, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GetParam*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45E1A68))(this, param, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(GetParam*, uintptr_t))(Il2CppBase() + 0x45E1A8C))(this, result);
	}

};

}
