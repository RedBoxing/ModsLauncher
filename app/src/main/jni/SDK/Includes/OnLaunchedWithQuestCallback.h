#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnLaunchedWithQuestCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnLaunchedWithQuestCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(OnLaunchedWithQuestCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CD588))(this, arg0, arg1);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg0, uintptr_t arg1, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnLaunchedWithQuestCallback*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CD9F0))(this, arg0, arg1, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnLaunchedWithQuestCallback*, uintptr_t))(Il2CppBase() + 0x35CDA90))(this, result);
	}

};

}
