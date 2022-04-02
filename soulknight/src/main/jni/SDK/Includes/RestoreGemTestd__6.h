#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RestoreGemTestd6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RestoreGemTest>d__6"));
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
	template <typename T = Il2CppArray<uintptr_t>*> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& 7__wrap2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& product_coin5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& test_scene5__5() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(RestoreGemTestd6*))(Il2CppBase() + 0x455FF98))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(RestoreGemTestd6*))(Il2CppBase() + 0x455FF9C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(RestoreGemTestd6*))(Il2CppBase() + 0x456033C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(RestoreGemTestd6*))(Il2CppBase() + 0x4560344))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RestoreGemTestd6*))(Il2CppBase() + 0x45603AC))(this);
	}

};

}
