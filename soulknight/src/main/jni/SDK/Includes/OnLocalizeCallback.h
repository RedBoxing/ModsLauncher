#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnLocalizeCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnLocalizeCallback"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(OnLocalizeCallback*))(Il2CppBase() + 0x45E01E8))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnLocalizeCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45E1A28))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnLocalizeCallback*, uintptr_t))(Il2CppBase() + 0x45E1A5C))(this, result);
	}

};

}
