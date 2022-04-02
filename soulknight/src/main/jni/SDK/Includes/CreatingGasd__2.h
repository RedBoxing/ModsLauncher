#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreatingGasd2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreatingGas>d__2"));
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
	template <typename T = int32_t> T& gasCount5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& gasRange5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& i5__4() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreatingGasd2*))(Il2CppBase() + 0x4472AC8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreatingGasd2*))(Il2CppBase() + 0x4472ACC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreatingGasd2*))(Il2CppBase() + 0x4472DF0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreatingGasd2*))(Il2CppBase() + 0x4472DF8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreatingGasd2*))(Il2CppBase() + 0x4472E60))(this);
	}

};

}
