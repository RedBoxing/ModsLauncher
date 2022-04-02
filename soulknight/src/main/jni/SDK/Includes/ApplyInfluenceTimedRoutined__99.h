#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ApplyInfluenceTimedRoutined99
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ApplyInfluenceTimedRoutine>d__99"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& influence() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ApplyInfluenceTimedRoutined99*))(Il2CppBase() + 0x2C1A330))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ApplyInfluenceTimedRoutined99*))(Il2CppBase() + 0x2C1A334))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ApplyInfluenceTimedRoutined99*))(Il2CppBase() + 0x2C1A400))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ApplyInfluenceTimedRoutined99*))(Il2CppBase() + 0x2C1A408))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ApplyInfluenceTimedRoutined99*))(Il2CppBase() + 0x2C1A470))(this);
	}

};

}
