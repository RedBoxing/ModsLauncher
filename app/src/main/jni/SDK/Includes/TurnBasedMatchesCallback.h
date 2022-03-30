#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TurnBasedMatchesCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TurnBasedMatchesCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(TurnBasedMatchesCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3588BD8))(this, arg0, arg1);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg0, uintptr_t arg1, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TurnBasedMatchesCallback*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3589040))(this, arg0, arg1, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TurnBasedMatchesCallback*, uintptr_t))(Il2CppBase() + 0x35890E0))(this, result);
	}

};

}
