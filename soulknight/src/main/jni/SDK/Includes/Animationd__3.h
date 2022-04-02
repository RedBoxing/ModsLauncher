#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Animationd3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Animation>d__3"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& animeTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& percentageHandler() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& startTime5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Animationd3*))(Il2CppBase() + 0x456AF94))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Animationd3*))(Il2CppBase() + 0x456AF98))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Animationd3*))(Il2CppBase() + 0x456B084))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Animationd3*))(Il2CppBase() + 0x456B08C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Animationd3*))(Il2CppBase() + 0x456B0F4))(this);
	}

};

}
