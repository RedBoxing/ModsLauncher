#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Waitd44
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Wait>d__44"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Waitd44*))(Il2CppBase() + 0x418556C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Waitd44*))(Il2CppBase() + 0x4185570))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Waitd44*))(Il2CppBase() + 0x4185600))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Waitd44*))(Il2CppBase() + 0x4185608))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Waitd44*))(Il2CppBase() + 0x4185670))(this);
	}

};

}
