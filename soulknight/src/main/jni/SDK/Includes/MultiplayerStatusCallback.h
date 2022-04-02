#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiplayerStatusCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiplayerStatusCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(MultiplayerStatusCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3587C60))(this, arg0, arg1);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg0, uintptr_t arg1, uintptr_t callback, uintptr_t object) {
		return ((T (*)(MultiplayerStatusCallback*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35880C8))(this, arg0, arg1, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(MultiplayerStatusCallback*, uintptr_t))(Il2CppBase() + 0x3588174))(this, result);
	}

};

}
