#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnLogCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnLogCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t arg0, Il2CppString* arg1, uintptr_t arg2) {
		return ((T (*)(OnLogCallback*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3574224))(this, arg0, arg1, arg2);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg0, Il2CppString* arg1, uintptr_t arg2, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnLogCallback*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35746C4))(this, arg0, arg1, arg2, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnLogCallback*, uintptr_t))(Il2CppBase() + 0x3574778))(this, result);
	}

};

}
