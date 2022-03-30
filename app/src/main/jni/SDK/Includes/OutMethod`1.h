#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OutMethod1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OutMethod`1"));
	}


	template <typename T = uintptr_t> T Invoke(Il2CppArray<uintptr_t>** out_bytes, uintptr_t out_size) {
		return ((T (*)(OutMethod1*, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x0))(this, out_bytes, out_size);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>** out_bytes, uintptr_t out_size, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OutMethod1*, Il2CppArray<uintptr_t>**, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, out_bytes, out_size, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(OutMethod1*, uintptr_t))(Il2CppBase() + 0x0))(this, result);
	}

};

}
