#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HideInfod36
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<HideInfo>d__36"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(HideInfod36*))(Il2CppBase() + 0x1DB2834))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(HideInfod36*))(Il2CppBase() + 0x1DB2838))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(HideInfod36*))(Il2CppBase() + 0x1DB2914))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(HideInfod36*))(Il2CppBase() + 0x1DB291C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(HideInfod36*))(Il2CppBase() + 0x1DB2984))(this);
	}

};

}
