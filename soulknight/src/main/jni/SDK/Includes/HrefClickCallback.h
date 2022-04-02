#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HrefClickCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HrefClickCallback"));
	}


	template <typename T = void> T Invoke(Il2CppString* name) {
		return ((T (*)(HrefClickCallback*, Il2CppString*))(Il2CppBase() + 0x420E078))(this, name);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* name, uintptr_t callback, uintptr_t object) {
		return ((T (*)(HrefClickCallback*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x420E7AC))(this, name, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(HrefClickCallback*, uintptr_t))(Il2CppBase() + 0x420E7D0))(this, result);
	}

};

}
