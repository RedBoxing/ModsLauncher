#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ParseFunction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ParseFunction"));
	}


	template <typename T = bool> T Invoke(Il2CppString* input, uintptr_t* output) {
		return ((T (*)(ParseFunction*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x1A3B5A0))(this, input, output);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* input, uintptr_t* output, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ParseFunction*, Il2CppString*, uintptr_t*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A3BD38))(this, input, output, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t* output, uintptr_t result) {
		return ((T (*)(ParseFunction*, uintptr_t*, uintptr_t))(Il2CppBase() + 0x1A3BD6C))(this, output, result);
	}

};

}
