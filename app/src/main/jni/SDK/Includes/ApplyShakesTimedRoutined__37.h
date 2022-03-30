#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ApplyShakesTimedRoutined37
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ApplyShakesTimedRoutine>d__37"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& durations() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& shakes() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& rotations() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& ignoreTimeScale() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& count5__2() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ApplyShakesTimedRoutined37*))(Il2CppBase() + 0x2C2BBA8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ApplyShakesTimedRoutined37*))(Il2CppBase() + 0x2C2BBAC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ApplyShakesTimedRoutined37*))(Il2CppBase() + 0x2C2BE4C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ApplyShakesTimedRoutined37*))(Il2CppBase() + 0x2C2BE54))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ApplyShakesTimedRoutined37*))(Il2CppBase() + 0x2C2BEBC))(this);
	}

};

}
