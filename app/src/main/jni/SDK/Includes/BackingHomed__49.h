#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BackingHomed49
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<BackingHome>d__49"));
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
	template <typename T = uintptr_t> T& onBackHome() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(BackingHomed49*))(Il2CppBase() + 0x44285BC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(BackingHomed49*))(Il2CppBase() + 0x44285C0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(BackingHomed49*))(Il2CppBase() + 0x4428814))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(BackingHomed49*))(Il2CppBase() + 0x442881C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(BackingHomed49*))(Il2CppBase() + 0x4428884))(this);
	}

};

}
