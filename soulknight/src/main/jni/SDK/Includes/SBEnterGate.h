#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SBEnterGate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SBEnterGate"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(SBEnterGate*, uintptr_t))(Il2CppBase() + 0x1809CE8))(this, controller);
	}
	template <typename T = void> T EnterGame() {
		return ((T (*)(SBEnterGate*))(Il2CppBase() + 0x180A0C0))(this);
	}
	template <typename T = void> T OnItemTriggerSuccessb__1_0() {
		return ((T (*)(SBEnterGate*))(Il2CppBase() + 0x180A4AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(SBEnterGate*, uintptr_t))(Il2CppBase() + 0x180A4B0))(this, P0);
	}

};

}
