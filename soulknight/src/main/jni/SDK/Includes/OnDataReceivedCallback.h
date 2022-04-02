#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnDataReceivedCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnDataReceivedCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2, uintptr_t arg3, bool arg4, uintptr_t arg5) {
		return ((T (*)(OnDataReceivedCallback*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x3577C98))(this, arg0, arg1, arg2, arg3, arg4, arg5);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2, uintptr_t arg3, bool arg4, uintptr_t arg5, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnDataReceivedCallback*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35781C4))(this, arg0, arg1, arg2, arg3, arg4, arg5, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnDataReceivedCallback*, uintptr_t))(Il2CppBase() + 0x35782D4))(this, result);
	}

};

}
