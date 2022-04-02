#pragma once
#include "Il2Cpp/Il2Cpp.h"

class StateMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StateMachine"));
	}

	template <typename T = uintptr_t> T& currentState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& stateList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& OnStateChanged() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& transitions() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& transitionEvents() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T GetCurrentState() {
		return ((T (*)(StateMachine*))(Il2CppBase() + 0x429B7B0))(this);
	}
	template <typename T = bool> T IsCurrentState(uintptr_t checkState) {
		return ((T (*)(StateMachine*, uintptr_t))(Il2CppBase() + 0x429B810))(this, checkState);
	}
	template <typename T = void> T Initial(uintptr_t state) {
		return ((T (*)(StateMachine*, uintptr_t))(Il2CppBase() + 0x429B88C))(this, state);
	}
	template <typename T = void> T ChangeState(uintptr_t toState) {
		return ((T (*)(StateMachine*, uintptr_t))(Il2CppBase() + 0x429B904))(this, toState);
	}
	template <typename T = void> T AddTransition(uintptr_t from, uintptr_t to, uintptr_t condition) {
		return ((T (*)(StateMachine*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x429C2EC))(this, from, to, condition);
	}
	template <typename T = void> T AddTransitionEvent(uintptr_t from, uintptr_t to, uintptr_t action) {
		return ((T (*)(StateMachine*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x429C424))(this, from, to, action);
	}
	template <typename T = void> T Update() {
		return ((T (*)(StateMachine*))(Il2CppBase() + 0x429C554))(this);
	}
	template <typename T = void> T CheckTransition() {
		return ((T (*)(StateMachine*))(Il2CppBase() + 0x429C5CC))(this);
	}

};

}
