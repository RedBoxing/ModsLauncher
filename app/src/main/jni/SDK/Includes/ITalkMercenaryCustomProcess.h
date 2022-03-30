#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ITalkMercenaryCustomProcess
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITalkMercenaryCustomProcess"));
	}


	template <typename T = bool> T CanHire(uintptr_t controller) {
		return ((T (*)(ITalkMercenaryCustomProcess*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}
	template <typename T = void> T ShowHireTalk() {
		return ((T (*)(ITalkMercenaryCustomProcess*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ControllerConsume(uintptr_t controller) {
		return ((T (*)(ITalkMercenaryCustomProcess*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}

};

}
