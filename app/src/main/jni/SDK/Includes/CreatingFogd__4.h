#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreatingFogd4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreatingFog>d__4"));
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
	template <typename T = float> T& minTime5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& maxTime5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreatingFogd4*))(Il2CppBase() + 0x1BF7040))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreatingFogd4*))(Il2CppBase() + 0x1BF7044))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreatingFogd4*))(Il2CppBase() + 0x1BF71B8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreatingFogd4*))(Il2CppBase() + 0x1BF71C0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreatingFogd4*))(Il2CppBase() + 0x1BF7228))(this);
	}

};

}
