#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TweenToRoutined9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<TweenToRoutine>d__9"));
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
	template <typename T = float> T& targetAmount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& initialAmount5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& t5__3() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(TweenToRoutined9*))(Il2CppBase() + 0x2C1F184))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(TweenToRoutined9*))(Il2CppBase() + 0x2C1F188))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(TweenToRoutined9*))(Il2CppBase() + 0x2C1F280))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(TweenToRoutined9*))(Il2CppBase() + 0x2C1F288))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(TweenToRoutined9*))(Il2CppBase() + 0x2C1F2F0))(this);
	}

};

}
