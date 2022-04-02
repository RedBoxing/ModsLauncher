#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GetHurtCheckd28
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetHurtCheck>d__28"));
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
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& error() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(GetHurtCheckd28*))(Il2CppBase() + 0x26F39B8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetHurtCheckd28*))(Il2CppBase() + 0x26F39BC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(GetHurtCheckd28*))(Il2CppBase() + 0x26F3A68))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(GetHurtCheckd28*))(Il2CppBase() + 0x26F3A70))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetHurtCheckd28*))(Il2CppBase() + 0x26F3AD8))(this);
	}

};

}
