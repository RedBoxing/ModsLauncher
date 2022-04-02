#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ConnectCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConnectCallback"));
	}


	template <typename T = void> T Invoke(int32_t errorCode, Il2CppString* error) {
		return ((T (*)(ConnectCallback*, int32_t, Il2CppString*))(Il2CppBase() + 0x427A768))(this, errorCode, error);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t errorCode, Il2CppString* error, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ConnectCallback*, int32_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x427ABD0))(this, errorCode, error, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ConnectCallback*, uintptr_t))(Il2CppBase() + 0x427AC68))(this, result);
	}

};

}
