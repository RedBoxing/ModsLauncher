#pragma once
#include "Il2Cpp/Il2Cpp.h"

class InitUnlockStateTestd9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitUnlockStateTest>d__9"));
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
	template <typename T = int32_t> T& unlock_index5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(InitUnlockStateTestd9*))(Il2CppBase() + 0x26E7F18))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(InitUnlockStateTestd9*))(Il2CppBase() + 0x26E7F1C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(InitUnlockStateTestd9*))(Il2CppBase() + 0x26E8164))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(InitUnlockStateTestd9*))(Il2CppBase() + 0x26E816C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(InitUnlockStateTestd9*))(Il2CppBase() + 0x26E81D4))(this);
	}

};

}
