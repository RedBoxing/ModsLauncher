#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HrefPressCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HrefPressCallback"));
	}


	template <typename T = void> T Invoke(Il2CppString* name, bool down) {
		return ((T (*)(HrefPressCallback*, Il2CppString*, bool))(Il2CppBase() + 0x420E7DC))(this, name, down);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* name, bool down, uintptr_t callback, uintptr_t object) {
		return ((T (*)(HrefPressCallback*, Il2CppString*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x420EF5C))(this, name, down, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(HrefPressCallback*, uintptr_t))(Il2CppBase() + 0x420EFFC))(this, result);
	}

};

}
