#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LogCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LogCallback"));
	}


	template <typename T = void> T Invoke(Il2CppString* line) {
		return ((T (*)(LogCallback*, Il2CppString*))(Il2CppBase() + 0x43CC880))(this, line);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* line, uintptr_t callback, uintptr_t object) {
		return ((T (*)(LogCallback*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x43CCFC4))(this, line, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(LogCallback*, uintptr_t))(Il2CppBase() + 0x43CCFE8))(this, result);
	}

};

}
