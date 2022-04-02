#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PurchaseGemTestd8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PurchaseGemTest>d__8"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& coin_entries() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& 7__wrap2() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(PurchaseGemTestd8*))(Il2CppBase() + 0x455D9C8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(PurchaseGemTestd8*))(Il2CppBase() + 0x455D9CC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(PurchaseGemTestd8*))(Il2CppBase() + 0x455DBF0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(PurchaseGemTestd8*))(Il2CppBase() + 0x455DBF8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PurchaseGemTestd8*))(Il2CppBase() + 0x455DC60))(this);
	}

};

}
