#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FillAnimed11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FillAnime>d__11"));
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
	template <typename T = float> T& toggleTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& maxAlpha() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& animeTime5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(FillAnimed11*))(Il2CppBase() + 0x434A950))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(FillAnimed11*))(Il2CppBase() + 0x434A954))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(FillAnimed11*))(Il2CppBase() + 0x434AAA4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(FillAnimed11*))(Il2CppBase() + 0x434AAAC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(FillAnimed11*))(Il2CppBase() + 0x434AB14))(this);
	}

};

}
