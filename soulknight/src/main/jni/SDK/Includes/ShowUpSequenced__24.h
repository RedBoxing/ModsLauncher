#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShowUpSequenced24
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowUpSequence>d__24"));
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
	template <typename T = float> T& horizontalSmoothness5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& verticalSmoothness5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ShowUpSequenced24*))(Il2CppBase() + 0x1B817BC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ShowUpSequenced24*))(Il2CppBase() + 0x1B817C0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ShowUpSequenced24*))(Il2CppBase() + 0x1B8218C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ShowUpSequenced24*))(Il2CppBase() + 0x1B82194))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ShowUpSequenced24*))(Il2CppBase() + 0x1B821FC))(this);
	}

};

}
