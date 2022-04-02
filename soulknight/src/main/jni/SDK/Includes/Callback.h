#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Callback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Callback"));
	}


	template <typename T = void> T Invoke(uintptr_t errCode) {
		return ((T (*)(Callback*, uintptr_t))(Il2CppBase() + 0x42F1FFC))(this, errCode);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t errCode, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Callback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42FCDCC))(this, errCode, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(Callback*, uintptr_t))(Il2CppBase() + 0x42FCE58))(this, result);
	}

};

}
