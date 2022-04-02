#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AsyncWriteDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AsyncWriteDelegate"));
	}


	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count, bool isAsync) {
		return ((T (*)(AsyncWriteDelegate*, Il2CppArray<uintptr_t>*, int32_t, int32_t, bool))(Il2CppBase() + 0x463290C))(this, array, offset, count, isAsync);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count, bool isAsync, uintptr_t callback, uintptr_t object) {
		return ((T (*)(AsyncWriteDelegate*, Il2CppArray<uintptr_t>*, int32_t, int32_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x46320DC))(this, array, offset, count, isAsync, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(AsyncWriteDelegate*, uintptr_t))(Il2CppBase() + 0x4632470))(this, result);
	}

};

}
