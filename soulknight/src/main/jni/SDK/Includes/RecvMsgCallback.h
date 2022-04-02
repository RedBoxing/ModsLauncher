#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RecvMsgCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecvMsgCallback"));
	}


	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* src, uint32_t srcIdx, uint32_t len) {
		return ((T (*)(RecvMsgCallback*, Il2CppArray<uintptr_t>*, uint32_t, uint32_t))(Il2CppBase() + 0x42B1E5C))(this, src, srcIdx, len);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* src, uint32_t srcIdx, uint32_t len, uintptr_t callback, uintptr_t object) {
		return ((T (*)(RecvMsgCallback*, Il2CppArray<uintptr_t>*, uint32_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B261C))(this, src, srcIdx, len, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(RecvMsgCallback*, uintptr_t))(Il2CppBase() + 0x42B26D0))(this, result);
	}

};

}
