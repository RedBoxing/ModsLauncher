#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnMessageReceivedCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnMessageReceivedCallback"));
	}


	template <typename T = void> T Invoke(int64_t arg0, Il2CppString* arg1, uintptr_t arg2, uintptr_t arg3, bool arg4, uintptr_t arg5) {
		return ((T (*)(OnMessageReceivedCallback*, int64_t, Il2CppString*, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x35D847C))(this, arg0, arg1, arg2, arg3, arg4, arg5);
	}
	template <typename T = uintptr_t> T BeginInvoke(int64_t arg0, Il2CppString* arg1, uintptr_t arg2, uintptr_t arg3, bool arg4, uintptr_t arg5, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnMessageReceivedCallback*, int64_t, Il2CppString*, uintptr_t, uintptr_t, bool, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D89A8))(this, arg0, arg1, arg2, arg3, arg4, arg5, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnMessageReceivedCallback*, uintptr_t))(Il2CppBase() + 0x35D8AB8))(this, result);
	}

};

}
