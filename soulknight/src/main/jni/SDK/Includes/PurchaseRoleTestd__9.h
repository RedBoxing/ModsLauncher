#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PurchaseRoleTestd9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PurchaseRoleTest>d__9"));
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
		return ((T (*)(PurchaseRoleTestd9*))(Il2CppBase() + 0x455E1C8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(PurchaseRoleTestd9*))(Il2CppBase() + 0x455E2A4))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(PurchaseRoleTestd9*))(Il2CppBase() + 0x455E1E4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(PurchaseRoleTestd9*))(Il2CppBase() + 0x455E658))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(PurchaseRoleTestd9*))(Il2CppBase() + 0x455E660))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PurchaseRoleTestd9*))(Il2CppBase() + 0x455E6C8))(this);
	}

};

}
