#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PurchasePlantpotTestd11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PurchasePlantpotTest>d__11"));
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
	template <typename T = void*> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(PurchasePlantpotTestd11*))(Il2CppBase() + 0x455DC68))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(PurchasePlantpotTestd11*))(Il2CppBase() + 0x455DD44))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(PurchasePlantpotTestd11*))(Il2CppBase() + 0x455DC84))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(PurchasePlantpotTestd11*))(Il2CppBase() + 0x455E150))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(PurchasePlantpotTestd11*))(Il2CppBase() + 0x455E158))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PurchasePlantpotTestd11*))(Il2CppBase() + 0x455E1C0))(this);
	}

};

}
