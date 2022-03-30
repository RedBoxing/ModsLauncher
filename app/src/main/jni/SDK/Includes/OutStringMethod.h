#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OutStringMethod
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OutStringMethod"));
	}


	template <typename T = uintptr_t> T Invoke(Il2CppArray<uintptr_t>** out_bytes, uintptr_t out_size) {
		return ((T (*)(OutStringMethod*, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x2AFA258))(this, out_bytes, out_size);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>** out_bytes, uintptr_t out_size, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OutStringMethod*, Il2CppArray<uintptr_t>**, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AFA878))(this, out_bytes, out_size, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(OutStringMethod*, uintptr_t))(Il2CppBase() + 0x2AFA910))(this, result);
	}

};

}
