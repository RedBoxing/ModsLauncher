#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuyCoinTestd15
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<BuyCoinTest>d__15"));
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
	template <typename T = uintptr_t> T& 8__1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& coin_index5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(BuyCoinTestd15*))(Il2CppBase() + 0x4562D38))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(BuyCoinTestd15*))(Il2CppBase() + 0x4562D3C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(BuyCoinTestd15*))(Il2CppBase() + 0x4563104))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(BuyCoinTestd15*))(Il2CppBase() + 0x456310C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(BuyCoinTestd15*))(Il2CppBase() + 0x4563174))(this);
	}

};

}
