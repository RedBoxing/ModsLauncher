#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnParticipantStatusChangedCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnParticipantStatusChangedCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(OnParticipantStatusChangedCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3578DD8))(this, arg0, arg1, arg2);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnParticipantStatusChangedCallback*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3579278))(this, arg0, arg1, arg2, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnParticipantStatusChangedCallback*, uintptr_t))(Il2CppBase() + 0x3579330))(this, result);
	}

};

}
