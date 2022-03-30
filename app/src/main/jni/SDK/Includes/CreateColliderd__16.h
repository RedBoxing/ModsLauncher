#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateColliderd16
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateCollider>d__16"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& go() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateColliderd16*))(Il2CppBase() + 0x2220E04))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateColliderd16*))(Il2CppBase() + 0x2220E08))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateColliderd16*))(Il2CppBase() + 0x2220FB4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateColliderd16*))(Il2CppBase() + 0x2220FBC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateColliderd16*))(Il2CppBase() + 0x2221024))(this);
	}

};

}
