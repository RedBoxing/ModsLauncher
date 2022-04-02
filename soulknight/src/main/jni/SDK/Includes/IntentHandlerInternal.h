#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IntentHandlerInternal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntentHandlerInternal"));
	}


	template <typename T = void> T Invoke(uintptr_t intent, uintptr_t userData) {
		return ((T (*)(IntentHandlerInternal*, uintptr_t, uintptr_t))(Il2CppBase() + 0x283E804))(this, intent, userData);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t intent, uintptr_t userData, uintptr_t callback, uintptr_t object) {
		return ((T (*)(IntentHandlerInternal*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x283EC6C))(this, intent, userData, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(IntentHandlerInternal*, uintptr_t))(Il2CppBase() + 0x283ED0C))(this, result);
	}

};

}
