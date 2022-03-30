#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MsgHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MsgHandle"));
	}


	template <typename T = void> T Invoke(Il2CppString* addr, uintptr_t msg) {
		return ((T (*)(MsgHandle*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x462825C))(this, addr, msg);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* addr, uintptr_t msg, uintptr_t callback, uintptr_t object) {
		return ((T (*)(MsgHandle*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4629264))(this, addr, msg, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(MsgHandle*, uintptr_t))(Il2CppBase() + 0x4629294))(this, result);
	}

};

}
