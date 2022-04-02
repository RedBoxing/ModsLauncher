#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FadeInd7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FadeIn>d__7"));
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
	template <typename T = float> T& fadeInTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(FadeInd7*))(Il2CppBase() + 0x434A5A8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(FadeInd7*))(Il2CppBase() + 0x434A5AC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(FadeInd7*))(Il2CppBase() + 0x434A728))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(FadeInd7*))(Il2CppBase() + 0x434A730))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(FadeInd7*))(Il2CppBase() + 0x434A798))(this);
	}

};

}
