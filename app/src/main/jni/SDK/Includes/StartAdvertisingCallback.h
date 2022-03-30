#pragma once
#include "Il2Cpp/Il2Cpp.h"

class StartAdvertisingCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartAdvertisingCallback"));
	}


	template <typename T = void> T Invoke(int64_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(StartAdvertisingCallback*, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35DB050))(this, arg0, arg1, arg2);
	}
	template <typename T = uintptr_t> T BeginInvoke(int64_t arg0, uintptr_t arg1, uintptr_t arg2, uintptr_t callback, uintptr_t object) {
		return ((T (*)(StartAdvertisingCallback*, int64_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35DB4F0))(this, arg0, arg1, arg2, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(StartAdvertisingCallback*, uintptr_t))(Il2CppBase() + 0x35DB5B0))(this, result);
	}

};

}
