#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Damagingd9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Damaging>d__9"));
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
	template <typename T = int32_t> T& mul_time5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& tmp_interval5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Damagingd9*))(Il2CppBase() + 0x427B5B0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Damagingd9*))(Il2CppBase() + 0x427B5B4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Damagingd9*))(Il2CppBase() + 0x427BC30))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Damagingd9*))(Il2CppBase() + 0x427BC38))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Damagingd9*))(Il2CppBase() + 0x427BCA0))(this);
	}

};

}
