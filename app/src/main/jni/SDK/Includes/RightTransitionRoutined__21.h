#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RightTransitionRoutined21
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RightTransitionRoutine>d__21"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& turnOffBoundaryAfterwards() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& initialRightBoundary5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& t5__3() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(RightTransitionRoutined21*))(Il2CppBase() + 0x207C668))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(RightTransitionRoutined21*))(Il2CppBase() + 0x207C66C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(RightTransitionRoutined21*))(Il2CppBase() + 0x207C98C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(RightTransitionRoutined21*))(Il2CppBase() + 0x207C994))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RightTransitionRoutined21*))(Il2CppBase() + 0x207C9FC))(this);
	}

};

}
