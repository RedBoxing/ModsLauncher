#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BottomTransitionRoutined23
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<BottomTransitionRoutine>d__23"));
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
	template <typename T = float> T& initialBottomBoundary5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& t5__3() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(BottomTransitionRoutined23*))(Il2CppBase() + 0x207BDE8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(BottomTransitionRoutined23*))(Il2CppBase() + 0x207BDEC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(BottomTransitionRoutined23*))(Il2CppBase() + 0x207C254))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(BottomTransitionRoutined23*))(Il2CppBase() + 0x207C25C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(BottomTransitionRoutined23*))(Il2CppBase() + 0x207C2C4))(this);
	}

};

}
