#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelegateOnChanged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelegateOnChanged"));
	}


	template <typename T = void> T Invoke(uintptr_t from, uintptr_t to) {
		return ((T (*)(DelegateOnChanged*, uintptr_t, uintptr_t))(Il2CppBase() + 0x429BB6C))(this, from, to);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t from, uintptr_t to, uintptr_t callback, uintptr_t object) {
		return ((T (*)(DelegateOnChanged*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x429CC14))(this, from, to, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(DelegateOnChanged*, uintptr_t))(Il2CppBase() + 0x429CC44))(this, result);
	}

};

}
