#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DestorySelfd21
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DestorySelf>d__21"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(DestorySelfd21*))(Il2CppBase() + 0x45D51E0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DestorySelfd21*))(Il2CppBase() + 0x45D51E4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DestorySelfd21*))(Il2CppBase() + 0x45D52D4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DestorySelfd21*))(Il2CppBase() + 0x45D52DC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DestorySelfd21*))(Il2CppBase() + 0x45D5344))(this);
	}

};

}
