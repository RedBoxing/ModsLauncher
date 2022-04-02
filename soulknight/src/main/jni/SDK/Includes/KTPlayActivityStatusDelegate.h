#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTPlayActivityStatusDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTPlayActivityStatusDelegate"));
	}


	template <typename T = void> T Invoke(bool hasActivityStatus) {
		return ((T (*)(KTPlayActivityStatusDelegate*, bool))(Il2CppBase() + 0x21B30E0))(this, hasActivityStatus);
	}
	template <typename T = uintptr_t> T BeginInvoke(bool hasActivityStatus, uintptr_t callback, uintptr_t object) {
		return ((T (*)(KTPlayActivityStatusDelegate*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B4F58))(this, hasActivityStatus, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(KTPlayActivityStatusDelegate*, uintptr_t))(Il2CppBase() + 0x21B4FE8))(this, result);
	}

};

}
