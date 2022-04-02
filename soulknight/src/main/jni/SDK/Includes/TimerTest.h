#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TimerTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimerTest"));
	}

	template <typename T = uintptr_t> T& timer1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TimerTest*))(Il2CppBase() + 0x1E466F8))(this);
	}
	template <typename T = void> T CancelTimer1() {
		return ((T (*)(TimerTest*))(Il2CppBase() + 0x1E46A54))(this);
	}
	template <typename T = void> T EventTest() {
		return ((T (*)(TimerTest*))(Il2CppBase() + 0x1E46AB4))(this);
	}
	template <typename T = void> T OnTriggerSuccess11111(uintptr_t b) {
		return ((T (*)(TimerTest*, uintptr_t))(Il2CppBase() + 0x1E46B10))(this, b);
	}
	template <typename T = void> T OnTriggerSuccess(uintptr_t evt) {
		return ((T (*)(TimerTest*, uintptr_t))(Il2CppBase() + 0x1E46B80))(this, evt);
	}
	template <typename T = void> T OnTriggerSuccess2(uintptr_t evt) {
		return ((T (*)(TimerTest*, uintptr_t))(Il2CppBase() + 0x1E46C84))(this, evt);
	}

};

}
