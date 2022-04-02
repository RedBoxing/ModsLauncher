#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTUpdateVipLevelDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTUpdateVipLevelDelegate"));
	}


	template <typename T = void> T Invoke(bool isSuccess, uintptr_t user, uintptr_t error) {
		return ((T (*)(KTUpdateVipLevelDelegate*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A995C))(this, isSuccess, user, error);
	}
	template <typename T = uintptr_t> T BeginInvoke(bool isSuccess, uintptr_t user, uintptr_t error, uintptr_t callback, uintptr_t object) {
		return ((T (*)(KTUpdateVipLevelDelegate*, bool, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x21AA070))(this, isSuccess, user, error, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(KTUpdateVipLevelDelegate*, uintptr_t))(Il2CppBase() + 0x21AA114))(this, result);
	}

};

}
