#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SearchingTextingd61
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SearchingTexting>d__61"));
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
	template <typename T = int32_t> T& dotLength5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& wait5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(SearchingTextingd61*))(Il2CppBase() + 0x44B0218))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SearchingTextingd61*))(Il2CppBase() + 0x44B021C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(SearchingTextingd61*))(Il2CppBase() + 0x44B0464))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(SearchingTextingd61*))(Il2CppBase() + 0x44B046C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SearchingTextingd61*))(Il2CppBase() + 0x44B04D4))(this);
	}

};

}
