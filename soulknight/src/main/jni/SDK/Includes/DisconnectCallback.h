#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DisconnectCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DisconnectCallback"));
	}


	template <typename T = void> T Invoke(Il2CppString* ip) {
		return ((T (*)(DisconnectCallback*, Il2CppString*))(Il2CppBase() + 0x42EDAD4))(this, ip);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* ip, uintptr_t callback, uintptr_t object) {
		return ((T (*)(DisconnectCallback*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42EE208))(this, ip, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(DisconnectCallback*, uintptr_t))(Il2CppBase() + 0x42EE22C))(this, result);
	}

};

}
