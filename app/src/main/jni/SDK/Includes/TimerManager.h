#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TimerManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimerManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _timers() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _timersToAdd() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TimerManager*))(Il2CppBase() + 0x1E46230))(this);
	}
	template <typename T = void> T RegisterTimer(uintptr_t timer) {
		return ((T (*)(TimerManager*, uintptr_t))(Il2CppBase() + 0x1E45130))(this, timer);
	}
	template <typename T = void> T CancelAllTimers() {
		return ((T (*)(TimerManager*))(Il2CppBase() + 0x1E45624))(this);
	}
	template <typename T = void> T PauseAllTimers() {
		return ((T (*)(TimerManager*))(Il2CppBase() + 0x1E458AC))(this);
	}
	template <typename T = void> T ResumeAllTimers() {
		return ((T (*)(TimerManager*))(Il2CppBase() + 0x1E45AF4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TimerManager*))(Il2CppBase() + 0x1E462D8))(this);
	}
	template <typename T = void> T UpdateAllTimers() {
		return ((T (*)(TimerManager*))(Il2CppBase() + 0x1E46338))(this);
	}

};

}
