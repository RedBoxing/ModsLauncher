#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PharaohCustomProcess
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PharaohCustomProcess"));
	}

	template <typename T = uintptr_t> T& _talkMercenary() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PharaohCustomProcess*))(Il2CppBase() + 0x4391280))(this);
	}
	template <typename T = bool> T CanHire(uintptr_t controller) {
		return ((T (*)(PharaohCustomProcess*, uintptr_t))(Il2CppBase() + 0x4391318))(this, controller);
	}
	template <typename T = void> T ShowHireTalk() {
		return ((T (*)(PharaohCustomProcess*))(Il2CppBase() + 0x43913E0))(this);
	}
	template <typename T = void> T ControllerConsume(uintptr_t controller) {
		return ((T (*)(PharaohCustomProcess*, uintptr_t))(Il2CppBase() + 0x43915CC))(this, controller);
	}

};

}
