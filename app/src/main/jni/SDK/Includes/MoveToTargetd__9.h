#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MoveToTargetd9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<MoveToTarget>d__9"));
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
	template <typename T = float> T& dt5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& time5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& cost_time5__4() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(MoveToTargetd9*))(Il2CppBase() + 0x1BAFC40))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(MoveToTargetd9*))(Il2CppBase() + 0x1BAFC44))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(MoveToTargetd9*))(Il2CppBase() + 0x1BAFFA8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(MoveToTargetd9*))(Il2CppBase() + 0x1BAFFB0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(MoveToTargetd9*))(Il2CppBase() + 0x1BB0018))(this);
	}

};

}
