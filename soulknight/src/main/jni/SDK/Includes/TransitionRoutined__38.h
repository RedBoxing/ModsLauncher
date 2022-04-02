#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TransitionRoutined38
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<TransitionRoutine>d__38"));
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
	template <typename T = float> T& startValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& material() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& endValue() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& easeType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& t5__2() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(TransitionRoutined38*))(Il2CppBase() + 0x2C2DA34))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(TransitionRoutined38*))(Il2CppBase() + 0x2C2DA38))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(TransitionRoutined38*))(Il2CppBase() + 0x2C2DD84))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(TransitionRoutined38*))(Il2CppBase() + 0x2C2DD8C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(TransitionRoutined38*))(Il2CppBase() + 0x2C2DDF4))(this);
	}

};

}
